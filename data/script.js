// const { addListener } = require("nodemon");


// Fonction qui permet d'obtenir le nom du système (actualisée toutes les secondes)
/*setInterval(function getNomSysteme(){
    
    var xhttp = new XMLHttpRequest();

    xhttp.onreadystatechange = function()
    {
        if(this.status == 200) {
            document.getElementById("nomSysteme").value = this.responseText;
        }
    };

    xhttp.open("GET", "lireNomDuSysteme", true);
    xhttp.send();
}, 10000); */

function getFromESP_getNom () {
    var xhttp = new XMLHttpRequest();
    xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
    document.getElementById("nom").innerHTML = this.responseText;
    
    }
    
    };
    xhttp.open("GET", "getNomEsp", true);
    xhttp.send();
    

   }


function getFromESP_getAllWoodOptions() {
    var xhttp = new XMLHttpRequest();
    xhttp.onreadystatechange = function () {
        if (this.readyState == 4 && this.status == 200) {
            var arrayOfStrings = this.responseText.split("&");
            for (i = 0; i < arrayOfStrings.length; i=i+2) {
                var x = document.getElementById("typeBois_ListBox_Select");
                var option = document.createElement("option");
                option.value = arrayOfStrings[i];
                option.text = arrayOfStrings[i+1];
                x.add(option);
                } 

            //Refresh le contenu
            var siteHeader = document.getElementById('typeBois_ListBox_Select');
            siteHeader.style.display='none';
            siteHeader.offsetHeight; // no need to store this anywhere, the reference is enough
            siteHeader.style.display='block';

            }
    };
    xhttp.open("GET", "getAllWoodOptions", true);
    xhttp.send(body);
}


setInterval(function getFromEsp_TemperatureSensor(){
    var xhttp = new XMLHttpRequest();
   
    xhttp.onreadystatechange = function(){
        if(this.readyState == 4 && this.status == 200){
            document.getElementById("temp").innerHTML = this.responseText;
            
        }
    };
    xhttp.open("GET", "getTemperatureSensor", true);
    xhttp.send();
    
    }, 3000);


        

    