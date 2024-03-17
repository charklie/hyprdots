static const char norm_fg[] = "#b0bbd5";
static const char norm_bg[] = "#040916";
static const char norm_border[] = "#7b8295";

static const char sel_fg[] = "#b0bbd5";
static const char sel_bg[] = "#42587B";
static const char sel_border[] = "#b0bbd5";

static const char urg_fg[] = "#b0bbd5";
static const char urg_bg[] = "#314674";
static const char urg_border[] = "#314674";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
