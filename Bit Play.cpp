#include <iostream>
using namespace std;
const int MOD = 1e9 + 7;
int main() {
	// your code goes here
	int tt;
	cin >> tt;
	while(tt--){
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    long long sum = 1;
	   // sum+=((a^b)==c);
	   // sum+=((a|b)==c);
	   // sum+=((a&b)==c);
	   // if(sum == 0){
	   //     cout << 0 << endl;
	   //     continue;
	   // }
	    
	    for(int i=2;i<n;i+=2){
	        int x = s[i-2] -'0';
	        int y = s[i-1] - '0';
	        int z = s[i] - '0';
	        int ans1 = 0;
	        if((x^y)==z)
	            ans1++;
	        if((x|y)==z)
	            ans1++;
	        if((x&y)==z)
	            ans1++;
	        sum = (sum * ans1)%MOD;
	    }
	    
	    cout << sum << endl;
	}
