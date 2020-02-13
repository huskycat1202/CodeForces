#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,a[100001]={},m=0,k,sum=0,count=0;
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> a[i];
			if(a[i]!=-1){
				sum+=a[i];
				count++;
			}
		}
		if(count==0){
			cout << "0 0" << "\n";
		}
		else{
			if(sum%count==0 || sum/count==0) k=sum/count;
			else k=sum/count-1;
			for(int i=0; i<n; i++){
				if(a[i]==-1) a[i]=k;
			}
			for(int i=0; i<n-1; i++){
				if(abs(a[i+1]-a[i])>m) m=abs(a[i+1]-a[i]);
			}
			cout << m << " " << k << "\n";
		}	
	}
}
