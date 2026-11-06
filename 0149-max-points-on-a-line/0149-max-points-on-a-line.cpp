class Solution {
public:
    int maxPoints(vector<vector<int>>& arrPoints) {
        int n=arrPoints.size();
        if(n<3) return n;
        int ans=-1;
        for(int i=0;i<n;i++){
            map<pair<int,int>, int> mp;
            for(int j=i+1;j<n;j++){
                int dx=arrPoints[j][0]- arrPoints[i][0];
                int dy=arrPoints[j][1]- arrPoints[i][1];
                
                int g=gcd(abs(dx),abs(dy));
                dx/=g;
                dy/=g;
                
                if(dx<0){
                    dx=-dx;
                    dy=-dy;
                }
                if(dx==0) dy=1;
                if(dy==0) dx=1;
                
                mp[{dy,dx}]++;
                
                ans=max(ans, mp[{dy,dx}]+1);
            }
        }
        return ans;
    }
};