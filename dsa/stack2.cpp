#include <iostream>
using namespace std;

class stack{
	public:
	int s[100];
	int top=-1;
	void insert(int val){
		if(top==-1){
		s[0]=val;
		top++;
		}
		else if(top<99){
		s[top]=val;
		top++;
		}
	};
	void deletion(){
		if(top==-1){
		cout<<"Stack Underflow"<<endl;
		}
		else if(top<=99){
			s[top]=0;
			top--;
		}
	};
	void display(){
		for(int i=0;i<=top;i++){
			cout<<s[i]<<endl;
		}
	};
};



int main()
{
	int ch, vl;
	stack s1;
	cout<<"Operation to be performed"<<endl;
	cout<<"1.For Insertion"<<endl;
	cout<<"2.For Deletion"<<endl;
	cout<<"3.For Display"<<endl;
	cout<<"4.To exit "<<endl;
	do{
		cout<<"Enter Choice:"<<endl;
		cin>>ch;
		switch(ch){	
		case 1: {
			cout<<"Insert Value"<<endl;
			cin>>vl;
			s1.insert(vl);
		}
		case 2: {
			s1.deletion();
		}
		case 3: {
			s1.display();
		}
		case 4: {
			cout<<"bye"<<endl;
			break;
		}
		default:{
			cout<<"Try Again"<<endl;
		}
		}
	}while(ch!=4);

 	return 0;
}