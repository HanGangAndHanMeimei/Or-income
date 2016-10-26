function dog() {
    this.name = null;
    this.age = null;

    this.eat = function (someThing) {
        console.log(this.name + '正在吃' + someThing);
    }
}
