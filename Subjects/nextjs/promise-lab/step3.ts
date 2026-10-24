const b = {value: "apple"};

function makeBox(v : string){
	return {value : v};
}
class Box{
	value : string;
	count : number;
	constructor(v: string, c: number) {
		this.value = v;
		this.count = c;
	}
}
const b2 = makeBox("box");
const b3 = new Box("class", 3);

console.log(b.value);
console.log(b);
console.log(b2.value)
console.log(b3.value);
console.log(b3.count);