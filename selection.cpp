#include <iostream.h>
#include <string.h>

void nhap(int a[], int &n){
	cout<<"\nNhap vao so phan tu mang: ";
	cin >> n;
	for(int i = 0; i < n; i++){
		cout<<"a["<<i<<"] = ";
		cin >> a[i];
	}
}
void xuat(int a[], int &n){
	for(int i = 0; i <n; i++){
		cout<<"a["<<i<<"] = "<<a[i]<<endl;
	}
}

void SelectionSort(int a[], int n){
	int min;
	for(int i = 0; i < n-1; i++){
		min = i;
		for(int j = i+1; j < n; j++){
			if(a[j] < a[min]){
				min = j;
			}
		}
		int temp = a[min];
		a[min] = a[i];
		a[i] = temp;
	}
	xuat(a, n);
}

int main(int argc, char *argv[])
{
	int n;
	int a[100];
	nhap(a, n);
	cout<<"\nSap xep SelectionSort: \n";
	insertionSort(a,n);
	return 0;
}