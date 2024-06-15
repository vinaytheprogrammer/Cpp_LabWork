#include <bits/stdc++.h>
using namespace std;
#define nn cout << endl;

void stringSorter(string *s, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> *(s+i);

        for (int j = 0; j < (*(s+i)).length(); j++)
        {
            if ((s[i][j]) >= 'A' && s[i][j] <= 'Z')
            {
                s[i][j] += 32;
            }
        }
    }
    int id;
    for (int i = 0; i < n - 1; i++)
    {
        id = i;
        for (int j = i + 1; j < n; j++)
        {
            if (*(s+j) < *(s+id))
                id = j;
        }
        if (id != i)
        {
            string temp = *(s+i);
            *(s+i) = *(s+id);
            *(s+id) = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << "\t" << *(s+i);
    }
    nn
}

int main()
{
    int n;
    cin >> n;
    string s[n];
    stringSorter(s,n);
    return 0;
}