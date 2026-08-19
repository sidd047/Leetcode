class Solution {
public:
    bool checkPowersOfThree(int n) {
        
        //kaha galat hai pta nhi
    //     if(n==2)
    //     return false;
    // while(n>0)
    // {
    //     if(n%3==0)
    //     n=n/3;
    //     else
    //     n--;

    //    if(n%3==2)
    //    return false; 
    //    n=n/3;
    
    // }
    //     return true;  

    // while(n>0)
    // {
    //     if(n%3==2)
    //     return false;
    //     n=n/3;
    // }  
    // return true;  
    // }

    while(n>=3)
    {
        if(n%3==0)
        n=n/3;
        else if(n%3==1)
        n--;
        else
        return false;
    }
    return n!=2;
    }
};