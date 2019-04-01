#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

int main() {
    int cases;
    cin>>cases;

    for (int i=0;i<cases;i++){

        int wallnum;
        cin>>wallnum;

        string wallstr;
        getline(cin,wallstr);

        vector <int> walls;
        walls.resize(wallnum);
        istringstream wallss(wallstr);

        for(int k=0;k<wallnum;k++){
            wallss>>walls.at(k);

        }

        int hj=0;
        int lj=0;
        int atwall = walls.front();
        for (auto wall:walls) {
            if (wall>atwall) {
                hj++;
            } else if(wall<atwall) {
                lj++;
            }
            atwall=wall;
        }
        cout<<"Case "<<i<<": "<<hj<<" "<<lj<<endl;
    }
}

