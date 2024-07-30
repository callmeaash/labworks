int main(void)
{
    int p , t;
    float r, si;

    printf("Principle : ");
    scanf("%i", &p);

    printf("Time (years) : ");
    scanf("%i", &t);

    printf("Rate : ");
    scanf("%f", &r);

    si = (p*t*r)/100;
    printf("Simple Interest is %.2f\n", si);
    return 0;
}
