#include <iostream>
using namespace std;

void segregateElements(int arr[], int n){
    int size = n;
    int *a = arr;
    for (int i = 0; i < size; i++){
        if(*(a+1) < 0){
            int temp = *(a+i);
            for(int j = i; j < n-1; j++){
                *(a+j) = *(a+j+1);
            }
            *(a+n-1) = temp;
            size--;
            i--;
        }
    }
}
int main(){
    int n = 8;
    int arr[] = {4, 3, -3, 3, 2, -1, 2, -9};
    segregateElements(arr, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }
    return 0;
}

