import Image from "next/image";

export default function Photos() {
  const photos = ["photo1", "photo2", "photo3", "photo4"];
  return (
    <div className="grid grid-cols-2 gap-4">
      {photos.map((name) => (
        <div className="relative h-64">
          <Image
            fill
            sizes="335px"
			preload={name === "photo1" || name === "photo2"}
			quality={75}
            key={name}
            src={`/images/${name}.jpg`}
            alt={name}
            className="object-cover rounded-md"
          />
        </div>
      ))}
    </div>
  );
}
