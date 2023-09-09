#include <stdio.h>
int main() 
{
    int hits, misses;
    float hit_ratio;
	printf("Enter the number of Hits: ");
    scanf("%d", &hits);
    printf("Enter the number of Misses: ");
    scanf("%d", &misses);
    hit_ratio = (float) hits / (hits + misses) * 100;
    printf("The Hit ratio is: %.2f%%\n", hit_ratio);
    return 0;
}
