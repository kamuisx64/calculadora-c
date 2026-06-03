
int dividir(int a, int b) {

    if (b == 0) {
        return 0;
    }

    int quociente = 0;

    while (a >= b) {
        a -= b;
        quociente++;
    }

    return quociente;
}
