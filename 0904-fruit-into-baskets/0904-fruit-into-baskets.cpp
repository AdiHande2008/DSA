class Solution {
public:
    int totalFruit(vector<int>& tree) {
        int i=0,j=0,ans=0;
        unordered_map<int,int> m;
        while(j<tree.size()){
            m[tree[j]]++;
            while(m.size()>2){
                m[tree[i]]--;
                if(m[tree[i]]==0) m.erase(tree[i]);
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};