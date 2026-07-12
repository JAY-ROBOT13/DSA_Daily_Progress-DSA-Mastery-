//541.REVERSE STRING II.
//Given a string "s" and an integer 'k', reverse the first 'k' character for every 2k characters counting from the start of the string.If there are fewer than 'k' characters left, reverse all of them. If there are less than 2k but greater than or equal to 'k' character then reverse the first 'k' characters and leave the other as original.
//INPUT : S = "abcd", k = 2
//OUTPUT: "bacd" 

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class solution{
    public:
    string reverseStr(string s, int k){

        int n =  s.length();

        for(int i=0;i<n;i++){
            int left = i;
            int right = min(i+k-1, n-1);

            while(left<right){
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};

//main function
int main(){
    string s ="abcd";
    int k=2;

    solution s1;
    cout<<s1.reverseStr(s,k);

    return 0;
}