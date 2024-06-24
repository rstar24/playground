#include <bits/stdc++.h>
using namespace std;
// SOvled the problem but 
// not able to optimize the test case input time

void who_is_winner(int x,vector<int> &a, vector<int> &b, string &c);

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
    vector<int> alice_wallet;
    vector<int> bob_wallet;
    string result;
    // vector<string> result;

    for (int i = 0; i < a; i++)
    {
        int temp1;
        int temp2;
        cin >> temp1 >> temp2;
        alice_wallet.push_back(temp1);
        bob_wallet.push_back(temp2);
    }
    // for (auto x : alice_wallet){
    //     cout << x <<endl;
    // }
    // for (auto x : bob_wallet){
    //     cout << x <<endl;
    // }

    who_is_winner(a,alice_wallet, bob_wallet, result);

    return 0;
}

void who_is_winner(int x ,vector<int> &a, vector<int> &b,string &c)
{

    for (int i = 0; i < x; i++)
    {

        while (!(does_alice_lose(a.data() + i, b.data() + i) || does_bob_lose(a.data() + i, b.data() + i)))
        {
            if ((*(a.data() + i) == *(b.data() + i) && (*(a.data() + i) == 1)) == 1)
            {
                c.append("Bob\n");
                break;
            }
            else if (*(a.data() + i) == *(b.data() + i))
            {
                c.append("Bob\n");
                break;
            }
            // Wrapped it up
            // if (a[i] >= 1 && b[i] == 0)
            // {
            //     // string s1("Alice");
            //     c.push_back("Alice");
            //     break;
            // }
            // else if (a[i] == 0 && b[i] >= 1)
            // {
            //     // string s2("Bob");
            //     c.push_back("Bob");
            //     break;
            // }
            alice_move(a.data() + i, b.data() + i);
            if (does_bob_lose(a.data() + i, b.data() + i))
            {
                c.append("Alice\n");
                break;
            }
            // else if (does_bob_lose(a.data() + i, b.data() + i))
            // {
            //     c.push_back("Alice");
            //     break;
            // }
            bob_move(a.data() + i, b.data() + i);
            if (does_alice_lose(a.data() + i, b.data() + i))
            {
                c.append("Bob\n");
                break;
            }
            // else if (does_bob_lose(a.data() + i, b.data() + i))
            // {
            //     c.push_back("Alice");
            //     break;
            // }
        }
    }

    // for (auto x : c)
    // {
    //     cout << x << endl;
    // }
    cout << c ;
}

void alice_move(int *a, int *b)
{
    // cout << " a = " << *a << endl;
    // cout << " b = " << *b << endl;
    if (*a < *b)
    {
        *a ^= *b;
        *b ^= *a;
        *a ^= *b;
    }
    // cout << " a = " << *a << endl;
    // cout << " b = " << *b << endl;
    *a = *a - 1;
    // cout << " a = " << *a << endl;
    // cout << " b = " << *b << endl;
    // return does_alice_lose(a, b);
    return;
}

void bob_move(int *a, int *b)
{
    // cout << " a = " << *a << endl;
    // cout << " b = " << *b << endl;
    if (*a > *b)
    {
        *a ^= *b;
        *b ^= *a;
        *a ^= *b;
    }
    // cout << " a = " << *a << endl;
    // cout << " b = " << *b << endl;
    *b = *b - 1;
    // cout << " a = " << *a << endl;
    // cout << " b = " << *b << endl;
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
