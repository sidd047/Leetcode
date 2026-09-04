class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
         int total = 0;

        for(int i = 0; i < apple.size(); i++) {
            total += apple[i];
        }

        sort(capacity.begin(), capacity.end(), greater<int>());

        int boxes = 0;
        int sum = 0;

        for(int i = 0; i < capacity.size(); i++) {

            sum += capacity[i];
            boxes++;

            if(sum >= total)
                return boxes;
        }

        return boxes;
    }
};