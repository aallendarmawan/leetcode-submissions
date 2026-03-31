#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

class Solution {
private: 
    unordered_map<char, string> numMap = {
        {'2', "abc"}, {'3',"def"}, {'4', "ghi"},
        {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"},
        {'8',"tuv"}, {'9', "wxyz"},
    };

public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {""};
        
        vector<string> res;
        char first = digits[0];
        string strMapped = numMap[first];

        vector<string> nextCombos = letterCombinations(digits.substr(1));

        for (char c : strMapped) {
            for (string next : nextCombos) {
                res.push_back(c + string(next));
            }
        }

        return res;

    }
};