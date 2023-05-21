class Solution {
public:
    string intToRoman(int num) {
        vector<string>  ones= {"","I","II","III","IV","V","VI","VII","VIII","IX"};
        vector<string>  tens = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        vector<string>  hrds = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        vector<string>  thus={"","M","MM","MMM"};
        
        return thus[num/1000] + hrds[(num%1000)/100] + tens[(num%100)/10] + ones[num%10];
    }
};