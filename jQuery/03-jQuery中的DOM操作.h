01 DOM操作的分类

    ① 概念：DOM是Document Object Model的简写，即文档对象模型
    ② 分类
        ✅ DOM Core
        ✅ HTML-DOM
        ✅ CSS-DOM


02 JQuery中的DOM操作

    ① 查找节点-"查"
        ☁️ 元素节点 /*alert($(ul li:eq(0)).text())*/
        ☁️ 属性节点 /*$('p').attr("title")*/

    ② 创建节点-"增"
        ☁️ 元素节点 /*使用append()函数追加*/
        ☁️ 属性节点
        ☁️ 文本节点

    ③ 插入节点-"改"
        ☁️ 元素内部插入(前|后)
        ☁️ 元素外部插入(前|后)
        ⚠️ 具体的函数，另外通过插入节点可以实现对DOM元素的移动操作。
            /*
             元素内部插入：
             ——————————————————
                后  append()  | appendTo()
                前  prepend() | prependTo()
             元素外部插入：
                后 after()    | insertAfter()
                前 before()   | insertBefore()
             ——————————————————

             */

    ④ 删除节点-"删"
        (1) remove()函数 /*返回被删除的节点 + 可以进行选择性删除 + 后代|绑定的事件等也被删除*/
        (2) detach()函数 /*将来可以再次使用 + 绑定的事件和数据得以保存*/
        (3) empty()函数  /*清空节点的内容*/

    ⑤ 其他操作
        (1) 复制节点 clone(true)函数
        (2) 替换节点 replaceWith()|replaceAll()函数
        (3) 包裹节点
            wrap()          '把某个节点用其他的标记包裹起来
            warpAll()函数    '用一个元素来包裹所有匹配的元素
            warpInner()函数  '包裹匹配元素的子内容

03 属性操作
    ① 获取属性 $('p').attr("title")
    ② 设置属性 $('p').attr({"title":"设置的标题名称"，"name":"wendingding"})
    ③ 删除属性 $('p').removeAttr("title")








