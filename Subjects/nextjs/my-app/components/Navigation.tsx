import Link from "next/link";
import styles from "./navigation.module.css";

export default function Navigation() {
  return (
    <nav className="flex flex-col md:flex-row gap-4">
      <Link href="/" className={styles.link}>
        Home
      </Link>
      <Link href="/about" className={styles.link}>
        About
      </Link>
      <Link href="/about/projects" className={styles.link}>
        Projects
      </Link>
    </nav>
  );
}
