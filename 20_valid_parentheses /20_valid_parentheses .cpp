class Solution {
public:
    bool isValid(string s) {
        bool res = false;
        bool found = true;
        bool find = false;
        std::string::size_type find_brackets; 
        std::vector<string> vec = {"()","{}","[]"};

        while(found){
            found = false;
            for(int i=0; i < vec.size(); i++){
                find_brackets = s.find(vec[i]);
                if(find_brackets != std::string::npos){
                    found = true;
                    s.erase(find_brackets, vec[i].length());
                }
            }
        }
        if(s.size() != 0){
            return res = false;
        }else{
            return res = true;
        }
        return res;    
    }
};