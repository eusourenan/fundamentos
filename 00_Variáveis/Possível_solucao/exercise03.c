#include "lib.h"
#include "text_style.h"

void	exercise03()
{
	char			char_min = (char)(1 << ((sizeof(char) * 8) - 1));
	int				int_min = 1 << ((sizeof(int) * 8) - 1);
	short int		short_int_min = (short int)(1 << ((sizeof(short int) * 8) - 1));
	long long		long_min = 1L << ((sizeof(long long) * 8) - 1);
	unsigned long	max_long = -1;

	printf(ANSI_BOLD ANSI_UNDERLINE "type\t\tmin\t\t\tmax\n" ANSI_RESET);
	printf(ANSI_COLOR_BLUE "char\t\t%d\t\t\t%d\n" ANSI_RESET, char_min, (char)(char_min - 1));
	printf(ANSI_COLOR_YELLOW "unsigned char\t%d\t\t\t%d\n" ANSI_RESET, 0, (unsigned char)(max_long));
	printf(ANSI_COLOR_BLUE "short int\t%d\t\t\t%d\n" ANSI_RESET, short_int_min, (short int)(short_int_min - 1));
	printf(ANSI_COLOR_YELLOW"int\t\t%d\t\t%d\n" ANSI_RESET, int_min, (int)(int_min - 1));
	printf(ANSI_COLOR_BLUE "long\t\t%lld\t%ld\n" ANSI_RESET, long_min, (long)(long_min - 1));
	printf(ANSI_COLOR_YELLOW "unsigned long\t%d\t\t\t%lu\n" ANSI_RESET, 0, max_long);

	float	float_min = FLT_MIN;
	float	float_max = FLT_MAX;
	double	double_min = DBL_MIN;
	double	double_max = DBL_MAX;

	printf(ANSI_COLOR_MAGENTA "float\t\t%e\t\t%e\n" ANSI_RESET, float_min, float_max);
	printf(ANSI_COLOR_CYAN "double\t\t%e\t\t%e\n" ANSI_RESET, double_min, double_max);
}

int	main()
{
	exercise03();
	return 0;
}