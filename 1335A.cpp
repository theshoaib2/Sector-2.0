#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin>>arr[i];
        if (arr[i]== 1|| arr[i]==2)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<(arr[i]-1)/2<<endl;
        }
        
    }
    
}















// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     double n;
//     long long int X;
//     cin>>t;
//     while(t--){
//         X=0;
//         cin>>n;
//         X=ceil((n/2)-1);
//         cout<<X<<endl;
//     }
//     return 0;
// }







// // #include<stdio.h>
// // int main(){
// // long long int t ,X ;
// // scanf("%lld",&t);
// // if (t == 1 || t == 2)
// // {
// //     printf("0\n");
// // }
// // else
// // {
// // X = ((t-1)/2);
// // printf("%lld\n",X);
// // }
// //     return 0;
// // }



