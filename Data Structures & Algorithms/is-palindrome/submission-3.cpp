class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;
        bool FlagIdentical = true;
        while (left < right) {
            while (left < right && !alpha(s[left])) {
                ++left;
            }
            while (left < right && !alpha(s[right])) {
                --right;
            }
            if (tolower(s[left]) != tolower(s[right])) {
                FlagIdentical = false;
                break;
            }
            ++left;
            --right;
        }
        return FlagIdentical;
    }
    bool alpha(char character) {
        bool IsLower = ('a' <= character && 'z' >= character);
        bool IsUpper = ('A' <= character && 'Z' >= character);
        bool IsDigit = ('0' <= character && '9' >= character);
        return IsLower || IsUpper || IsDigit;
    }
};