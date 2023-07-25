#include <iostream>
#include "name.h"
using namespace std;

class Players
{
private:
    string name;
    int score;

public:
    Players(string name, int score)
    {
        this->name = name;
        this->score = score;
    }

public:
    int getScore()
    {
        return score;
    }

    int operator+(Players &obj)
    {
        return this->score + obj.score;
    }
};

int main()
{
    Players p1{"Virat", 100};

    Players p2{"Hardik", 96};

    int total = p1 + p2;

    printDetails();
    cout << total << endl;
}