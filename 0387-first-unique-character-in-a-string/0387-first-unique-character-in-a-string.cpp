class Solution {
public:
    int firstUniqChar(string s) {
   // queue<char>q;
    int freq[26] = {0};
    queue<int>q;
    for(int i=0;i<s.length();i++){
        freq[s[i]-'a']++;    //freq 0 se 1 ho jayegi 
        q.push(i);
    }
    while(!q.empty()){
        int i = q.front();
        q.pop();
        if(freq[s[i]-'a']==1){
            return i;
        }
    }
           return -1;
    }
};