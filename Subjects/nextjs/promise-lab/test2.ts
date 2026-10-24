function run(setup: (v: () => void) => void) {
  const button: () => void = () => {
    console.log("out");
  };
  setup(button);
}

function set(x: () => void) {
  x();
}
const set3 = (x: () => void) => {
	x();
}

run(set);

set(() => {
  console.log("Ringo");
});
