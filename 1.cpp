#include <iostream>
using namespace std;
 
int main() {
    int i;
    cout<<"Day ky tu chu so"<<"\n"<< endl;
    for (i=48;i<=57;i++){
		cout << char(i) << '\t' << i << endl;
	}
	cout<<"\n"<<"Day ky tu in hoa"<<"\n"<< endl;
	for (i=65;i<=90;i++){
		cout << char(i) << '\t' << i << endl;
	}
	cout<<"\n"<<"Day ky tu in thuong"<<"\n"<< endl;
	for (i=97;i<=122;i++){
		cout << char(i) << '\t' << i << endl;
	}
    return 0;
}
