    #include<iostream>
#include<string>
#include<vector>
#include <algorithm>

using namespace std;

class Solution{
    public:
        bool isPalindrome(string s){

            //Converting the string into all Lower-Case letters
            transform(s.begin(), s.end(), s.begin(),[&] (unsigned char c) -> char{
                    cout << c ;
                    return tolower(c);
                    }
            );

            cout<<endl;
            //Erasing all the spaces, commas etc using isalnum function 
            s.erase(remove_if(s.begin(), s.end(), [](char c)
                                { return !isalnum(c); }),
                      s.end());

            cout << s << endl;

            //Palindrome logic
            int first = 0;
            int last =  s.length() -1;

            while(first < last){
                if(s[first] != s[last]){
                    return false;
                }
                first++;
                last--;

            }
            return true;
        }
};

int main(){

    Solution sol;
    cout << sol.isPalindrome("A man, a plan, a canal: Panama") << endl; 

    Solution pompy;
    cout << pompy.isPalindrome("pompy");
    

    return 0;
}

