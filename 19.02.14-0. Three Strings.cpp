#include<iostream>
#include<string>
using namespace std;
int main(){
	int t; cin >> t;
	string a,b,c;
	while(t--){
		cin >> a >> b >> c;
		int count=0;
		for(int i=0; i<c.length(); i++){
			if(c[i]==a[i] || c[i]==b[i]){
				count++;
			}
		}
		if(count==c.length()){
			cout << "YES" << "\n";
		}
		else cout << "NO" << "\n";
	}
}
