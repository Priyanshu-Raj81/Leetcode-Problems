class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWord = 0;
        int length = sentences.size();
        for(int i=0; i<length; i++){
            int count = 1;
            for(int j=0; j<sentences[i].length(); j++){
                if(sentences[i][j]==' '){
                    count++;
                }

                maxWord = max(maxWord, count);
            }
        } 
        return maxWord;
    }
};