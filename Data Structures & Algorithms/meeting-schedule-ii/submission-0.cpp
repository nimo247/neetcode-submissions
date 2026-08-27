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
    int minMeetingRooms(vector<Interval>& intervals) {

        int n = intervals.size();

        int rooms = 0;
        int maxRooms = 0;

    

        vector<int> start;
        vector<int> ends;

        int i = 0;
        int j = 0;

        for(auto it : intervals){

            start.push_back(it.start);
            ends.push_back(it.end);

        }
        sort(start.begin(),start.end());
        sort(ends.begin(),ends.end());

        while( i < intervals.size()){

            if(start[i] < ends[j]){
                rooms++;
                i++;
                maxRooms = max(rooms,maxRooms);
            }
            
            else if(start[i] >= ends[j]){

                rooms--;
                j++;

                
            }
        }



        
        return maxRooms;



        
    }
};
