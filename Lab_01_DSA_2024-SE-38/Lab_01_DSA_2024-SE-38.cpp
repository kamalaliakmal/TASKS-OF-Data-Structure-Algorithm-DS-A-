#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int arr[5];
	int sum=0,max;
	cout<<"Enter the 5 numbers : "<<endl;
	
	for(int i=0;i<5;i++){
		cout<<"Number "<<i+1<<" is :";
		cin>>arr[i];
	}	
	max=arr[0];
	
	for(int i=0;i<5;i++){
		sum=sum+arr[i];
		if (arr[i]>max){
			max=arr[i];
		}
	}
	cout<<"\nThe entered numbers are :";
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\nSum of numbers is : "<<sum<<endl;
	cout<<"Maximum numbers is : "<<max<<endl;
	
	return 0;
}
