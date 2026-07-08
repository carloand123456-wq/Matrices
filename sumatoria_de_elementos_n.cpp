#include <iostream>
using namespace std;
int main(){
	int M[100][100];
	int n, s;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>M[i][j];
			s = s + M[i][j];
		}
	}
	cout<<"La sumatoria de la matriz es: "<<s;
	
	return 0;
}