bool leapYear(int year) {
 if (year / 4 == 0 && year / 100 || year / 400 == 0)y {
    return true;
  }
  return false;
}