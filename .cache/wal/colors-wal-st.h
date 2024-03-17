const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#040916", /* black   */
  [1] = "#314674", /* red     */
  [2] = "#42587B", /* green   */
  [3] = "#38518A", /* yellow  */
  [4] = "#3D629D", /* blue    */
  [5] = "#4E68A0", /* magenta */
  [6] = "#647FC0", /* cyan    */
  [7] = "#b0bbd5", /* white   */

  /* 8 bright colors */
  [8]  = "#7b8295",  /* black   */
  [9]  = "#314674",  /* red     */
  [10] = "#42587B", /* green   */
  [11] = "#38518A", /* yellow  */
  [12] = "#3D629D", /* blue    */
  [13] = "#4E68A0", /* magenta */
  [14] = "#647FC0", /* cyan    */
  [15] = "#b0bbd5", /* white   */

  /* special colors */
  [256] = "#040916", /* background */
  [257] = "#b0bbd5", /* foreground */
  [258] = "#b0bbd5",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
