#include<iostream>
#include<algorithm>
using namespace std;
template<class T>
void sortArray(T arr[], int n){
    sort(arr, arr+n);
}
int main(){
    int num = 5;
    int arr1[num] = {10, 90, 1, 2, 3};
    double arr2[num] = {10.5, 90.3, 1.2, 2.4, 3.6};
    char arr3[num] = {'a', 'g', 'b', 'd', 'c'};
    cout<<"Before Sorting: ";
    for(int i=0; i<num; i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    sortArray(arr1, num);
    cout<<"After Sorting: ";
    for(int i=0; i<num; i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    return 0;
}
