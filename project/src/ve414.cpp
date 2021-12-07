#include <iostream>
#include <vector>
#include <algorithm>
#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

int main(){
    std::ifstream infile;
	infile.open("input.txt", ios::in);
    int size = 24094;
    int i = 0;
    
    float x = 0;
    float y = 0;
    vector<vector<float>> resultset;
    while (infile >> x >> y){
        resultset.push_back({x,y});
    }
    /* cout << resultset[40][0]<< endl;    */
    float result = 0;
    vector<vector<int>> resultsetnum(1070,vector<int>(1070,0));
    for (int i = 0; i < 1070; i++) {
        for (int j = 0; j < 1070; j++) {
            for (int k = 0; k < (int)resultset.size(); k++) {
                if ((resultset[k][0] - i/10) * (resultset[k][0] - i/10) + (resultset[k][1] - j/10) * (resultset[k][1] - j/10)<= 1 ){
                    resultsetnum[i][j] = 1;
                }
            }
        }
    }
    /* cout << resultsetnum[37][46]<< endl; */
    int sizesum = 0;
    for (i = 0; i < 1070; i++) {
        for (int j = 0; j < 1070; j++){
            sizesum += resultsetnum[i][j];
        }
/*         cout << sizesum <<endl;
        sizesum = 0; */
    } 
    cout << sizesum/100 <<endl;
    return 0;
}