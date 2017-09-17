void Inimigo_4()
{
    int i,j,k=rand();
//Cria Inimigo 4 ##################################################################
    if((cont>=2100&&cont<=3200)||quantidadeinimigos4>0)
    {
        if(quantidadeinimigos4<=maximo_inimigo4)
        {
            if(cont%58==0&&quantidadeinimigos4<5&&cont<=3200)
            {
                xinimigo4[quantidadeinimigos4]=100;
                yinimigo4[quantidadeinimigos4]=100;
                sentidoinimigo4[quantidadeinimigos4]=0.1;
                quantidadeinimigos4++;
            }
        }
    }
//#################################################################################

//Movimenta Inimigo 4 ###########################################################
    if(quantidadeinimigos4>0)
    {
        for(i=0; i<quantidadeinimigos4; i++)
        {
            if(xinimigo4[i]>40)
                xinimigo4[i]-=.65;
            if(xinimigo4[i]<=40)
                xinimigo4[i]-=.3;
            yinimigo4[i]-=sentidoinimigo4[i];
            if(sentidoinimigo4[i]<.5)
                sentidoinimigo4[i]+=.05;
            if(xinimigo4[i]+5<0||yinimigo4[i]+5<=0)
            {
                quantidadeinimigos4--;
                for(j=i; j<quantidadeinimigos4; j++)
                {
                    yinimigo4[j]=yinimigo4[j+1];
                    xinimigo4[j]=xinimigo4[j+1];
                    sentidoinimigo4[j]=sentidoinimigo4[j+1];
                }
            }
        }
    }

    if(tiroinimigo4<=maximo_tiro_inimigo4)
    {
        for(i=0; i<quantidadeinimigos4; i++)
        {
            if(k%40==0&&tiroinimigo4<15)
            {
                xprojinimigo4[tiroinimigo4]=yinimigo4[i];
                xtinimigo4[tiroinimigo4]=xinimigo4[i]+2.5;
                kprojinimigo4[tiroinimigo4]=0;
                tiroinimigo4++;
            }
        }
        if(tiroinimigo4>=1)
        {
            for(i=0; i<tiroinimigo4; i++)
            {
                if(kprojinimigo4[i]<1.8)
                {
                    kprojinimigo4[i]+=.05;
                    if(xtinimigo4[i]<50)
                        xtinimigo4[i]+=.25;
                    if(xtinimigo4[i]>50)
                        xtinimigo4[i]-=.25;
                }
                xprojinimigo4[i]+=1-kprojinimigo4[i];
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

    for(i=0; i<quantidadeinimigos4; i++)
    {
        Desenha_Inimigos(xinimigo4[i],yinimigo4[i],5,2);
    }
}
