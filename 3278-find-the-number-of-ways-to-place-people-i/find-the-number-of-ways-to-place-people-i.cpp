class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        int n = points.size();
        int count =0; 

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){

                if(j == i) continue;
                bool flag = true;
                int topleftX = points[i][0];
                int topleftY = points[i][1];
                int bottomrightX = points[j][0];
                int bottomrightY = points[j][1];

                if(topleftX > bottomrightX) continue;
                if(topleftY < bottomrightY) continue;

                for(int k =0; k<n; k++){
                    if(k ==j || k == i) continue;

                    if(points[k][0] >= topleftX &&
                       points[k][0] <= bottomrightX &&
                       points[k][1] <= topleftY &&
                       points[k][1] >= bottomrightY){
                        flag = false;
                        break;
                       }

                }
                if(flag) count++;
            }
        }
        return count;
    }
};