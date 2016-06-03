#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    /**
     * @param matrix: A list of lists of integers
     * @param target: An integer you want to search in matrix
     * @return: An integer indicate the total occurrence of target in the given matrix
     */
    int searchMatrixByRange(vector<vector<int> > &matrix, int target,int iStart,int iEnd,int jStart,int jEnd){
        vector<vector<int> >res(iEnd-iStart+1,vector<int>(jEnd-jStart+1));
        for(int i=iStart;i<=iEnd;i++){
//	   cout<<i<<endl; 
            for(int j=jStart;j<=jEnd;j++){
		cout<<i<<"-->"<<j<<endl;
                if(i==iStart){
                    if(j==jStart){
                         res[i][j] = (matrix[i][j] == target) ? 1 : 0; 
                    }else{
                        res[i][j] = (matrix[i][j] == target) ? res[i][j-1] +1 : res[i][j-1];
                    }
                }else{
                    if(j==jStart){
                         res[i][j] = (matrix[i][j] == target) ? res[i-1][j]+1 : res[i-1][j]; 
                    }else{
                        res[i][j] = (matrix[i][j] == target) ? res[i][j-1]+res[i-1][j] +1 : res[i][j-1]+res[i-1][j];
                    }
                }
		cout<<res[i][j]<<endl;
            }
        }
        return res[iEnd][jEnd];
    }
};

//int main(){
//    vector<int>v1;
//    v1.push_back(1);
//    v1.push_back(3);
//    v1.push_back(5);
//    v1.push_back(7);
//    vector<int>v2;
//    v1.push_back(2);
//    v1.push_back(4);
//    v1.push_back(7);
//    v1.push_back(8);
//    vector<int>v3;
//    v1.push_back(3);
//    v1.push_back(5);
//    v1.push_back(9);
//    v1.push_back(10);
//
//    vector<vector<int> > vv;
//    vv.push_back(v1);
//    vv.push_back(v2);
//    vv.push_back(v3);
//
//    Solution s;
//    //cout<<vv<<endl;
//    int a = s.searchMatrixByRange(vv,3,0,2,0,3);
//    cout<<a<<endl;
//    return 0;
//}