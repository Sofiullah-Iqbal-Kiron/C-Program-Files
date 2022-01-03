class StockSpanner
{
    stack<pair<int, int>> s;
    int index;

public:
    StockSpanner()
    {
    }

    int next(int price)
    {
        index = 0;

        while (!s.empty() && s.top().second <= price)
        {
            s.pop();
        }

        if (s.empty())
        {
            s.push({index, price});
            return index + 1;
        }

        int result = s.top().first;
        s.push({index, price});
        return index - result;
    }
};

///Server Code.
class StockSpanner
{
    stack<pair<int, int>> s;

public:
    StockSpanner()
    {
    }

    int next(int price)
    {
        int res = 1;
        while (!s.empty() && s.top().first <= price)
        {
            res += s.top().second;
            s.pop();
        }
        s.push({price, res});
        return res;
    }
};
