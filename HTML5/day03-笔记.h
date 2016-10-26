01 Mac桌面页面实现
    ① 先观察页面，划分结构（上中下）
    ② 代码演练实现页面开发
        001 准备工作 新建文件夹(Mac网页)-新建文件夹(css|imgs)-新建HTML文件(index)
        002 导入资源 导入图片资源|Bootstarp包|连接CSS文件
        003 搭建页面主题结构，实现具体细节
            1）创建三个div，设置id分别为top-content-footer
                /*
                 使用通配符设置所有的外边距，内边距为0
                 设置整个页面的背景，并设置背景的尺寸(background-size:cover)
                 */
            2）处理头部视图(id = top)
                /*
                 设置头部视图的高度为44px
                 设置头部视图的颜色 RGBA(检查)
                 ul.topLeft>li*6>a  Tab
                 ul.topRight>li*4>img  Tab
                 设置去除ul列表的圆点 list-style:none
                 设置列表的内容
                 设置让左侧的列表左边浮动，右侧的列表右边浮动（float）
                 设置改变ul以及li标签的类型为行内-块级标签 display：inline-block
                 设置让头部导航条相对于浏览器布局 position：fixed |width:100% |top:0 |left:0
                 设置垂直居中 line-height=44px
                 设置文字的大小 font-size=18px
                 设置左边列表的外边距-左|右边的外边距-右为8px
                 设置文字的颜色为黑色
                 */
            3）处理底部视图(id = footer)
                /*
                 设置底部视图的高度为66px 宽度为100%
                 设置底部视图的背景颜色，方便辨认
                 设置底部视图相对于浏览器进行定位 position:fixed bottom:0|left:0
                 在footerDiv中创建dock(Div)菜单栏
                 设置菜单栏的背景(background使用小图片进行平铺)
                 设置dock的宽度=60%，高度=100%
                 设置让dock居中，因为(块级标签)，所以这是margin=0,auto即可
                 设置dock左上角和右上角的圆角 border-top-left|right-radius为8px
                 设置dock上面的图片列表 ul>li*6>a>img
                 设置dock中图片的宽度为50px
                 解决dock中图片竖排的问题(需要横排) 修改所有ul |li的标签类型为行内-块级标签
                 在子标签(dock)中设置让所有的图片水平垂直居中 text-agin|line-height
                 设置所有图片的外边距 margin=0 8px 即上下为0，左右为8px
                 */
            4）动画处理
                /*
                 01 各个浏览器适配相应的内容(-webkit-transition）
                 02 transition属性的设置(参照系X-Y-Z)
                 03 拿到列表中所有的li 设置过渡效果(transition-liner 0.25s)
                 04 当鼠标移动到图标上面的时候，设置位置参照
                    transition-ogigin:center bottom
                    transform:scale(1.5) 表示X和Y方向都缩放1.5倍
                 */
            4）处理内容视图(id = content)
            /*
                01 先创建3个div，里面放一个img和p,分别展示图片和文字
                02 设置颜色白色，设置内容居中 text-algin:center
                03 改变标签的类型，让标签变成是行内块级标签
                04 拿到所有的图片，设置图片的大小为100px
                05 竖排换行展示，设置body的内边距-上边 100px
                06 设置图片距离左边的外边距为20px
             */

