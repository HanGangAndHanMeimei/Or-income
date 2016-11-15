01 DOM概念
    ① JavaScript的组成：ECMAJavascript核心标准 + DOM + BOM
    ② 概念 ：Document Object Model（文档对象模型）
    ③ 作用 ：开发者可以通过document的API来操作页面。
    ④ DOM树
        (1) 每个HTML或者是XML页面都可以使用DOM树来表示
        (2) DOM树结构
            · Document    //页面
            · Element     //元素
            · Attribute   //属性
            · CharacterData
                * comment //注释
                * Text    //文档
        (3) DOM树关系
            · 父级
            · 子级
            · 兄弟
            · 后代

02 Node操作
    ① Node常见方法
        (1) NodeName    "名称"
        (2) NodeValue   "值"
        (3) NodeType    "类型"

    ② Node子节点操作
        (1) ChildNodes  ⚠️
        (2) Children   
        (3) FirstElementChild
        (4) LastElementChild

    ③ Node父节点操作
        (1) parentNode

    ④ Node兄弟节点操作
        (1) NextElementSibling          "下一个兄弟节点"
        (2) PrevioustElementSibling     "上一个兄弟节点"

    ⑤ Attributes操作,获取节点属性数组(属性名称-属性值)

