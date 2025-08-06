// #include<iostream>
// using namespace std;

// int main(){
//     string str ="hello world";
//     cout<<str;
//     return 0;
// }


// Reverse String--------------------------------------------------------

// class Solution {
// public:
//     void reverseString(vector<char>& s) {
//         int start = 0,end = s.size()-1;
//         while(start<end){
//             swap(s[start],s[end]);
//             start++;
//             end--;
//         } 
//     }
// };



// Valid Palindrome--------------------------------------------------------

// class Solution {
// public:
//     bool isPalindrome(string s) {
//         int st = 0, end = s.size();
//         while(st<=end){
//             if(!isalnum(s[st])){
//                 st++;
//                 continue;
//             } 
//             if(!isalnum(s[end])){
//                 end--;
//                 continue;
//             } 
//             if(tolower(s[st])!=tolower(s[end])){
//                 return false;
//             }
//             st++,end--;
//         }
//         return true;
//     }
// };



// Remove All Occurrences of a Substring--------------------------------------------------------

// class Solution {
// public:
//     string removeOccurrences(string s, string part) {
//         while(s.length() > 0 && s.find(part) < s.length()){
//         s.erase(s.find(part), part.length());
//         }
//         return s;
//     }
// };


// Remove Outermost Parentheses--------------------------------------------------------

// class Solution {
// public:
//     string removeOuterParentheses(string s) {
//         string temp;
//         int cnt=0;
//         for(int i=0;i<s.size();i++){
//             if(s[i]=='('){
//                 if(cnt==0) cnt++;
//                 else{
//                     temp.push_back('(');
//                     cnt++;
//                 }
//             }else{
//                 if(cnt>1){
//                     temp.push_back(')');
//                     cnt--;
//                 }else cnt-- ;
//             }
//         }
//         return temp;
//     }
// };



// Reverse Words in a String--------------------------------------------------------

// class Solution {
// public:
//     string reverseWords(string s) {
//         reverse(s.begin(),s.end());
//         string ans;
//         for(int i=0;i<s.size();i++){
//             string word;
//             while(i<s.size() && s[i]!=' '){
//                 word += s[i];
//                 i++;
//             }
//             reverse(word.begin(),word.end());
//             if(word.size()>0) ans += " "+word;
//         }
//         return ans.substr(1);
//     }
// };


// Largest Odd Number in String--------------------------------------------------------

// class Solution {
// public:
//     string largestOddNumber(string num) {
//         string ans;
//         for(int i=num.size()-1;i>=0;i--){
//             if(num[i]%2==1){
//                 return num.substr(0, i + 1);
//             }
//        }
//        return ans;
//     }
// };