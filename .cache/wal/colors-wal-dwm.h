static const char norm_fg[] = "#b5def6";
static const char norm_bg[] = "#0d0d12";
static const char norm_border[] = "#7e9bac";

static const char sel_fg[] = "#b5def6";
static const char sel_bg[] = "#B06D83";
static const char sel_border[] = "#b5def6";

static const char urg_fg[] = "#b5def6";
static const char urg_bg[] = "#FCA163";
static const char urg_border[] = "#FCA163";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
