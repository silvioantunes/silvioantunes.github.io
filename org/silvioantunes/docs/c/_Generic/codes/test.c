#include <stdio.h>

//_Generic retronado strings
#define type_name(x) _Generic((x),       \
    char:           "char",              \
    signed char:    "signed char",       \
    unsigned char:  "unsigned char",     \
    short:          "short",             \
    unsigned short: "unsigned short",    \
    int:            "int",               \
    unsigned int:   "unsigned int",      \
    long:           "long",              \
    unsigned long:  "unsigned long",     \
    long long:      "long long",         \
    float:          "float",             \
    double:         "double",            \
    long double:    "long double",       \
    default:        "tipo desconhecido"  \
)

void main() {
    int a = 2;
    double b = 0.6;
    double c = 0.1;
    printf("Tipo de a: %s\n", type_name(a));
}

comentarios vermelho
# azul escuro
palavras resevadas azul
tipos roxo
