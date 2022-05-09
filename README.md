# Using sequitur alg in trace compression

## 将trace拼接

`input trace path`指`*.trace_2`以及`*.trace_4`的位置。`output trace path`指生成的`*.trace`的位置。

```
mpiexec -np ${NPROCS} splice.py -t ${input trace path} -o ${output trace path}
```

## 生成代码

`input trace path`指`*.trace`的位置。`output code path`指代码生成的路径，生成代码包括`code0.c`、`nonterm.c`、`nonterm.h`以及配套的`makefile`。

```
mpiexec -np ${NPROCS} main.py -t ${input trace path} -o ${output code path}
```

## 运行benchmark

```
cd ${output code path}
make
mpirun -np ${NPROCS} ./code
```
