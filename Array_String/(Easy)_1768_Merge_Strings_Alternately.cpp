#include <string>
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        // length is the same
        string mergedString;
        if (word1.length() == word2.length()) {
            for (int i=0; i<word1.length(); i++) {
                mergedString += word1[i];
                mergedString += word2[i];
            }
        }
        else if (word1.length() < word2.length()) {
            for (int i=0; i < word2.length(); i++) {
                if (i < word1.length()) {
                    mergedString += word1[i];
                    mergedString += word2[i];
                }
                else {
                    mergedString += word2[i];
                }
            }
        }
        else { // word1 is longer than word2
            for (int i=0; i<word1.length(); i++) {
                if (i < word2.length()) {
                    mergedString += word1[i];
                    mergedString += word2[i];
                }
                else {
                    mergedString += word1[i];
                }
            }
        }
        return mergedString;
    }
};
