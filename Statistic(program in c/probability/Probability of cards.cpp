#include<stdio.h>
#include<stdlib.h>
int main()
{
	int choose;
	float total_cards=52,R=26,S=13,F=12,A=4,RK=2,KH=1,K=4,Q=4,H=13,C=13;//R=Red cards,S=Spade cards,F=face cards,A=ace cards,RK=red king,KH=knave of heart,K=King,Q=queen,H=heart,C=club,
	float R2=2,B8=2,Ace_Spade=1,Heart_Face=3,Red_Face=6;//R2=Red 2,B8=black 8,Ace_Spade= ace and spade common,Heart_Face=common of heart and face cards,Red_Face=red and face card common
	float p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12;
	printf("Menu-Driven:");
	printf("\n`````````````````````````````````````\n");
	printf("Probability of : \n\t1. Red\n\t2. Spade\n\t3. Face card\n\t4. An ace\n\t5. Red king\n\t6.Knave of heart\n\t7. King or Queen\n\t8. Heart or Club\n\t9. Red 2 or Black * or a Queen\n\t10. Spade or Ace\n\t11. Heart or Face card\n\t12. Red or Face card\n\t13. Exit\n");
	printf("```````````````````````````````````````");
	printf("Here,\n\tA card is drawn from a pack of %d cards at random.",total_cards);
	
	//calculationns
	p1=(R/total_cards);
	p2=(S/total_cards);
	p3=(F/total_cards);
	p4=(A/total_cards);
	p5=(RK/total_cards);
	p6=(KH/total_cards);
	p7=(K/total_cards)+(Q/total_cards);
	p8=(H/total_cards)+(C/total_cards);
	p9=(R2/total_cards)+(B8/total_cards)+(Q/total_cards);
	p10=((A/total_cards)+(S/total_cards))-((Ace_Spade)/total_cards);
	p11=((H/total_cards)+(F/total_cards))-((Heart_Face)/total_cards);
	p12=((R/total_cards)+(F/total_cards))-((Red_Face)/total_cards);
	
	while(choose<=13)
	{
		printf("\n\nChoose any number for operations: ");
		scanf("%d",&choose);
		switch(choose)
		{
			case 1:
				printf("P(a red) = P(E)= %.2f",p1);
				break;
			case 2:
				printf("P(a spade) = P(S)= %.2f",p2);
				break;
			case 3:
				printf("P(a face card) = P(F)= %.2f",p3);
				break;
			case 4:
				printf("P(an ace) = P(A)= %.2f",p4);
				break;
			case 5:
				printf("P(a red king) = P(RK)= %.2f",p5);
				break;
			case 6:
				printf("P(a knave of heart) = P(KH)= %.2f",p6);
				break;
			case 7:
				printf("P(king or queen) = P(K or Q)= %.2f",p7);
				break;
			case 8:
				printf("P(heart or club) = P(H or C)= %.2f",p8);
				break;
			case 9:
				printf("P(a red 2 or black 8 or a queen) = P(R2 or B8 or Q)= %.2f",p9);
				break;
			case 10:
				printf("P(a spade or ace card) = P(S or A)= %.2f",p10);
				break;
			case 11:
				printf("P(a heart or face card) = P(H or F)= %.2f",p11);
				break;
			case 12:
				printf("P(a red or face card) = P(R or F)= %.2f",p12);
				break;
			case 13:
				exit(0);
				break;
			default:
				printf("\nInvalide Error!!!!");
		}
	}
	return 0;
}
