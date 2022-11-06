#include <stdio.h>
#include <stdlib.h>

int main()
{
    float guncelbakiye;
    float yatanpara;
    float cekilenpara;
    int islem;
    guncelbakiye = 0;
    printf("Guncel bakiyeniz:%.2f$\n",guncelbakiye);
    printf("Islemler\n");
    printf("1-Bakiye ogrenme\n");
    printf("2-Para yatirma\n");
    printf("3-Para cekme\n");
    printf("4-Kart iade\n");

    do
    {
        printf("Yapmak istediginiz islemi giriniz:\n");
        scanf("%d", &islem);
        switch (islem)
        {
        case 1:
            printf("Guncel bakiyeniz:%.2f$\n", guncelbakiye);
            break;
        case 2:
            printf("Yatirmak istediginiz tutari giriniz:\n");
            scanf("%f", &yatanpara);
            guncelbakiye = guncelbakiye + yatanpara;
            printf("PARA YATIRMA ISLEMI TAMAMLANDI.GUNCEL BAKIYENIZ:%.2f$\n", guncelbakiye);
            break;
        case 3:
            printf("Cekmek istediginiz tutari giriniz:\n");
            scanf("%f", &cekilenpara);
            if (guncelbakiye < cekilenpara)
            {
                printf("Bakiye yetersiz.\n");
            }
            else
            {
                guncelbakiye = guncelbakiye - cekilenpara;
                printf("PARA CEKME ISLEMI TAMAMLANDI.GUNCEL BAKIYENIZ:%.2f$\n", guncelbakiye);
            }

            break;
        }

    } while (islem != 4);

    printf("IYI GUNLER DILERIZ:)\n");
}
