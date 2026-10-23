"use client";
import { useState } from "react";
import Card from "@/components/Card";

export default function Home() {
  const names = ["AA", "BB", "CC"];
  const [isVisible, setIsVisible] = useState(true);
  function plus() {
    setIsVisible(!isVisible);
  }
  return (
    <div className="p-20 bg-gray-800 text-white">
      <button className="border border-white px-2" onClick={plus}>
        Toggle Card
      </button>
      {isVisible && (
        <div>
          {names.map((n) => (
            <Card highlight={n === "AA" ? true : false} key={n}>
              {n}
            </Card>
          ))}
        </div>
      )}
    </div>
  );
}
