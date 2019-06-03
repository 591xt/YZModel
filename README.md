# YZModel


一键生成带注释的Model文件和解析



生成文件规则：



第一种：基础数据类型

直接在对应的键前面写注释

比如：

```objective-c

{"result":0}    

{"数量,result":0}

{"result":1.5}    

{"数量,result":1.5}

{"result":"正确"}    

{"结果,result":"正确"} 

```



第二种：字典

直接在对应的键前面写注释还有对应Model的名字

比如：

```objective-c

{"result"：{"num":0}}    

{"结果,NumModel,result":{"num":0}}

```



第三种：数组

还是直接在对应的键前面写注释还有对应Model的名字

比如：

```objective-c

{"result":[{"index":"0","title":"测试"}]}

{"结果集,ResultModel,result":[{"第几个,index":"0","题目,title":"测试"}]}

```



总结： 



都是在键的前面增加注释，数组和字典的话，需要在注释的后面再增加一个Model的名字



按照以上规则数组，字典和基本数据类型可以随便嵌套，**注意冒号和引号**



解析



直接将YZModel文件夹导入项目，引入头文件



```objective-c

#import "NSObject+YZModel.h"

```

分两种：



第一种：



把字典转会换成对应的Model



```objective-c

DicModel* model=[DicModel withModel:dic];

```



第二种：



把数组转换成对应的Model数组



```objective-c

NSArray* array=[ResultModel withArrayModel:@[@{@"title":@"测试"}]];

```

