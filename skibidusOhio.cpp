#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        int temp = s.size();
        for (int i=0; i<s.size()-1; i++)
        {
            if (s[i]==s[i+1])
            {
                temp--;
            }
        }
        cout << temp << endl;
    }
    return 0;
}


