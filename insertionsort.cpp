#include<iostream>
#include<stdlib.h>
using namespace std;

void insertionSort(int A[],int n){
	int count = 0;
	for(int i = 1;i<=n;i++){
		
		int j = i-1;
		int x = A[i];
		while((count++)&&(A[j]>x)&& (j> -1)){
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = x;
	}
	cout<< "count = "<< count << endl;
}
void rvereseArray(int arr[], int start, int end) 
{ 
    while (start < end) 
    { 
        int temp = arr[start];  
        arr[start] = arr[end]; 
        arr[end] = temp; 
        start++; 
        end--; 
    }  
} 

int main(){
	int n;
	cout <<"Enter the number of elements to be inserted"<< endl;
	cin >> n;
	cout << "Enter the numbers : ";
	int A[n];
	for(int i = 0;i<n;i++) cin >> A[i];
	
	insertionSort(A,n);
	cout << "Array in sorted order"<< endl;
	for(int i = 0;i<n;i++) cout << A[i] <<endl;
	
	//Q2:
	for(int i = 100;i<=1000; i = i + 100){
		int B[i];
		for(int j = 0;j<i;j++){
			B[i] = rand();
		}
	    cout << "Number of elements inserted "<< i<<endl;	
		insertionSort(B,i);
		cout <<"When sorted array is inserted(in ascending order): "<<endl;
		insertionSort(B,i);
		//for reverse sorted array
		
		cout <<"When sorted array is inserted(in descending order): "<<endl;
		rvereseArray(B,0,i);
		cout << B[2]<<" " << B[3] <<" "<<B[55]<<endl;
		insertionSort(B,i);
		
		}
		

}
	
