//Determine if a Cell Is Reachable at a Given Time


#include <cmath>
#include<iostream>

class Solution {
public:
  bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
    int dx = fx - sx;
    int dy = fy - sy;
    
    double distance = sqrt(dx * dx + dy * dy);
    
    return (distance <= t);
  }
};
