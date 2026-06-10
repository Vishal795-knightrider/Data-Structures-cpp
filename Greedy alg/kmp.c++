#include <bits/stdc++.h>
using namespace std;

// KMP (Knuth–Morris–Pratt) string matching
// Build LPS (Longest Prefix Suffix) array for the pattern,
// then scan the text in O(n + m).

static vector<int> buildLPS(const string &pat)
{
    int m = (int)pat.size();
    vector<int> lps(m, 0);

    int len = 0; // length of the previous longest prefix suffix
    for (int i = 1; i < m;)
    {
        if (pat[i] == pat[len])
        {
            lps[i] = ++len;
            ++i;
        }
        else
        {
            if (len != 0)
            {
                len = lps[len - 1];
            }
            else
            {
                lps[i] = 0;
                ++i;
            }
        }
    }
    return lps;
}

static vector<int> kmpSearchAll(const string &text, const string &pat)
{
    vector<int> ans;
    if (pat.empty())
        return ans;

    int n = (int)text.size();
    int m = (int)pat.size();
    vector<int> lps = buildLPS(pat);

    int i = 0; // index for text
    int j = 0; // index for pattern

    while (i < n)
    {
        if (text[i] == pat[j])
        {
            ++i;
            ++j;
            if (j == m)
            {
                ans.push_back(i - j); // match ending at i-1
                j = lps[j - 1];
            }
        }
        else
        {
            if (j != 0)
            {
                j = lps[j - 1];
            }
            else
            {
                ++i;
            }
        }
    }

    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string text, pattern;
    // Input format:
    // text
    // pattern
    // Example:
    // ababcabcabababd
    // ababd
    if (!(cin >> text))
        return 0;
    cin >> pattern;

    vector<int> positions = kmpSearchAll(text, pattern);

    if (positions.empty())
    {
        cout << -1;
        return 0;
    }

    for (int i = 0; i < (int)positions.size(); ++i)
    {
        if (i)
            cout << ' ';
        cout << positions[i];
    }
    return 0;
}
