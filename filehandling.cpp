#include <iostream>
#include <fstream>
using namespace std;
main()
{
    int rno, fee;
    char name[50];
    cout << "Enter the Roll Number:";
    cin >> rno;

    cout << "\nEnter the Name:";
    cin >> name;

    cout << "\nEnter the Fee:";
    cin >> fee;

    ofstream fout("D:/exp.txt");
    fout << "This is a simulation "<<endl;
    fout << "We are all in a matrix" <<endl
        << "Now chose red pill or the blue one "<<endl;

    fout << rno << "\t" << name << "\t" << fee; // write data to the file student
    fout.close();
    ifstream fin("D:/exp.txt");
    fin >> rno >> name >> fee; // read data from the file student 
    fin.close();
    cout << endl
         << rno << "\t" << name << "\t" << fee;
    return 0;
}