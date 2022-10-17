#include <stdio.h>

int main() {
    FILE *fp;
    int num, quantity, i, temp;
    float price, value;
    char item[10];

    fp = fopen("inventory.txt", "w");
    
    if (fp == NULL) {
        printf("Error in opening file!");
        return 1;
    }

    printf("How many entries: ");
    fscanf(stdin, "%d", &i);
    
    printf("Enter inventory data in the given format: \n");
    printf("Itemname \t Number \t Price \t Quantity\n\n");

    temp = i;
    while (temp>0) {
        fscanf(stdin, "%s %d %f %d", item, &num, &price, &quantity);
        fprintf(fp, "%s %d %f %d", item, num, price, quantity);
        temp--;
    }
    fclose(fp);

    fp = fopen("inventory.txt", "r");
    printf("\n\n ========================================\n");
    printf("ITEMNAME \t NUMBER \t PRICE \t QUANTITY \t VALUE\n");

    temp = i;
    while (temp>0) {
        fscanf(fp, "%s %d %f %d", item, &num, &price, &quantity);
        value = price * quantity;
        fprintf(stdout, "%s \t %7d \t %8.2f \t %d \t %11.2f \n", item, num, price, quantity, value);
        temp--;
    }
    fclose(fp);
    return 0;
}
