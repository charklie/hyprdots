const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0A0A0A", /* black   */
  [1] = "#DC6018", /* red     */
  [2] = "#D95534", /* green   */
  [3] = "#A2105D", /* yellow  */
  [4] = "#8D1365", /* blue    */
  [5] = "#AD1B60", /* magenta */
  [6] = "#CD3C5C", /* cyan    */
  [7] = "#dc91ad", /* white   */

  /* 8 bright colors */
  [8]  = "#9a6579",  /* black   */
  [9]  = "#DC6018",  /* red     */
  [10] = "#D95534", /* green   */
  [11] = "#A2105D", /* yellow  */
  [12] = "#8D1365", /* blue    */
  [13] = "#AD1B60", /* magenta */
  [14] = "#CD3C5C", /* cyan    */
  [15] = "#dc91ad", /* white   */

  /* special colors */
  [256] = "#0A0A0A", /* background */
  [257] = "#dc91ad", /* foreground */
  [258] = "#dc91ad",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
