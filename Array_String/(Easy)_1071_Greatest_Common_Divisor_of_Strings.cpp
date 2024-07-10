class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        
        string temp, base, resultStr;
        
        bool str1Shorter = false;
        bool removeChar = false;
        bool str1GCD = false;
        bool str2GCD = false;
        bool resultFound = false;
        
        // check which one is shorter one
        if (str1.length() <= str2.length()) {
            str1Shorter = true;
            base = str1;
        }
        else {
            str1Shorter = false;
            base = str2;
        }
        
        while (!resultFound) {
            // Find GCD from the shorter one.
            if ((str1.length() % base.length() == 0) && (str2.length() % base.length() == 0) && !removeChar) {
                // Check the GCD with both str1 and str2.
                double quotient1 = str1.length() / base.length();
                double quotient2 = str2.length() / base.length();
                
                if (quotient1 == 0) {
                    if (base == str1)
                        str1GCD = true;
                }
                else {
                    for (int i=0; i<quotient1; i++) {
                        temp += base;
                    }
                    if (temp == str1) {
                        str1GCD = true;
                        temp.clear();
                    }
                    else
                        temp.clear();
                }
                
                if (quotient2 == 0) {
                    if (base == str2) {
                        str2GCD = true;
                    }
                }
                else {
                    for (int i=0; i<quotient2; i++) {
                        temp += base;
                    }
                    if (temp == str2) {
                        str2GCD = true;
                        temp.clear();
                    }
                    else
                        temp.clear();
                }
                // If GCD found, output the GCD.
                if (str1GCD && str2GCD) {
                    resultFound = true;
                    resultStr = base;
                }
                else
                    removeChar = true;
            }
            else { // If not, take last character and go back to checking.
                if (base.length() == 1) {
                    resultStr = "";
                    resultFound = true;
                    break;
                }
                else {
                    base.pop_back();
                    removeChar = false;
                }
            }
        }
        return resultStr;
    }
};
