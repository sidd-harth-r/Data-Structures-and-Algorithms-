/*lc 1790
   bool areAlmostEqual(string s1, string s2) {
        int difcount=0;
         int count[26]={0};
    for(int i=0;i<s1.length();i++){
        if(s1[i]!=s2[i]){
           count[s1[i]-'a']++;
           count[s2[i]-'a']--;

            difcount++;
        }
        if(difcount>2){
            return false ;
        }
    }
   
        for(int i=0;i<26;i++){
            if(count[i]!=0){
                return false ;
            }
        }
        return true ;
    }
*/