#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string re1(string s)
{
    std::reverse(s.begin(), s.end());
    return s;
}
string re2(string s)
{
    int length = s.length();
    for (int i = 0; i < length / 2; i++)
    {
        swap(s[i], s[length - i - 1]);
    }
    return s;
}
string re3(string s)
{
    int n = s.length();
    string t = "";
    for (int i = n - 1; i >= 0; i--)
    {
        t += s[i];
    }
    return t;
}

int main()
{
    string s = "aeio";
    cout << "By 1 Method..." << re1(s) << endl;
    cout << "By 2 Method..." << re2(s) << endl;
    cout << "By 3 Method..." << re3(s) << endl;

    return 0;
}