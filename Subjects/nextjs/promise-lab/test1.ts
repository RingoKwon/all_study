function run1(setup: (v: string) => void) {
  setup("aa");
}
function set1(x: string) {
  console.log(x);
}

run1(set1);
