#include <iostream.h>
#include <string.h>

using namespace std;

/*
void nhap(int a[], int &n){
	cout<<"\nNhap vao so phan tu mang: ";
	cin >> n;
	for(int i = 0; i < n; i++){
		cout<<"a["<<i<<"] = ";
		cin >> a[i];
	}
}*/
void xuat(int a[], int &n){
	for(int i = 0; i <n; i++){
		cout<<"a["<<i<<"] = "<<a[i]<<endl;
	}
}

void QuickSort(int a[], int left, int right) { 
	int i, j, x;
	x = a[(left + right) / 2];
	i = left; 
	j = right;
	
	do{
		while(a[i] < x) i++;
		while(a[j] > x) j--;
		if(i <= j){
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++; 
			j--;
		}
	}while(i <= j);
	
	if(left < j){
		QuickSort(a, left, j);		
	}
	if(i < right){
		QuickSort(a, i, right);		
	}
}

int main(int argc, char *argv[])
{
 	int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    QuickSort(arr, 0, n-1);
   	cout<<"\nSap xep QuickSort: \n";
    xuat(arr, n);
}