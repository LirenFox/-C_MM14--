#include <iostream>

using namespace std;

int main()
{
    long long int time;
    cin >> time;
    if(time/(60*60*24) > 0){//輸出幾天
        cout << time/(60*60*24) << " days" << endl;
        time%=(60*60*24);
    }
    if(time/(60*60) > 0){//輸出幾小時
        cout << time/(60*60) << " hours" << endl;
        time%=(60*60);
    }
    if(time/60 > 0){//輸出幾分
        cout << time/60 << " minutes" << endl;
        time%=60;
    }
    if(time > 0){//輸出幾秒
        cout << time << " seconds" << endl;
    }
    return 0;
}
