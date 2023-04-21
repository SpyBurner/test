#include <iostream>
#include <vector>
#include <string>
#define scii(a, b) scanf("%d%d", &a, &b)
#define sci(a) scanf("%d", &a)
#define fto(i, a, b) for (int i = a; i <= b; ++i)
#define vi vector<int>
#define ii pair<int, int>
#define ll long long
#define oo 1000000009
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define sz(a) (int)a.size()
#define EPS 0.000000001

#define maxN 1007
using namespace std;

int main()
{
    int lineNumber = 1;
    while (true)
    {
        string st;
        cin >> st;
        if (st == "END")
            return 0;

        char currChar = 'a';
        int lastCount = 0;
        int count = 0;
        bool is_even = true;

        fto(i, 0, st.length() - 1)
        {
            if (st[i] == '*')
            {
                // cout << count << endl;
                if (lastCount != 0 && lastCount != count)
                {
                    is_even = false;
                    break;
                }
                lastCount = count;
                count = 0;
            }
            else{
                count++;
            }
        }

        if (is_even)
            cout << lineNumber << " EVEN\n";
        else
            cout << lineNumber << " NOT EVEN\n";

        ++lineNumber;
    }

    return 0;
}