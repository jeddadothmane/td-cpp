#include <iostream>
#include <queue>
#include <stack>
#include <cctype>

using namespace std;

bool isPalindrome (const string& input) {
    queue<char> q;
    stack<char> s;

    for (char c : input) {
        q.push(c);
        s.push(c);
    }

    while (!q.empty() && !s.empty()) {
        if (q.front() != s.top()) {
            return false;
        }
        q.pop();
        s.pop();
    }

    return true;
}

int main() {
    cout << boolalpha;
    cout << "Is  'racecar' a palindrome? " << isPalindrome ("racecar") << endl;
    cout << "Is 'hello' a palindrome? " << isPalindrome ("hello") << endl;
    return 0;
}