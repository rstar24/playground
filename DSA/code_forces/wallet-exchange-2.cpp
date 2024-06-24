#include <bits/stdc++.h>
using namespace std;

void who_is_winner(int x,int* &a, int* &b, string &c);

void alice_move(int *a, int *b);

void bob_move(int *a, int *b);

bool does_alice_lose(int *a, int *b);

bool does_bob_lose(int *a, int *b);

int main(int argc, char *argv[])
{
    // long a = 1;
    // long b = 1;
    // alice_move(&a, &b);
    // bob_move(&a, &b);

    // Read the input first
    int a;
    cin >> a;

    // Alice and bob wallet balances
    int alice_wallet[a];
    int bob_wallet[a];
    int result[a];
    // vector<string> result;

    for (int i = 0; i < a; i++)
    {
        int temp1;
        int temp2;
        // cin >> temp1 >> temp2;
        // scanf("%d %d",&temp1,&temp2);
        scanf("%d",&temp1);
        scanf("%d",&temp2);
        alice_wallet[i] = temp1;
        bob_wallet[i] = temp2;

    }
    for (auto x : result){
        if (x == 1){
            printf("Alice\n");
        }
        else {
            printf("Bob\n");
        }
    }

    // for (auto x : alice_wallet){
    //     cout << x <<endl;
    // }
    // for (auto x : bob_wallet){
    //     cout << x <<endl;
    // }

    // who_is_winner(a,alice_wallet, bob_wallet, result);

    return 0;
}

void who_is_winner(int x ,int* &a, int* &b,int* &c)
{

    for (int i = 0; i < x; i++)
    {

        while (!(does_alice_lose((a+i), (b+i)) || does_bob_lose((a+i), (b+i))))
        {
            if (((*(a+i) == *(b+i)) && ((*(a+i) == 1))) == 1)
            {
                c[i] = 1;
                break;
            }
            else if (*(a+i) == *(b+i))
            {
                c[i] =2;
                break;
            }
            alice_move((a+i), (b+i));
            if (does_bob_lose((a+i), (b+i)))
            {
                c[i] = 1;
                break;
            }
            bob_move((a+i), (b+i));
            if (does_alice_lose((a+i), (b+i)))
            {
                c[i] = 2;
                break;
            }
        }
    }

    // for (auto x : c)
    // {
    //     cout << x << endl;
    // }
    // cout << c ;
    // cout << c ;
}

void alice_move(int *a, int *b)
{
    cout << " Alice "<<endl;
    cout << " a = " << *a << endl;
    cout << " b = " << *b << endl;
    if (*a < *b)
    {
        *a ^= *b;
        *b ^= *a;
        *a ^= *b;
    }
    cout << " a = " << *a << endl;
    cout << " b = " << *b << endl;
    *a = *a - 1;
    cout << " a = " << *a << endl;
    cout << " b = " << *b << endl;
    // return does_alice_lose(a, b);
    return;
}

void bob_move(int *a, int *b)
{
    cout << " Bob "<<endl;
    cout << " a = " << *a << endl;
    cout << " b = " << *b << endl;
    if (*a > *b)
    {
        *a ^= *b;
        *b ^= *a;
        *a ^= *b;
    }
    cout << " a = " << *a << endl;
    cout << " b = " << *b << endl;
    *b = *b - 1;
    cout << " a = " << *a << endl;
    cout << " b = " << *b << endl;
    // return does _bob_lose(a, b);
    return;
}

bool does_alice_lose(int *a, int *b)
{
    if (*a == 0 && *b == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool does_bob_lose(int *a, int *b)
{
    if (*a == 0 && *b == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
