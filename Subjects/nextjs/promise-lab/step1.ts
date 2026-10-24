function hello(){
	console.log("Hello");
};

const f = hello;
f();

setTimeout(f, 2000);