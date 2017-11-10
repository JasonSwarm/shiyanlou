#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ofstream out_put;
	out_put.open("dp.txt");
	if(out_put.fail()){
		cout<<"Fail to open the file"<<endl;
		exit(1);
	}
	out_put<<"Hello World!"<<endl;
	ifstream in_put;
	in_put.open("dp.txt");
	string s;
	in_put>>s;
	cout<<s<<endl;
	return 0;
}
