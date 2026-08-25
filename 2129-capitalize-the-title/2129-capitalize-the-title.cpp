class Solution {
public:
    string capitalizeTitle(string title) {
        bool cap=true;
        int ind=0;
        int count=0;
        for(int i=0;i<title.length();i++){
            if(title[i]==' '){
                if(count>2){
                    title[ind]=toupper(title[ind]);  
                }else if(count<=2) title[ind]=tolower(title[ind]);
                ind=0;
                count=0;
                cap=true;
            }else if(cap){
                ind=i;
                count++;
                cap=false;
            }else if(!false){
                title[i]=tolower(title[i]);
                count++;
            }
        }
        if(count>2){
            title[ind]=toupper(title[ind]);
        }else{
            title[ind]=tolower(title[ind]);
        }
        return title;
    }
};