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
	[SchemeOut]           = { "#22da6e", "#011627" },    // the prompt uses this scheme
	[SchemeNormHighlight] = { "#c5e478", "#011627" },
	[SchemeSelHighlight]  = { "#434242", "#82aaff" },
	[SchemeOutHighlight]  = { "#00ff00", "#00ff00" },    // used only for muliple selections (ctrl+return), which I never do
	/* tokyo night */
	// [SchemeNorm]          = { "#a9b1d6", "#1a1b26" },
	// [SchemeSel]           = { "#1a1b26", "#7dcfff" },
	// [SchemeOut]           = { "#5feeb6", "#1a1b26" },    // the prompt uses this scheme
	// [SchemeNormHighlight] = { "#d4deff", "#1a1b26" },
	// [SchemeSelHighlight]  = { "#373e5e", "#7dcfff" },
	// [SchemeOutHighlight]  = { "#00ff00", "#00ff00" },    // used only for muliple selections (ctrl+return), which I never do
};
static const unsigned int baralpha = 0xe6;                // 230 in hexadecimal, 230/255=0.9
static const unsigned int borderalpha = OPAQUE;           // this seemingly does nothing, all transparency is controlled by  baralpha
static const unsigned int alphas[][3] = {
	/*                        fg      bg        border     */
	[SchemeNorm]          = { OPAQUE, baralpha, borderalpha },
	// [SchemeSel]           = { OPAQUE, baralpha, borderalpha },
	// [SchemeOut]           = { OPAQUE, baralpha, borderalpha },
	// [SchemeNormHighlight] = { OPAQUE, baralpha, borderalpha },
	// [SchemeSelHighlight]  = { OPAQUE, baralpha, borderalpha },
	[SchemeOpaque]        = { OPAQUE, OPAQUE,   OPAQUE      },
};
static unsigned int lines = 15;                           // -l option; dmenu uses vertical list with given number of lines if non-zero
static const char worddelimiters[] = " ";                 // Characters not considered part of a word while deleting words, e.g. " /?\"&[]"
static const unsigned int border_width = 15;
