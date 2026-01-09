#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	for (int i = 1; i < N; i++){
		T arr_i = d[i];
		int k = i;
		for (int j = k-1; j >= 0; j--){
			if (arr_i > d[j]){
				T temp = d[k];
				d[k] = d[j];
				d[j] = temp;
				k -= 1;
			}
		}
		cout << "Pass " << i << ":";
		for (int i = 0; i < N; i++){
			cout << d[i] << " ";
		}	
		cout << endl;
	}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
