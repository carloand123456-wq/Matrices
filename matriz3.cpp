#include <iostream>
using namespace std;
int main(){
	int M[100][100];
	int n, posx, posy, max, m, s;
	cin>>n>>m;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>M[i][j];
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=1;j<m;j++){
			max = M[0][0];
			if(M[i][j]>max){
				max= M[i][j];
				posy = j + 1;
				posx = i + 1;
			} 
		}
	}
	
	cout<<"\nEl elemento mayor de la matriz es "<<max<<" y se encuentra en la fila "<<posx<<" y columna "<<posy<<".";
	
	return 0;
}