#pragma once

#include <vector>
#include <string>
#include <sstream>
#include <unordered_set>

int lengthOfLongestSubstring1(const std::string& s);
int lengthOfLongestSubstring2(const std::string& s);
void reverseString(std::vector<char>& s);
std::vector<std::string> letterCombinationsBFS(const std::string& digits);
std::vector<std::string> letterCombinationsDFS(const std::string& digits);
std::vector<std::string> letterCombinationsBacktracking(const std::string& digits);

inline std::vector<std::string> split(const std::string& s, char delimiter)
{
    std::vector<std::string> tokens;
    std::string token;
    std::istringstream tokenStream(s);

    while (std::getline(tokenStream, token, delimiter))
    {
        tokens.push_back(token);
    }

    return tokens;
}