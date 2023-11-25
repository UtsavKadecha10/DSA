// Total amount = 1330, How many 100 notes, 50 notes, 20 and 1 rupee notes are needed start from 100 following greedy approach!

#include<iostream>
using namespace std;

int main(){
    int n, hundred, fifty, twenty, one;
    cout<<"Enter Total Amount: ";
    cin>>n;
    while(n!=0){
        // if(n>=100){
        //     hundred=n/100;
        //     n=n%100; 
        //     cout<<"No. of 100 Rupees notes: "<<hundred<<endl;   
        // }
        // if(n<100 && n>=50){
        //     fifty=n/50;
        //     n=n%50;
        //     cout<<"No. of 50 Rupees notes: "<<fifty<<endl;
        // }
        // if(n<50 && n>=20){
        //     twenty=n/20;
        //     n=n%20;
        //     cout<<"No. of 20 Rupees notes: "<<twenty<<endl;
        // }
        // if(n<20 && n>=1){
        //     one=n/1;
        //     n=n%1;
        //     cout<<"No. of 1 Rupees notes: "<<one<<endl;
        // }
        switch(n){
            case 100:
                hundred=n/100;
                n=n%100; 
                cout<<"No. of 100 Rupees notes: "<<hundred<<endl;   
            case 50:
                fifty=n/50;
                n=n%50;
                cout<<"No. of 50 Rupees notes: "<<fifty<<endl;
            case 20:
                twenty=n/20;
                n=n%20;
                cout<<"No. of 20 Rupees notes: "<<twenty<<endl;
            case 1:
                one=n/1;
                n=n%1;
                cout<<"No. of 1 Rupees notes: "<<one<<endl;
        }
    }
    return 0;
}
