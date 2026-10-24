const hello1 = () => {
  console.log("Hello");
};

const say = (word: string) => {
  console.log(word);
};

hello1();
say("ring0");
setTimeout(
  () => say("apple"), 2000
);
