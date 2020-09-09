#include <bits/stdc++.h>

using namespace std;

int main() {
    long int n,i;
    int x;
    string s;

    cin >> n;
    
    string ar[n];
    
    for( i = 0; i < n/2; i++)
    {
        cin >> x;
        cin >> s;
        ar[x] = ar[x] + "-" + " ";    
    }

    for(i = n/2; i < n; i++)
    {
        cin >> x; 
        cin >> s;
        ar[x] = ar[x] + s + " ";
        
    }
    
    for(i = 0; i < n; i++)
        cout << ar[i];

    return 0;
}