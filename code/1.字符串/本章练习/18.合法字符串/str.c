/**********************************************************************
 * 说明：五用n个不同的字符（编号1-n）组成一个字符串，两点要求：
        (1). 编号i的字符，如果2i>n则该字符作为最后一个字符，且如果该字符不是
             最后一个字符，后面可以使任意一个字符。
        (2). 如果2i<=n，则该字符不能作为最后一个字符，且该字符不是最后一个字符
             的时候，下一个字符一定要要大于等于2i
 * 解法：假设有n个字符，2i>n有P个字符，2i<=n有Q个字符，2i<其中Q=n/2, P=(n-n/2),
         假设前一个字符是i<=Q,那么不满足条件的个数有R=i*(2i-1)累加（i=1,2..,Q）
      所以：当m=1, 不满足条件的有Q个
             m=2        Qn个
             m=3        Qn^2+PR
             m=4        Qn^3+PRn+p^2R
             m=5        Qn^4+pRn^2+P^2Rn+P^3R
             m=x        Qn^(x-1)+PRn^(x-3)+P^2Rn^(x-4)+...+P^(x-2)R
      满足条件的个数:用总个数（n^m）-
 * *******************************************************************/