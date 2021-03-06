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

void insertionSort(int a[] , int n){
	for (int i = 1 ; i < n ; i++) {
		cout << "lap lan " << i << endl;
		int key = a[i];
		int j = i -1;
		
		while (j >= 0 && a[j] > key) {
			cout << "i=" << i<< ",j=" << j << ",key = " << key << endl;
			xuat(a,n);
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
		xuat(a,n);
	}
}
int main(int argc, char *argv[])
{
	int n;
	int a[100];
	nhap(a, n);
	cout<<"\nSap xep InsertionSort: \n";
	insertionSort(a,n);
	return 0;
}