//     👻👻👻👻 Quick Sort Algorithm 😉😉😉😉

#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int st, int end){
    int idx = st-1;
    for(int j = st; j < end; j++){
        if(arr[j] <= arr[end]){
            idx++;
            swap(arr[j], arr[idx]);
        }
    }

    idx++;
    swap(arr[end], arr[idx]);
    return idx;
}



void quicksort(vector<int> &arr, int st, int end){
    if(st < end){
    int pivitidx = partition(arr, st, end);

    quicksort(arr, st, pivitidx-1);
    quicksort(arr, pivitidx+1, end);
    }
}

int main(){
    vector<int> arr = {1,45,23,54,6,76,34,88};
    quicksort(arr, 0, arr.size()-1);
    for(int val : arr){
        cout << val << " ";
    }
    return 0;
}





