int maxProfit(int* prices, int pricesSize) {
    if(pricesSize==0)
    return 0;
    int maxPro=0;
    int minPrice=prices[0];
    for(int i=1;i<pricesSize;i++){
        if(minPrice>prices[i])
        minPrice=prices[i];
        int profit=prices[i]-minPrice;
        if(maxPro<profit)
        maxPro=profit;
    }
    return maxPro;
}
