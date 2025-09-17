class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int result=0;
        bool broke=false;
        for(int i=0;i<text.size();i++){
            if(text[i]==' '){
                result+=!broke;
                broke=false;

            }
            for(int j=0;j< brokenLetters.size();j++){
                if(text[i]==brokenLetters[j]){
                    broke=true;
                }
            }
        }
        result+=!broke;
        return result;
        
    }
};