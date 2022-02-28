alert("Hello");

function() {

}

if (message !== "") {
    axios
        .post("http://localhost:8080/workspace/push", {
            link: localStorage.getItem('githublink'),
            message: message,
            branch: "master",
            directory: localRepo
        })
        .then((response) => {
            if (response.data === "Error") {
                alertProperties(true, "error", "Error", "Push can't be made!");
            } else {
                alertProperties(true, "success", "Success", "Successfully push!");
            }
        });
}