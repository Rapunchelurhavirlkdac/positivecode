sity of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

namespace std { inline namespace __1 {

using ::signbit;
using ::fpclassify;
using ::isfinite;
using ::isinf;
using ::isnan;
using ::isnormal;
using ::isgreater;
using ::isgreaterequal;
using ::isless;
using ::islessequal;
using ::islessgreater;
using ::isunordered;
using ::isunordered;

using ::float_t;
using ::double_t;


using ::abs;


using ::acos;
using ::acosf;
using ::asin;
using ::asinf;
using ::atan;
using ::atanf;
using ::atan2;
using ::atan2f;
using ::ceil;
using ::ceilf;
using ::cos;
using ::cosf;
using ::cosh;
using ::coshf;

using ::exp;
using ::expf;

using ::fabs;
using ::fabsf;
using ::floor;
using ::floorf;

using ::fmod;
using ::fmodf;

using ::frexp;
using ::frexpf;
using ::ldexp;
using ::ldexpf;

using ::log;
using ::logf;

using ::log10;
using ::log10f;
using ::modf;
using ::modff;

using ::pow;
using ::powf;

using ::sin;
using ::sinf;
using ::sinh;
using ::sinhf;

using ::sqrt;
using ::sqrtf;
using ::tan;
using ::tanf;

using ::tanh;
using ::tanhf;

using ::acosh;
using ::acoshf;
using ::asinh;
using ::asinhf;
using ::atanh;
using ::atanhf;
using ::cbrt;
using ::cbrtf;

using ::copysign;
using ::copysignf;

using ::erf;
using ::erff;
using ::erfc;
using ::erfcf;
using ::exp2;
using ::exp2f;
using ::expm1;
using ::expm1f;
using ::fdim;
using ::fdimf;
using ::fmaf;
using ::fma;
using ::fmax;
using ::fmaxf;
using ::fmin;
using ::fminf;
using ::hypot;
using ::hypotf;
using ::ilogb;
using ::ilogbf;
using ::lgamma;
using ::lgammaf;
using ::llrint;
using ::llrintf;
using ::llround;
using ::llroundf;
using ::log1p;
using ::log1pf;
using ::log2;
using ::log2f;
using ::logb;
using ::logbf;
using ::lrint;
using ::lrintf;
using ::lround;
using ::lroundf;

using ::nan;
using ::nanf;

using ::nearbyint;
using ::nearbyintf;
using ::nextafter;
using ::nextafterf;
using ::nexttoward;
using ::nexttowardf;
using ::remainder;
using ::remainderf;
using ::remquo;
using ::remquof;
using ::rint;
using ::rintf;
using ::round;
using ::roundf;
using ::scalbln;
using ::scalblnf;
using ::scalbn;
using ::scalbnf;
using ::tgamma;
using ::tgammaf;
using ::trunc;
using ::truncf;

using ::acosl;
using ::asinl;
using ::atanl;
using ::atan2l;
using ::ceill;
using ::cosl;
using ::coshl;
using ::expl;
using ::fabsl;
using ::floorl;
using ::fmodl;
using ::frexpl;
using ::ldexpl;
using ::logl;
using ::log10l;
using ::modfl;
using ::powl;
using ::sinl;
using ::sinhl;
using ::sqrtl;
using ::tanl;

using ::tanhl;
using ::acoshl;
using ::asinhl;
using ::atanhl;
using ::cbrtl;

using ::copysignl;

using ::erfl;
using ::erfcl;
using ::exp2l;
using ::expm1l;
using ::fdiml;
using ::fmal;
using ::fmaxl;
using ::fminl;
using ::hypotl;
using ::ilogbl;
using ::lgammal;
using ::llrintl;
using ::llroundl;
using ::log1pl;
using ::log2l;
using ::logbl;
using ::lrintl;
using ::lroundl;
using ::nanl;
using ::nearbyintl;
using ::nextafterl;
using ::nexttowardl;
using ::remainderl;
using ::remquol;
using ::rintl;
using ::roundl;
using ::scalblnl;
using ::scalbnl;
using ::tgammal;
using ::truncl;
template <class _A1>
__attribute__ ((__visibility__("hidden"))) __attribute__ ((internal_linkage))
constexpr typename enable_if<is_floating_point<_A1>::value, bool>::type
__libcpp_isnan_or_builtin(_A1 __lcpp_x) noexcept
{

    return __builtin_isnan(__lcpp_x);



}

template <class _A1>
__attribute__ ((__visibility__("hidden"))) __attribute__ ((internal_linkage))
constexpr typename enable_if<!is_floating_point<_A1>::value, bool>::type
__libcpp_isnan_or_builtin(_A1 __lcpp_x) noexcept
{
    return isnan(__lcpp_x);
}

template <class _A1>
__attribute__ ((__visibility__("hidden"))) __attribute__ ((internal_linkage))
constexpr typename enable_if<is_floating_point<_A1>::value, bool>::type
__libcpp_isinf_or_builtin(_A1 __lcpp_x) noexcept
{

    return __builtin_isinf(__lcpp_x);



}

template <class _A1>
__attribute__ ((__visibility__("hidden"))) __attribute__ ((internal_linkage))
constexpr typename enable_if<!is_floating_point<_A1>::value, bool>::type
__libcpp_isinf_or_builtin(_A1 __lcpp_x) noexcept
{
    return isinf(__lcpp_x);
}

template <class _A1>
__attribute__ ((__visibility__("hidden"))) __attribute__ ((internal_linkage))
constexpr typename enable_if<is_floating_point<_A1>::value, bool>::type
__libcpp_isfinite_or_builtin(_A1 __lcpp_x) noexcept
{

    return __builtin_isfinite(__lcpp_x);



}

template <class _A1>
__attribute__ ((__visibility__("hidden"))) __attribute__ ((internal_linkage))
constexpr typename enable_if<!is_floating_point<_A1>::value, bool>::type
__libcpp_isfinite_or_builtin(_A1 __lcpp_x) noexcept
{
    return isfinite(__lcpp_x);
}
template <class _IntT, class _FloatT,
    bool _FloatBigger = (numeric_limits<_FloatT>::digits > numeric_limits<_IntT>::digits),
    int _Bits = (numeric_limits<_IntT>::digits - numeric_limits<_FloatT>::digits)>
__attribute__ ((__visibility__("hidden"))) __attribute__ ((internal_linkage))
constexpr _IntT __max_representable_int_for_float() noexcept {
  _Static_assert(is_floating_point<_FloatT>::value, "must be a floating point type");
  _Static_assert(is_integral<_IntT>::value, "must be an integral type");
  _Static_assert(numeric_limits<_FloatT>::radix == 2, "FloatT has incorrect radix");
  _Static_assert((is_same<_FloatT, float>::value || is_same<_FloatT, double>::value || is_same<_FloatT,long double>::value), "unsupported floating point type");

  return _FloatBigger ? numeric_limits<_IntT>::max() : (numeric_limits<_IntT>::max() >> _Bits << _Bits);
}

// Convert a floating point number to the specified integral type after
// clamping to the integral types representable range.
//
// The behavior is undefined if `__r` is NaN.
template <class _IntT, class _RealT>
__attribute__ ((__visibility__("hidden"))) __attribute__ ((internal_linkage))
_IntT __clamp_to_integral(_RealT __r) noexcept {
  using _Lim = std::numeric_limits<_IntT>;
  const _IntT _MaxVal = std::__max_representable_int_for_float<_IntT, _RealT>();
  if (__r >= ::nextafter(static_cast<_RealT>(_MaxVal), INFINITY)) {
    return _Lim::max();
  } else if (__r <= _Lim::lowest()) {
    return _Lim::min();
  }
  return static_cast<_IntT>(__r);
}

} }
struct
{
    double d;
    bool b;
}

