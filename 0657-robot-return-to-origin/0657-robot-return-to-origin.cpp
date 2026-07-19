class Solution {
public:
    bool judgeCircle(string moves) {
     
    int Xcount=0;
    int Ycount=0;
    int i = 0;
    while(i<moves.length())
    {
        if(moves[i]=='U')
            Ycount = Ycount + 1;
        if(moves[i]=='D')
            Ycount = Ycount - 1;
        if(moves[i]=='R')
            Xcount = Xcount + 1;
        if(moves[i]=='L')
            Xcount = Xcount - 1;

        i = i + 1;
    }
    if(Xcount==0&&Ycount==0)
        return true;

    return false;
    }
};