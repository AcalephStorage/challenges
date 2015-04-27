int sumUpDigits(std::string inputString) {
 int answer = 0;
 for (int i = 0; i < inputString.size(); i++) {  
   if ('1' <= inputString[i] && inputString[i] <= '9') {
     answer += int(inputString[i]);
   }
  }
  return answer;
}