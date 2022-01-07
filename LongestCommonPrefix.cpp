class Solution {
public:
    int minLength(vector<string> &arr){
        int min = arr[0].size();
        for(int i=1;i<arr.size();i++){
            if(arr[i].length()<min){
                min = arr[i].length();
            }
        }
        return min;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string result="";
        char current;
        int minLen = minLength(strs);
        for(int i=0;i<minLen;i++){
            current = strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(strs[j][i] != current){
                    return result;
                }
            }
            result.push_back(current);
        }
        return result;
        
    }
};
