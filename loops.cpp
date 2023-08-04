#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
#include <cstdlib>
#include <vector>
using namespace std;

int main()
{
    int a;
    int b;

    string arr[9] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};    
    vector<string> str;
    
    cin >> a >> b;
    while (a <= b)
    {
        if (a <= 9)
            str.push_back(arr[a - 1]);
        else
        {
            if (a % 2 == 0)
                str.push_back("even");
            else
                str.push_back("odd");    
        }
        a++;
    }
    for (int i = 0; i < str.size(); i++)
        cout << str[i] << endl;
    return 0;
}
