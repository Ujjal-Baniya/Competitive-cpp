bool detectCapitalUse(string word) {
        int cnt=0;
        bool first = isupper(word[0]);
        for(auto x: word){
            if(isupper(x)) cnt++;
        }
        if(first && (cnt==1 || cnt == word.length()) || !first &&cnt==0)
            return false;
        else return true;
    }
