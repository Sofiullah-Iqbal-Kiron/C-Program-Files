class Solution
{
public:
    bool checkStraightLine( vector< vector<int> > &coordinates)
    {
        if(coordinates.size())
        {
            return true;
        }

        int slope = abs(coordinates[1][1], coordinates[0][1])/abs(coordinates[0][0], coordinates[1][0]);
        int curslope, i;
        for(i=1; i<coordinates.size(); i++)
        {
            curslope = abs(coordinates[i+1][1], coordinates[i][1])/abs(coordinates[i][0], coordinates[i+1][0]);
            if(curslope!=slope)
            {
                return false;
            }
            slope=curslope;
        }
        return true;
    }
};
