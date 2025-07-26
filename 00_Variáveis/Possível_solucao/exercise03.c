#include "lib.h"
#include "text_style.h"

void	bonus_part()
{
	char			char_min = (char)(1 << ((sizeof(char) * 8) - 1));
	int				int_min = 1 << ((sizeof(int) * 8) - 1);
	short int		short_int_min = (short int)(1 << ((sizeof(short int) * 8) - 1));
	long long		long_min = 1L << ((sizeof(long long) * 8) - 1);
	unsigned long	max_long = -1;

	printf("\n\n\n");
	printf(ANSI_BOLD ANSI_UNDERLINE ANSI_COLOR_RED "Type\t\tUnderflow\t\t\t\t\tOverflow\n" ANSI_RESET);
	printf(ANSI_COLOR_GREEN "char\t\t%d-1=%d\t\t\t\t\t%d+1=%d\n" ANSI_RESET, char_min, (char)(char_min - 1), 127, (char)(127 + 1));
	printf("unsigned char\t%d-1=%d\t\t\t\t\t\t%d+1=%d\n" ANSI_RESET, 0, (unsigned char)(0 - 1), 255, (unsigned char)(255 + 1));
	printf(ANSI_COLOR_GREEN "short int\t%d-1=%d\t\t\t\t\t%d+1=%d\n" ANSI_RESET, short_int_min, (short int)(short_int_min - 1), 32767, (short int)(32767 + 1));
	printf("int\t\t%d-1=%d\t\t\t%d+1=%d\n" ANSI_RESET, int_min, (int)(int_min - 1), 2147483647, (int)(int_min - 1 + 1));
	printf(ANSI_COLOR_GREEN"unsigned int\t%u-1=%u\t\t\t\t\t%lu+1=%lu\n" ANSI_RESET, 0, 0 - 1, 4294967295, 4294967295 + 1);
	printf("long\t\t%lld-1=%ld\t%ld+1=%ld\n" ANSI_RESET, long_min, (long)(long_min - 1), 9223372036854775807, (long)(long_min - 1) + 1);
	printf(ANSI_COLOR_GREEN "unsigned long\t%u-1=%lu\t\t\t%lu+1=%lu\n" ANSI_RESET, 0, (unsigned long)0 - 1, max_long, max_long + 1);
}

void	exercise03()
{
	char			char_min = (char)(1 << ((sizeof(char) * 8) - 1));
	int				int_min = 1 << ((sizeof(int) * 8) - 1);
	short int		short_int_min = (short int)(1 << ((sizeof(short int) * 8) - 1));
	long long		long_min = 1L << ((sizeof(long long) * 8) - 1);
	unsigned long	max_long = -1;

	printf(ANSI_BOLD ANSI_UNDERLINE "type\t\tmin\t\t\tmax\n" ANSI_RESET);
	printf(ANSI_COLOR_YELLOW "char\t\t%d\t\t\t%d\n" ANSI_RESET, char_min, (char)(char_min - 1));
	printf(ANSI_COLOR_BLUE "unsigned char\t%d\t\t\t%d\n" ANSI_RESET, (unsigned char)(max_long + 1), (unsigned char)(max_long));
	printf(ANSI_COLOR_YELLOW "short int\t%d\t\t\t%d\n" ANSI_RESET, short_int_min, (short int)(short_int_min - 1));
	printf(ANSI_COLOR_BLUE"int\t\t%d\t\t%d\n" ANSI_RESET, int_min, (int)(int_min - 1));
	printf(ANSI_COLOR_YELLOW"unsigned int\t%u\t\t\t%u\n" ANSI_RESET, (unsigned int)max_long + 1, (unsigned int)(max_long));
	printf(ANSI_COLOR_BLUE "long\t\t%lld\t%ld\n" ANSI_RESET, long_min, (long)(long_min - 1));
	printf(ANSI_COLOR_YELLOW "unsigned long\t%ld\t\t\t%lu\n" ANSI_RESET, max_long + 1, max_long);

	float	float_min = FLT_MIN;
	float	float_max = FLT_MAX;
	double	double_min = DBL_MIN;
	double	double_max = DBL_MAX;

	printf(ANSI_COLOR_MAGENTA "float\t\t%e\t\t%e\n" ANSI_RESET, float_min, float_max);
	printf(ANSI_COLOR_CYAN "double\t\t%e\t\t%e\n" ANSI_RESET, double_min, double_max);

	bonus_part();
}

int	main()
{
	exercise03();
	return 0;
}