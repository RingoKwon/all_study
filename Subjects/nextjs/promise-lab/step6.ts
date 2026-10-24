function slowValue(): Promise<string> {
  return new Promise((resolve) => {
    setTimeout(() => resolve("apple"), 2000);
  });
}
async function main() {
  const value = await slowValue();
  console.log(value);
}

main();
