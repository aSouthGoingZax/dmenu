/* See LICENSE file for copyright and license details. */

/* Default settings. These can be overriden by command line options. */
static int topbar = 1;                                    // -b option; dmenu appears at bottom if 0
static int centered = 1;                                  // -c option; centers dmenu on screen if 1
static int min_width = 750;                               // minimum width when centered
static const char *fonts[] = { "sans-serif:size=14" };    // -fn option; overrides fonts[0], default X11 font, or font set
static const char *prompt = NULL;                         // -p option; prompt to the left of input field
static const char *colors[SchemeLast][2] = {
	/*                         fg         bg      */
	/* night owl */
	[SchemeNorm]          = { "#d6deeb", "#011627" },
	[SchemeSel]           = { "#011627", "#82aaff" },
	[SchemeOut]           = { "#22da6e", "#011627" },     // the prompt uses this scheme
	[SchemeNormHighlight] = { "#c5e478", "#011627" },
	[SchemeSelHighlight]  = { "#434242", "#82aaff" },
	[SchemeOutHighlight]  = { "#00ff00", "#00ff00" },     // used only for muliple selections (ctrl+return), which I never do
};
static const unsigned int alpha = 0xe6;                   // 230 in hexadecimal, 230/255=0.9
static const unsigned int alphas[][2] = {
	/*                 fg      bg    */
	[SchemeNorm]   = { OPAQUE, alpha  },
	[SchemeOpaque] = { OPAQUE, OPAQUE },
};
static unsigned int lines = 15;                           // -l option; dmenu uses vertical list with given number of lines if non-zero
static const char worddelimiters[] = " ";                 // Characters not considered part of a word while deleting words, e.g. " /?\"&[]"
static const unsigned int border_width = 15;
