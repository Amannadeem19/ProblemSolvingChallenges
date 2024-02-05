class Solution {public:
   int result =0;
   unordered_map<char,int> myromanMap = {
       {'I' ,
 1},
       {'V' ,
 5},
       {'X' , 10},
       {'L' , 50},
       {'C' ,
 100},
       {'D' , 500},
       {'M' ,
 1000}
   };
   int romanToInt(string s) {
       for(int i=0; i<s.size(); i++){
           int value = myromanMap[s[i]];
                       if(i+1 < s.length() && myromanMap[s[i+1]] > value){
               result -= value;
           } else{
               result+= value;
           }
       }
       return result;
   }};