#include <bits/stdc++.h>
using namespace std;

struct Pair
{
    int max;
    int min;
};

struct Pair getMinMax(int arr[], int low, int high)
{
    struct Pair minmax, mml, mmr;
    int mid;

    if (low == high)
    {
        minmax.max = arr[low];
        minmax.min = arr[low];
        return minmax;
    }

    if (high = low + 1)
    {
        if (arr[low] > arr[high])
        {
            minmax.max = arr[low];
            minmax.min = arr[high];
        }
        else
        {
            minmax.max = arr[high];
            minmax.min = arr[low];
        }

        return minmax;
    }

    // Hmmm
    mid = (low + high) / 2;
    mml = getMinMax(arr, low, mid);
    mmr = getMinMax(arr, mid + 1, high);

    // Compacre minimums of two parts
    if (mml.min < mmr.min)
    {
        minmax.min = mml.min;
    }
    else
    {
        minmax.min = mmr.min;
    }
    // Compacre max of two parts
    if (mml.max > mmr.max)
    {
        minmax.max = mml.max;
    }
    else
    {
        minmax.max = mmr.max;
    }
    
    return minmax;
}

int main(int argc, char *argv[])
{
    int arr[] = {1923, 32, 223, 34593, 2342, 1000};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    struct Pair minmax = getMinMax(arr, 0, arr_size - 1);
    cout << "Minmum element is " << minmax.min << endl;
    cout << "Maximum element is " << minmax.max << endl;

    return 0;
}