"use client";

import { useState } from "react";

export default function Counter() {
  const [count, setCount] = useState(0);
  return (
    <button className="border px-2" onClick={() => setCount(count + 1)}>
      {count}
    </button>
  );
}
