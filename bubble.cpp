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
	
void BubbleSort(int a[], int n){
	int i, j;
	for(i = 0; i < n; i++){
		for(j = n; j > i; j--){
			if (a[j] < a[j-1]){
				int temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}				
		}
	}
	xuat(a, n);
}


/*
void bubbleSort(int a[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++) {
       for (j = 0; j < n-i-1; j++) {
            if (a[j] > a[j+1]) {
  				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;           	
            }
       } 
   }       
} */

int main(int argc, char *argv[])
{
	int n;
	int a[100];
	nhap(a, n);
	cout<<"\nSap xep BubbleSort: \n";
	BubbleSort(a, n);
	return 0;
}