class Solution {
public:
    string addBinary(string a, string b) {
         int na = a.length(); 
        int nb = b.length(); 
       while (na>nb)
       {
           b.insert(0 , 1 ,'0');
           nb++;      
       } 
        while(nb>na)
       {
          a.insert(0, 1 ,'0');
           na++;
       }
    string res="" ;
    int carry = 0 ;
    for (int i=na-1; i>=0 ; i--)
    { 
      if (a[i]== '1' && b[i]=='1')
      { 
          if(carry) res+='1' ; 
          else res+='0' ; 
         carry = 1; 
      }
     else if (( a[i]== '1' && b[i]=='0') ||( a[i]== '0' && b[i]=='1') )
      {
        if(carry)res+='0'; 
          else res+='1' ;
      }       
     else if (a[i]== '0' && b[i]=='0' )  //case 0 + 0 
     {    
       if(carry)res+='1'; 
          else res+='0' ; 
        carry = 0 ;  
      }  
  }   
        if (carry)
        res+='1';
        reverse(res.begin(), res.end());    
        return res ; 
    }
};