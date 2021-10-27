#include<iostream>
using namespace std;
int count = 0;
void Merge (int A[],int l,int mid,int h){
	int i=l,j=mid+1,k=l;
	int B[100];
	while(i<=mid && j<=h)
	{
	   if(count++,(A[i]<A[j]))B[k++] = A[i++];
	   else B[k++] = A[j++];
	}
	   for(;i<=mid;i++) B[k++] = A[i];
	   for(;j<=h;j++) B[k++] = A[j];
	   
	   for(int i=l;i<=h;i++) A[i] = B[i];

}

void MergeSort(int A[],int n)
{
	int p,i,l,mid,h;
	for(p=2;p<=n;p = (2*p)){
		for(i = 0;(i+p-1)<n;i = (i+p)){
			l = i;
			h = (i+p-1);
			mid =(l+h)/2;
			Merge(A,l,mid,h);
		}
	}
	if(p/2 < n) Merge(A,0,(p/2)-1,n-1);
}
int main(){
	int A[] = {9,20,6,10,14,8,60,11};
	MergeSort(A,8);
	for(int i = 0;i< 8;i++) cout << A[i] << endl;
	cout << "count = "<<count;
}
