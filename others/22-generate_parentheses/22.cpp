#include <vector>
#include <iostream>
#include <string>
using namespace std;

class Solution {
    int _n;
    vector<string> res;

public:
    vector<string> generateParenthesis(int n) {
        _n = n;
        dfs("", 0, 0);
        return res;
    }

private:
    void dfs(string s, int openings, int closings) {
        if (s.length() == 2 *_n) {
            res.push_back(s);
            return; 
        }

        if (openings < _n) {
            dfs(s + "(", openings+1, closings);
        }

        if (openings > closings) {
            dfs(s+ ")", openings, 1+closings);
        }
    }
};

int main() {
    Solution soln;
    int n = 3;
    vector<string> res = soln.generateParenthesis(n);
    cout << "Results for n = " << n << ":" << endl;
    for (const string s: res) {
        cout << s << endl;
    }
    return 0;
}