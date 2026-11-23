class ProductOfNumbers {
public:
    vector<int> x;
    ProductOfNumbers() {
   
    }
    
    void add(int num) {
        this->x.push_back(num);
    }
    
    int getProduct(int k) {
        long ans=1;
       for(int i=this->x.size()-k;i<this->x.size();i++){
             ans*=this->x[i];
        }return ans;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */