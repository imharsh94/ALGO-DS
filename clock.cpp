#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = (int) 1e9+7;

inline int mult(int a,int b,int p=MOD){return (ll)a*b%p;}

ll fpow(ll n,ll k,int p= MOD)
{
	ll r=1;
	for(;k;k>>=1)
	{
		if(k & 1)
			r = (r*n)%p;
		n = (n*n) % p;
	}
	return r;
}

inline int inv(int a,int p = MOD){return fpow(a,p-2,p);}

struct Matrix
{
	int x[2][2];

	Matrix()
	{
		memset(x,0,sizeof(x));
	}

	int* operator [] (int r) {
        return x[r];
    }

    static Matrix unit()
    {
    	Matrix res;
    	for (int i = 0; i < 2; ++i)
    	{
    		res[i][i] = 1;
    		
    	}
    	return res;
    }

    friend Matrix operator *(Matrix A,Matrix B)
    {
    	Matrix res;
    	for (int i = 0; i < 2; ++i)
    	{
    		for(int k=0; k<2;k++)
    		{
    			for(int j=0;j<2;j++)
    			{
    				res[i][j] = (res[i][j] + (long long)A[i][k] * B[k][j]) % MOD;

    			}
    		}
    	}

    	return res;
    }

	friend Matrix operator + (Matrix A, Matrix B)
	{
		Matrix res;
		for (int i = 0; i < 2; ++i)
			for (int j = 0; j < 2; ++j)
			{
				res[i][j] = A[i][j] + B[i][j];
			}
		return res;
	}

	friend Matrix operator ^(Matrix A, long long k)
	{
		if(k == 0) return unit();
		Matrix res,tmp;
		for (int i = 0; i < 2; ++i)
		{
			for(int j=0; j<2 ; j++)
			{
				res[i][j] = tmp[i][j] = A[i][j];
			}
		}
		k--;
		while(k)
		{
			if(k&1) res = res*tmp;
			tmp = tmp * tmp;
			k >>= 1;
		}
		return res;
	}
} ;


void solve()
{
	int test; cin>>test;
	while(test--)
	{
		int l,d; long long t;
		cin>>l>>d>>t;
		int coef = mult(d,inv(l));
		Matrix mat;
		mat[0][0] = mult(2,coef);
		mat[0][1] = MOD - 1;
		mat[1][0] = 1;
		mat = mat^(t-1);
		int res = mult(mat[0][0], coef);
		res = (res + mat[0][1]) % MOD;
		res = mult(res,l);
		cout<<res<<'\n';

	}
}

int main()
{
	
	solve();
	return 0;
}