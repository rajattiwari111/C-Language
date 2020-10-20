#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    string str;
    cin>>str;
   string str2(str);
   reverse(str2.begin(), str2.end());
     if(str == str2){
        cout<<"-1"<<endl;
     }
     else{
            sort(str.begin(), str.end());
        cout<<str<<endl;
     }
    }
return 0;
}
//Antialindrome of string
