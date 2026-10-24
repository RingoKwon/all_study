const box = {value: "empty"};

function run4(setup:  (x: (v: string) => void)  => void){
	const button = (v: string ) => {
		box.value = v;
	}
	setup(button);
}

run4((x) => {
	x("apple");
});
console.log(box);