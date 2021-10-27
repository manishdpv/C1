#include<iostream>
using namespace std;
int swaps= 0;
void swap (int &a,int &b){
	int temp = b;
	b = a;
	a = temp;
	::swaps++;
}
void SelectionSort(int A[],int n){
	int count = 0;
	for(int i = 0;i<n-1;i++){
		int k;
		for(int j= k = i; j<n;j++){
			if(count++,(A[j] < A[k]))k = j;
		}
		swap(A[i],A[k]);
	}
	cout<< "count = " << count << endl;
}
int main(){
	int A[] = {9,20,6,10,14,8,60,11};
	SelectionSort(A,8);
	for(int i = 0;i< 8;i++) cout << A[i] << endl;
    cout << "swaps " << swaps;
}
