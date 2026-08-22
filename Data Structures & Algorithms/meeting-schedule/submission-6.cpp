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
    bool static cmp(Interval a, Interval b){
        return a.start < b.start;
    }
    bool canAttendMeetings(vector<Interval>& intervals) {
        sort(begin(intervals),end(intervals),cmp);
        int n = intervals.size();
        int check = intervals[0].end;
        for(int i = 1; i < n; ++i){
            if(check > intervals[i].start)
            return false;
            check = intervals[i].end;
        }
        return true;
    }
};
