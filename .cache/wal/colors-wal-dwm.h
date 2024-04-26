static const char norm_fg[] = "#7ca3cb";
static const char norm_bg[] = "#0b0232";
static const char norm_border[] = "#56728e";

static const char sel_fg[] = "#7ca3cb";
static const char sel_bg[] = "#C5006B";
static const char sel_border[] = "#7ca3cb";

static const char urg_fg[] = "#7ca3cb";
static const char urg_bg[] = "#B00068";
static const char urg_border[] = "#B00068";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
