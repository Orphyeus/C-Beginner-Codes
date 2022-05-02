#include <stdio.h>
#include <stdlib.h>


int main() {
	
	char yanit;
	
	printf("***************************Maceralar Diyarina Hosgeldiniz***************************\n\n");
	printf("Kardesinle saklambac oynarken buyuk bir agacin kovuguna saklanmaya karar veriyorsun\n");
	printf("Oyuga giriyorsun ve birden bire dusmeye basliyorsun\n");
	printf("Ve boylece Canavarlar Diyarina ilk adimini atmis oluyorsun...\n");
	printf("Canavarlar Diyarina Yolculugunuz basliyorr\n");
	printf("********************************************\n");
	printf("Onunde bir kilic ve bir buyucu asasi duruyor\n");
	printf("Hangisini sececeksin?\n");
	printf("A)Kilic\n");
	printf("B)Asa\n\n");
	scanf("%s",&yanit);	
	
	
	if(yanit=='A')
	{
		printf("**************************************\n");
		printf("Kilici yerden alip yoluna devam ediyorsun\n");
		printf("Kilicin soguk kabzasý seni biraz güvende hissettiriyor\n");
		printf("Karsina korkutucu karanlýk bir orman cikiyor\n");
		printf("Bastýgýn topragý bile görmeden ormana dalýyorsun\n");
		printf("Daha 10 metre bile ilerlememisken 1 cift kizil goz goruyorsun\n");
		printf("Ne yapacaksin?\n");
		printf("A)Korkusuzca saldir\n");
		printf("B)Var gucunle kac\n\n");
		scanf("%s",&yanit);
		
		if(yanit=='A')
		{
			printf("**************************************\n");
			printf("Ustune atlayan yaratiga dogru kaldirdigin kilic sonuna kadar saplaniyor\n");
		    printf("Ellerinde ki kan seni biraz uzuyor ama zafer senin\n");
		    printf("Yoluna devam ediyorsun");
		    printf("Yol ikiye ayriliyor\n");
			printf("Sag taraftan kurt sesleri gelirken, sol taraftan ise ne olduðunu bile bilmediðin korkunc sesler geliyordu\n");
			printf("Sagdan mi gidersin yoksa sol taraftan mi?\n");
			printf("A)Sag\n");
			printf("B)Sol\n\n");
			scanf("%s",&yanit);
		    
		    if(yanit=='A')
			{
				printf("**************************************\n");
				printf("\n");
		    	scanf("%s",&yanit);
			
				if(yanit=='A')
				{
				printf("\n");
				}
				if(yanit=='B')
				{
				printf("\n");
				}	
			}
			if(yanit=='B')
			{
			printf("\n");
			}
		}
		
		if(yanit=='N')
		{
			printf("\n");
			scanf("%s",&yanit);
			
			if(yanit=='Y')
			{
			printf("\n");
			}
		}
		if(yanit=='N')
		{
			printf("\n\n");
		    scanf("%s",&yanit);
			if(yanit=='Y')
			{
			printf("\n");
		    }
		
			if(yanit=='N')
			{
			printf("\n");
			}
		}
	}
	
	if(yanit=='B')
	{
		printf("**************************************\n");
		printf("Asayi eline aldigin anda icini guzel bi his kapliyor ve asa parlamaya basliyor\n");
		printf("Gorunen o ki karanlik artik senin icin dert degil\n");
		printf("Eskisine nazaran daha emin adimlarla ilerliyorsun");
		printf("Karsina korkutucu karanlik bir orman cikiyor\n");
		printf("Neyseki isik sacan bir asan var\n");
		printf("Ormana daliyorsun\n");
		printf("Daha 10 metre bile ilerlememisken kurtumsu bir yaratikla karsilasiyorsun\n");
		printf("Ne yapacaksin?\n");
		printf("A)Korkusuzca saldir\n");
		printf("B)Var gucunle kac\n\n");
		scanf("%s",&yanit);
		if(yanit=='A')
		{
			printf("**************************************\n");
			printf("Ustune atlayan yaratiga dogru asani savuruyorsun\n");
		    printf("Bir ates topu zavalli hayvani kule donusturuyor\n");
		    printf("Gucun karsisinda saskina donerken yaratiktan kalan kullere bakarak biraz uzuluyorsun\n");
		    printf("Asana daha siki sarilarak ilerlemeye devam ediyorsun\n");
			printf("Sag taraftan kurt sesleri gelirken,\nsol taraftan ise ne oldugunu bile bilmedigin korkunc sesler geliyordu\n");
			printf("Sagdan mi gidersin yoksa sol taraftan mi?\n");
			printf("A)Sag\n");
			printf("B)Sol\n\n");
			scanf("%s",&yanit);
		}
		
		if(yanit=='B')
		{
			printf("\n\n");
		    scanf("%s",&yanit);
			if(yanit=='A')
			{
			printf("\n");
		    }
		
			if(yanit=='B')
			{
			printf("\n");
			}
		}
	}
	if(yanit!='A' && yanit!='B')
	{
		printf("\n Yanitiniz yanlis veya eksik, lütfen bir daha deneyiniz");
	}	
	
	return 0;
}
