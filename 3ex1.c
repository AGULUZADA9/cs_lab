int main() {
    int n, sum = 0, product = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int xi = 2 * i + 1;
        sum += xi;
        product *= xi;
    }

    printf("Sum = %d\n", sum);
    printf("Product = %d\n", product);

    return 0;
}
