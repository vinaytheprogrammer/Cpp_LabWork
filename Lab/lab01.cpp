#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,f;
    cin>>n;
    char a;
    int b=64;
    
    for(int i=1;i<=n;i++)
    {

        f=0;
        t=0;
        for(int j=i;j<n;j++)
            cout<<"  ";
        for(int j=0;j<(2*i-1);j++)
            {
                if(t<i && f!=1) //0<3 1<3 2<3 
                  ++t;//1 2  
                 else //
                 { t--; f=1;}
               // if(t>i)
                // t--;
                a=b+t;
                cout<<a<<" ";
            }        
        cout<<endl;

    }
    return 0;
}



// output
// 5
//         A
//       A B A
//     A B C B A
//   A B C D C B A
// A B C D E D C B A