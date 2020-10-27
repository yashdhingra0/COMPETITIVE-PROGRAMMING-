we have given weight array , profit array and target weight of knapsack now we have to choose the weight in such a way that we can maximize the profit 


    Case 1: The item is included in the optimal subset.
    Case 2: The item is not included in the optimal set.

Therefore, the maximum value that can be obtained from ‘n’ items is the max of the following two values.

    Maximum value obtained by n-1 items and W weight (excluding nth item).
    Value of nth item plus maximum value obtained by n-1 items and W minus the weight of the nth item (including nth item).

example int val[] = { 60, 100, 120 }; 
    int wt[] = { 10, 20, 30 }; 
    int W = 50; 
    profit is 220


so the approach is 
knapsack(int pro[],int wei[],int W,int n){// n is the size of the weight array
if(n==0 || w==0)
return 0;
if(wei[n-1]<=W)
RETURN wei[n-1] + max(knapsack(pro,wei,W-wei[n-1],n-1),knapsack(pro,wei,W,n-1));
else if
return knapsack(pro,wei,W,n-1)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////DP APPROACH TOP DOWN APPROACH/////////////////////////////////////////////////////

int knapSack(int W, int wt[], int val[], int n) 
{ 
    int i, w; 
    int T[n + 1][W + 1]; 
  
    // Build table K[][] in bottom up manner 
    for (i = 0; i <= n; i++) { 
        for (w = 0; w <= W; w++) { 
            if (i == 0 || w == 0) 
                K[i][w] = 0; 
            else if (wt[i - 1] <= w) 
                K[i][w] = max( 
                    val[i - 1] + T[i - 1][w - wt[i - 1]],  22 CASE BNENEGE JB LAST KO INCLUDE KIYA JB NHI KIYA 
                    T[i - 1][w]); 
            else
                T[i][w] = T[i - 1][w]; // JB LAST ELEMENT KO INCLUDE NHI KR RHE KYUNKI WAIT JYADA HH USKA 
        } 
    } 
  
    return K[n][W]; 
} 
