static const char norm_fg[] = "#bfc0c2";
static const char norm_bg[] = "#02050b";
static const char norm_border[] = "#414348";

static const char sel_fg[] = "#bfc0c2";
static const char sel_bg[] = "#844833";
static const char sel_border[] = "#bfc0c2";

static const char urg_fg[] = "#bfc0c2";
static const char urg_bg[] = "#3f3f53";
static const char urg_border[] = "#3f3f53";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
