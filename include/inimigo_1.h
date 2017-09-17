void Inimigo_1()
{
    int i,j,k=rand();
//Cria Inimigo 1 ################################################################
    if((cont>=1000&&cont<=2000)||quantidadeinimigos1>0)
    {
        if(quantidadeinimigos1<=maximo_inimigo1)
        {
            if(cont%58==0&&quantidadeinimigos1<5&&cont<=2000)
            {
                xinimigo1[quantidadeinimigos1]=100;
                yinimigo1[quantidadeinimigos1]=95;
                sentidoinimigo1[quantidadeinimigos1]=1;
                quantidadeinimigos1++;
            }
        }
    }
//################################################################################

//Movimenta Inimigo 1 ###########################################################
    if(quantidadeinimigos1>0)
    {
        for(i=0; i<quantidadeinimigos1; i++)
        {
            if(sentidoinimigo1[i]>0)
            {
                xinimigo1[i]-=.5;
                if(xinimigo1[i]<=5)
                    sentidoinimigo1[i]*=-1;
            }

            if(sentidoinimigo1[i]<0)
            {
                xinimigo1[i]+=.5;
                if(xinimigo1[i]>100||yinimigo1[i]+5<=0)
                    quantidadeinimigos1--;
            }
            yinimigo1[i]-=.15;
            if(xinimigo1[i]>100||yinimigo1[i]+5<=0)
            {
                for(j=i; j<quantidadeinimigos1; j++)
                {
                    yinimigo1[j]=yinimigo1[j+1];
                    xinimigo1[j]=xinimigo1[j+1];
                    sentidoinimigo1[j]=sentidoinimigo1[j+1];
                }
            }
        }
    }
    if(tiroinimigo1<=maximo_tiro_inimigo1)
    {
        for(i=0; i<quantidadeinimigos1; i++)
        {
            if(k%40==0&&tiroinimigo1<10)
            {
                xprojinimigo1[tiroinimigo1]=yinimigo1[i];
                xtinimigo1[tiroinimigo1]=xinimigo1[i]+2.5;
                tiroinimigo1++;
            }
        }
        if(tiroinimigo1>=1)
        {
            for(i=0; i<tiroinimigo1; i++)
            {
                xprojinimigo1[i]-=.6;
            }

            for(i=0; i<tiroinimigo1; i++)
            {
                if(xprojinimigo1[i]+2<=0)
                {
                    tiroinimigo1--;
                    for(j=i; j<tiroinimigo1; j++)
                    {
                        xprojinimigo1[j]=xprojinimigo1[j+1];
                        xtinimigo1[j]=xtinimigo1[j+1];
                    }
                }
            }
            for(i=0; i<tiroinimigo1; i++)
            {
                Desenha_Projeteis(xtinimigo1[i],xprojinimigo1[i],1.5,1);
            }
        }
    }
    for(i=0; i<quantidadeinimigos1; i++)
    {
        Desenha_Inimigos(xinimigo1[i],yinimigo1[i],5,1);
    }
//###############################################################################
}
