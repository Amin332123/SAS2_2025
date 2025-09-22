#include <stdio.h>
int main() {
    float m_s , km_h ;
    printf("Entrer la vitesse en kilomètres par heure (km/h) : ");
    scanf("%f", &km_h);
    m_s = km_h * 0.27778;
    printf("%.2f m/s", m_s );
    return 0;
}