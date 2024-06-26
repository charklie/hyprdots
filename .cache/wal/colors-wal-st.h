const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0d0d12", /* black   */
  [1] = "#FCA163", /* red     */
  [2] = "#B06D83", /* green   */
  [3] = "#D06F86", /* yellow  */
  [4] = "#F7758D", /* blue    */
  [5] = "#678BB1", /* magenta */
  [6] = "#79A2F5", /* cyan    */
  [7] = "#b5def6", /* white   */

  /* 8 bright colors */
  [8]  = "#7e9bac",  /* black   */
  [9]  = "#FCA163",  /* red     */
  [10] = "#B06D83", /* green   */
  [11] = "#D06F86", /* yellow  */
  [12] = "#F7758D", /* blue    */
  [13] = "#678BB1", /* magenta */
  [14] = "#79A2F5", /* cyan    */
  [15] = "#b5def6", /* white   */

  /* special colors */
  [256] = "#0d0d12", /* background */
  [257] = "#b5def6", /* foreground */
  [258] = "#b5def6",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
