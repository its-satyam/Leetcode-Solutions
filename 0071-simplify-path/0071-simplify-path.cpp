class Solution {
public:
    string simplifyPath(string p) 
    {
      deque<string>st;
      int dot,slash;
      string temp;
      for(int i=1;i<p.size();)
      {
          temp="";
           while(i<p.size() &&p[i]!='/')
           {
             temp+=p[i];
             i++;
           }
           while(i<p.size() && p[i]=='/')
           i++;
           if(temp.size()==0)
           continue;
           else if(temp.size()==2 && temp[temp.size()-2]=='.' && temp[temp.size()-1]=='.')
           {
             if(!st.empty())
              st.pop_back();
           }
           else
           {
              if(temp.size()==1 && temp[temp.size()-1]=='.')
             {
               continue;
             }
             st.push_back(temp);
           }
      }
     temp="";
     string s;
     if(st.empty())
     return "/";
      while(!st.empty())
      {
        s=st.front();
        st.pop_front();
        temp+='/'+s;
      }
      return temp;

    }
};