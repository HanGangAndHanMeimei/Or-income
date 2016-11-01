01 了解瀑布流的实现原理
    ① 概念说明：比较流行的网页布局方式，常见于电商网站，如蘑菇街等。
    ② 特点说明：等宽不等高错落摆放，连绵不绝，缺点是不利于做SEO优化。
    ③ 示例演示：打开准备好的网页，演示瀑布流效果。
    ④ 实现原理：在摆放第二行内容的时候，总是优先选择Y值最小的位置(定位-2)。
    ⑤ 实现思路：
            X:使用数组存储一行内容的height,每次设置的时候取数组中（最小值的索引)X(固定宽度=宽度+margin)即可得X值
            Y:取数组中最小值加上margin即为Y值，然后更新数组


02 搭建静态页面
    ① 准备工作：先创建新的文件夹(01-瀑布流展示)，创建css|img|js文件夹，创建HTML文件(index),创建对应的css和js文件并关联
    ② 分析页面：建议在div中嵌套div,设置div的padding和border以解决margin间距的问题
    ③ 代码演练：
        001 先在div中创建div标签(class=box),往该标签中添加img标签并设置显示图片。
        002 在CSS文件中先设置margin和padding为〇。 
        003 拿到父盒子，设置position为r(绝对定位)，拿到子标签，设置让子标签浮动在左边(float:left)
        004 设置左边和上边的内边距为15px 即padding 15px 0 0 15px
        005 拿到内部嵌套的div(class=pic),设置边框border=1px,设置内边距为10px,设置背景颜色为白色，设置圆角box-radius=5px
        006 统一设置图片的宽度为165px

03 js实现
    ① 先写闭包：为了不希望外界修改js代码，所以使用闭包(function(){函数体})()
    ② 当窗口加载完成后处理:onload = function(){}，在函数内部调用实现瀑布流布局的函数waterfall
    ③ 实现瀑布流布局：
        001 处理参数：waterfall函数接收参数(parent：main,子child子:box)
        002 Main居中:
            (1) 获知每块内容的宽度 = 165 + (10 *2) + (1*2) + 15 ==>202
            (2) 得到所有的子盒子  var allBoxs = documents.getElementsClassName(childName)
            (3) 打印得到某个子盒子的宽度 console.log(allBoxs[0].childNodes)
                    offsetheight 高度
                    offsetwidth  宽度(包含了边框的)
                ⚠️ 获取宽度或者是高度的时候应该注意是否包含边框，需要通过图例来查看并演示
            (4) 获取窗口的宽度  document.body.clientWidth
            (5) 求出内容的列数  var cols = ParseInt(clientWidth /offsetwidth)
                ParseInt 取整运算，省略小数
                Math.fool 地板,求一个接近它的整数，如7~8之前的数据，则全部取7 fool(向下取整)|ceil(向下取整)|round(四舍五入)
            (6) 拿到父标签 定义抽象函数 function $(id){ return typedef === "string"}
                === 既可以做值比较，也可以做类型比较
                调用抽象函数拿到父标签 $();
            (7) 设置父标签的宽度  $(parent).style.width = offsetwidth * cols + 'px';
            (8) 设置让父标签(块级标签)居中 $(parent).style.margin = '0 auto';
            "______________
        003 定位处理



































