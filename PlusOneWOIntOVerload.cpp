#include <stdlib.h>
vector<int> PlusOneWOIntOVerload(vector<int>& digits){

//    without overloading
        string s = "";
        
        for(auto x : digits){
            s += to_string(x);
        }
        
        
        int val = stoi(s) + 1;
        cout << val;
   
        string convert = to_string(val);
        vector<int>ret;
        ret.resize(convert.size());
        
        for(int i = ret.size() - 1; i >= 0; --i){
            const char * fin = &convert[i];
            
            int r = std::atoi(fin);
            
            ret[i] = r;
            convert[i] = '\0';
        }
        
        return ret;
       }
