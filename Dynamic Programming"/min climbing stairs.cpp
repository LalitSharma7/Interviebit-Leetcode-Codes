class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        // strating form the top of the stairs and coming down by calculating the minimum cost by taking
        // min of next two stairs, hence starting form third last top stair
        for (int i = cost.size() - 3; i >= 0; i--)
            cost[i] += min(cost[i + 1], cost[i + 2]);// taking minimum of next two stairs and adding own cost, makes it absolute stair cost
        return min(cost[0], cost[1]); // return the minimum of first two available absolute strair cost
        
    }
};
