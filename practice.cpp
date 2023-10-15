#include<iostream>
using namespace std;

// void primeNo(int p, int q){ 
//     int n=2;
//     int flag=0;
//     while(n<p){
//         if(p%n==0 || q%2==0){
//             flag=1; //Not Prime
//             cout<<"None";
//             break;
            
//         }
//         n++;
//     }
//     if(flag==0){    //Prime
//         p=0;
//         n=2;
//         while(n<p){
//             if(p%n==q){
//                cout<<"None"; 
//                break; 
//             }
//             else{
//                 cout<<p;
//             }
//             n++;
//             p++;
//         }
//     }
// }
int smallestPrime(int p, int q, int arr_size, int* arr){
    int i=0;
    q=1;
    bool prime=true;
    while(p<10^10){
        while(i<arr_size){
            while(arr[i]<p){
                if(p%arr[i]==0 || q%2==0){
                    prime=false;    
                    cout<<"\nNone";
                    break;
                }
                else if(p%arr[i]==q && arr[i]!=q){
                    prime=true;
                    cout<<"\nSmallest Prime that leaves remainder "<<q<<" when divided by 3, 4 and 5 is: "<<p;
                }   
            }
            i++;
        }
        p++;
    }
    return p;
}
int smallestNo(int* arr, int arr_size){
    int i=0;
    int num;
    while(i<arr_size){
        if(arr[i]<arr[i+1]){
            num=arr[i];
        }
        else{
            num=arr[i+1];
        }
        i++;
    }
    return num;
}
int main(){
    int p;
    int arr[]={1,3,4,5};
    int arr_size= sizeof(arr)/sizeof(arr[0]);
    int q = smallestNo(arr, arr_size);
    cout<<"Smallest No. is: "<<q;
    // cout<<"Enter No.: ";
    // cin>>x;
    int small = smallestPrime(p, q, arr_size, arr);
    cout<<small;
    return 0;
}



