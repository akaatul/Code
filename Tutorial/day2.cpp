// /////////          sum of digits of number ///////////////////////


// #include <iostream>
// using namespace std;

// int dgSum(int num){
//     int sum = 0;
//     while(num > 0){
//         int lastdg = num % 10;
//         num = num/10;
//         sum = sum + lastdg;

//     }

//     return sum;
// }

// int main(){
//     int num;
//     cin >> num;
//     cout << dgSum(num) << endl;
//     return 0;
// }





// _______________________________________________________________________________________________________________________________







// ////////                     nCr calculation //////////////////////////



// #include <iostream>
// using namespace std;

// int factorial(int num){
//     int fact = 1;
//     for(int i = 1; i <= num; i++) {
//         fact *= i;
//     }
//     return fact;
// }

// int main() {
//     int n, r;
//     cin >> n >> r;
//     int nfacto = factorial(n);
//     int nrfacto = factorial(n-r);
//     int rfacto = factorial(r);
//     cout << nfacto/(rfacto*nrfacto) << endl;
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main(){
//     int size , st = 0;
//     int arr[100];
//     cin >> size;
//     for(int i = 0; i < size; i++){
//         cin >> arr[i];
//     }

//     int end = size-1;

//     while(st < end){
//         int temp = arr[end];
//         arr[end] = arr[st];
//         arr[st] = temp;
//         end--;
//         st++;
//     }

//     for(int i = 0; i < size; i++){
//         cout << arr[i] << " ";
//     }



//     return 0;
// }




// #include <iostream>
// using namespace std;

// int main(){
//     int size = 5;
//     // cin >> size;
//     // for(int i = 0; i<size; i++){
//     //     cin >> arr[i];
//     // }
//     int arr[] = {1,2,3,3,4,5};
//     for(int i = 0; i < size; i++){
//         int count = 0;
//         for(int j = 0; j < size; j++){
//             if(arr[i] == arr[j]){
//                 count++;
//                 if(count == 2){
//                     cout << arr[j];
//                     return 0;
//                 }
//             }
//         }
//     }

//     return 0;
// }

