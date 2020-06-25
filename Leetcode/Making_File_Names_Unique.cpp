/*
Given an array of strings names of size n. You will create n folders in your file system such that, at the ith minute, you will create a folder with the name names[i].

Since two files cannot have the same name, if you enter a folder name which is previously used, the system will have a suffix addition to its name in the form of (k), where, k is the smallest positive integer such that the obtained name remains unique.

Return an array of strings of length n where ans[i] is the actual name the system will assign to the ith folder when you create it.
*/

class Solution {
public:
    vector<string> getFolderNames(vector<string>& names) {
        
        vector<string> a;
        int i;
        unordered_map<string, int> umap;
        umap[names[0]] = 1; 
        a.push_back(names[0]);
        
        for(i=1;i<names.size();i++){
            string key = names[i];
            if (umap.find(key) == umap.end()){
                a.push_back(names[i]);
                umap[names[i]] = 1; 
            }
            else {
                string z;
                z=names[i]+"("+to_string(umap.at(key))+")";               
                while(umap.find(z)!=umap.end()){
                    umap.at(key)+=1;
                 z=names[i]+"("+to_string(umap.at(key))+")";   
                }
                a.push_back(z);
                umap.at(key)+=1;
                umap[z]=1;
            }
       
        }
        return a;    
    }
        
};
