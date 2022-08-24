// Making change problem using Greedy Algorithm

#include<stdio.h>
#define max  100

//arr - will have list of needed coins
int ans[max];

int findMinCoins(int coins[], int size,  int value)
{
    int i, count = 0;

    for(i = 0; i < size; i++)
    {
        //take as much from coins[i]
        while(value >= coins[i])
        {
            //after taking the coin, reduce the value.
            value -= coins[i];
            ans[count] = coins[i];
            count++;
        }
        if(value == 0)
            break;

    }

    return count;
}

int main()
{
    int coins[] = {25,20,10,5};
    int value = 105, i;

    //find the size of the coins array
    int size = sizeof(coins)/sizeof(coins[0]);

    int MinCount = findMinCoins(coins,size,value);

    printf("Total Coins Needed = %d\n",MinCount);

    printf("Coins are:\t");
    for(i = 0; i < MinCount; i++)
        printf("%d ", ans[i]);

    return 0;
}
