//  https://practice.geeksforgeeks.org/problems/count-number-of-words1500/1

int countWords(string s)
{
    //code here.
    int count=0;
    for(int i = 0 ; i < s.length()-1 ; i++){
        if(count==0 && s[i]>='a' && s[i]<='z'){
            count++;
        }
        
        if(count>0){
            if(s[i]==' ' && s[i+1]>='a' && s[i+1]<='z'){
                count++;
            }
            else if(s[i]=='\\' && (s[i+1]=='n' || s[i+1]=='t') && (i+2)<s.length()){
                if(s[i+2]>='a' && s[i+2]<='z'){
                    count++;
                }
            }
        }
    }
    
    return count;
}