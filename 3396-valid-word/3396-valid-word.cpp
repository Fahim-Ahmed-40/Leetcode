class Solution {
public:
    bool isValid(string word) {
        int con=0,vow=0,dig=0;
        int l=word.length();
        if(l<3)return false;
        for(int i=0;i<l;i++){
            if(word[i]>=65 && word[i]<=90){
                if(word[i]=='A' || word[i]=='E'|| word[i]=='I'|| word[i]=='O'|| word[i]=='U')vow++;
                else con++;
            }
            else if(word[i]>=97 && word[i]<=122){
                if(word[i]=='a' || word[i]=='e'|| word[i]=='i'|| word[i]=='o'|| word[i]=='u')vow++;
                else con++;
            }
            else if(word[i]>=48 && word[i]<=57)dig++;
            else return false;
        }
        if(con<1 || vow<1)return false;
        return true;
    }
};