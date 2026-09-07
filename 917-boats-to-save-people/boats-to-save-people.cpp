class Solution
{
public:
    int numRescueBoats(vector<int>& people, int limit)
    {
        int n = people.size();

        if (n == 1)
        {
            return 1;
        }

        int ans = 0;

        int heavy = n - 1;
        int light = 0;

        sort(people.begin(), people.end());

        while (light <= heavy)
        {
            // One boat will definitely be needed
            // for the heaviest remaining person.
            ans++;

            // Try to pair the heaviest person
            // with the lightest person.
            if (people[light] + people[heavy] <= limit)
            {
                light++;
                heavy--;
            }
            else
            {
                // The heaviest person cannot be paired
                // with anyone, so they go alone.
                heavy--;
            }
        }

        return ans;
    }
};