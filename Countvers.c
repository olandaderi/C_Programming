/*nama: DERI OLANDA
  NIM : 09021281419046
  Kelas: TI-Reg B*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdbool.h>
#include<windows.h>
bool ulang();
int fak(int r);
float CtoF(float suhu);
float CtoK(float suhu);
float KtoC(float suhu);
float FtoC(float suhu);
float aAr(float b,float Un1,float k1);
float bAR(float Un1,float Un2,float k1,float k2);
float b(float Un1,float Un2,float k1,float k2);
float a(float b,float Un1,float k1);
float Un(float a,float b,float k3);
int pilih;
float hasil;
float phi=(3.142857142857);
void menu()
{
    system("cls");
    header();
    printf("MENU : 1. MENGHITUNG\n       2. KONVERSI\n       0. KELUAR\n");
    printf("--------------------------------------------------------------------------------");
    printf("\nMASUKKAN PILIHAN : ");
    InputInt(&pilih);
    switch(pilih)
    {
        case 1:
            menghitung();
        break;
        case 2:
            konversi();
        break;
        case 0:
            exit(1);
        break;
        default:
            menu();
    }
    printf("--------------------------------------------------------------------------------");
    printf("MENUJU MENU (Y/N) : ");
    if(ulang())
    {
        menu();
    }
    else{exit(1);}
}
void menghitung()
{
    system("cls");
    header();
    printf("                                  MENGHITUNG\n");
    printf("--------------------------------------------------------------------------------");
    printf("MENU : 1. LUAS\n       2. VOLUME\n       3. KOMBINASI\n       4. FAKTORIAL\n       5. DERET\n       0. KEMBALI\n");
    printf("--------------------------------------------------------------------------------");
    printf("MASUKKAN PILIHAN : ");
    InputInt(&pilih);
    switch(pilih)
    {
        case 1:
            luas();
        break;
        case 2:
            volume();
        break;
        case 3:
            comb();
        break;
        case 4:
            faktorial();
        break;
        case 5:
            Deret();
        break;
        case 0:
            menu();
        break;
        default:
            menghitung();
    }
    printf("--------------------------------------------------------------------------------");
    printf("PENGHITUNG LAINNYA (Y/N) : ");
    if(ulang())
    {
        menghitung();
    }
}
void luas()
{
    system("cls");
    header();
    printf("                                MENGHITUNG LUAS\n");
    printf("--------------------------------------------------------------------------------");
    printf("BANGUN : 1. PERSEGI\n         2. SEGITIGA\n         3. LINGKARAN\n         4. TRAPESIUM\n         5. LAYANG-LAYANG\n         0. KEMBALI\n");
    printf("--------------------------------------------------------------------------------");
    printf("MASUKKAN PILIHAN : ");
    InputInt(&pilih);
    switch(pilih)
    {
        case 1:
            persegi();
        break;
        case 2:
            segitiga();
        break;
        case 3:
            lingkaran();
        break;
        case 4:
            trapesium();
        break;
        case 5:
            layang2();
        break;
        case 0:
            menghitung();
        break;
        default:
            luas();
    }
    printf("\n--------------------------------------------------------------------------------");
    printf("PILIH BANGUN LAIN (Y/N) : ");
    if(ulang())
    {
        luas();
    }
}
void persegi()
{
    float p,l;
    system("cls");
    header();
    printf("                            MENGHITUNG LUAS PERSEGI\n");
    printf("--------------------------------------------------------------------------------");
    printf("Masukkan Panjang = ");InputFlt(&p);
    printf("Masukkan Lebar   = ");InputFlt(&l);
    hasil=p*l;
    printf("Luas Persegi     = %.2f satuan^2",hasil);

}
void segitiga()
{
    float t,a;
    system("cls");
    header();
    printf("                            MENGHITUNG LUAS SEGITIGA\n");
    printf("--------------------------------------------------------------------------------");
    printf("Masukkan Alas   = ");InputFlt(&a);
    printf("Masukkan Tinggi = ");InputFlt(&t);
    hasil=(a*t)/2;
    printf("Luas Segitiga   = %.2f satuan^2",hasil);
}
void lingkaran()
{
    float r;
    system("cls");
    header();
    printf("                           MENGHITUNG LUAS LINGKARAN\n");
    printf("--------------------------------------------------------------------------------");
    printf("Masukkan Jari-jari = ");InputFlt(&r);
    hasil=phi*(r*r);
    printf("Luas Lingkaran     = %.2f satuan^2",hasil);
}
void trapesium()
{
    float a,b,t;
    system("cls");
    header();
    printf("                           MENGHITUNG LUAS TRAPESIUM\n");
    printf("--------------------------------------------------------------------------------");
    printf("Masukkan Sisi A = ");InputFlt(&a);
    printf("Masukkan Sisi B = ");InputFlt(&b);
    printf("Masukkan Tinggi = ");InputFlt(&t);
    hasil=((a+b)*t)/2;
    printf("Luas Trapesium  = %.2f satuan^2",hasil);
}
void layang2()
{
    float a,b;
    system("cls");
    header();
    printf("                         MENGHITUNG LUAS LAYANG-LAYANG\n");
    printf("--------------------------------------------------------------------------------");
    printf("Masukkan Diagonal 1 = ");InputFlt(&a);
    printf("Masukkan Diagonal 2 = ");InputFlt(&b);
    hasil=(a*b)/2;
    printf("Luas Layang-layang  = %.2f satuan^2",hasil);
}
void volume()
{
    system("cls");
    header();
    printf("                               MENGHITUNG VOLUME\n");
    printf("--------------------------------------------------------------------------------");
    printf("BANGUN : 1. PERSEGI\n");
    printf("         2. BOLA\n");
    printf("         3. TABUNG\n");
    printf("         4. KERUCUT\n");
    printf("         0. KEMBALI\n");
    printf("--------------------------------------------------------------------------------\n");
    printf("MASUKKAN PILIHAN : ");InputInt(&pilih);
    switch(pilih)
    {
        case 1 :
            persegivlm();
        break;
        case 2 :
            bola();
        break;
        case 3 :
            tabung();
        break;
        case 4 :
            kerucut();
        break;
        case 0:
            menghitung();
        break;
        default :
            volume();
    }
    printf("\n--------------------------------------------------------------------------------");
    printf("HITUNG VOLUME LAIN (Y/N) : ");
            if(ulang())
            {
                volume();
            }
}
void persegivlm()
{
    float p,l,t,hasil;

    system("cls");
    header();
    printf("                           MENGHITUNG VOLUME PERSEGI\n");
    printf("--------------------------------------------------------------------------------\n");
    printf("Masukkan Panjang = ");InputFlt(&p);
    printf("Masukkan Lebar   = ");InputFlt(&l);
    printf("Masukkan Tinggi  = ");InputFlt(&t);
    hasil=p*l*t;
    printf("Volume Persegi   = %.2f satuan^3",hasil);
}
void bola()
{
    float r;

    system("cls");
    header();
    printf("                             MENGHITUNG VOLUME BOLA\n");
    printf("--------------------------------------------------------------------------------\n");
    printf("Masukkan Jari-jari = ");InputFlt(&r);
    hasil=(4*phi*(r*r*r))/3;
    printf("Volume Bola        = %.2f satuan^3",hasil);
}
void tabung()
{
    float r,t;
    system("cls");
    header();
    printf("                            MENGHITUNG VOLUME TABUNG\n");
    printf("--------------------------------------------------------------------------------\n");
    printf("Masukkan jari-jari = ");InputFlt(&r);
    printf("Masukkan Tinggi    = ");InputFlt(&t);
    hasil=phi*r*r*t;
    printf("Volume Tabung      = %.2f satuan^3",hasil);
}
void kerucut()
{
    float r,t;
    system("cls");
    header();
    printf("                           MENGHITUNG VOLUME KERUCUT\n");
    printf("--------------------------------------------------------------------------------\n");
    printf("Masukkan jari-jari = ");InputFlt(&r);
    printf("Masukkan Tinggi    = ");InputFlt(&t);
    hasil=(phi*(r*r)*t)/3;
    printf("Volume Kerucut     = %.2f satuan^3",hasil);
}
void comb()
{
    int n,m,kom;

    system("cls");
    header();
    printf("                              MENGHITUNG KOMBINASI\n");
    printf("--------------------------------------------------------------------------------\n");
    printf("Masukkan N = ");InputInt(&n);
    printf("Masukkan M = ");InputInt(&m);
    kom=fak(n)/(fak(n-m)*fak(m));
    printf("Combinasi  = %d\n",kom);
    printf("\nLAKUKAN KOMBINASI LAIN (Y/N) : ");
    if(ulang())
    {
        comb();
    }
}
void faktorial()
{
    int n;

    system("cls");
    header();
    printf("                             MENGHITUNG FAKTORIAL\n");
    printf("--------------------------------------------------------------------------------\n");
    printf("Masukkan Angka = ");InputInt(&n);
    printf("          %d!  = %d",n,fak(n));
    printf("\nHITUNG FAKTORIAL LAIN (Y/N) : ");
    if(ulang())
    {
        faktorial();
    }
}
void Deret()
{
    system("cls");
    header();
    printf("                               MENGHITUNG DERET\n");
    printf("--------------------------------------------------------------------------------");
    printf("MENU : 1. ARITMATIKA\n       2. GEOMETRI\n       0. KEMBALI\n");
    printf("--------------------------------------------------------------------------------");
    printf("MASUKKAN PILIHAN : ");
    InputInt(&pilih);
    switch(pilih)
    {
        case 1:
            DeretAR();
        break;
        case 2:
            DeretGEO();
        break;
        case 0:
            menghitung();
        break;
        default:
            Deret();
    }
    printf("--------------------------------------------------------------------------------");
    printf("PENGHITUNG DERET LAIN (Y/N) : ");
    if(ulang())
    {
        Deret();
    }
}
void DeretAR()
{
    system("cls");
    header();
    printf("                          MENGHITUNG DERET ARITMATIKA \n");
    printf("--------------------------------------------------------------------------------");
    printf("MENU : 1. SUKU KE-n (Un)\n       2. JUMLAH n SUKU PERTAMA (Sn)\n       0. KEMBALI\n");
    printf("--------------------------------------------------------------------------------");
    printf("MASUKKAN PILIHAN : ");
    InputInt(&pilih);
    switch(pilih)
    {
        case 1:
            UAR();
        break;
        case 2:
            SnAR();
        break;
        case 0:
            Deret();
        default:
            DeretAR();
    }
    printf("--------------------------------------------------------------------------------");
    printf("HITUNG DERET ARITMATIKA LAIN  (Y/N) : ");
    if(ulang())
    {
        DeretAR();
    }
}
void SnAR()
{
    float Un1,Un2,A,B,k1,k2,hasil,k3;

    system("cls");
    header();
    printf("               MENGHITUNG JUMLAH n SUKU PERTAMA (DERET ARITMATIKA) \n");
    printf("--------------------------------------------------------------------------------\n");
    printf("U ke : ");scanf("%f",&k1);
    printf("U%.f : ",k1);scanf("%f",&Un1);
    printf("U ke : ");scanf("%f",&k2);
    printf("U%.f : ",k2);scanf("%f",&Un2);
    printf("\nMasukkan Sn yang di cari :");scanf("%f",&k3);

    B=bAR(Un1,Un2,k1,k2);
    A=aAr(B,Un1,k1);
    hasil=(k3/2)*((2*A)+((k3-1)*B));
    printf("S%.f : %.2f\n",k3,hasil);
    printf("a : %.2f\n",A);
    printf("d : %.2f\n",B);
}
void UAR()
{
    float Un1,Un2,A,B,k1,k2,Un3,k3;

    system("cls");
    header();
    printf("                    MENGHITUNG SUKU KE-n (DERET ARITMATIKA) \n");
    printf("--------------------------------------------------------------------------------\n");
    printf("U ke : ");scanf("%f",&k1);
    printf("U%.f : ",k1);scanf("%f",&Un1);
    printf("U ke : ");scanf("%f",&k2);
    printf("U%.f : ",k2);scanf("%f",&Un2);
    printf("\nMasukkan U yang di cari :");scanf("%f",&k3);

    B=bAR(Un1,Un2,k1,k2);
    A=aAr(B,Un1,k1);
    hasil=A+((k3-1)*B);
    printf("U%.f : %.2f\n",k3,hasil);
    printf("a : %.2f\n",A);
    printf("d : %.2f\n",B);
}
float bAR(float Un1,float Un2,float k1,float k2)
{
    return (Un2-Un1)/((k2-1)-(k1-1));

}
float aAr(float b,float Un1,float k1)
{
    return Un1-((k1-1)*b);
}
void DeretGEO()
{
    system("cls");
    header();
    printf("                           MENGHITUNG DERET GEOMETRI \n");
    printf("--------------------------------------------------------------------------------");
    printf("MENU : 1. SUKU KE-n (Un)\n       2. JUMLAH n SUKU PERTAMA (Sn)\n       0. KEMBALI\n");
    printf("--------------------------------------------------------------------------------");
    printf("MASUKKAN PILIHAN : ");
    InputInt(&pilih);
    switch(pilih)
    {
        case 1:
            U();
        break;
        case 2:
            Sn();
        break;
        case 0:
            Deret();
        default:
            DeretGEO();
    }
    printf("--------------------------------------------------------------------------------");
    printf("HITUNG DERET GEOMETRI LAIN  (Y/N) : ");
    if(ulang())
    {
        DeretGEO();
    }

}
void Sn()
{
    float Un1,Un2,A,B,k1,k2,hasil,k3;

    system("cls");
    header();
    printf("                MENGHITUNG JUMLAH n SUKU PERTAMA (DERET GEOMETRI) \n");
    printf("--------------------------------------------------------------------------------\n");
    printf("U ke : ");scanf("%f",&k1);
    printf("U%.f : ",k1);scanf("%f",&Un1);
    printf("U ke : ");scanf("%f",&k2);
    printf("U%.f : ",k2);scanf("%f",&Un2);
    printf("\nMasukkan Sn yang di cari :");scanf("%f",&k3);

    B=b(Un1,Un2,k1,k2);
    A=a(B,Un1,k1);
    hasil=(A*(1-(pow(B,(k3)))))/(1-B);
    printf("S%.f : %.2f\n",k3,hasil);
    printf("a : %.2f\n",A);
    printf("r : %.2f\n",B);
}
void U()
{
    float Un1,Un2,A,B,k1,k2,Un3,k3;

    system("cls");
    header();
    printf("                     MENGHITUNG SUKU KE-n (DERET GEOMETRI) \n");
    printf("--------------------------------------------------------------------------------\n");
    printf("U ke : ");scanf("%f",&k1);
    printf("U%.f : ",k1);scanf("%f",&Un1);
    printf("U ke : ");scanf("%f",&k2);
    printf("U%.f : ",k2);scanf("%f",&Un2);
    printf("\nMasukkan U yang di cari :");scanf("%f",&k3);

    B=b(Un1,Un2,k1,k2);
    A=a(B,Un1,k1);

    printf("U%.f : %.2f\n",k3,Un(A,B,k3));
    printf("a : %.2f\n",A);
    printf("r : %.2f\n",B);
}
float b(float Un1,float Un2,float k1,float k2)
{
    return pow((Un2/Un1),1/(k2-k1));
}
float a(float b,float Un1,float k1)
{
    return Un1/(pow(b,(k1-1)));
}
float Un(float a,float b,float k3)
{
    return a*(pow(b,(k3-1)));
}
void konversi()
{
    system("cls");
    header();
    printf("                                    KONVERSI\n");
    printf("--------------------------------------------------------------------------------");
    printf("MENU : 1. SUHU\n       2. DESIMAL KE ROMAWI \n       3. PANJANG\n       4. BERAT\n       0. KEMBALI\n");
    printf("--------------------------------------------------------------------------------");
    printf("MASUKKAN PILIHAN : ");
    InputInt(&pilih);
    switch(pilih)
    {
        case 1:
            suhu();
        break;
        case 2:
            desimal();
        break;
        case 3:
            panjang();
        break;
        case 4:
            berat();
        break;
        case 5:
        break;
        case 0:
            menu();
        break;
        default:
            konversi();
    }
    printf("--------------------------------------------------------------------------------");
        printf("PILIH KONVERSI LAIN (Y/N) : ");
    if(ulang())
    {
        konversi();
    }
}
void suhu()
{
        system("cls");
        header();
        printf("                                 KONVERSI SUHU\n");
        printf("--------------------------------------------------------------------------------");
        printf("JENIS : 1. CELCIUS\n        2. FARENHEITH\n        3. KELVIN\n        0. KEMBALI\n");
        printf("--------------------------------------------------------------------------------");
        printf("MASUKKAN PILIHAN : ");
        InputInt(&pilih);
        switch(pilih)
        {
        case 1:
            celcius();
        break;
        case 2:
            farenheith();
        break;
        case 3:
            kelvin();
        break;
        case 0:
            konversi();
        break;
        default:
            suhu();
        }
        printf("--------------------------------------------------------------------------------");
        printf("PILIH SUHU LAIN (Y/N) : ");
    if(ulang())
    {
        suhu();
    }

}
void celcius()
{
    float suhu;
    system("cls");
    header();
    printf("                               KONVERSI SUHU CELCIUS\n");
    printf("--------------------------------------------------------------------------------");
    printf("MASUKKAN SUHU DALAM CELCIUS : ");InputFlt(&suhu);
    printf("%.2f Celcius : \n",suhu);
    hasil=CtoF(suhu);
    printf("Farenheith = %.2f\n",hasil);
    hasil=CtoK(suhu);
    printf("Kelvin     = %.2f\n",hasil);
}
void farenheith()
{
    float suhu;
    system("cls");
    header();
    printf("                             KONVERSI SUHU FARENHEITH\n");
    printf("--------------------------------------------------------------------------------");
    printf("MASUKKAN SUHU DALAM FARENHEITH : ");InputFlt(&suhu);
    printf("%.2f Farenheith : \n",suhu);
    hasil=FtoC(suhu);
    printf("Celicus    = %.2f derajat\n",hasil);
    hasil=FtoC(suhu)+273.15;
    printf("Kelvin     = %.2f derajat\n",hasil);
}
void kelvin()
{
    float suhu;
    system("cls");
    header();
    printf("                               KONVERSI SUHU KELVIN\n");
    printf("--------------------------------------------------------------------------------");
    printf("MASUKKAN SUHU DALAM KELVIN : ");InputFlt(&suhu);
    printf("%.2f KELVIN : \n",suhu);
    hasil=KtoC(suhu);
    printf("Celicus    = %.2f derajat\n",hasil);
    hasil=(KtoC(suhu)*1.8)+32;
    printf("Farenheith = %.2f derajat\n",hasil);
}
float CtoF(float suhu)
{
    return (suhu*1.8)+32;
}
float CtoK(float suhu)
{
    return suhu+273.15;
}
float KtoC(float suhu)
{
    return suhu-273.15;
}
float FtoC(float suhu)
{
    return (suhu-32)/1.8;
}
void desimal()
{
    system("cls");
    header();
    printf("                          KONVERSI DESIMAL KE ROMAWI\n");
    printf("--------------------------------------------------------------------------------");
    int des[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    char rom[13][3]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    int n,i;
    char roma;

    printf("Masukkan Bilangan Desimal = ");scanf("%d",&n);
    if(n>0 && n<4000)
    {
        printf("Bilangan Romawi = ");
        for(i=0;i<13;i++)
        {
            while(n>=des[i])
            {
                n-=des[i];
                printf("%s",rom[i]);
            }
        }
    }
    else
    {
        printf("Angka Tidak Dapat dikonversi");
    }
    printf("\n--------------------------------------------------------------------------------");
        printf("MASUKKAN ANGKA LAIN (Y/N) : ");
    if(ulang())
    {
        desimal();
    }
}
void panjang()
{
    system("cls");
    header();
    printf("                                KONVERSI PANJANG\n");
    printf("--------------------------------------------------------------------------------");
    printf("SATUAN : 1. METER\n         2. INCHI \n         3. KAKI\n         4. YARD\n         0. KEMBALI\n");
    printf("--------------------------------------------------------------------------------");
    printf("MASUKKAN PILIHAN : ");
    InputInt(&pilih);
    switch(pilih)
    {
        case 1:
            meter();
        break;
        case 2:
            inchi();
        break;
        case 3:
            kaki();
        break;
        case 4:
            yard();
        break;
        case 0:
            konversi();
        break;
        default:
            panjang();
    }
    printf("--------------------------------------------------------------------------------");
    printf("HITUNG SATUAN LAIN (Y/N) : ");
            if(ulang())
            {
                panjang();
            }
}
void meter()
{
    float a;

    system("cls");
    header();
    printf("                      KONVERSI PANJANG DARI SATUAN METER\n");
    printf("--------------------------------------------------------------------------------");
    printf("Masukkan Panjang = ");InputFlt(&a);
    printf("%.2f meter :\n",a);
    hasil=a*39.370079;
    printf("= %.2f inchi\n",hasil);
    hasil=a*3.2808399;
    printf("= %.2f kaki\n",hasil);
    hasil=a*1.094;
    printf("= %.2f yard\n",hasil);
}
void inchi()
{
    float a;

    system("cls");
    header();
    printf("                      KONVERSI PANJANG DARI SATUAN INCHI\n");
    printf("--------------------------------------------------------------------------------");
    printf("Masukkan Panjang = ");InputFlt(&a);
    printf("%.2f inchi :\n",a);
    hasil=a*0.0254;
    printf("= .2f meter\n",hasil);
    hasil=a*0.083333;
    printf("= %.2f kaki\n",hasil);
    hasil=a*0.027778;
    printf("= %.2f yard\n",hasil);
}
void kaki()
{
    float a;

    system("cls");
    header();
    printf("                       KONVERSI PANJANG DARI SATUAN KAKI\n");
    printf("--------------------------------------------------------------------------------");
    printf("Masukkan Panjang = ");InputFlt(&a);
    printf("%.2f kaki :\n",a);
    hasil=a*0.3048;
    printf("= %.2f meter\n",hasil);
    hasil=a*12;
    printf("= %.2f inchi\n",hasil);
    hasil=a*0.333333;
    printf("= %.2f yard\n",hasil);
}
void yard()
{
    float a;

    system("cls");
    header();
    printf("                      KONVERSI PANJANG DARI SATUAN YARD\n");
    printf("--------------------------------------------------------------------------------");
    printf("Masukkan Panjang = ");InputFlt(&a);
    printf("%.2f yard :\n",a);
    hasil=a*0.9144;
    printf("= %.2f meter\n",hasil);
    hasil=a*3;
    printf("= %.2f kaki\n",hasil);
    hasil=a*36;
    printf("= %.2f inchi\n",hasil);
}
void berat()
{
    system("cls");
    header();
    printf("                                 KONVERSI BERAT\n");
    printf("--------------------------------------------------------------------------------");
    printf("SATUAN : 1. KILOGRAM\n         2. ONS \n         3. POUND\n         0. KEMBALI\n");
    printf("--------------------------------------------------------------------------------");
    printf("MASUKKAN PILIHAN : ");
    InputInt(&pilih);
    switch(pilih)
    {
        case 1:
            Kilogram();
        break;
        case 2:
            ons();
        break;
        case 3:
            pound();
        break;
        case 0:
            konversi();
        break;
        default:
            berat();
    }
    printf("--------------------------------------------------------------------------------");
    printf("HITUNG SATUAN LAIN (Y/N) : ");
            if(ulang())
            {
                berat();
            }
}
void Kilogram()
{
    float a;

    system("cls");
    header();
    printf("                      KONVERSI BERAT DARI SATUAN KILOGRAM\n");
    printf("--------------------------------------------------------------------------------");
    printf("Masukkan Berat = ");InputFlt(&a);
    printf("%.2f kg :\n",a);
    hasil=a*35.273966;
    printf("= %.2f ons\n",hasil);
    hasil=a*2.20463;
    printf("= %.2f pound\n",hasil);
}
void ons()
{
    float a;

    system("cls");
    header();
    printf("                        KONVERSI BERAT DARI SATUAN ONS\n");
    printf("--------------------------------------------------------------------------------");
    printf("Masukkan Berat = ");InputFlt(&a);
    printf("%.2f ons :\n",a);
    hasil=a*0.02834952;
    printf("= %.2f kg\n",hasil);
    hasil=a*0.0625;
    printf("= %.2f pound\n",hasil);
}
void pound()
{
    float a;

    system("cls");
    header();
    printf("                        KONVERSI BERAT DARI SATUAN ONS\n");
    printf("--------------------------------------------------------------------------------");
    printf("Masukkan Berat = ");InputFlt(&a);
    printf("%.2f pound :\n",a);
    hasil=a*0.45359237;

    printf("= %.2f kg\n",hasil);
    hasil=a*16;
    printf("= %.2f ons\n",hasil);
}
int fak(int r)
{
    int i;

    int x;
    if(r>0)
    {
        x=1;
        for(i=1;i<=r;i++)
        {
            x*=i;
        }
    }
    else if(r<0)
    {
        x=1;
        for(i=-1;i>=r;i--)
        {
            x*=i;
        }
    }
    return x;
}
void header()
{
    printf("********************************************************************************\n");
    printf("----------------------------MENGHITUNG dan KONVERSI-----------------------------\n");
    printf("********************************************************************************\n\n");
}
void mulai()
{
    system("cls");
    gotoxy(0,11);
    printf("                             Developed by: DERI OLANDA\n\n");
    printf("                             Press Any Key To Continue");
    gotoxy(40,15);
    getch();
}
void InputFlt(float *angka)
{
    scanf("%f",angka);
}
void InputInt(int *angka)
{
    scanf("%d",angka);
}
bool ulang()
{
    char u;

    scanf("%s",&u);
    if(u=='Y'||u=='y')
    {
        return 1;
    }
    else if(u=='N'||u=='n')
    {
        return 0;
    }
    else
    {
        ulang();
    }
}
void load()
{
    int i,j;

    char l[7]={"LOADING"};
    system("color f0");
    for(j=1;j<=3;j++)
    {
        gotoxy(69,22);
        for(i=0;i<=6;i++)
        {
            printf("%c",l[i]);
            Sleep(300);
        }
        system("cls");
    }
}
void gotoxy(unsigned short x, unsigned short y)
{
     HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
     COORD position = {x, y};
     SetConsoleCursorPosition(handle, position);
}
int main(void)
{
    system("title COUNTVERS");
    load();
    mulai();
    menu();
}
