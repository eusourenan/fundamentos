#ifndef TEXT_STYLE_H
# define TEXT_STYLE_H

// Códigos ANSI para formatação de texto
#define ANSI_RESET      "\033[0m"   // Resetar formatação
#define ANSI_BOLD      "\033[1m"    // Negrito
#define ANSI_ITALIC    "\033[3m"    // Itálico
#define ANSI_UNDERLINE "\033[4m"    // Sublinhado

// Cores de texto
#define ANSI_COLOR_BLACK   "\033[30m"
#define ANSI_COLOR_RED     "\033[31m"
#define ANSI_COLOR_GREEN   "\033[32m"
#define ANSI_COLOR_YELLOW  "\033[33m"
#define ANSI_COLOR_BLUE    "\033[34m"
#define ANSI_COLOR_MAGENTA "\033[35m"
#define ANSI_COLOR_CYAN    "\033[36m"
#define ANSI_COLOR_WHITE   "\033[37m"

// Cores de texto em negrito
#define ANSI_BOLD_BLACK   "\033[1;30m"
#define ANSI_BOLD_RED     "\033[1;31m"
#define ANSI_BOLD_GREEN   "\033[1;32m"
#define ANSI_BOLD_YELLOW  "\033[1;33m"
#define ANSI_BOLD_BLUE    "\033[1;34m"
#define ANSI_BOLD_MAGENTA "\033[1;35m"
#define ANSI_BOLD_CYAN    "\033[1;36m"
#define ANSI_BOLD_WHITE   "\033[1;37m"

// Cores de texto em itálico
#define ANSI_ITALIC_BLACK   "\033[3;30m"
#define ANSI_ITALIC_RED     "\033[3;31m"
#define ANSI_ITALIC_GREEN   "\033[3;32m"
#define ANSI_ITALIC_YELLOW  "\033[3;33m"
#define ANSI_ITALIC_BLUE    "\033[3;34m"
#define ANSI_ITALIC_MAGENTA "\033[3;35m"
#define ANSI_ITALIC_CYAN    "\033[3;36m"
#define ANSI_ITALIC_WHITE   "\033[3;37m"

// Cores de fundo
#define ANSI_BG_BLACK   "\033[40m"
#define ANSI_BG_RED     "\033[41m"
#define ANSI_BG_GREEN   "\033[42m"
#define ANSI_BG_YELLOW  "\033[43m"
#define ANSI_BG_BLUE    "\033[44m"
#define ANSI_BG_MAGENTA "\033[45m"
#define ANSI_BG_CYAN    "\033[46m"
#define ANSI_BG_WHITE   "\033[47m"

#endif