02 JS简单介绍
    ① JavaScript是一门广泛应用于"浏览器客户端"的"脚本语言"
    ② 常见用途
       001 执行HTML的DOM操作(对节点进行增删改查)
       002 给网页增加动态的功能，比如实现动画效果
    ③ Node.js
       001 是一个JavaScript的运行环境，对谷歌的V8引擎进行了封装，V8引擎执行js代码速度快，性能好
       002 优势 (1)"可以作为后台语言" (2)"把前端|后端|移动端打通" (3)非阻塞的I/O 事件驱动 V8虚拟机
           问题 (1)适用于中小型项目 (2）难度比较大，比较难入门
       003 单线程，在不增加线程的情况下对任务进行并行处理(采用事件轮询机制)

03 JS的快速入门
    ① 理论知识：
       001 两种常见的js写法
           ① 页面内部js,在当前网页的script标签中编写
              "一般而言会把js相关的代码放在HTML标签中body的最尾部(因为其实脚本语言，用上往下执行)"
           ② 外部js
      002 在js中可以使用单引号或者是双引号输出
            #(为什么不建议使用双引号)：因为标签的属性是双引号
      003 在按钮(button)中所有的事件都被封装在on开头的事件中
      004 在js中语句的末尾可以不用加上分号

   ② 代码演练：
      001 准备：
            新建文件夹(02-快速学习JS语法)-新建HTML文件(01-输出hello world)
            新建文件夹(02-快速学习JS语法)-新建HTML文件(02-基本数据类型)
            新建文件夹(02-快速学习JS语法)-新建HTML文件(03-js函数的基本运用)
            新建文件夹(02-快速学习JS语法)-新建HTML文件(04-js中的对象)
      002 演练：
            1）页内js的基本使用
            /*
             01 在页面中添加<scrpit></script>标签，先尝试输出hello world
             02 弹框输出(阻断式操作) 尝试以弹框的方式来输出hello world => alert（'hello world'）
             03 调试输出(控制台输出) console.log('控制台输出！！！') | 检查百度网页的控制台输出
             */
            2）基本数据类型
            /*
             定义变量
             var name = ’jack‘   |string
             var age = 18        |number
             var money = 100.99  |number
             var result = true   |boolen
             var score = null |相当于OC中的nil  |object
             var number = undefined |未定义

             打印定义的变量 console.log(name,money,score)
             检查变量的真实类型 console.log(typeof name,typeof money,typeof score)
             */
            3)数据的运算
            /*
             01 字符串操作(拼接)
                var newName = name1 + '-' + name2;
                console.log(newName)
             02 不同数据类型进行拼接
                var str1= (10 + '10') + 10 +10  ==10101010
                var str2= ('10' + '10') + 10    ==101010
                var str3= '10' + (10 + '10')    ==101010
                var str4= 10 + 10 + '10'        ==2010
                规律：
                🌂 运算时从左往右
                🌂 任何类型的变量和string类型的变量进行拼接，都会被强制转换为string类型
             03 数组
                存储 var numbers = ['张三'，10，-100，stringName] |object类型
                    在js中的数组，可以存储任意的内容。
                取值 根据下标取值 console.log(number[1])
                遍历 for(var i=0;i<numbers.length;i++){console.log(numbers[i])}
                增加 numbers.push('文顶顶')
                删除 numbers.pop() |删除最后一个元素

            04 类库(math)
                Math.min.apply(null,numbers) |求最小值|求最大值
             */
            4)函数的使用
            /*
             01 格式
                 function 函数名(参数列表)
                 {
                    函数体
                    返回值
                 }
             02 最简单的函数
                function see()
                {
                    consloe.log(“不要偷看结果”)
                }
             03 函数的调用
                see();
             04 加法运算器的设计和使用
                function sum(number1,number2)
                {
                    return number1 + number2;
                }
               
               var number = sum(100,200)
             05 多个数据相加函数设计
                function sum(numbers)
                {
                    var add = 0;
                    for(var i =0;i<numbers.length;i++)
                    {
                        add += numbers[i];
                    }
                    return add;
                }
                
                var number = sum([1,2,3,4,5,'10']) ==>1510
             06 函数中有个内置数组 arguments 
                在定义函数的时候，如果需要传递的参数为一个数组，那么可以省略不写
                函数内部在调用的时候，会自动将传入的数组放置在这个内置数组中
            
             07 匿名函数
               var test =  function （）{
                    console.log('我是一个匿名函数');
                }
             
              test();   |调用匿名函数
             */
04  js中的对象
    ① 简单说明： 在OC中对象由类创建产生， 在js中不需要进行json解析操作，因为json本身就是对象
    ② js中获得对象的第一种方式：var dog = {}      # 传统方式获得对象，该方法主要用于数据的传递
        /*
         ① 设置对象的属性和方法
             var dog = {

             # 设置dog对象的属性
             name:'旺财'，
             age:16,
             dogFriend:['小黑'，'小黄'],


             # 设置dog对象的方法
             eat:function()
             {
             console.log(this.name + “吃”)
             }
             }

         ② 修改对象的属性
             dog.name = '黄娜娜'
         ③ 获得对象的属性
             console.log(dog.name,dog.age)
         ④ 调用对象的方法
             dog.eat()
         */
    ③ this指针：所在函数在哪个对象中，this就代表哪个对象
    ④ 创建一个新的HTML文件(js中批量产生对象)
        001 函数的普通使用 函数名()
        002 让函数变成构造函数  var newMeth0d = new method()
        003 演示批量产生对象
            "先创建构造函数 function dog()
            {
                设置属性(this.name = null)
                设置方法(this.eat = function())
            }
        004 演示如何把构造函数抽取到js文件中(需要在HTML文件中引用)

05 知识点回顾
    ① js的基本概念
    ② 基本数据类型 var 变量名称 = 值
    ③ 查看变量的数据类型 typeof 变脸的名称
    ④ 打印 console.log(变量名)
    ⑤ '函数的定义|函数的调用|匿名函数|内置数组(arguments)'
    ⑥ 对象的创建和使用|"属性|方法|this指针|批量产生对象|构造函数"

06 内置对象
    创建文件夹(03-两大内置对象)-新建HTML文件(01-window内置对象)
    内置对象window的作用（"This"）
    🌂 所有的全局变量都是window的属性 =>当前页面如果想拿到另外一个页面的全局变量那么就可以通过window来获取 window.value
    🌂 所有的全局函数都是window的方法 =>所有页面的函数都是 window.method