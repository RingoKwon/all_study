import ProjectList from "@/components/ProjectList";
import { Suspense } from "react";

export default function Project() {
  return (
    <div>
      <h1>project</h1>
      <Suspense
        fallback={
          <div className="w-full h-24 animate-pulse bg-neutral-200 dark:bg-neutral-700"></div>
        }
      >
        <ProjectList />
      </Suspense>
    </div>
  );
}
