#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,c;
        cin>>m>>c;
        int ok[c][m]; // all possible states of money
        for(int i=0;i<c;i++){
            for(int j=0;j<m;j++)
                ok[i][j]=0;
        }
        int p[c][c+1]; // all product price
        for(int i=0;i<c;i++){
            cin>>p[i][0];
            for(int j=1;j<=p[i][0];j++)
                cin>>p[i][j];
        }
        for(int i=1;i<p[0][0];i++){
            if(m-p[0][i]>-1){
                ok[0][m-p[0][i]]=1; // check state of money after buying first every products.
            }
        }
        for(int i=1;i<c;i++){ // check all products.
            for(int j=0;j<m;j++){
                if(ok[i-1][j]){ 
                    for(int k=1;k<=p[i][0];k++){
                        if(j-p[i][k]>-1)
                            ok[i][j-p[i][k]]=1;
                    }
                }
            }
        }
        int tmp = m;
        for(int i=0;i<tmp;i++){ // find last item of product where money state is minimum,
            if(ok[c-1][i])break;
            m--;
        }
        if(m==0){
            cout<<"No Solution\n";
        }
        else{
            cout<<m<<"\n";
        }

    }
}