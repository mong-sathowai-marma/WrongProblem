#include <iostream>
using namespace std;
int main() 
{
    string s;
    cin>>s;
    int result = 0;
    for (int i = 0; i < s.size(); i++) 
    {
        int cV=0;//bortoman man
        if (s[i] == 'I') 
        {
            cV = 1;
        } 
        else if (s[i] == 'V') 
        {
            cV = 5;
        } 
        else if (s[i] == 'X')
        {
            cV = 10;
        } 
        else if (s[i] == 'L') 
        {
            cV = 50;
        } 
        else if (s[i] == 'C') 
        {
            cV = 100;
        } 
        else if (s[i] == 'D') 
        {
            cV = 500;
        } 
        else if (s[i] == 'M') 
        {
            cV = 1000;
        }
        if (i < s.size() - 1) //i shuru hoi 0 theke tai string er last sonkhya hbe size theke 1 kom
        {
            int nextValue = 0;
            int nV=0;//poroborti man
            if (s[i + 1] == 'I') 
            {
                nV = 1;
            } 
            else if (s[i + 1] == 'V') 
            {
                nV = 5;
            } 
            else if (s[i + 1] == 'X') 
            {
                nV = 10;
            } 
            else if (s[i + 1] == 'L') 
            {
                nV = 50;
            } 
            else if (s[i + 1] == 'C') 
            {
                nV = 100;
            } 
            else if (s[i + 1] == 'D') 
            {
                nV = 500;
            } 
            else if (s[i + 1] == 'M') 
            {
                nV = 1000;
            }
            if (cV < nV) 
            {
                result -= cV;
            }
            else
            {
                  result += cV;
            } 
        } 
        else 
        {
            result += cV;
        }
    }
    cout << result << endl;
    return 0;
}