#include <stdio.h>
#include <conio.h>
int skor(int angka)
{
    char jawaban;
    printf("Jawab : ");scanf("%s",&jawaban);
    if(jawaban=='B' || jawaban=='b')
    {
        return angka+=2;
    }
    else if(jawaban=='C' || jawaban=='c')
    {
        return angka+=1;
    }
    else{return angka+=0;}
}
header()
{
    printf("*******************************************************************************\n\n");
    printf("-------------------------------------TEST EQ-----------------------------------\n\n");
    printf("*******************************************************************************\n\n");
}
main()
{
    int ME,KE,PE,umur;
    ME=0;KE=0;PE=0;
    char namadpn[20],namablk[20];

    system("title Test EQ");
    header();
    printf("Nama Depan   : ");scanf("%s",&namadpn);
    printf("Nama Belakang: ");scanf("%s",&namablk);
    printf("Umur         : ");scanf("%d",&umur);
    printf("------------------------------------------------------------------------------\n\n");
    printf("                                    PETUNJUK!\n");
    printf("1. Pilihlah jawaban yang Anda pikir paling sesuai dengan diri Anda\n");
    printf("2. ANDA HARUS MENJAWAB SETIAP SOAL SECARA BERURUTAN\n");
    printf("3. Jumlah Soal	: 75 soal\n");
    printf("4. Waktu	: 45 menit\n\n");
    printf("press any key to continue");
    getch();
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\                           I. TES KEMAPANAN EMOSI\n\n");
    printf("                          press any key to continue");
    getch();
    system("cls");
    printf("1. A. sensitif\n   B. obyektif\n");ME=skor(ME);
    printf("2. A. lembut hati\n   B. tak ramah\n");ME=skor(ME);
    printf("3. A. simpatik\n   B. hati-hati\n");ME=skor(ME);
    printf("4. A. bernafsu\n   B. bijaksana\n");ME=skor(ME);
    printf("5. A. responsive\n   B. hati-hati\n");ME=skor(ME);
    printf("6. A. rentan\n   B. tahan\n");ME=skor(ME);
    printf("7. A. mudah terpengaruh\n   B. kukuh,setia\n");ME=skor(ME);
    printf("8. A. naluri\n   B. tepekur\n");ME=skor(ME);
    printf("9. A. mau menerima\n   B. memperhitungkan\n");ME=skor(ME);
    printf("10. A. lekas mengerti\n    B. tidak tergesa-gesa\n");ME=skor(ME);
    printf("11. A. mudah kena serang\n    B. tenang,berhati-hati\n");ME=skor(ME);
    printf("12. A. tipis telingan\n    B. formal\n");ME=skor(ME);
    printf("13. A. berubah pendirian\n    B. begitu saja\n");ME=skor(ME);
    printf("14. A. tak menetu\n    B. pengendalian\n");ME=skor(ME);
    printf("15. A. tak karuan \n    B. malu-malu\n");ME=skor(ME);
    printf("16. A. sembrono\n    B. lazim/biasa\n");ME=skor(ME);
    printf("17. A. ramah\n    B. pendiam\n");ME=skor(ME);
    printf("18. A. jenaka\n    B. pendiam\n");ME=skor(ME);
    printf("19. A. bisa berubah\n    B. mencair\n");ME=skor(ME);
    printf("20. A. tak sabar\n    B. rendah hati\n");ME=skor(ME);
    printf("21. A. bergegas\n    B. tak terpengaruh\n");ME=skor(ME);
    printf("22. A. kata hati\n    B. praktis\n");ME=skor(ME);
    printf("23. A. dengan tajam\n    B. dengan logis\n");ME=skor(ME);
    printf("24. A. dengan perasaan\n    B. dengan pemikiran,analitik\n");ME=skor(ME);
    printf("25. A. demonstratif\n    B. halus,cerdik\n");ME=skor(ME);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n                              II. TES KEKUATAN EMOSI\n\n");
    printf("                            press any key to continue");
    getch();
    system("cls");
    printf("1. A. kontroversial\n   B. tahan,tabah\n   C. sopan\n");KE=skor(KE);
    printf("2. A. tak pasti\n   B. berani\n   C. dikenal\n");KE=skor(KE);
    printf("3. A. gelisah\n   B. yakin\n   C. semestinya\n");KE=skor(KE);
    printf("4. A. tidak yakin\n   B. pasti\n   C. mencukupi\n");KE=skor(KE);
    printf("5. A. tenang\n   B. tegas\n   C. cakap\n");KE=skor(KE);
    printf("6. A. gugup\n   B. tegar\n   C. tenang\n");KE=skor(KE);
    printf("7. A. hati-hati\n   B. kuat\n   C. cukupan\n");KE=skor(KE);
    printf("8. A. tergugah\n   B. hambar\n   C. sungguh-sungguh\n");KE=skor(KE);
    printf("9. A. tak berpendirian\n   B. tak gentar\n   C. tak memihak\n");KE=skor(KE);
    printf("10. A. bisa berubah\n    B. setia\n    C. kompromi\n");KE=skor(KE);
    printf("11. A. berubah-ubah\n    B. pasti\n    C. sedang-sedang\n");KE=skor(KE);
    printf("12. A. canggih\n    B. bergelora\n    C. lumayan\n");KE=skor(KE);
    printf("13. A. ragu-ragu\n    B. ulet\n    C. biasa\n");KE=skor(KE);
    printf("14. A. perlawanan\n    B. menahan\n    C. tenang\n");KE=skor(KE);
    printf("15. A. malu\n    B. mantap\n    C. rasional\n");KE=skor(KE);
    printf("16. A. sementara\n    B. teguh\n    C. biasa\n");KE=skor(KE);
    printf("17. A. mengambang\n    B. tegas\n    C. kebiasaan\n");KE=skor(KE);
    printf("18. A. terbuka\n    B. konsentrasi\n    C. tipikal\n");KE=skor(KE);
    printf("19. A. curiga\n    B. terus terang\n    C. tanpa kecuali\n");KE=skor(KE);
    printf("20. A. untung-untungan\n    B. tahan lama\n    C. tanpa kecuali\n");KE=skor(KE);
    printf("21. A. samar\n    B. bersemangat\n    C. sanggup\n");KE=skor(KE);
    printf("22. A. mendua\n    B. bergelora\n    C. tepat\n");KE=skor(KE);
    printf("23. A. dengan puas\n    B. dengan gembira\n    C. dengan setia\n");KE=skor(KE);
    printf("24. A. tak bahagia\n    B. ulet, tabah\n    C. teliti, akurat\n");KE=skor(KE);
    printf("25. A. tak dapat dipercaya\n    B. bersemangat\n    C. pantas\n");KE=skor(KE);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n                             III. TES KEPUASAN EMOSI\n");
    printf("                            press any key to continue");
    getch();
    system("cls");
    printf("1. A. sangat murah\n   B. sangat puas\n");PE=skor(PE);
    printf("2. A. gelisah\n   B. senang\n");PE=skor(PE);
    printf("3. A. bervariasi\n   B. moderat, lunak\n");PE=skor(PE);
    printf("4. A. sensitif\n   B. dengan lembut	\n");PE=skor(PE);
    printf("5. A. gelisah\n   B. gembira,suka\n");PE=skor(PE);
    printf("6. A. ragu-ragu\n   B. mujur\n");PE=skor(PE);
    printf("7. A. hati-hati\n   B. cocok, pantas\n");PE=skor(PE);
    printf("8. A. gelisah, resah\n   B. menyesuaikan diri\n");PE=skor(PE);
    printf("9. A. gelisah, tidak tenang\n   B. mampu, memadai\n");PE=skor(PE);
    printf("10. A. liat, kaku\n    B. gembira\n");PE=skor(PE);
    printf("11. A. berubah-ubah\n    B. periang\n");PE=skor(PE);
    printf("12. A. gugup\n   B. lincah, bersemangat\n");PE=skor(PE);
    printf("13. A. tak sabar\n    B. semangat\n");PE=skor(PE);
    printf("14. A. tak tentu\n    B. dinamis\n");PE=skor(PE);
    printf("15. A. tak karuan, sembrono\n    B. tegap\n");PE=skor(PE);
    printf("16. A. menjelajah\n    B. damai\n");PE=skor(PE);
    printf("17. A. bimbang\n    B. riang\n");PE=skor(PE);
    printf("18. A. gegabah\n    B. tenang\n");PE=skor(PE);
    printf("19. A. membingungkan\n    B. penuh kasih\n");PE=skor(PE);
    printf("20. A. tegang\n    B. kukuh, kuat\n");PE=skor(PE);
    printf("21. A. peduli\n    B. seimbang\n");PE=skor(PE);
    printf("22. A. keras kepala, bandel\n    B. setia\n");PE=skor(PE);
    printf("23. A. gelisah, tegang\n    B. ramah, hangat\n");PE=skor(PE);
    printf("24. A. dengan kaku\n    B. dengan pertimbangan\n");PE=skor(PE);
    printf("25. A. keras kepala, degil\n    B. demonstratif\n");PE=skor(PE);
    printf("\ntekan sembarang tombol untuk melihat hasil");
    getch();
    system("cls");
    printf("Nama                    : %s %s\n",namadpn,namablk);
    printf("Umur                    : %d tahun\n",umur);
    printf("Kemapanan Emosi         : ");
    if(ME>=40 && ME<=50)
    {
        printf("Sangat Mapan\n");
    }
    else if(ME>=24 && ME<=39)
    {
        printf("Mapan\n");
    }
    else{printf("Tidak Mapan\n");}

    printf("Kekuatan Emosi          : ");
    if(KE>=40 && KE<=50)
    {
        printf("Kuat\n");
    }
    else if(KE>=25 && KE<=39)
    {
        printf("Seimbang\n");
    }
    else{printf("Tidak seimbang\n");}

    printf("Kepuasan Emosi          : ");
    if(PE>=40 && PE<=50)
    {
        printf("Sangat Puas\n");
    }
    else if(PE>=24 && PE<=39)
    {
        printf("Puas\n");
    }
    else{printf("Kecewa\n");}
    getch();
}
