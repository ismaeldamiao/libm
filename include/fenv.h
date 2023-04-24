/* *****************************************************************************
   MIT License

   Copyright (c) 2023 I.F.F. dos SANTOS

   Permission is hereby granted, free of charge, to any person obtaining a copy 
   of this software and associated documentation files (the “Software”), to 
   deal in the Software without restriction, including without limitation the 
   rights to use, copy, modify, merge, publish, distribute, sublicense, and/or 
   sell copies of the Software, and to permit persons to whom the Software is 
   furnished to do so, subject to the following conditions:

   The above copyright notice and this permission notice shall be included in 
   all copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING 
   FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS 
   IN THE SOFTWARE.
***************************************************************************** */
#ifndef FENV_H
#define FENV_H 1

#ifdef __cplusplus
extern "C" {
#endif


#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 199901L)
/* C99 (ISO/IEC 9899:1999) compatible source code. */

typedef fenv_t;
typedef fexcept_t;
#define FE_DIVBYZERO /* implementation-defined */
#define FE_INEXACT /* implementation-defined */
#define FE_INVALID /* implementation-defined */
#define FE_OVERFLOW /* implementation-defined */
#define FE_UNDERFLOW /* implementation-defined */

#define FE_ALL_EXCEPT 0

#define FE_DOWNWARD /* implementation-defined */
#define FE_TONEAREST /* implementation-defined */
#define FE_TOWARDZERO /* implementation-defined */
#define FE_UPWARD /* implementation-defined */

#define FE_DFL_ENV /* implementation-defined */

int feclearexcept(int excepts);
int fegetexceptflag(fexcept_t *flagp, int excepts);
int feraiseexcept(int excepts);
int fesetexceptflag(const fexcept_t *flagp, int excepts);
int fetestexcept(int excepts);

int fegetround(void);
int fesetround(int round);
int fegetenv(fenv_t *envp);
int feholdexcept(fenv_t *envp);
int fesetenv(const fenv_t *envp);
int feupdateenv(const fenv_t *envp);

#endif /* ISO C99 */


#ifdef __cplusplus
}
#endif

#endif /* FENV_H */
