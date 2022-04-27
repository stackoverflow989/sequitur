import random

from scipy.optimize import minimize
import numpy as np
import argparse
#parser = argparse.ArgumentParser()
e = 1e-10
#parser.add_argument('--x', type=float, nargs='+')
#parser.add_argument('--y', type=float, nargs='+')
#parser.add_argument('--z', type=float, nargs='+')
#args = parser.parse_args()
#x = args.x
y = [10000,10000,10000]
z = [10000,10000,10000]
#parser.add_argument('--recursive_search', action='store_true', default=False)
#parser.add_argument('--init_model_cn', type=str, default=None)

fun = lambda x :((x[0]+10*x[1]+0.27*x[2]+16*x[3]-y[0])**2)/(z[0]) + ((4*x[0]+x[1]+x[2]+3*x[3]-y[1])**2)/(z[1]) + ((3*x[0]+3*x[3]-y[2])**2)/(z[2]) # 约束函数
#fun = lambda x : abs((x[0]+16*x[1]+0.27*x[2]-y[0]))/(y[0])*100 + abs((4*x[0]+3*x[1]+x[2]-y[1]))/(y[1])*100 + abs((3*x[0]+3*x[1]-y[2])**2)/(y[2])*100 # 约束函数
cons = ({'type': 'ineq', 'fun': lambda x: x[0]-e}, # x>=e，即 x > 0
        {'type': 'ineq', 'fun': lambda x: x[1]-e},
        {'type': 'ineq', 'fun': lambda x: x[2]-e},
        {'type': 'ineq', 'fun': lambda x: x[3]-e}
       )
r=[0,0,0,0]
m = 1000000000
avg = 1000
for k in range(30):
    x = [random.randint(0,int(avg))]*4
    res = minimize(fun, x, method='SLSQP', constraints=cons, tol=e,options={"maxiter":10000})
    if res.fun < m:
        m = res.fun
        r[0] = int(res.x[0])
        r[1] = int(res.x[1])
        r[2] = int(res.x[2])
        r[3] = int(res.x[3])

print('最小值：',res.fun)
print(r[0],r[1],r[2],r[3])
print('迭代终止是否成功：', res.success)
print('迭代终止原因：', res.message)
