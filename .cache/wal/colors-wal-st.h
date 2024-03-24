const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0A121B", /* black   */
  [1] = "#066769", /* red     */
  [2] = "#05827D", /* green   */
  [3] = "#056D93", /* yellow  */
  [4] = "#03A1A7", /* blue    */
  [5] = "#02A2D3", /* magenta */
  [6] = "#00AFED", /* cyan    */
  [7] = "#77e0e0", /* white   */

  /* 8 bright colors */
  [8]  = "#539c9c",  /* black   */
  [9]  = "#066769",  /* red     */
  [10] = "#05827D", /* green   */
  [11] = "#056D93", /* yellow  */
  [12] = "#03A1A7", /* blue    */
  [13] = "#02A2D3", /* magenta */
  [14] = "#00AFED", /* cyan    */
  [15] = "#77e0e0", /* white   */

  /* special colors */
  [256] = "#0A121B", /* background */
  [257] = "#77e0e0", /* foreground */
  [258] = "#77e0e0",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
