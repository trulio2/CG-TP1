void Inimigo_3()
{
    int i,j,k=rand();
//Cria Inimigo 3 ##################################################################
    if((cont>=2100&&cont<=3200)||quantidadeinimigos3>0)
    {
        if(quantidadeinimigos3<=maximo_inimigo3)
        {
            if(cont%58==0&&quantidadeinimigos3<5&&cont<=3200)
            {
                xinimigo3[quantidadeinimigos3]=0;
                yinimigo3[quantidadeinimigos3]=100;
                sentidoinimigo3[quantidadeinimigos3]=0.1;
                quantidadeinimigos3++;
            }
        }
    }
//#################################################################################

//Movimenta Inimigo 3 ###########################################################
    if(quantidadeinimigos3>0)
    {
        for(i=0; i<quantidadeinimigos3; i++)
        {
            if(xinimigo3[i]<60)
                xinimigo3[i]+=.65;
            if(xinimigo3[i]>=60)
                xinimigo3[i]+=.3;
            yinimigo3[i]-=sentidoinimigo3[i];
            if(sentidoinimigo3[i]<.5)
                sentidoinimigo3[i]+=.05;
            if(xinimigo3[i]>100||yinimigo3[i]+5<=0)
            {
                quantidadeinimigos3--;
                for(j=i; j<quantidadeinimigos3; j++)
                {
                    yinimigo3[j]=yinimigo3[j+1];
                    xinimigo3[j]=xinimigo3[j+1];
                    sentidoinimigo3[j]=sentidoinimigo3[j+1];
                }
            }
        }
    }

    if(tiroinimigo3<=maximo_tiro_inimigo3)
    {
        for(i=0; i<quantidadeinimigos3; i++)
        {
            if(k%40==0&&tiroinimigo3<15)
            {
                xprojinimigo3[tiroinimigo3]=yinimigo3[i];
                xtinimigo3[tiroinimigo3]=xinimigo3[i]+2.5;
                kprojinimigo3[tiroinimigo3]=0;
                tiroinimigo3++;
            }
        }
        if(tiroinimigo3>=1)
        {
            for(i=0; i<tiroinimigo3; i++)
            {
                if(kprojinimigo3[i]<1.5)
                {
                    kprojinimigo3[i]+=.05;
                    if(xtinimigo3[i]<50)
                        xtinimigo3[i]+=.25;
                    if(xtinimigo3[i]>50)
                        xtinimigo3[i]-=.25;
                }
                xprojinimigo3[i]+=1-kprojinimigo3[i];
            }
            for(i=0; i<tiroinimigo3; i++)
            {
                if(xprojinimigo3[i]+5<=0)
                {
                    tiroinimigo3--;
                    for(j=i; j<tiroinimigo3; j++)
                    {
                        xprojinimigo3[j]=xprojinimigo3[j+1];
                        xtinimigo3[j]=xtinimigo3[j+1];
                        kprojinimigo3[j]=kprojinimigo3[j+1];
                    }
                }
            }
            for(i=0; i<tiroinimigo3; i++)
            {
                Desenha_Projeteis(xtinimigo3[i],xprojinimigo3[i],5,2);
            }
        }
    }

    for(i=0; i<quantidadeinimigos3; i++)
    {
        Desenha_Inimigos(xinimigo3[i],yinimigo3[i],5,2);
    }
}
