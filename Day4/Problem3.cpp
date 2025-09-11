class Solution {
public:
    string sortVowels(string &s){
        vector<char> vowelshere;
        for(char ch:s){
           if(isvowel(ch)){
            vowelshere.push_back(ch);
           }
        }
        sort(vowelshere.begin(),vowelshere.end());
        int count=0;
        for(int i=0;i<s.size();i++){
            if(isvowel(s[i])){
                s[i]=vowelshere[count++];
            }
        }
        return s;
    }
public:
   bool isvowel(char c){
    char ch=tolower(c);
    return (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
   }


 

};