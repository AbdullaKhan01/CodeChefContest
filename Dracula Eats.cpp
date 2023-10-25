#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tt;cin>>tt;
	while(tt--){
	    int n;cin>>n;
	    if(n==1){
	        cout << 0 << endl;
	        continue;
	    }
	    cout << ((n-2)/7) + 1 << endl;
	}
	return 0;
}
