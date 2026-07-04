/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int fuzzy = 1;     /* -F option; if 1, dmenu uses fuzzy matching */
static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 1000;                    /* minimum width when centered */
static const float menu_height_ratio = 4.0f;  /* This is the ratio used in the original calculation */
static const unsigned int alpha = 0xee;     /* Amount of opacity. 0xff is opaque             */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"HurmitNerdFont:size=16"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][3] = {
	/* fg         bg         border/alt */
	[SchemeNorm]          = { "#d3c6aa", "#272e33", "#272e33" }, // Muted cream text on deep grey
	[SchemeSel]           = { "#2d353b", "#a7c080", "#a7c080" }, // Dark charcoal text on soft green highlight
	[SchemeSelHighlight]  = { "#47523a", "#a7c080", "#a7c080" }, // Deep forest forest-green for matches *inside* the selection bar
	[SchemeNormHighlight] = { "#a7c080", "#272e33", "#272e33" }, // Bright green for matches *inside* normal grey rows
	[SchemeOut]           = { "#272e33", "#83c092", "#83c092" }, // Soft aqua for multi-completions
};

static const unsigned int alphas[SchemeLast][3] = {
	[SchemeNorm] = { OPAQUE, alpha, OPAQUE },
	[SchemeSel] = { OPAQUE, alpha, OPAQUE },
	[SchemeSelHighlight]  = { OPAQUE, alpha, OPAQUE }, // Added manually
	[SchemeNormHighlight] = { OPAQUE, alpha, OPAQUE }, // Added manually
	[SchemeOut] = { OPAQUE, alpha, OPAQUE },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 15;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;
