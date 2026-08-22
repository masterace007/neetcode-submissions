/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    bool static compare(Interval a, Interval b){
        return a.start < b.start;
    }
    int minMeetingRooms(vector<Interval>& intervals) {
        sort(begin(intervals),end(intervals),compare);

        if(intervals.size() == 0)
        return 0;

        priority_queue<int> arr;
        arr.push(-1*intervals[0].end);

        for(int i = 1; i < intervals.size(); ++i){
            int temp = -1*arr.top();
            if(temp > intervals[i].start){
                arr.push(-1*intervals[i].end);
            }
            else{
                arr.pop();
                arr.push(-1*intervals[i].end);
            }
        }

        return arr.size();
    }
};
