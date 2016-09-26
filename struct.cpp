struct pair{
int a, b;
};

pair add(pair p, pair q)
{
    pair out;
    out.a = p.a + q.a;
    out.b = p.b + q.b;
    return out;
}
