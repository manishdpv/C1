#include<iostream>
using namespace std;
void swap (int &a,int &b){
	int temp = b;
	b = a;
	a = temp;
}
void BubbleSort(int A[],int n){
	int count = 0;
	for(int i = 0;i < n-1;i++){
		int flag;
		for(int j = 0;j < n-1-i;j++){
			flag = 0;
			if((A[j] > A[j+1]),count++) {

			swap (A[j],A[j+1]);
			flag = 1;}
		}
		if (flag == 0) break; 
	}
	cout<< "count = " << count << endl;
}


int main(){
	int A[] = {9,8,7,6,5,4,1};
	BubbleSort(A,7);
	for(int i = 0;i< 7;i++) cout << A[i] << endl;

}
