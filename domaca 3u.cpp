#include <stdio.h>
int main()
{
int day, month;
printf ("Enter day: ");
scanf ("%d",&day);
printf ("Enter month: ");
scanf ("%d", &month);

switch (month)	
{
	case 1:
		if(day>=1 && day<=20)
		{
		printf ("Capricorn");
		}
		
		else if (day>=21 && day<=31)
		{
		printf ("Aquarius");
    	}
		else
		{
		printf ("Wrong number");
		}
		break;
		
		case 2:
		if(day>=1 && day<=19)
		{
		printf ("Aquaris");
		}
		
		else if (day>=20 && day<=28)
		{
		printf ("Piesces");
    	}
		else
		{
		printf ("Wrong number");
		}
		break;
		
			case 3:
		if(day>=1 && day<=21)
		{
		printf ("Piesces");
		}
		
		else if (day>=22 && day<=23)
		{
		printf ("Aries");
    	}
		else
		{
		printf ("Wrong number");
		}
		break;
			case 4:
		if(day>=1 && day<=20)
		{
		printf ("Aries");
		}
		
		else if (day>=21 && day<=30)
		{
		printf ("Taurus");
    	}
		else
		{
		printf ("Wrong number");
		}
		break;
		 case 5:
		if(day>=1 && day<=21)
		{
		printf ("Taurus");
		}
		
		else if (day>=22 && day<=31)
		{
		printf ("Gemini");
    	}
		else
		{
		printf ("Wrong number");
		}
		break;
		case 6:
		if(day>=1 && day<=22)
		{
		printf ("Gemini");
		}
		
		else if (day>=23 && day<=30)
		{
		printf ("Cancer");
    	}
		else
		{
		printf ("Wrong number");
		}
		break;
		case 7:
		if(day>=1 && day<=22)
		{
		printf ("Cancer");
		}
		
		else if (day>=23 && day<=31)
		{
		printf ("Leo");
    	}
		else
		{
		printf ("Wrong number");
		}
		break;
		case 8:
		if(day>=1 && day<=24)
		{
		printf ("Leo");
		}
		
		else if (day>=25 && day<=31)
		{
		printf ("Virgo");
    	}
		else
		{
		printf ("Wrong number");
		}
		break;
		case 9:
		if(day>=1 && day<=24)
		{
		printf ("Virgo");
		}
		
		else if (day>=25 && day<=31)
		{
		printf ("Libra");
    	}
		else
		{
		printf ("Wrong number");
		}
		break;
		case 10:
		if(day>=1 && day<=25)
		{
		printf ("Libra");
		}
		
		else if (day>=26 && day<=31)
		{
		printf ("Scorpio");
    	}
		else
		{
		printf ("Wrong number");
		}
		break;
		case 11:
		if(day>=1 && day<=22)
		{
		printf ("Scorpio");
		}
		
		else if (day>=23 && day<=30)
		{
		printf ("Sagittarius");
    	}
		else
		{
		printf ("Wrong number");
		}
		break;
		case 12:
		if(day>=1 && day<=23)
		{
		printf ("Sagittarius");
		}
		
		else if (day>=24 && day<=31)
		{
		printf ("Capricorn");
    	}
		else
		{
		printf ("Wrong number");
		}
		break;
		 
		 
}
		
	
}
