int main(void)
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("%.9f \n", a/b);     //상대오차가 10^-9 이므로 소수점 아래 9자리까지 표기
    return 0;
}
