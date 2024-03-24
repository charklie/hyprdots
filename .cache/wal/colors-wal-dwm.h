static const char norm_fg[] = "#77e0e0";
static const char norm_bg[] = "#0A121B";
static const char norm_border[] = "#539c9c";

static const char sel_fg[] = "#77e0e0";
static const char sel_bg[] = "#05827D";
static const char sel_border[] = "#77e0e0";

static const char urg_fg[] = "#77e0e0";
static const char urg_bg[] = "#066769";
static const char urg_border[] = "#066769";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
