/* Array of {original codepoint, replacement codepoint} normalizations
   to perform on Julia identifiers, to canonicalize characters that
   are both easily confused and easily inputted by accident. */
static const uint32_t charmap[][2] = {
    { 0x025B, 0x03B5 }, // latin small letter open e -> greek small letter epsilon
    { 0x00B5, 0x03BC }, // micro sign -> greek small letter mu
    { 0x00B7, 0x22C5 }, // middot char -> dot operator (#25098)
    { 0x0387, 0x22C5 }, // Greek interpunct -> dot operator (#25098)
};
