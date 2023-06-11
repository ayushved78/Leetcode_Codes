class Solution {
public:
    string convertToTitle(int columnNumber) {
        string column = "";
        int rem;
        while(columnNumber){
            rem = (--columnNumber)%26;
            columnNumber /= 26;
            column = char('A' + rem) + column;
        }
        return column;
    }
};