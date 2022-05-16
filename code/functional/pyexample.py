
def sq (x):
    return x*x


def make_adder(x):
    def f(y):
        return x+y
    return f


def co():
    x = 0
    def inc():
        nonlocal x
        x = x + 1
    def dec():
        nonlocal x
        x = x - 1
    def get():
        nonlocal x
        return x
    return {'inc':inc, 'dec':dec, 'get':get}

