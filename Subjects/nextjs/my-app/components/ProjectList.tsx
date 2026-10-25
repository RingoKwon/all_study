export default async function ProjectList() {
  const res = await fetch("http://localhost:3001/repos");
  const repos = await res.json();
  return (
    <div>
      <p>Total: {repos.length}</p>
      <ul>
        {repos.map((repo: any) => (
          <li key={repo.id}>
            {repo.title}: {repo.description} * {repo.stargazers_count}
          </li>
        ))}
      </ul>
    </div>
  );
}
