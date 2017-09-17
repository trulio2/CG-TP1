void Personagem()
{
    int i,j;

//Projetil do Personagem
    if(tiro>0)
    {

        for(i=0; i<tiro; i++)
        {
            if(xproj[i]>=100)
            {
                tiro--;
                for(j=i; j<tiro; j++)
                {
                    xproj[j]=xproj[j+1];
                    xe[j]=xe[j+1];
                    i--;
                }
            }
            for(i=0; i<tiro; i++)
            {
                Desenha_Projeteis(xe[i],xproj[i],5,1);
            }
        }
        for(i=0; i<tiro; i++)
        {
            xproj[i]+=2;
        }
    }
//#######################

//Pulo
    if(yi>0&&yi<=10)
    {
        yi+=1-w;
        w+=.05;

    }
    if(yi<0)
    {
        w=0;
        yi=0;
    }
//####
    if(yi>10){
        yi-=.1;
    if(yi<=10)
        w=1;
    }
    Desenha_Personagem();
//if(vidas==0)
    //  exit(0);

}
