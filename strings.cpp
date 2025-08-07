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



// Longest Common Prefix---------------------------------------------------------------------

// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//         if (strs.empty()) return "";
//         sort(strs.begin(),strs.end());
//         string first = strs[0];
//         string last = strs[strs.size()-1];
//         string ans;
//         int n = min(first.size(),last.size());
//         for(int i=0;i<n;i++){
//             if(first[i]==last[i]){
//                 ans += first[i];
//             }else break;
//         }
//         return ans;
//     }
// };


// Isomorphic Strings--------------------------------------------------------------------------

// class Solution {
// public:
//     bool isIsomorphic(string s, string t) {
//         char indS[128]={0};
//         char indT[128]={0};
//         if(s.size()!=t.size()) return false;
//         for(int i=0;i<s.size();i++){
//             if(indS[s[i]]!=indT[t[i]]) return false;
//             indS[s[i]]=i+1;
//             indT[t[i]]=i+1;
//         }
//         return true;
//     }
// };


// Rotate String--------------------------------------------------------------------------

// class Solution {
// public:
//     bool rotateString(string s, string goal) {
//         if(s.size()!=goal.size()) return false;
//         string concat = s+s;
//         return concat.find(goal) < concat.size();
//     }
// };



// Valid Anagram------------------------------------------------------------------------------

// BRUTE

// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         sort(s.begin(),s.end());
//         sort(t.begin(),t.end());
//         return s==t;
//     }
// };

// OPTIMAL

// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if(s.size()!=t.size()) return false;
//         int hashS[26],hashT[26];
//         for(int i=0;i<s.size();i++){
//             hashS[s[i]-97]++;
//             hashT[t[i]-97]++;
//         }
//         for(int i=0;i<26;i++){
//             if(hashS[i]!=hashT[i]) return false;
//         }
//         return true;
//     }
// };