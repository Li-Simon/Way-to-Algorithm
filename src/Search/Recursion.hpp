#ifndef RECURSION_HPP
#define RECURSION_HPP 1

#include <vector>
#include <cstring>
using namespace std;

/**
 * @brief Recursion 递归
 * @param s     所有成员的选择 s[i]表示成员i的选择
 * @param n     成员数量
 * @param m     选择数量
 * @param prev  上一个选择过的成员下标
 * @param comb  所有选择的集合
*/
auto Recursion(vector<int> &s, int m, int prev, vector<vector<int>> &comb) -> void
{
    /* 递归终止条件 */
    if (prev == s.size()) {
        comb.push_back(s);
        return;
    }

    /* 遍历当前成员s[prev] 并递归进入下一个成员 */
    for (int i = 0; i < m; ++i) {
        s[prev] = i;
        Recursion(s, m, prev + 1, comb);
    }
}


#endif
