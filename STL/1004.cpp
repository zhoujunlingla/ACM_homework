#include <iostream>
#include <unordered_map>
#include <sstream>
#include <cctype>
using namespace std;

int main() {
    unordered_map<string, string> dictionary;
    string line;

    // 处理字典部分
    cin >> line;  // 读取第一个 "START"
    while (cin >> line && line != "END") {
        string english, martian;
        english = line;
        cin >> martian;
        dictionary[martian] = english;
    }

    // 忽略书籍部分的 "START"
    cin >> line;

    // 处理书籍翻译部分
    while (getline(cin, line)) {
        if (line == "END") break;

        stringstream translated, input(line);
        string token;
        char ch;

        while (input.get(ch)) {
            if (isalnum(ch)) {
                token += ch;  // 构建一个单词
            } else {
                if (!token.empty()) {
                    // 翻译单词
                    if (dictionary.count(token)) {
                        translated << dictionary[token];
                    } else {
                        translated << token;
                    }
                    token.clear();
                }
                translated << ch;  // 输出非单词字符
            }
        }

        // 检查最后的单词
        if (!token.empty()) {
            if (dictionary.count(token)) {
                translated << dictionary[token];
            } else {
                translated << token;
            }
        }

        // 输出翻译后的行
        cout << translated.str() << endl;
    }

    return 0;
}