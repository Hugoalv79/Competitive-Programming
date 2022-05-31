#include<vector>
#include<string>
using namespace std;


vector<string> addBorder(vector<string> picture) {
    for(auto &i: picture)
        i = "*"+i+"*";
    picture.insert(picture.begin(), string(picture[0].size(),'*'));
    picture.insert(picture.end(), string(picture[0].size(),'*'));
    return picture;
}
