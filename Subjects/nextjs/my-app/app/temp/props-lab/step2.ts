function Comments(props: {params: { slug: string }}) {
	console.log(props.params.slug + " comment");
}

Comments({params: {slug: "a"}});
Comments({params: {slug: "b"}});