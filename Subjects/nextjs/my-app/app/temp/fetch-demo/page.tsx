export default async function FetchDemo() {
  const response = await fetch("https://jsonplaceholder.typicode.com/users/1");
  const user = await response.json();

  console.log("name ", user.name);

  return <h1>name: {user.name}</h1>;
}
