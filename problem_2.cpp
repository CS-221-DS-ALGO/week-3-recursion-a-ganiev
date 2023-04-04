#include <bits/stdc++.h>

using namespace std;

vector<string> powerSet;

void power_set(string s, string subset, int index)
{
    int n = s.size();
    //complete the function
    //add your subsets to powerSet using PowerSet.push_back(..);
}

//do not modify below code
int main()
{
    string s;
    cin >> s;

    power_set(s, "", 0);

    sort(powerSet.begin(), powerSet.end());

    for(auto it : powerSet)
        cout << it << '\n';
    return 0;
}
