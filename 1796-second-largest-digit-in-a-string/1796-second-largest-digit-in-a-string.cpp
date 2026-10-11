class Solution {
public:
    int secondHighest(string s) {
        int max=-1, smax=-1;
        for(char ch : s){
            if(isdigit(ch)){
                int d=ch-'0';
                if(d>max){
                    smax=max;
                    max=d;
                }
                if(d<max&&d>smax)
                    smax=d;
            }
        }
        return smax;
    }
};