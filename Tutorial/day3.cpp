// 🙌🙌🙌🙌binary search👌👌👌
// in binary search the array or list is already sorted

// #include <iostream>
// using namespace std;

// int findx(int arr[], int size, int key){
//     int st = 0, end = size-1;
//     while(st <= end){
//         int mid = (st + end)/2;
//         if(key > arr[mid]) st = mid+1;
//         else if(key == arr[mid]) return arr[mid];
//         else end = mid-1;
//     }

//     return -1;
// }

// int main(){
//     int size;
//     cin >> size;
//     int key;
//     cin >> key;
//     int arr[100];
//     for (int i = 0 ; i < size; i++) cin >> arr[i];
    
//     cout << findx(arr, size, key);

//     return 0;
// }





// 🙌🙌🙌#############    MERGE SORT ############👌👌👌




// #include <iostream>
// #include <vector>
// using namespace std;

// void merge(vector<int> &arr, int st, int mid, int end){
//     int i = st, j = mid+1;
//     vector<int> temp;
//     while( i <= mid && j <= end){
//         if(arr[i] < arr[j]){
//             temp.push_back(arr[i]);
//             i++;
//         }else{
//             temp.push_back(arr[j]);
//             j++;
//         }
//     }

//     while(i <= mid){
//         temp.push_back(arr[i]);
//         i++;
//     }

//     while(j <= end){
//         temp.push_back(arr[j]);
//         j++;
//     }

//     for(int i = 0; i < temp.size(); i++){
//         arr[st+i] = temp[i];
//     }
// }

// void mergesort(vector<int> &arr, int st, int end){
//     if(st<end){
//         int mid = st + (end-st)/2;
//         mergesort(arr, st, mid); //left
//         mergesort(arr, mid+1, end);
//         merge(arr, st, mid, end);
//     }

// }

// int main(){
//     vector<int> arr = {22,23,56,34,1,23,34,45,45,45,65};
//     mergesort(arr, 0, arr.size()-1);

//     for(int val : arr){
//         cout << val << " ";
//     }
//     return 0;
// }