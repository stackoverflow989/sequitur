from typing import List
from scipy.optimize import minimize
from scipy.optimize import differential_evolution
import numpy as np
import random

class Data:
    def __init__(self,y,z,param_for_x) -> None:
        self.y = y
        self.z = z
        self.param = param_for_x

    def print_function(self):
        print("f(x) = (1/z[0])(x*param[0]-y[0])^2+(1/z[1])(x*param[1]-y[1])^2+(1/z[2])(x*param[2]-y[2])^2")

class Minimize:
    def __init__(self,y:List[float],z:List[float],param_for_x:List[List[float]]) -> None:
        self.data = Data(y,z,param_for_x)   
        self.min = -1

    def findmin(self):
        e = 1e-10
        y = self.data.y
        z = self.data.z
        param = self.data.param
        fun = lambda x :((sum(np.array(x)*np.array(param[0]))-y[0])**2)/(z[0]) \
                        + ((sum(np.array(x)*np.array(param[1]))-y[1])**2)/(z[1]) \
                        + ((sum(np.array(x)*np.array(param[2]))-y[2])**2)/(z[2])
        # fun = lambda x :((x[0]*param[0][0]+x[1]*param[0][1]+x[2]*param[0][2]+x[3]*param[0][3]-y[0])**2)/(z[0]) \
        #                 + ((x[0]*param[1][0]+x[1]*param[1][1]+x[2]*param[1][2]+x[3]*param[1][3]-y[1])**2)/(z[1]) \
        #                 + ((x[0]*param[2][0]+x[1]*param[2][1]+x[2]*param[2][2]+x[3]*param[2][3]-y[2])**2)/(z[2])
        cons = ({'type': 'ineq', 'fun': lambda x: x[0]-e}, # x>=e，即 x > 0
                {'type': 'ineq', 'fun': lambda x: x[1]-e},
                {'type': 'ineq', 'fun': lambda x: x[2]-e},
                {'type': 'ineq', 'fun': lambda x: x[3]-e}
                )
        r=[0,0,0,0]
        m = 1000000000
        avg = y[1]*10
        for k in range(300):
            #x0 = [random.randint(0,avg),random.randint(0,avg),random.randint(0,avg),random.randint(0,avg)]
            ipcnum_1 = (y[2])/3
            ipcnum_2 = (-0.27*(y[1]-4*ipcnum_1)+y[0]-1*ipcnum_1)/9.73
            nop = (10*(y[1]-4*ipcnum_1)-(y[0]-1*ipcnum_1))/9.73
            x0 = [ipcnum_1,ipcnum_2,nop,1]
            res = minimize(fun, x0, method='SLSQP', constraints=cons, tol=e,options={"maxiter":10000})
            if res.fun < m:
                m = res.fun
                r = [int(t) for t in res.x]
        print("Minimize = "+str(m))
        self.min = m
        print(r)
        return r

class Differential_evolution:
    def __init__(self,y,z,param_for_x) -> None:
        self.data = Data(y,z,param_for_x)
        self.min = -1
    
    def findmin(self):
        e = 1e-10
        y = self.data.y
        z = self.data.z
        param = self.data.param
        # fun = lambda x :((sum(np.array(x)*np.array(param[0]))-y[0])**2)/(z[0]) \
        #                 + ((sum(np.array(x)*np.array(param[1]))-y[1])**2)/(z[1]) \
        #                 + ((sum(np.array(x)*np.array(param[2]))-y[2])**2)/(z[2])
        fun = lambda x :((x[0]*param[0][0]+x[1]*param[0][1]+x[2]*param[0][2]+x[3]*param[0][3]-y[0])**2)/(z[0]) \
                        + ((x[0]*param[1][0]+x[1]*param[1][1]+x[2]*param[1][2]+x[3]*param[1][3]-y[1])**2)/(z[1]) \
                        + ((x[0]*param[2][0]+x[1]*param[2][1]+x[2]*param[2][2]+x[3]*param[2][3]-y[2])**2)/(z[2])
        bounds = [(0,y[0]*10),(0,y[0]*10),(0,y[0]*10),(0,y[0]*10)]
        res = differential_evolution(fun, bounds)
        print("Minimize = "+str(res.fun))
        self.min = res.fun
        r = [int(t) for t in res.x]
        print(r)
        return r


class Convexopt:
    #need import cvxopt and new numpy (uninstall)
    def __init__(self) -> None:
        pass

if __name__ == "__main__":
    y = [10000,10000,10000]
    z = [10000,10000,10000]
    param_for_x = [     #order:add pause nop div
        [1,  10,0.27,  16],
        [4,   1,   1,   3],
        [3,   0,   0,   3]
    ]
    Opt = Minimize(y,z,param_for_x)
    print(Opt.findmin())