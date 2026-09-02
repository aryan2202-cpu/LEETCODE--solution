class Solution {
public:
    int findComplement(int num) {
        string h=std::format("{:b}",num);
        int n=0;
        int k=0;
        for(int i=h.size()-1;i>=0;i--){
            if(h[i]=='1'){
                k++;
            }
            else{
                  n=n+pow(2,k);
                  k++;

            }


        }
        return n;
        
    }
};
