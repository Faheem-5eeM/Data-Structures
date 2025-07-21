#include <bits/stdc++.h>
using namespace std;

int main(){

    bool isMatch(string s1 , string s2){
        bool match(int s1_index , int s2_index){
            // s1 = aa -> 2
            // s2 = aa -> 2
            if(s2_index == len(s2){
                return s1_index == len(s1) //true or false 
            })
            //check first character
            bool first_match = (s1_index < len(s1) && s2[s2_index] == s1[s1_index] || s2[s2_index]=='.');
                                 //true                //a         == a  ||                     a || . == .

        // Check if next character is '*'

        
        if (str2_index + 1) < len(str2) && str2[str2_index + 1] == '*':
            // # Option 1: skip the '*' and preceding char
            // # Option 2: consume a matching character and stay on the same pattern
            return match(i, j + 2) || (first_match && match(i + 1, j))
        else:
            return first_match && match(i + 1, j + 1)

    return match(0, 0)

        }
    }
    return 0;

}