m[3001][501];

double count(int Q, int N)
{
    if (Q < N) return 0; //сумма выпавших чисел будет всегда как минимум равна количеству бросков
    if (Q > 6 * N) return 0; //сумма выпавших чисел будет как максимум равна количеству бросков, умноженных на 6
    if (N == 1) return (Q >= 1 && Q <= 6) ? 1 : 0;
    if (Q <= 0) return 0;
    if (N == 0) return 0;
    if (m[Q][N].b) return m[Q][N].d;

    double r = 0;

    for (int j = 1; j <= 6; ++j)
        r += count(Q - j, N - 1);

    m[Q][N].d = r;

    m[Q][N].b = true;

    return m[Q][N].d;
}



int main()
{

    int Q, N;

    std::ifstream in("die.in.txt");

    std::ifstream file("die.in.txt");//проверка открытия файла

    if (file.is_open())
        std::cout << "Все ОК! Файл открыт!\n\n" << std::endl;
    else
    {
        std::cout << "Файл не открыт!\n\n" << std::endl;
        return -1;
    }

    in >> N;
    in >> Q;

    std::cout << "введите количество бросков N = ";
    std::cin >> N;

    std::cout << "введите сумму выпавших чисел Q = ";
    std::cin >> Q;

    std::ofstream out("die.out.txt");

    out << count(Q, N) / pow(6, N);
    std::cout << count(Q, N) / pow(6,N);

    //std::cout << count(Q, N) / pow(6, N) << std::endl;

}
e __attribute__ ((__visibility__("hidden"))) __attribute__ ((internal_linkage))
typename std::enable_if<std::is_integral<_A1>::value, double>::type
trunc(_A1 __lcpp_x) noexcept {return ::trunc((double)__lcpp_x);}

} // extern "C++"



// -*- C++ -*-
//===------------------------ __undef_macros ------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the Univer