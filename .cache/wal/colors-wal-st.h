const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0f1016", /* black   */
  [1] = "#8F7AC1", /* red     */
  [2] = "#45A5AF", /* green   */
  [3] = "#2AC3DE", /* yellow  */
  [4] = "#2AC5E0", /* blue    */
  [5] = "#73DACA", /* magenta */
  [6] = "#9E86D4", /* cyan    */
  [7] = "#d4c4f2", /* white   */

  /* 8 bright colors */
  [8]  = "#9489a9",  /* black   */
  [9]  = "#8F7AC1",  /* red     */
  [10] = "#45A5AF", /* green   */
  [11] = "#2AC3DE", /* yellow  */
  [12] = "#2AC5E0", /* blue    */
  [13] = "#73DACA", /* magenta */
  [14] = "#9E86D4", /* cyan    */
  [15] = "#d4c4f2", /* white   */

  /* special colors */
  [256] = "#0f1016", /* background */
  [257] = "#d4c4f2", /* foreground */
  [258] = "#d4c4f2",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
