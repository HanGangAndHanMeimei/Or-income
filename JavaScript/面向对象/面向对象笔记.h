01 面向对象说明
    ① 开发模式说明    "面向过程 + 面向对象"
    ② 面向对象的标识   "类"
    ③ 面向对象的特征   "抽象 + 封装 + 继承 + 多态"
    ④ 为何要使用面向对象编程 "编程模式更贴近现实世界"
    ⑤ javaScript中的面向对象特点
       (1) 没有类的概念
       (2) 非正统的面向对象编程
       (3) 稍显怪异


02 javaScript中的对象
    ① javaScript中的数据类型
       (1) 基本数据类型
            "字符串"
            "布尔值"
            "数字"
            "null"
            "undefined"
       (2) 对象类型
            "json对象"
            "数组"
            "函数"
            "日期"
    ② 创建对象
        🎈 代码演示如何创建对象
        (1) 最简单的对象
        (2) 数组对象
        (3) 创建多个人对象
        (4) 代码有重复，需要消除冗余

03 工厂模式创建对象
    ① 简单说明上述方式创建对象过程中存在的问题
    ② 提供createPerson函数，作为工厂模式
    ③ 实现工厂方法内部的细节
        (1) 使用new Object()方法创建对象
        (2) 设置对象的属性
        (3) 设置对象的方法
        (4) 返回对象本身
    ④ 外部通过工厂方法来创建多个对象演示
    ⑤ 调整内部实现细节，使用This替换

04 构造函数创建对象

    ① 说明工厂模式方法的缺陷，尝试优化该模式
    ② 和new Array() 方法比较，对当前的工厂模式方法进行调整
        (1) 函数的首字母大写，以作区分
        (2) 提取new 关键字
    ③ 说明构造函数内部的实现细节
        (1) 构造函数没有new Object语句，它内部会自动创建对象
        (2) this就相当于是内部创建的对象
        (3) 构造函数不需要返回对象引用，它内部会自动把当前的对象返回

    ④ 对使用构造函数创建的对象进行比较
        (1) 内部引用不相等，说明每次创建对象都全部重新生成一遍属性和方法性能不好
        (2) 尝试把方法抽取成全局函数,解决性能问题
        (3) 说明把方法抽取成全局函数的不妥之处   "This指针疑问"

05 原型方法创建对象
    ① 介绍原型方法的特点，抽取属性和方法只占用一份空间
    ② 介绍原型写法
    ③ 介绍属性和方法
        "实例属性" ______ "原型属性"
        "实例方法" —————— "原型方法"
    ④ 验证多个对象的属性和方法引用是否相同

06 原型方法的内部实现原理
    ① 介绍__proto__指针
    ② 介绍Constroctor构造属性

07 原型方法的其他用法
    ① 原型模式的执行流程
        （1）先检查是否是实例属性，如果有就直接返回
        （2）再检查是否有原型属性，如果有就直接返回
        （3）如果都没有，那么就为当前对象添加该属性，该属性为实例属性
    ② 属性操作
        (1) 查询 判断是否存在原型属性|实例属性
        (2) 删除(原型|实例)属性
        (3) 修改 覆盖(原型|实例)属性
        (4) 增加 实例属性
        (5) 写一个函数实现判断只有原型属性功能


整体逻辑：简单创建对象->工厂模式创建对象->构造函数创建对象->原型方法创建对象


