//345.REVERSE VOWELS OF A STRING
//Given a string 's', reverse only all the vowels in the string and return it.
//The vowels are 'a','e','i','o' and 'u', and they can appear in both lower and upper cases, more than once.
//INPUT: "leetcode"
//OUTPUT: "leotcede"

#include<iostream>
#include<string>
using namespace std;

class solution{
    public:
    bool isvowel(char ch){
        ch = tolower(ch);

        return ch == 'a' || ch == 'e' || ch == 'i'  || ch == 'o'  || ch == 'u';
    }
    string reversevowels(string s){
        int left = 0;
        int right = s.length()-1;

        while(left<right){
            while(left<right && !isvowel(s[left])){
                left++;
            }
            while(left<right && !isvowel(s[right])){
                right--;
            }
            swap(s[left], s[right]);
            left++;
            right--;
        }
        return 0;
    }
};

//main function
int main(){
    string s = "leetcode";

    solution s1;
    cout<<s1.reversevowels(s);

    return 0;
}