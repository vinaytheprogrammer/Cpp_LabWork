#include<bits/stdc++.h>
using namespace std;

void print(auto &v)
{
    for(auto value : v)
        cout<<value.first<<" "<<value.second<<endl;
    cout<<endl;
}
int main()
{


//first unique letter appear twicw
        map<char, int> m;
        string s;
        int f;
        cin>>s;
        for(int i=0; i<s.length(); i++){
            m[s[i]]++;
        }

    print(m);

        for(int i=0; i<s.length(); i++){
            if(m[s[i]]==2){
                f=i;
                break;
            }
        }
        cout<<s[f];

    
    return 0;
}      