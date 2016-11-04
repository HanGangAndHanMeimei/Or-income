01-关于jQuery
    ① JavaScript
        001 JavaScript是网景公司开发的一门脚本语言。
        002 JavaScript本身存在以下缺陷
            (1) 复杂的文档对象模型(DOM)操作
            (2) 不一致的浏览器实现和便捷的开发——"兼容问题"
            (3) 缺乏调试工具
    ② JavaScript库
        001 缘由：为了简化JavaScript的开发
        002 作用：JavaScript库封装了很多预定义的对象和实用函数，能帮助开发人员更轻松的开发且无需考虑浏览器兼容。
        003 常用库
            (1) prototype 最古老的库之一，大量扩展但结构松散
            (2) Dojo 增加大量本没有的功能
            (3) YUI 富交互网页程序工具集
            (4) MooTools 轻量、简洁、模块化和面向对象的JavaScript框架
            (5) jQuery   轻量，拥有强大的选择器，出色的DOM操作，可靠的事件处理，完善的兼容性和链式操作
        004 说明：每个JavaScript都各有优劣，看自己情况选择
    ③ jQuery简介
        001 诞生：2006年1月由John Resig创建的开源项目，托管于github网站。
        002 优势
            (1) 轻量级(30KB)
            (2) 拥有强大的选择器|出色的DOM操作|可靠的事件处理机制
            (3) 完善的Ajax
            (4) 出色的浏览器兼容性——能够在IE6+ FF 3.6 + Safari 5+ Opera Chrome等浏览器下正常运行
            (5) 链式操作让代码更优雅
            (6) 隐式迭代
            (7) 行为层和结构层分离 ——"可以直接给元素添加事件，使开发人员可以各司其职"
            (8) 丰富的插件|完善的文档|开源支持
        003 获取jQuery
            官网：http://jquery.com/
            托管：https://github.com/jquery/jquery
        004 jQuery库说明
            (1) jQuery.js           开发版本 220KB
            (2) jQuery.mini.js      生产版本 31KB

02-jQuery对象和DOM对象
    ① DOM对象
        001 翻译：DOM - Document-Object-Model 文档对象模型
        002 说明：每一份的DOM都可以表示为一棵树，即可以把一个完整的HTML结构用树的方式来表示。
                 那么，在这棵DOM树种，所有的标签都是DOM元素的节点，可以通过js的方法来获取节点。
        003 获得DOM对象
                "var domObj = Document.getElementsById|className|TageName..
    ② jQuery对象
        001 说明：jQuery对象即使用jQuery对DOM对象进行包装后的对象。
                  🌲 jQuery对象是jQuery独有的。
                  🌲 jQuery对象可以使用库里面的方法。
                  🌲 jQuery对象无法使用DOM对象的任何方法。
        002 获得jQuery对象
                "var  $jQueryObj = $("domObj")
    ③ DOM <==> jQuery
        001 把jQuery对象转换为DOM对象
            ⛵️ 通过索引的方式转换  "var domObjDemo = $jQueryObjDemo[0];
            ⛵️ 通过get方法获得    "var domObjDemo = $jQueryObjDemo.get(0);

        002 把DOM对象转换为jQuery对象
            ⛵️ 使用$()包装   "var jQueryDemoObj = $("#main");

    ④  补充说明
        001 平常使用的jQuery对象都是使用$()函数创建出来的，而$()可以理解为jQuery对象的制造工厂。
        002 $ 是jQuery的简写形式，即代码中所有使用$的地方都可以使用jQuery来进行替换，它们是等价的。





