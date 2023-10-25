#include <iostream>
void solve(){

    int n;
    std::cin>>n;
    int a[n];
    for(int& x:a)std::cin>>x;
    int mx = 2;
    int amnt = a[0];
    for(int i=1;i<n-1;i++){
        if(amnt+a[i]<a[i+1])
            mx++,
            amnt+=a[i];
    }
    std::cout<<mx<<"\n";
}
int main(){
    int n;
    std::cin>>n;
    while(n--)solve();
}