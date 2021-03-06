#include "sliding-window.h"



/*
 * Given a string s and a non-empty string p, find all the start indices of p's anagrams in s.

Strings consists of lowercase English letters only and the length of both strings s and p will not be larger than 20,100.

The order of output does not matter.

Example 1:

Input:
s: "cbaebabacd" p: "abc"

Output:
[0, 6]

Explanation:
The substring with start index = 0 is "cba", which is an anagram of "abc".
The substring with start index = 6 is "bac", which is an anagram of "abc".
Example 2:

Input:
s: "abab" p: "ab"

Output:
[0, 1, 2]

Explanation:
The substring with start index = 0 is "ab", which is an anagram of "ab".
The substring with start index = 1 is "ba", which is an anagram of "ab".
The substring with start index = 2 is "ab", which is an anagram of "ab".
 */

vector<int> findAnagrams(const string& s, const string& p) {
    vector<int> res;

    int l = 0;
    int r = 0;
    int needToFindCount = p.size();

    vector<int> chars(256);
    for(char ch : p)
        chars[ch]++;


    while(r < s.size()) {
        if(chars[s[r]] >= 1) {
            --needToFindCount;
        }

        chars[s[r]]--;
        r++;

        if(needToFindCount == 0) {
            res.push_back(l);
        }

        if(r - l == p.size()) {
            if(chars[s[l]] >= 0) {
                ++needToFindCount;
            }

            chars[s[l]]++;
            l++;
        }
    }

    return res;
}
