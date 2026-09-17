
    comp operator+(comp c)
    {
        this.real , this.img ;
        c.real , c.img;
        int r = this.real + c.real;
        int i = this.img + c.img ;
        comp t(r,i);
        return t;

    }