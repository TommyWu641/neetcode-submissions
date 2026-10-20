class Solution {
public:

    string encode(vector<string>& strs) {
        string s="";
        for(const string& i:strs){
            
            s+=to_string(i.length())+'#'+i;
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> s2;
        int index=0;
        int i=0;
        while(index < s.length()){
            if(s[index]=='#'){
                int length = stoi(s.substr(i,index-i));
                s2.push_back(s.substr(index+1,length));
                index = index+1+length;
                i=index;
            }
            else{
                index++;
            }
        }
        return s2;
    }
};
