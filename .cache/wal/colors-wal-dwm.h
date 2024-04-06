static const char norm_fg[] = "#dc91ad";
static const char norm_bg[] = "#0A0A0A";
static const char norm_border[] = "#9a6579";

static const char sel_fg[] = "#dc91ad";
static const char sel_bg[] = "#D95534";
static const char sel_border[] = "#dc91ad";

static const char urg_fg[] = "#dc91ad";
static const char urg_bg[] = "#DC6018";
static const char urg_border[] = "#DC6018";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
