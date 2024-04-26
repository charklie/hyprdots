const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0b0232", /* black   */
  [1] = "#B00068", /* red     */
  [2] = "#C5006B", /* green   */
  [3] = "#0E3887", /* yellow  */
  [4] = "#0D4494", /* blue    */
  [5] = "#0C4897", /* magenta */
  [6] = "#0C4A99", /* cyan    */
  [7] = "#7ca3cb", /* white   */

  /* 8 bright colors */
  [8]  = "#56728e",  /* black   */
  [9]  = "#B00068",  /* red     */
  [10] = "#C5006B", /* green   */
  [11] = "#0E3887", /* yellow  */
  [12] = "#0D4494", /* blue    */
  [13] = "#0C4897", /* magenta */
  [14] = "#0C4A99", /* cyan    */
  [15] = "#7ca3cb", /* white   */

  /* special colors */
  [256] = "#0b0232", /* background */
  [257] = "#7ca3cb", /* foreground */
  [258] = "#7ca3cb",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
