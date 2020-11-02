class fractie{
/*private:*/
	int a;
	int b;
public:
	fractie(int = 0,int = 0);
	fractie(const fractie&);
	fractie & operator=(const fractie &);
	~fractie();

	void afis()const;
	double getValoare();
	fractie getInv();
	void setdata(int,int);
	float getA();
	float getB();

	friend const fractie operator +(const fractie&, const fractie&);
	friend const fractie operator -(const fractie&, const fractie&);
	friend const fractie operator -(const fractie&);
	friend const fractie operator *(const fractie&, const fractie&);
	friend const fractie operator /(const fractie&, const fractie&);

	fractie& operator +=(const fractie&);
	fractie& operator -=(const fractie&);
	fractie& operator *=(const fractie&);
	fractie& operator /=(const fractie&);

	friend bool operator ==(const fractie&, const fractie&);
	friend bool operator !=(const fractie&, const fractie&);
	friend bool operator >(const fractie&, const fractie&);
	friend bool operator <(const fractie&, const fractie&);
	friend bool operator >=(const fractie&, const fractie&);
	friend bool operator <=(const fractie&, const fractie&);
};
