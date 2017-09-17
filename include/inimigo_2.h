void Inimigo_2()
{
    int i,j,k=rand();
//Cria Inimigo 2 #################################################################
    if((cont>=1000&&cont<=2000)||quantidadeinimigos2>0)
    {
        if(quantidadeinimigos2<=maximo_inimigo2)
        {
            if(cont%58==0&&quantidadeinimigos2<5&&cont<=2000)
            {
                xinimigo2[quantidadeinimigos2]=0;
                yinimigo2[quantidadeinimigos2]=95;
                sentidoinimigo2[quantidadeinimigos2]=1;
                quantidadeinimigos2++;
            }
        }
    }
//#################################################################################

//Movimenta Inimigo 2 ###########################################################
    if(quantidadeinimigos2>0)
    {
        for(i=0; i<quantidadeinimigos2; i++)
        {
            if(sentidoinimigo2[i]>0)
            {
                xinimigo2[i]+=.5;
                if(xinimigo2[i]>=95)
                    sentidoinimigo2[i]*=-1;
            }

            if(sentidoinimigo2[i]<0)
            {
                xinimigo2[i]-=.5;
                if(xinimigo2[i]+5<0||yinimigo2[i]+5<=0)
                    quantidadeinimigos2--;
            }
            yinimigo2[i]-=.15;
            if(xinimigo2[i]+5<0||yinimigo2[i]+5<=0)
            {
                for(j=i; j<quantidadeinimigos2; j++)
                {
                    yinimigo2[j]=yinimigo2[j+1];
                    xinimigo2[j]=xinimigo2[j+1];
                    sentidoinimigo2[j]=sentidoinimigo2[j+1];
                }
            }
        }
    }

    if(tiroinimigo2<=maximo_tiro_inimigo2)
    {
        for(i=0; i<quantidadeinimigos2; i++)
        {
            if(k%40==0&&tiroinimigo2<10)
            {
                xprojinimigo2[tiroinimigo2]=yinimigo2[i];
                xtinimigo2[tiroinimigo2]=xinimigo2[i]+2.5;
                tiroinimigo2++;
            }
        }
        if(tiroinimigo2>=1)
        {
            for(i=0; i<tiroinimigo2; i++)
            {
                xprojinimigo2[i]-=.6;
            }

            for(i=0; i<tiroinimigo2; i++)
            {
                if(xprojinimigo2[i]+2<=0)
                {
                    tiroinimigo2--;
                    for(j=i; j<tiroinimigo2; j++)
                    {
                        xprojinimigo2[j]=xprojinimigo2[j+1];
                        xtinimigo2[j]=xtinimigo2[j+1];
                    }
                }
            }
            for(i=0; i<tiroinimigo2; i++)
            {
                Desenha_Projeteis(xtinimigo2[i],xprojinimigo2[i],1.5,1);
            }
        }
    }

    for(i=0; i<quantidadeinimigos2; i++)
    {
        Desenha_Inimigos(xinimigo2[i],yinimigo2[i],5,1);
    }
}
