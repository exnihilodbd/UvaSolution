#include <iostream>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int x;
    cin>>x;
    while(x--){
        int y;
        cin>>y;
        int l = 0;
        int r = n-1;
        while(l<=r){
            int m = (l+r)/2;
            if(arr[m]>=y)r=m-1;
            else l = m+1;
        }
        if(r<0)cout<<'X';
        else cout<<arr[r];
        cout<<" ";
        l=0,r=n-1;
        while(l<=r){
            int m = (l+r)/2;
            if(arr[m]>y)r=m-1;
            else l =m+1;
        }
        if(l>n-1)cout<<'X';
        else
        cout<<arr[l];
        cout<<"\n";
    }
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
}