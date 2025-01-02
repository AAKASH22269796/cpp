#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"enter length of side";
cin >> n;

for (int i = 0; i <n; i++)
{
   for(int j=0;j<n;j++){
    if(j==0||i==0||j==n-1||i==n-1){
    cout<<"* ";
    }
    else{
        cout<<"  ";
    }

   }
   cout<<endl;
}
}

/*

enter length of side6
* * * * * *
*         *
*         *
*         *
*         *
* * * * * *



*/