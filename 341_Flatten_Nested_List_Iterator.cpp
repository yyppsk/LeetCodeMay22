class NestedIterator {
    vector<int> flat;
    int i = 0;
public:
    void helper(vector<NestedInteger> &nestedList){
        for(int i = 0; i < nestedList.size(); i++){
            if(nestedList[i].isInteger()){
                flat.push_back(nestedList[i].getInteger());
            }else{
                helper(nestedList[i].getList());
            }
        }
    }
    NestedIterator(vector<NestedInteger> &nestedList) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        helper(nestedList);
    }
    
    int next() {
        int value = flat.at(i);
        i++;
        return value;
    }
    
    bool hasNext() {
        if(i<flat.size())
            return true;
        else
            return false;
    }
};