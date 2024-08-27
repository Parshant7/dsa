#include<iostream>
using namespace std;

int main(){
    // for(int i=5;i>=1;i--){
    //     for(int space=1;space<=5-i;space++){
    //         cout<<" ";
    //     }
    //     for(int star=1;star<=(2*i)-1;star++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

//-----------------------------------------------------------
    
    // for(int i=1;i<=5;i++){

    //     for(int j=1;j<=i;j++){
    //         if((i+j)%2==0){
    //             cout<<"1 ";
    //         }else{
    //             cout<<"0 ";
    //         }
    //     }
    //     cout<<endl;
    // }

//-----------------------------------------------------------
    
    // for(int i=1;i<=5;i++){

    //     for(int j=1;j<=i;j++){
    //         cout<<j;
    //     }
    //     for(int space=1;space<=2*(5-i);space++){
    //         cout<<" ";
    //     }
    //     for(int k=i;k>=1;k--){
    //         cout<<k;
    //     }
    //     cout<<endl;
    // }


//-----------------------------------------------------------
    
    // for(int i=1;i<=5;i++){
    //     for(char j=65;j<=(64+(5-i));j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

//-----------------------------------------------------------
    
    // for(int i=0;i<=5;i++){
    //     for(char ch='F'-i; ch<='F'; ch++){
    //         cout<<ch;
    //     }
    //     cout<<endl;
    // }

//-----------------------------------------------------------
    
    // for(int i=1;i<=6;i++){
    //     for(int j=0;j<=6-i;j++){
    //         cout<<"*";
    //     }
    //     for(int space=0;space<2*(i-1);space++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<=6-i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // for(int i=6;i>=1;i--){
    //     for(int j=0;j<=6-i;j++){
    //         cout<<"*";
    //     }
    //     for(int space=0;space<2*(i-1);space++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<=6-i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

//-----------------------------------------------------------
 
    // for(int i=1;i<=6;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     for(int space=1;space<=2*(6-i);space++){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // for(int i=5;i>=1;i--){
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     for(int space=1;space<=2*(6-i);space++){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

//-----------------------------------------------------------

    // for(int i=1;i<=5;i++){
    //         cout<<"*";
    //     for(int j=0;j<=5-2;j++){
    //         if(i==1 || i==5){
    //             cout<<"*";
    //         }else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<"*";
    //     cout<<endl;
    // }

//-----------------------------------------------------------

    int n=6;

    // for(int i=1;i<=2*n-1;i++){
        
    //     //first=
    //     if(i<=n){
    //         int num = n+1;
    //         for(int j=1;j<=i;j++){
    //             num--;
    //             cout<<num<<" ";
    //         }
    //         int space = (2*n)-(2*i); //if i=1, 11   i=2, 9  i=3,  i=6, 0
    //         for(int j=1;j<=space;j++){
    //             cout<<num<<" ";
    //         }
    //         for(int j=1;j<i;j++){
    //             num++;
    //             cout<<num<<" ";
    //         }
    //         cout<<endl;
    //     }
    //     else{
    //         int num = n+1;
    //         for(int j=1;j<=2*n-i;j++){  //if i=7, 5   i=8, 4  i=3,  i=6, 0
    //             num--;
    //             cout<<num<<" ";
    //         }
    //         int space = 2*(i-n); //if i=7, 2   i=8, 4  i=9, 6      2*(i-n)
    //         for(int j=1;j<=space;j++){
    //             cout<<num<<" ";
    //         }
    //         for(int j=1;j<2*n-i;j++){
    //             num++;
    //             cout<<num<<" ";
    //         }
    //         cout<<endl;
    //     }
    // }

    for(int i=1; i<=2*n-1; i++){
        for(int j=1; j<=2*n-1; j++){
            int left = i;
            int top = j;
            int right = (2*n)-j; //i=1, j=11   1
            int bottom = (2*n)-i;

            cout<<n-min(min(left,right), min(top,bottom))<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// 6 * * * * * * * * * 
// 6 5 * * * * * * * * 
// 6 5 4 * * * * * * 5 
// 6 5 4 3 * * * * 4 5 
// 6 5 4 3 2 * * 3 4 5 
// 6 5 4 3 2 1 1 2 3 4 5 