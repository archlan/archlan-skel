const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#02050b", /* black   */
  [1] = "#3f3f53", /* red     */
  [2] = "#844833", /* green   */
  [3] = "#8e694e", /* yellow  */
  [4] = "#212a60", /* blue    */
  [5] = "#234268", /* magenta */
  [6] = "#40516d", /* cyan    */
  [7] = "#808285", /* white   */

  /* 8 bright colors */
  [8]  = "#414348",  /* black   */
  [9]  = "#55546F",  /* red     */
  [10] = "#B16045", /* green   */
  [11] = "#BE8D69", /* yellow  */
  [12] = "#2D3981", /* blue    */
  [13] = "#2F598B", /* magenta */
  [14] = "#566D92", /* cyan    */
  [15] = "#bfc0c2", /* white   */

  /* special colors */
  [256] = "#02050b", /* background */
  [257] = "#bfc0c2", /* foreground */
  [258] = "#bfc0c2",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
