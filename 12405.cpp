#include <iostream>
int c;
int main(){
	int t;
	std::cin>>t;
	while(t--){
		int n;
		std::cin>>n;
		std::string s;
		std::cin>>s;
		int mn=0;
		for(int i=0;i<n;i++)
				if(s[i]=='.')
				    mn++,
				    i+=2;
		printf("Case %d: %d\n",++c,mn);
	}
}