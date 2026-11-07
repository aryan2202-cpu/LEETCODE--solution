class Solution {
public:
double equationCall(int x, int y, int radius, int xCenter, int yCenter){
return pow((x-xCenter),2) + pow((y-yCenter),2) - pow(radius,2);
}
bool equation1(int x1,int y1,int newXcoord1,int newYcoord1,int radius,int xCenter,int yCenter){
if(y1==newYcoord1){
double rhs = -equationCall(xCenter,y1,radius,xCenter,yCenter);
if(rhs<0) return false;
double a = xCenter - sqrt(rhs), b = xCenter + sqrt(rhs);
double lo = min(x1,newXcoord1), hi = max(x1,newXcoord1);
return (a>=lo && a<=hi) || (b>=lo && b<=hi);
} else {
double rhs = -equationCall(x1,yCenter,radius,xCenter,yCenter);
if(rhs<0) return false;
double a = yCenter - sqrt(rhs), b = yCenter + sqrt(rhs);
double lo = min(y1,newYcoord1), hi = max(y1,newYcoord1);
return (a>=lo && a<=hi) || (b>=lo && b<=hi);
}
}
bool equation2(int x1,int y1,int newXcoord2,int newYcoord2,int radius,int xCenter,int yCenter){
if(y1==newYcoord2){
double rhs = -equationCall(xCenter,y1,radius,xCenter,yCenter);
if(rhs<0) return false;
double a = xCenter - sqrt(rhs), b = xCenter + sqrt(rhs);
double lo = min(x1,newXcoord2), hi = max(x1,newXcoord2);
return (a>=lo && a<=hi) || (b>=lo && b<=hi);
} else {
double rhs = -equationCall(x1,yCenter,radius,xCenter,yCenter);
if(rhs<0) return false;
double a = yCenter - sqrt(rhs), b = yCenter + sqrt(rhs);
double lo = min(y1,newYcoord2), hi = max(y1,newYcoord2);
return (a>=lo && a<=hi) || (b>=lo && b<=hi);
}
}
bool equation3(int x2,int y2,int newXcoord1,int newYcoord1,int radius,int xCenter,int yCenter){
if(y2==newYcoord1){
double rhs = -equationCall(xCenter,y2,radius,xCenter,yCenter);
if(rhs<0) return false;
double a = xCenter - sqrt(rhs), b = xCenter + sqrt(rhs);
double lo = min(x2,newXcoord1), hi = max(x2,newXcoord1);
return (a>=lo && a<=hi) || (b>=lo && b<=hi);
} else {
double rhs = -equationCall(x2,yCenter,radius,xCenter,yCenter);
if(rhs<0) return false;
double a = yCenter - sqrt(rhs), b = yCenter + sqrt(rhs);
double lo = min(y2,newYcoord1), hi = max(y2,newYcoord1);
return (a>=lo && a<=hi) || (b>=lo && b<=hi);
}
}
bool equation4(int x2,int y2,int newXcoord2,int newYcoord2,int radius,int xCenter,int yCenter){
if(y2==newYcoord2){
double rhs = -equationCall(xCenter,y2,radius,xCenter,yCenter);
if(rhs<0) return false;
double a = xCenter - sqrt(rhs), b = xCenter + sqrt(rhs);
double lo = min(x2,newXcoord2), hi = max(x2,newXcoord2);
return (a>=lo && a<=hi) || (b>=lo && b<=hi);
} else {
double rhs = -equationCall(x2,yCenter,radius,xCenter,yCenter);
if(rhs<0) return false;
double a = yCenter - sqrt(rhs), b = yCenter + sqrt(rhs);
double lo = min(y2,newYcoord2), hi = max(y2,newYcoord2);
return (a>=lo && a<=hi) || (b>=lo && b<=hi);
}
}
bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
int newXcoord1 = x2;
int newYcoord1 = y1;
int newXcoord2 = x1;
int newYcoord2 = y2;
if(equation1(x1,y1,newXcoord1,newYcoord1,radius,xCenter,yCenter)) return true;
if(equation2(x1,y1,newXcoord2,newYcoord2,radius,xCenter,yCenter)) return true;
if(equation3(x2,y2,newXcoord1,newYcoord1,radius,xCenter,yCenter)) return true;
if(equation4(x2,y2,newXcoord2,newYcoord2,radius,xCenter,yCenter)) return true;
if(xCenter>=x1 && xCenter<=x2 && yCenter>=y1 && yCenter<=y2) return true;
if(equationCall(x1,y1,radius,xCenter,yCenter) <= 0) return true;
return false;
}
};