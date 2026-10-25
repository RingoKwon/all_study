import ProjectList from "@/components/ProjectList";
import { Suspense } from "react";
import { ErrorBoundary } from "react-error-boundary";

export default function Project() {
  return (
    <div>
      <h1>project</h1>
      <ErrorBoundary
        fallback={
          <div className="text-red-500">Cannot fetch projects currently</div>
        }
      >
        <Suspense
          fallback={
            <div className="w-full h-24 animate-pulse bg-neutral-200 dark:bg-neutral-700"></div>
          }
        >
          <ProjectList />
        </Suspense>
      </ErrorBoundary>
    </div>
  );
}
