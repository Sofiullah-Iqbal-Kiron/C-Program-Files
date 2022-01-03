// ac

#include<bits/stdc++.h>

int main()
{
    float N1, N2, N3, N4, N5, Media, final_media;
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
    Media = ((N1*2 + N2*3 + N3*4 + N4*1))/(2+3+4+1);
    printf("Media: %.1f\n", Media);
    if(Media>=7.0) printf("Aluno aprovado.\n");
    else if(Media<5.0) printf("Aluno reprovado.\n");
    else if(Media>=5.0 && Media<=6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%f", &N5);
        printf("Nota do exame: %.1f\n", N5);
        final_media = (N5+Media)/2;
        if(final_media>=5.0) printf("Aluno aprovado.\n");
        else printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n", final_media);
    }
    
    return 0;
}
