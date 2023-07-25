#include <iostream>
using namespace std;

void addmat(int a[3][3],int b[3][3]){
    int c[3][3];
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0; i<3;++i){
        for(int j=0; j<3;++j){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int x[3][3]={{1,2,3},
                 {4,5,6},
                 {7,8,9}};
    
    int y[3][3]={{1,2,3},
                 {4,5,6},
                 {7,8,9}};
    cout<<""<<endl;
    cout<<"Ater addition"<<endl;
    addmat(x,y);
    return 0 ;
}