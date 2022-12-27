#include<iostream>
using namespace std;

//Write the function printO() here
int printO(int x, int y){
	int i, k;
	if (x>0 && y>0){
		for (i=0; i<x; i++){
			for (k=0; k<y; k++){
				cout << "O";
			}
			cout << "\n";
		}
	}else{
		cout << "Invalid input";
	}
return 0;
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
