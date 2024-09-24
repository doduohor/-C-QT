#include <check.h>

#include "../calculate.h"

#define ACCURACY 1e-7
#define OK 0
#define FAIL 1

START_TEST(bin_test_010) {
  double result = 0, to_compare = -329.84875;
  char *expression = "12.34+56.78-90.12*34/7.68";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(bin_test_020) {
  double result = 0;
  int to_compare = -2;
  char *expression = "-5.0mod(-3.0)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(bin_test_030) {
  double result = 0;
  int to_compare = 0;
  char *expression = "10*10/10+10-10+(-10)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(bin_test_040) {
  double result = 0;
  int to_compare = 46;
  char *expression = "(3+5)*10-17*2";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(bin_test_050) {
  double result = 0;
  int to_compare = 10;
  char *expression = "1+2*(3+4/2-(1+2))*2+1";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(bin_test_061) {
  double result = 0;
  int to_compare = 256;
  char *expression = "2^2^3";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(bin_test_062) {
  double result = 0;
  int to_compare = 256;
  char *expression = "2^(2^(3))";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(bin_test_063) {
  double result = 0;
  int to_compare = 512;
  char *expression = "2^3^2";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(bin_test_064) {
  double result = 0;
  int to_compare = 512;
  char *expression = "2^(3^2)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(bin_test_065) {
  double result = 0;
  int to_compare = 64;
  char *expression = "(2^3)^2";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(bin_test_071) {
  double result = 0, to_compare = 3.213159095304;
  char *expression = "2^1.5^1.25^1.125";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(bin_test_072) {
  double result = 0, to_compare = 3.2131590953;
  char *expression = "2^(1.5^(1.25^1.125))";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(bin_test_080) {
  double result = 0;
  int to_compare = -20;
  char *expression = "(5+5)*(-2)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(bin_test_090) {
  double result = 0;
  int to_compare = 334;
  char *expression = "100*4+23-50/ 0.5+(123-112)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(bin_test_100) {
  double result = 0, to_compare = 3.37591240876;
  char *expression = "124.5mod21.2*25/137";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(bin_test_120) {
  double result = 0;
  int to_compare = 210;
  char *expression = "10-20*(-10)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(bin_test_130) {
  double result = 0, to_compare = 1.656566;
  char *expression = "2-(-2+2.343434)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(bin_test_140) {
  double result = 0, to_compare = 10.6666666667;
  char *expression = "(2^3+8)/1.5";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(bin_test_150) {
  double result = 0, to_compare = 9741926689912128;
  char *expression = "123456*78910111213";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(bin_test_160) {
  double result = 0;
  int to_compare = 1;
  char *expression = "512/2/2/2/2/2/2/2/2/2";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(bin_test_170) {
  double result = 0, to_compare = 18.25;
  char *expression = "17/4+(14/2*(3-1^4))";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(bin_test_180) {
  double result = 0;
  int to_compare = 3;
  char *expression = "5mod2*3";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(bin_test_190) {
  double result = 0;
  int to_compare = 128;
  char *expression =
      "1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+"
      "1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+"
      "1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+"
      "1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(bin_test_200) {
  double result = 0;
  long int to_compare = 3086432070;
  char *expression =
      "123456789+123456789+123456789+123456789+123456789+123456789+123456789+"
      "123456789+123456789+123456789+123456789+123456789+123456789+123456789+"
      "123456789+123456789+123456789+123456789+123456789+123456789+123456789+"
      "123456789+123456789+123456789+123456789+12345";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(bin_test_205) {
  double result = 0;
  long int to_compare = 1349;
  char *expression = "200*7-323+50/0.2+2*(123-112)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(bin_test_210) {
  double result = 0;
  long int to_compare = 1;
  char *expression = "sin(1)^2+cos(1)^2";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(bin_test_215) {
  double result = 0;
  long int to_compare = 512;
  char *expression = "2^3^2";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(bin_test_220) {
  double result = 0;
  long int to_compare = -156;
  char *expression = "100-2^(2^3)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(bin_test_230) {
  double result = 0;
  long int to_compare = 266;
  char *expression = "10.0+2^(2^(3))";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(bin_test_240) {
  double result = 0;
  long int to_compare = 0;
  char *expression = "(*)|(*))";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(bin_test_250) {
  double result = 0;
  char *expression = "cos(99.0)/2^(sin(0.5))*10";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq(result, cos(99.0) / pow(2, sin(0.5)) * 10);
}
START_TEST(bin_test_255) {
  double result = 0;
  char *expression = "7.2^(sin(55.0)-9^(cos(3.6))/7)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq(result, pow(7.2, (sin(55.) - pow(9, cos(3.6)) / 7)));
}

START_TEST(bin_test_260) {
  double result = 0;
  char *expression = "tan(2)-cos(45)+2^(sin(52))*5";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq(result, tan(2) - cos(45) + pow(2, sin(52)) * 5);
}

START_TEST(bin_test_265) {
  double result = 0;
  char *expression = "ln(140)*log(49)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq(result, log(140) * log10(49));
}

START_TEST(bin_test_270) {
  double result = 0;
  char *expression = "sin(0.25)-cos(22.5)+tan(0.5)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, sin(0.25) - cos(22.5) + tan(0.5), 1e-7);
}

START_TEST(bin_test_275) {
  double result = 0;
  char *expression = "-1*2.5/sin(360)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq(result, -1 * 2.5 / sin(360));
}

START_TEST(bin_test_280) {
  double result = 0;
  char *expression = "-tan(45)*cos(45)/2^(sin(33))*(-5)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq(result, -tan(45) * cos(45) / pow(2, (sin(33))) * -5);
}

START_TEST(bin_test_290) {
  double result = 0;
  char *expression = "-99mod8-58mod23/88^(32mod5)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq(result, -99 % 8 - 58 % 23 / pow(88, (32 % 5)));
}

START_TEST(bin_test_295) {
  double result = 0;
  double to_compare = -11718.;
  char *expression = "-81/(-9)-(-23)-(-25/0.5)*(-123-112)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(bin_test_310) {
  double result = 0;
  double to_compare = -1;
  char *expression = "-10mod3";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(bin_test_315) {
  double result = 0;
  double to_compare =
      -30.07216494845360824742268041237113402061855670103092783505154639;
  char *expression =
      "15/(7-(1+1))*3-(2+(1+1))*15/(7-(200+1))*3-(2+(1+1))*(15/"
      "(7-(1+1))*3-(2+(1+1))+15/(7-(1+1))*3-(2+(1+1)))";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(una_test_001) {
  double result = 0;
  int to_compare = 1;
  char *expression = "1-";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(una_test_002) {
  double result = 0;
  int to_compare = 1;
  char *expression = "-(-1)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(una_test_010) {
  double result = 0, to_compare = 0.841470984808;
  char *expression = "-sin(-1)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(una_test_020) {
  double result = 0, to_compare = 0.0;
  char *expression = "log(-2)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(isnan(result), isnan(to_compare), ACCURACY);
}

START_TEST(una_test_030) {
  double result = 0, to_compare = 1.51742712939;
  char *expression = "sqrt(ln(10))";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(mix_test_010) {
  double result = 0, to_compare = 1.927295218002;
  char *expression = "1+2*atan(0.5)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(mix_test_020) {
  double result = 0, to_compare = 0.362357754477;
  char *expression = "cos(10 mod 2.2)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(mix_test_030) {
  double result = 0, to_compare = 3.1495789549512371;
  char *expression = "-1+1/cos(250)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(mix_test_040) {
  double result = 0, to_compare = 1029.47722558;
  char *expression = "sqrt(30)+4^5";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(mix_test_050) {
  double result = 0, to_compare = -2.51408299676;
  char *expression = "log(25)-ln(50)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(mix_test_060) {
  double result = 0, to_compare = -2.51408299676;
  char *expression = "log(25)-ln(50)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(mix_test_071) {
  double result = 0, to_compare = 1.5;
  char *expression = "7mod3+5mod2/2^(9mod2)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(mix_test_080) {
  double result = 0, to_compare = 1.0537897805055807;
  char *expression = "sqrt(cos(2+7)+tan(2+5))";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(isnan(result), isnan(to_compare), ACCURACY);
}

START_TEST(mix_test_090) {
  double result = 0, to_compare = 5.3551331493231985;
  char *expression = "tan(250)-cos(45)+2^(sin(52))*5";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(mix_test_100) {
  double result = 0, to_compare = 1.259459505516;
  char *expression = "(sin(45)+cos(30)+tan(45)+tan(90))*2";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(mix_test_110) {
  double result = 0, to_compare = 0.602392604555;
  char *expression = "sin(sin(sin(sin(sin(90)))))";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(mix_test_120) {
  double result = 0, to_compare = 371.4245284710962223;
  char *expression = "2^8.5*1+sqrt(87.554+cos(1))";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(mix_test_130) {
  double result = 0, to_compare = 4.99381065316;
  char *expression = "(1+2)*4*cos(3.141592*7-2)+sin(2*3.141592)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(mix_test_140) {
  double result = 0, to_compare = -94.9166666667;
  char *expression = "16-(7+38*(6/2))*((3*6)-(9*(4+9-99)))/(96*9)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(mix_test_150) {
  double result = 0, to_compare = 1.4382888611192621;
  char *expression = "(4+1-1*23*5/4/6)/((cos(1)+cos(2))/(1+2+3))/7";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(mix_test_160) {
  double result = 0, to_compare = 6000000.841470984808;
  char *expression = "2/1+2+3+4*5*6^7-727 mod 728+((1000+500*2)*201)+sin(1)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(mix_test_170) {
  double result = 0, to_compare = 5.1885415637769915;
  char *expression =
      "cos(0.785)+sin(0.785)+tan(0.785)+acos(0.785)+asin(0.785)+atan(0.785)+ln("
      "0.785)+log(0.785)+sqrt(0.785)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(mix_test_180) {
  double result = 0, to_compare = 0.0;
  char *expression =
      "sin(cos(111))+tan(sqrt(222))-acos(asin(333))*1.56854408/ln(log(555))";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(isnan(result), isnan(to_compare), ACCURACY);
}

START_TEST(mix_test_190) {
  double result = 0, to_compare = -9684.9725462;
  char *expression = "5.006* 97.83 +3.7^8.37/(-5.6) + ln(25.6)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(mix_test_200) {
  double result = 0, to_compare = 20.9985890571;
  char *expression = "ln(35)*5-log(6)+sqrt(16)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(mix_test_210) {
  double result = 0, to_compare = 2.356194490192;
  char *expression = "acos(10 mod 3)+asin(1)+atan(1)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(mix_test_220) {
  double result = 0, to_compare = -15.1669665506192329;
  char *expression = "(ln(0.001)-log(1000))*atan(25)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(mix_test_230) {
  double result = 0, to_compare = -137.575224;
  char *expression = "-3*(-3.141592-(7*(-7)))";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(mix_test_240) {
  double result = 0, to_compare = -37.924680074964;
  char *expression = "3.1415-21/42+12*tan(5)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(ste_test_010) {
  double result = 0, to_compare = 1.0000000000000232;
  char *expression = "sin(1)^2+cos(1)^2";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(ste_test_020) {
  double result = 0, to_compare = 506540.382677068501994;
  char *expression = "506546+sin(2+8.5*1)-log(54654.6568)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(ste_test_031) {
  double result = 0;
  int to_compare = 16;
  char *expression = "4^sqrt(4)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(ste_test_032) {
  double result = 0;
  int to_compare = 64;
  char *expression = "4^sqrt(9)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(ste_test_041) {
  double result = 0, to_compare = 1.0670282348575784;
  char *expression = "3^sin(0.4)^3";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(ste_test_042) {
  double result = 0, to_compare = 1.0670282348577647;
  char *expression = "3^(sin(0.4)^3)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(ste_test_051) {
  double result = 0, to_compare = 2.1340564697151567;
  char *expression = "3^sin(0.4)^3*2";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(ste_test_052) {
  double result = 0, to_compare = 2.1340564697155294;
  char *expression = "(3^(sin(0.4)^3))*2";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(ste_test_061) {
  double result = 0, to_compare = 6.2681129394303134;
  char *expression = "1+2*3^sin(0.4)^3*2+1";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(ste_test_062) {
  double result = 0, to_compare = 6.2681129394310588;
  char *expression = "1+(2*(3^(sin(0.4)^3))*2)+1";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(ste_test_071) {
  double result = 0, to_compare = 0.5958232365911754;
  char *expression = "sin(-(-1))^3";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(ste_test_072) {
  double result = 0, to_compare = 1.9243316826065462;
  char *expression = "3^sin(-(-1))^3";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(ste_test_073) {
  double result = 0, to_compare = 1.924331682607011;
  char *expression = "3^(sin(-(-1))^3)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(ste_test_080) {
  double result = 0, to_compare = -25;
  char *expression = "(2+3)*(-(2+3))";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(ste_test_091) {
  double result = 0, to_compare = 0.5;
  char *expression = "5 mod (-1.5)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(ste_test_092) {
  double result = 0, to_compare = 4;
  char *expression = "(5 mod (-1.5)*4)^2";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(ste_test_101) {
  double result = 0, to_compare = 22;
  char *expression = "sqrt(100)/sqrt(25)*sqrt(121)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(ste_test_102) {
  double result = 0, to_compare = 22;
  char *expression = "(sqrt(100)/sqrt(25))*sqrt(121)";
  polish_notation(expression, 0, &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(ste_test_103) {
  double result = 0, to_compare = 0;
  char *expression = "ln((sin(81^2))^2+(cos(3^8))^2)";
  polish_notation(expression, "0.0", &result);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

START_TEST(ste_test_104) {
  double result = 0, to_compare = 0;
  char expression[] = "ln(x)";
  int flag = polish_notation(expression, "-2", &result);
  ck_assert_int_eq(flag, ERROR_CALC);
  ck_assert_double_eq_tol(result, to_compare, ACCURACY);
}

int main() {
  Suite *suite = suite_create("core");
  TCase *t_case = tcase_create("core");
  SRunner *sr = srunner_create(suite);

  suite_add_tcase(suite, t_case);

  tcase_add_test(t_case, bin_test_010);
  tcase_add_test(t_case, bin_test_020);
  tcase_add_test(t_case, bin_test_030);
  tcase_add_test(t_case, bin_test_040);
  tcase_add_test(t_case, bin_test_050);
  tcase_add_test(t_case, bin_test_061);
  tcase_add_test(t_case, bin_test_062);
  tcase_add_test(t_case, bin_test_063);
  tcase_add_test(t_case, bin_test_064);
  tcase_add_test(t_case, bin_test_065);
  tcase_add_test(t_case, bin_test_071);
  tcase_add_test(t_case, bin_test_072);
  tcase_add_test(t_case, bin_test_080);
  tcase_add_test(t_case, bin_test_090);
  tcase_add_test(t_case, bin_test_100);
  tcase_add_test(t_case, bin_test_120);
  tcase_add_test(t_case, bin_test_130);
  tcase_add_test(t_case, bin_test_140);
  tcase_add_test(t_case, bin_test_150);
  tcase_add_test(t_case, bin_test_160);
  tcase_add_test(t_case, bin_test_170);
  tcase_add_test(t_case, bin_test_180);
  tcase_add_test(t_case, bin_test_190);
  tcase_add_test(t_case, bin_test_200);

  tcase_add_test(t_case, bin_test_205);
  tcase_add_test(t_case, bin_test_210);
  tcase_add_test(t_case, bin_test_215);
  tcase_add_test(t_case, bin_test_220);
  tcase_add_test(t_case, bin_test_230);
  tcase_add_test(t_case, bin_test_250);
  tcase_add_test(t_case, bin_test_240);
  tcase_add_test(t_case, bin_test_250);
  tcase_add_test(t_case, bin_test_255);
  tcase_add_test(t_case, bin_test_260);
  tcase_add_test(t_case, bin_test_265);
  tcase_add_test(t_case, bin_test_270);
  tcase_add_test(t_case, bin_test_275);
  tcase_add_test(t_case, bin_test_280);
  tcase_add_test(t_case, bin_test_290);
  tcase_add_test(t_case, bin_test_295);
  tcase_add_test(t_case, bin_test_310);
  tcase_add_test(t_case, bin_test_315);

  tcase_add_test(t_case, una_test_001);
  tcase_add_test(t_case, una_test_002);
  tcase_add_test(t_case, una_test_010);
  tcase_add_test(t_case, una_test_020);
  tcase_add_test(t_case, una_test_030);
  tcase_add_test(t_case, mix_test_010);

  tcase_add_test(t_case, mix_test_020);
  tcase_add_test(t_case, mix_test_030);
  tcase_add_test(t_case, mix_test_040);
  tcase_add_test(t_case, mix_test_050);
  tcase_add_test(t_case, mix_test_060);
  tcase_add_test(t_case, mix_test_071);
  tcase_add_test(t_case, mix_test_080);
  tcase_add_test(t_case, mix_test_090);
  tcase_add_test(t_case, mix_test_100);
  tcase_add_test(t_case, mix_test_110);
  tcase_add_test(t_case, mix_test_120);
  tcase_add_test(t_case, mix_test_130);
  tcase_add_test(t_case, mix_test_140);
  tcase_add_test(t_case, mix_test_150);
  tcase_add_test(t_case, mix_test_160);
  tcase_add_test(t_case, mix_test_170);
  tcase_add_test(t_case, mix_test_180);
  tcase_add_test(t_case, mix_test_190);
  tcase_add_test(t_case, mix_test_200);
  tcase_add_test(t_case, mix_test_210);
  tcase_add_test(t_case, mix_test_220);
  tcase_add_test(t_case, mix_test_230);
  tcase_add_test(t_case, mix_test_240);
  tcase_add_test(t_case, ste_test_010);
  tcase_add_test(t_case, ste_test_020);
  tcase_add_test(t_case, ste_test_031);
  tcase_add_test(t_case, ste_test_032);
  tcase_add_test(t_case, ste_test_041);
  tcase_add_test(t_case, ste_test_042);
  tcase_add_test(t_case, ste_test_051);
  tcase_add_test(t_case, ste_test_052);
  tcase_add_test(t_case, ste_test_061);
  tcase_add_test(t_case, ste_test_062);
  tcase_add_test(t_case, ste_test_071);
  tcase_add_test(t_case, ste_test_072);
  tcase_add_test(t_case, ste_test_073);
  tcase_add_test(t_case, ste_test_080);
  tcase_add_test(t_case, ste_test_091);
  tcase_add_test(t_case, ste_test_092);
  tcase_add_test(t_case, ste_test_101);
  tcase_add_test(t_case, ste_test_102);
  tcase_add_test(t_case, ste_test_103);
  tcase_add_test(t_case, ste_test_104);

  int failed = 0;

  srunner_run_all(sr, CK_ENV);
  failed = srunner_ntests_failed(sr);
  srunner_free(sr);
  return failed == 0 ? EXIT_SUCCESS : EXIT_FAILURE;
}
