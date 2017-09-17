void Boss()
{
    int k=rand(),i,j,alteracao_x=1,alteracao_y=1;
    float variacao_x=1,variacao_y=0;
//Cria o Boss #####################################################################
    if(cont==3400)
    {
        PlaySound(NULL, 0, 0);
        Desenha_Boss();
        bos=1;
        if(fase==1)
        PlaySound("Audio/boss.wav", NULL, SND_ASYNC|SND_NOSTOP|SND_FILENAME|SND_LOOP);
        if(fase==2)
        PlaySound("Audio/boss2.wav", NULL, SND_ASYNC|SND_NOSTOP|SND_FILENAME|SND_LOOP);
    }

    if(bos==1)
    {
        if(yb>80)
        {
            yb-=.25;
        }
        if(yb<=80)
        {
            if(fase==2){
            if(tiroboss<quantidade_tiro_boss)
            {
                if(k%const_tiro_boss==0)
                {
                    xprojb[tiroboss]=yb;
                    xtb[tiroboss]=xb+largura_boss/2 -1;
                    tiroboss++;
                }
            }}
            if(mb==1)
            {
                xb+=.5;
                if(xb>=90)
                    mb*=-1;
            }

            if(mb==-1)
            {
                xb-=.5;
                if(xb<=5)
                    mb*=-1;
            }

        }
         if(fase==1){
            if(k%(const_tiro_boss-4)==0&&tiroboss<50)
                {
                    xprojb[tiroboss]=yb;
                    xtb[tiroboss]=xb+largura_boss/2 -1;
                    tiroboss++;

                }

         }

        if(tiroboss>=1)
        {
            if(fase==2){
            for(i=0; i<tiroboss; i++)
            {
                xprojb[i]-=.6;
                if(xi+2.5>xtb[i])
                {
                    xtb[i]+=.15;
                }
                if(xi+2.5<xtb[i])
                {
                    xtb[i]-=.15;
                }
            }}
            if(fase==1){
                for(i=0;i<tiroboss;i++){
                    xprojb[i]+=variacao_y;
                    xtb[i]+=variacao_x;
                    if(variacao_y==-1)
                        alteracao_y=1;
                if(alteracao_y==1&&variacao_y==1)
                    alteracao_y=0;
                    if(alteracao_y==1)
                        variacao_y+=.2;
                if(alteracao_y==0)
                    variacao_y-=.2;
                    if(alteracao_x==1&&variacao_x==-1)
                        alteracao_x=0;
                    if(alteracao_x==0&&variacao_x==1)
                        alteracao_x=1;
                    if(alteracao_x==1)
                        variacao_x-=.2;
                    if(alteracao_x==0)
                        variacao_x+=.2;

                }
            }
            for(i=0; i<tiroboss; i++)
            {
                if(xprojb[i]<=0||xtb[i]>100||xtb[i]<0)
                {
                    tiroboss--;
                    for(j=0; j<tiroboss; j++)
                    {
                        xprojb[j]=xprojb[j+1];
                        xtb[j]=xtb[j+1];
                    }
                }
            }
        }
        if(tiroinimigo4<=maximo_tiro_inimigo4)
        {
            if(k%const_tiro_boss==0&&tiroinimigo4<maximo_inimigo4)
            {
                xprojinimigo4[tiroinimigo4]=yb;
                xtinimigo4[tiroinimigo4]=xb+5;
                kprojinimigo4[tiroinimigo4]=0;
                tiroinimigo4++;
            }
        }
        if(tiroinimigo4>=1)
        {
            for(i=0; i<tiroinimigo4; i++)
            {
                if(kprojinimigo4[i]<2.4)
                {
                    kprojinimigo4[i]+=.05;
                    if(xtinimigo4[i]<50)
                        xtinimigo4[i]+=.25;
                    if(xtinimigo4[i]>50)
                        xtinimigo4[i]-=.25;
                }
                xprojinimigo4[i]+=2-kprojinimigo4[i];
            }
            for(i=0; i<tiroinimigo4; i++)
            {
                if(xprojinimigo4[i]+5<=0)
                {
                    tiroinimigo4--;
                    for(j=i; j<tiroinimigo4; j++)
                    {
                        xprojinimigo4[j]=xprojinimigo4[j+1];
                        xtinimigo4[j]=xtinimigo4[j+1];
                        kprojinimigo4[j]=kprojinimigo4[j+1];
                    }
                }
            }
            for(i=0; i<tiroinimigo4; i++)
            {
                Desenha_Projeteis(xtinimigo4[i],xprojinimigo4[i],5,2);
            }
        }

    }
    Desenha_Boss();
    for(i=0; i<tiroboss; i++)
    {
        Desenha_Projeteis(xtb[i],xprojb[i],1.5,1);
    }
}
