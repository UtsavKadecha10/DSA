/*
 * * * *
 * * * *
 * * * *
 * * * *
 */
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){    //for rows
//         for(int j=1; j<=n; j++){    //for columns
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
 *
 * *
 * * *
 * * * *
 * * * * *
 */
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){ //for rows
//         for(int j=1; j<=i; j++){    //for columns
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9
*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){ //for rows
//         int value=i;
//         for(int j=1; j<=i; j++){    //for columns
//             cout<<value;
//             value=value+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){ //for rows
//         int value=i;
//         for(int j=1; j<=i; j++){    //for columns
//             cout<<value;
//             value=value-1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
I/P: C
O/P
A A A
B B B
C C C
*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     char n;
//     cin>>n;
//     for(char i='A'; i<=n; i++){    //for rows
//         for(char j='A'; j<=n; j++){    //for columns
//             cout<<i;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
for I/P: 3
O/P:
A A A
B B B
C C C
*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(char i=1; i<=n; i++){   //for rows
//         for(char j=1; j<=n; j++){    //for columns
//             char ch = 'A'+i-1;
//             cout<<ch;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
        *
      * *
    * * *
  * * * *
 */
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=n; i>=1; i--){ //for rows
//         for(int j=1; j<=i; j++){    //for column spaces
//             cout<<"  ";
//         }
//         for(int j=1; j<=n-i+1; j++){    //for stars
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// OR

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int space=n-i; space>=1; space--){
//             cout<<"  ";
//         }
//         for(int j=1; j<=i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
 * * * * *
 * * * *
 * * *
 * *
 *
 */
// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cin>>n;
//   for(int i=n; i>=1; i--){
//     for(int j=1; j<=i; j++){
//       cout<<"* ";
//     }
//     cout<<endl;
//   }
//   return 0;
// }



/*
* * * * *
  * * * *
    * * *
      * *
        *
*/
// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cin >> n;
//   for (int i=n; i>=1; i--){
//     for (int space=1; space<=n-i; space++){
//       cout<<"  ";
//     }
//     for(int j=1; j<=i; j++){
//       cout<<"* ";
//     }
//     cout<<endl;
//   }
//   return 0;
// }



/*
1 2 3 4
  2 3 4
    3 4
      4
*/
// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cin >> n;
//   for (int i=n; i>=1; i--){
//     for (int space=1; space<=n-i; space++){
//       cout<<"  ";
//     }
//     for(int j=1; j<=i; j++){
//       cout<<n-i+j<<" "; // important step
//     }
//     cout<<endl;
//   }
//   return 0;
// }



/*
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
*/
// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cin>>n;
//   for(int i=1; i<=n; i++){
//     for(int space=n-i; space>=1; space--){
//       cout<<"  ";
//     }
//     for(int j=1; j<=i; j++){
//       cout<<j<<" ";
//     }
//     for(int j=i-1; j>=1; j--){
//       cout<<j<<" ";
//     }
//     cout<<endl;
//   }
//   return 0;
// }



/*
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1
*/
// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cin>>n;
//   for(int i=n; i>=1; i--){
//     for(int j=1; j<=i; j++){
//       cout<<j<<" ";
//     }
//     for(int j=1; j<=n-i; j++){
//       cout<<"* ";
//     }
//     for(int j=1; j<=n-i; j++){
//       cout<<"* ";
//     }
//     for(int j=i; j>=1;j--){
//       cout<<j<<" ";
//     }
//     cout<<endl;
//   }
//   return 0;
// }



// /*
// * * * * *
// *       *
// *       *
// *       *
// * * * * *
// */
// #include<iostream>
// using namespace std;
// int main()
// {
//     int row ,col; 
//     cout<<"No. of Rows: ";
//     cin>>row;
//     cout<<"No. of Columns: ";
//     cin>>col;
//     for(int i=1; i<=row; i++){
//         for(int j=1; j<=col; j++){
//             if(i==1 || j==1){
//                 cout<<"* ";
//             }
//             else if(i==row || j==col){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }
