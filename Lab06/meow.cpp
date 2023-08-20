#include <iostream>
#include <regex>
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    vector<string> results;
    string s;
    regex pattern("^[mM]+[eE]+[oO]+[wW]+$");

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cin >> s;

        if (regex_search(s, pattern))
        {
            results.push_back("YES");
        }
        else
        {
            results.push_back("NO");
        }
    }

    for (string &result : results)
    {
        cout << result << endl;
    }

    return 0;
}
