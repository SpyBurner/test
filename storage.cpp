// Student may implement another function as need

void printFirstRepeatedWord(char str[]) {
    // Split a str into words
    char words[100][100];  
    int i = 0, j = 0, length;  
      
    //Split the str into words such that each row of array words represents a word  
    for(int k=0; k < strlen(str); k++){  
          
        //Here, i represents row and j represents column of two-dimensional array words  
        if(str[k] != ' ' && str[k] != '\0')
        {  
            //add it to array words  
            words[i][j] = str[k];  
            j++;
        }  
        else
        {  
            words[i][j] = '\0';  
            //Increment row count to store new word  
            i++;  
            //Set column count to 0  
            j = 0;  
        }  
    }
    
    bool hehe = 0;
    length = i + 1; 
    for (int h = 0; h < length; h++)
    {
        for(int l = h+1 ; l < length; l++)
        {
            if (strcmp(words[h],words[l]) == 0)
            {
                hehe = 1;
                cout << words[h];
                goto exit;
            }
        }
        
        exit: 
         if (hehe)
            break;
    }
    
    if (hehe == 0)
        cout <<  "No Repetition";
    
}    