#include <iostream>
using namespace std;
int main(){
	int M[100][100];
	int n, s;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0; j<n;j++){
			cin>>M[i][j];	
		}
	}
	
	for(int i=0;i<n;i++){
		s = s + M[i][i];
	}
	
	cout<<"\nLa suma de elementos en la diagonal principal es: "<<s<<".";
	
	return 0;
}