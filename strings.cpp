//strings
#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a;
    string b;
    cin>>a>>b;
    
    cout<<a.length()<<" "<<b.length()<<endl;
    cout<<a+b<<endl;
    swap( a[0], b[0]);
    cout<<a<<" "<<b<<endl;
    
    return 0;
}