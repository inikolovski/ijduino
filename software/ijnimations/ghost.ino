/*
	IJnimation ghost by realitygaps
 */
const byte ghost1[8] PROGMEM = {
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000};

const byte ghost2[8] PROGMEM = {
  B00000000,
  B00000000,
  B10000000,
  B10000000,
  B10000000,
  B10000000,
  B10000000,
  B10000000};

const byte ghost3[8] PROGMEM = {
  B00000000,
  B10000000,
  B11000000,
  B01000000,
  B11000000,
  B11000000,
  B11000000,
  B01000000};

const byte ghost4[8] PROGMEM = {
  B10000000,
  B11000000,
  B01100000,
  B00100000,
  B11100000,
  B01100000,
  B11100000,
  B00100000};

const byte ghost5[8] PROGMEM = {
  B11000000,
  B11100000,
  B10110000,
  B10010000,
  B11110000,
  B00110000,
  B11110000,
  B01010000};

const byte ghost6[8] PROGMEM = {
  B11100000,
  B11110000,
  B01011000,
  B01001000,
  B11111000,
  B00011000,
  B11111000,
  B10101000};

const byte ghost7[8] PROGMEM = {
  B01110000,
  B11111000,
  B10101100,
  B00100100,
  B11111100,
  B10001100,
  B11111100,
  B01010100};

const byte ghost8[8] PROGMEM = {
  B00111000,
  B01111100,
  B11010110,
  B10010010,
  B11111110,
  B11000110,
  B11111110,
  B10101010};

const byte ghost9[8] PROGMEM = {
  B00011100,
  B00111110,
  B01101011,
  B01001001,
  B01111111,
  B01100011,
  B01111111,
  B01010101};

const byte ghost9a[8] PROGMEM = {
  B00011100,
  B00111110,
  B01101101,
  B01001001,
  B01111111,
  B01100011,
  B01111111,
  B01010101};

const byte ghost9b[8] PROGMEM = {
  B00011100,
  B00111110,
  B01011011,
  B01001001,
  B01111111,
  B01100011,
  B01111111,
  B01010101};

const byte ghost9c[8] PROGMEM = {
  B00011100,
  B00111110,
  B01001001,
  B01011011,
  B01111111,
  B01100011,
  B01111111,
  B01010101};

const byte ghost9d[8] PROGMEM = {
  B00011100,
  B00111110,
  B01001001,
  B01101101,
  B01111111,
  B01100011,
  B01111111,
  B01010101};

const byte ghost9e[8] PROGMEM = {
  B00011100,
  B00111110,
  B01101101,
  B01001001,
  B01111111,
  B01100011,
  B01111111,
  B01010101};

const byte ghost10[8] PROGMEM = {
  B00001110,
  B00011111,
  B00110101,
  B00100100,
  B00111111,
  B00110001,
  B00111111,
  B00101010};

const byte ghost11[8] PROGMEM = {
  B00000111,
  B00001111,
  B00011010,
  B00010010,
  B00011111,
  B00011000,
  B00011111,
  B00010101};

const byte ghost12[8] PROGMEM = {
  B00000011,
  B00000111,
  B00001101,
  B00001001,
  B00001111,
  B00001100,
  B00001111,
  B00001010};

const byte ghost13[8] PROGMEM = {
  B00000001,
  B00000011,
  B00000110,
  B00000100,
  B00000111,
  B00000110,
  B00000111,
  B00000101};

const byte ghost14[8] PROGMEM = {
  B00000000,
  B00000001,
  B00000011,
  B00000010,
  B00000011,
  B00000011,
  B00000011,
  B00000010};

const byte ghost15[8] PROGMEM = {
  B00000000,
  B00000000,
  B00000001,
  B00000001,
  B00000001,
  B00000001,
  B00000001,
  B00000001};


const byte ghost16[8] PROGMEM = {
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000};
  
int ghost() {
  bool skip;
  skip = render(ghost1, 200);
  if (skip) {
    return true;
  }
  skip = render(ghost2, 200);  
  if (skip) {
    return true;
  }
  skip = render(ghost3, 200);
  if (skip) {
    return true;
  }
  skip = render(ghost4, 200);
  if (skip) {
    return true;
  }
  skip = render(ghost5, 200);
  if (skip) {
    return true;
  }
  skip = render(ghost6, 200);
  if (skip) {
    return true;
  }
  skip = render(ghost7, 200);
  if (skip) {
    return true;
  }
  skip = render(ghost8, 200);
  if (skip) {
    return true;
  }
  skip = render(ghost9, 200);
  if (skip) {
    return true;
  }
  skip = render(ghost9a, 200);
  if (skip) {
    return true;
  }
  skip = render(ghost9b, 200);
  if (skip) {
    return true;
  }
  skip = render(ghost9c, 200);
  if (skip) {
    return true;
  }
  skip = render(ghost9d, 200);
  if (skip) {
    return true;
  }
  skip = render(ghost9e, 200);
  if (skip) {
    return true;
  }
  skip = render(ghost9a, 200);
  if (skip) {
    return true;
  }
  skip = render(ghost9b, 200);
  if (skip) {
    return true;
  }
  skip = render(ghost9c, 200);
  if (skip) {
    return true;
  }
  skip = render(ghost9d, 200);
  if (skip) {
    return true;
  }
  skip = render(ghost9e, 200);
  if (skip) {
    return true;
  }
  skip = render(ghost9a, 200);
  if (skip) {
    return true;
  }
  skip = render(ghost9b, 200);
  if (skip) {
    return true;
  }
  skip = render(ghost9c, 200);
  if (skip) {
    return true;
  }
  skip = render(ghost9d, 200);
  if (skip) {
    return true;
  }
  skip = render(ghost9e, 200);
  if (skip) {
    return true;
  }
  skip = render(ghost9, 200);
  if (skip) {
    return true;
  }
  skip = render(ghost10, 200);
  if (skip) {
    return true;
  }
  skip = render(ghost11, 200);
  if (skip) {
    return true;
  }
  skip = render(ghost12, 200);
  if (skip) {
    return true;
  }
  skip = render(ghost13, 200);
  if (skip) {
    return true;
  }
  skip = render(ghost14, 200);
  if (skip) {
    return true;
  }
  skip = render(ghost15, 200);
  if (skip) {
    return true;
  }
  skip = render(ghost16, 200);
  if (skip) {
    return true;
  }
  return false;
}

