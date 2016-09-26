class pair{
public:
    int a,b;
};

class pair add(class pair p, class pair q)
{
    class pair out;
    out.a = p.a + q.a;
    out.b = p.b + q.b;
    return out;
}
