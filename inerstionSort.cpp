#include <iostream>
using namespace std;


void insertion(int arr[], int size){
	int boundary=1;
	while(boundary<size){
		if (arr[boundary]>arr[boundary-1]){
			boundary++;
		}
		else{
			int tempValue=arr[boundary];
			int tempIndex=boundary;
			while(tempValue<arr[tempIndex-1]){
				arr[tempIndex]=arr[tempIndex-1];
				tempIndex--;
			}
			arr[tempIndex]=tempValue;
			boundary++;
		}
		
		for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;	
	}
	
}

int main(){
	int array[]={7,16,2,24,3,11,15,3,3,9,21,1};
	insertion(array,12);

	
	return 0;
}
