#include<bits/stdc++.h>
using namespace std;

void print(map<int,string> m)
{
    cout<<m.size()<<endl;
    for( auto pr : m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
int main()
{
    // vector<int> v={1,2,3,4,5};

    // for(int value : v)
    //     {
    //         // value++;
    //         cout<<value++<<" ";
    //     }
    // cout<<endl;
    // for(int value : v)
    //     {
    //         // value++;
    //         cout<<++value<<" ";
    //     }

    // vector<pair<int,int>> v_p = {{1,2},{2,3},{3,4}};
    // for(pair<int,int> &value : v_p){
    //     cout<<value.first<<" "<<value.second<<endl;
    // }


    map<int,string> m;
    m[1]="abc";
    m[5]="cdd";
    m[3]="acd";
    m[1]="abc";
    print(m);
    return 0;
}