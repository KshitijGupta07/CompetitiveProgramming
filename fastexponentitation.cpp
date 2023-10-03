#include<iostream>
using namespace std;
int main(){
    //exponent nikalne ka better solution jiski time complexity O(log )wali hoti hai
    int a,b;
    cin>>a>>b;
    int ans=1;
    while(b>0){
        if(b%2==0){
            ans=ans*a;
            b=b/2;
        
    }
    
}
cout<<ans<<endl;
}