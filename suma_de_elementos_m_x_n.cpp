#include <iostream>
using namespace std;
int main(){
	int M[100][100];
	int n, m, num, s;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>num;
			s = s + num;
		}
	}
	cout<<"La sumatoria de la matriz es: "<<s;
	
	return 0;
}