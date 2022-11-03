class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int choice;
        
        if(word.length() == 1)
            return true;
        
        else if((int)word[0] <= 90 && int(word[1]) <= 90)
            choice = 2;
        
        else if ((int)word[0] > 90)
            choice = 3;
        
        else
            choice = 1;
        
        
        switch(choice)
        {
            case 1: 
                for(int i = 1; i < word.length(); i++)
                {
                    if(word[i] <= 90)
                        return false;
                }
                
                break;
                
            case 2:
                for(int i = 2; i < word.length(); i++)
                {
                    if(word[i] > 90)
                        return false;
                }
                
                break;
            
            case 3:
                for(int i = 1; i < word.length(); i++)
                {
                    if(word[i] <= 90)
                        return false;
                }
        }

        return true;
        
    }
};