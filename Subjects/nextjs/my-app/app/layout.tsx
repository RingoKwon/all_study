import type { Metadata } from "next";
import { Geist, Geist_Mono, Roboto } from "next/font/google";
import "./globals.css";
import Counter from "@/components/Counter";
import Navigation from "@/components/Navigation";
import Chatbot from "@/components/Chatbot";

const geistSans = Geist({
  variable: "--font-geist-sans",
  subsets: ["latin"],
});

const geistMono = Geist_Mono({
  variable: "--font-geist-mono",
  subsets: ["latin"],
});

const roboto = Roboto({
  subsets: ["latin"],
  weight: ["400", "700"],
});

export const metadata: Metadata = {
  title: {
    template: "%s | Ringo Blog",
    default: "Ringo Blog",
  },
  description: "next.js study by Ringo",
};

export default function RootLayout({ children }: LayoutProps<"/">) {
  return (
    <html
      lang="en"
      className={`${geistSans.variable} ${geistMono.variable} h-full antialiased`}
    >
      <body className="${roboto.className} min-h-full flex flex-col bg-white text-gray-800 dark:bg-gray-950 dark:text-gray-300">
        <div className="w-full max-w-2xl mx-auto px-4">
          <header className="p-10 border border-yellow-500 flex items-center justify-between">
            <div className="hidden md:block font-bold">Ringo</div>
            <Navigation />
            <Counter></Counter>
          </header>
          <Chatbot />
          <main>{children}</main>
        </div>
      </body>
    </html>
  );
}
