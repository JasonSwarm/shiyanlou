#include <iostream>
using namespace std;

int main(){
	double x = static_cast<double>(5)/6;
	double y = x;
	double z = y;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);
	cout<<x<<endl;
	cout<<y<<endl;
	cout<<z<<endl;
	return 0;
}
