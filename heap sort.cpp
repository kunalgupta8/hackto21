#include <iostream>
using namespace std;
void heapify(int arr[], int n, int i)
{
	int smallest = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2;

	if (l < n && arr[l] < arr[smallest])
		smallest = l;

	if (r < n && arr[r] < arr[smallest])
		smallest = r;


	if (smallest != i) {
		swap(arr[i], arr[smallest]);


		heapify(arr, n, smallest);
	}
}


void heapSort(int arr[], int n)
{

	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);


	for (int i = n - 1; i >= 0; i--) {

		swap(arr[0], arr[i]);


		heapify(arr, i, 0);
	}
}


void printArray(int arr[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	cout << "\n";
}


int main()
{    int i,b;
	int arr[100];
	cout<<"enter size of array";
	cin>>b;
	cout<<"enter element in the array";
	for(int i=0;i<b;i++)
    {
        cin>>arr[i];
    }
	 //= { 4, 6, 3, 2, 9 };
	int n = sizeof(arr) / sizeof(arr[i]);

	heapSort(arr,  n);

	cout << "Sorted array is \n";

	printArray(arr, n);
}
