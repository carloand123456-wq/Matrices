#include <iostream>
using namespace std;
int main(){
	int M[100][100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i>j){
				cout<<"0";
			}
			else{
				cout<<"1";
			}
		}
		cout<<endl;
	}
	
	return 0;
}