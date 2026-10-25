import Card from "@/components/Card";

export default async function ProjectList() {
  const res = await fetch("http://localhost:3001/repos");
  const repos = await res.json();
  return (
    <div>
      <p>Total: {repos.length}</p>
      <div className="grid grid-cols-1 md:grid-cols-2 lg:grid-cols-3">
        {repos.map((repo: any) => (
          <Card key={repo.id}>
            <div className="grid grid-cols-3">
              <span>{repo.title}</span>
              <span>{repo.description}</span>
              <span className="text-right">* {repo.stargazers_count}</span>
            </div>
          </Card>
        ))}
      </div>
    </div>
  );
}
