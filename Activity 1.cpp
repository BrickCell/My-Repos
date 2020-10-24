#include<iostream>
using namespace std;

int main(){
	int arr[3],i,largest;

	cout<<"Enter Numbers:";
	for(i=0;i<3;i++){
		cin>>arr[i];
	}
	largest=arr[0];
	for(i=0;i<3;i++){
		if(arr[i]>largest){
			largest=arr[i];
		}
	}
	cout<<"Largest Number:"<< largest;
	return 0;
}
