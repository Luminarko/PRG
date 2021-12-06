let main = document.getElementById("main");
let table = document.createElement("table");

for(let y = 0; y < 1; y++){
    let tr = document.createElement("tr");
    for(let x = 0; x < 3; x++){
        let td = document.createElement("td");
        tr.appendChild(td);
    }
    table.appendChild(tr);  
}
main.appendChild(table);

onsubmit = function(e){

    e.preventDefault();
    let age = document.getElementById("age").value;
    let books = document.getElementById("books").value;
    console.log(age, books);
}
