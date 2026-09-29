// pointer with structures
#include <stdio.h>

typedef struct
{
    int id;
    float price;
    int quantity;

} Product;

float applyDiscount(Product *p, float discount)
{
    p->price = (p->price - (p->price * discount / 100));

    return p->price;
}

int main()
{
    printf("Enter product info: id, price, quantity\n");
    Product one;
    scanf("%d %f %d", &one.id, &one.price, &one.quantity);
    printf("id %d ,price %.2f, quantity %d\n", one.id, one.price, one.quantity);

    float discount;
    printf("Enter discount\n");
    scanf("%f", &discount);

    printf("Price after discount of %.2f%% is %.2f", discount, applyDiscount(&one, discount));

    return 0;
}