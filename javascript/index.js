function myfunc(){
    alert("This is my funcion.");
}


document.addEventListener("DOMContentLoaded", function() {

    const inputBox = document.getElementById("userInput");
    const submitButton = document.getElementById("submitButton");
    const resultDisplay = document.getElementById("result");

    submitButton.addEventListener("click", function() {
        const userInput = inputBox.value;

        resultDisplay.textContent = "You entered " + userInput;
    });

});

// do {

//     const h1Elements = document.querySelector("h1");
//     h1Elements.forEach(function (h1) {
//         h1.style.color = "blue"
//     });

//     h1Elements.forEach(function (h1) {
//         h1.style.color = "red"
//     });

// }while(1>0)