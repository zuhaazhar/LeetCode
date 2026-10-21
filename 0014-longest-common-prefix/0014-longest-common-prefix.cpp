class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        bubbleSort(strs);
        string prefix, first=strs[0], last=strs.back();
        for(int i=0;i<first.size()&&i<last.size();i++){
            if(first[i]==last[i])
                prefix+=first[i];
            else
                break;
        }
        return prefix;

    }
    void bubbleSort(vector<std::string>& arr) {
    int n = arr.size();
    bool swapped;
    
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
    }
};