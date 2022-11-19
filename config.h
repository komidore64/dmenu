/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

/* dracula standard colors */
#define dracula_std_background "#282A36"
#define dracula_std_foreground "#F8F8F2"
#define dracula_std_selection  "#44475A"
#define dracula_std_comment    "#6272A4"
#define dracula_std_red        "#FF5555"
#define dracula_std_orange     "#FFB86C"
#define dracula_std_yellow     "#F1FA8C"
#define dracula_std_green      "#50FA7B"
#define dracula_std_purple     "#BD93F9"
#define dracula_std_cyan       "#8BE9FD"
#define dracula_std_pink       "#FF79C6"

/* dracula ansi colors */
#define dracula_ansi_black   "#21222C"
#define dracula_ansi_red     "#FF5555"
#define dracula_ansi_green   "#50FA7B"
#define dracula_ansi_yellow  "#F1FA8C"
#define dracula_ansi_blue    "#BD93F9"
#define dracula_ansi_magenta "#FF79C6"
#define dracula_ansi_cyan    "#8BE9FD"
#define dracula_ansi_white   "#F8F8F2"

/* dracula ansi bright colors */
#define dracula_ansi_bright_black   "#6272A4"
#define dracula_ansi_bright_red     "#FF6E6E"
#define dracula_ansi_bright_green   "#69FF94"
#define dracula_ansi_bright_yellow  "#FFFFA5"
#define dracula_ansi_bright_blue    "#D6ACFF"
#define dracula_ansi_bright_magenta "#FF92DF"
#define dracula_ansi_bright_cyan    "#A4FFFF"
#define dracula_ansi_bright_white   "#FFFFFF"

/* -b option; if 0, dmenu appears at bottom */
static int topbar = 1;

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = { "Input:antialias=true:autohint=true:size=9" };

/* -p option; prompt to the left of input field */
static const char *prompt = NULL;

static const char *colors[SchemeLast][2] = {
    /*               fg                      bg */
    [SchemeNorm] = { dracula_std_foreground, dracula_std_background },
    [SchemeSel]  = { dracula_std_green,      dracula_std_selection },
    [SchemeOut]  = { dracula_std_selection,  dracula_std_green },
};

/*
 * -l option; if nonzero, dmenu uses vertical list with given number of lines
 */
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " /?\"&[]";
