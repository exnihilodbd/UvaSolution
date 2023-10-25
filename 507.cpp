#include <iostream>
#include<cmath>
int main()
{
    while(1)
    {
        int n;
        std::cin>>n;
        if(n==0)break;
        int i = 1234;
        int j = 98765/n;
        bool b = true;
        for(i;i<=j;i++)
        {
            int k = i*n;
            int sum = 0;
            int tmp = i;
            while(tmp){
                int m = tmp%10;
                sum += (m*(pow(10,(10-m))));
                tmp/=10;
            }
            tmp = k;
            while(tmp){
                int m = tmp%10;
                sum += (m*(pow(10,(10-m))));
                tmp/=10;
            }
            if(sum==1234567890){
                b = false;
                std::cout<<k<<" / ";
                if(i<10000)std::cout<<0;
                std::cout<<i<<" = "<<n<<"\n";

            }


        }
        if(b)std::cout<<"There are no solutions for "<<n<<".\n";

    }


}