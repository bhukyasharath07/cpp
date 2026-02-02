#include<iostream>
using namespace std;
void swapelement(int &a, int &b) {
	int temp=a;
	a=b;
	b=temp;}
	void selectionsort(int arr[], int n){
		for(int i=n-1; i>0; i--){
			int max=0;
			for(int j=1;j<=i;j++){
				if (arr[j]>arr[max]){
					max=j;
				}
			}
			swapelement(arr[i], arr[max]);
		}
	}
	  void printarray(int arr[], int n){
	  	for (int i=0; i<n; i++)
	  	cout<<arr[i]<<" ";
	  	cout<<endl;
	  }
	int main(){
		int arr[]={14,98,78,65,72,44};
		int n=sizeof(arr)/sizeof(arr[0]);
		cout<<"original array";
		printarray(arr,n);
		 selectionsort(arr, n);
		 cout<<"sorted array (ascending order):";
		 printarray(arr,n);
		 return 0;
	}

