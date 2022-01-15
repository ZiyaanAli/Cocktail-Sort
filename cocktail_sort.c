#include <iostream>
#include <stdlib.h>
using namespace std;
#define n 100
void printArray(int arr[]){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
void fill_array(int arr[]){
    for(int i=0;i<n;i++){
        arr[i]=(rand()+1)%n;
    }
}
void Sort(int a[])
{
	bool swapped = true;
	int start = 0;
	int end = n - 1;

	while (swapped)
	{
		swapped = false;
		for (int i = start; i < end; ++i)
		{
			if (a[i] > a[i + 1]) {
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
				swapped = true;
			}
		}
		if (!swapped)
			break;
		swapped = false;
		--end;

		for (int i = end - 1; i >= start; --i)
		{
			if (a[i] > a[i + 1]) {
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
				swapped = true;
			}
		}
		++start;
	}
}
int main()
{   
    int *arr =new int[n];
    fill_array(arr);
    cout<<"Array Before Sort"<<endl;
    printArray(arr);
	Sort(arr);
    cout<<"Array After Sort"<<endl;
    printArray(arr);
	cout<<endl;
	return 0;
}
