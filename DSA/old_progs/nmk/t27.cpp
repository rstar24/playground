#include <iostream>
using namespace std;

char &replace(int i); // return a reference
char s[80] = "Hello There";

int main()
{
    replace(5) = 'X'; // assign X to space after Hello
    cout << s;
    cout << "" <<endl;
    return 0;
}
char &replace(int i)
{
    return s[i];
}