rT, class _Traits, class _String>
basic_istream<_CharT, _Traits> &
__quoted_input ( basic_istream<_CharT, _Traits> &__is, _String & __string, _CharT __delim, _CharT __escape )
{
    __string.clear ();
    _CharT __c;
    __is >> __c;
    if ( __is.fail ())
        return __is;

    if (!_Traits::eq (__c, __delim)) // no delimiter, read the whole string
    {
        __is.unget ();
        __is >> __string;
        return __is;
    }

    __save_flags<_CharT, _Traits> sf(__is);
    noskipws (__is);
    while (true)
        {
        __is >> __c;
        if ( __is.fail ())
            break;
        if (_Traits::eq (__c, __escape))
        {
            __is >> __c;
            if ( __is.fail ())
                break;
        }
        else if (_Traits::eq (__c, __delim))
            break;
        __string.push_back ( __c );
        }
    return __is;
}


template <class _CharT, class _Traits, class _Iter>
basic_ostream<_CharT, _Traits>& operator<<(
         basic_ostream<_CharT, _Traits>& __os,
         const __quoted_output_proxy<_CharT, _Iter, _Traits> & __proxy)
{
    return __quoted_output (__os, __proxy.__first, __proxy.__last, __proxy.__delim, __proxy.__escape);
}

template <class _CharT, class _Traits, class _Allocator>
struct __quoted_proxy
{
    basic_string<_CharT, _Traits, _Allocator> &__string;
    _CharT __delim;
    _CharT __escape;

    __quoted_proxy(basic_string<_CharT, _Traits, _Allocator> &__s, _CharT __d, _CharT __e)
    : __string(__s), __delim(__d), __escape(__e) {}
};

template <class _CharT, class _Traits, class _Allocator>
__attribute__ ((__visibility__("hidden"))) __attribute__ ((internal_linkage))
basic_ostream<_CharT, _Traits>& operator<<(
        basic_ostream<_CharT, _Traits>& __os,
        const __quoted_proxy<_CharT, _Traits, _Allocator> & __proxy)
{
    return __quoted_output (__os, __proxy.__string.cbegin (), __proxy.__string.cend (), __proxy.__delim, __proxy.__escape);
}

//  extractor for non-const basic_string& proxies
template <class _CharT, class _Traits, class _Allocator>
__attribute__ ((__visibility__("hidden"))) __attribute__ ((internal_linkage))
basic_istream<_CharT, _Traits>& operator>>(
        basic_istream<_CharT, _Traits>& __is,
        const __quoted_proxy<_CharT, _Traits, _Allocator> & __proxy)
{
    return __quoted_input ( __is, __proxy.__string, __proxy.__delim, __proxy.__escape );
}


template <class _CharT>
__attribute__ ((__visibility__("hidden"))) __attribute__ ((internal_linkage))
__quoted_output_proxy<_CharT, const _CharT *>
quoted ( const _CharT *__s, _CharT __delim = _CharT('"'), _CharT __escape =_CharT('\\'))
{
    const _CharT *__end = __s;
    while ( *__end ) ++__end;
    return __quoted_output_proxy<_CharT, const _CharT *> ( __s, __end, __delim, __escape );
}


template <class _CharT, class _Traits, class _Allocator>
__attribute__ ((__visibility__("hidden"))) __attribute__ ((internal_linkage))
__quoted_output_proxy<_CharT, typename basic_string <_CharT, _Traits, _Allocator>::const_iterator>
__quoted ( const basic_string <_CharT, _Traits, _Allocator> &__s, _CharT __delim = _CharT('"'), _CharT __escape=_CharT('\\'))
{
    return __quoted_output_proxy<_CharT,
            typename basic_string <_CharT, _Traits, _Allocator>::const_iterator>
                    ( __s.cbegin(), __s.cend (), __delim, __escape );
}

template <class _CharT, class _Traits, class _Allocator>
__attribute__ ((__visibility__("hidden"))) __attribute__ ((internal_linkage))
__quoted_proxy<_CharT, _Traits, _Allocator>
__quoted ( basic_string <_CharT, _Traits, _Allocator> &__s, _CharT __delim = _CharT('"'), _CharT __escape=_CharT('\\'))
{
    return __quoted_proxy<_CharT, _Traits, _Allocator>( __s, __delim, __escape );
}
} }


using namespace std;

void Add(int **a, int k)
{
    for (int i = 0; i < k; i++)
        for (int j = 0; j < k; j++)
            a[i][j] = rand() % 90 + 11;
}

void Print(int **a, int k)
{
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
            cout << setw(4) << a[i][j];
        cout << endl;
    }
}

void T(int **a, int k)
{
    int t, d = 1;
    for (int i = 0; i < k; i++)
    {
        for (int j = d; j < k; j++)
        {
            t = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = t;
        }
        d++;
    }
}

void T1(int **a, int k)
{
    int t, d;
    if (k % 2 != 0)
        d = k / 2 + 1;
    else
        d = k /2;
    for (int i = 0; i < k; i++)
    {
        for (int j = k / 2 - 1; j >= 0; j--)
        {
            t = a[i][j];
            a[i][j] = a[i][d];
            a[i][d] = t;
            d++;
        }
        if (k % 2 != 0)
            d = k / 2 + 1;
        else
            d = k /2;
    }
}

int main()
{
    srand(time(0));
    int k;

    cout << "Введите размер квадратной матрицы " << endl;
    cin >> k;
    int **p = new int *[k];
    for (int i = 0; i < k; i++)
        p[i] = new int [k];
    Add(p, k);
    Print(p, k);
    T(p, k);
    T1(p, k);
    cout << endl;
    Print(p, k);
    for (int i = 0; i < k; i++)
        delete []p[i];
    delete []p;
    return (0);
}
