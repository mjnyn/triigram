/**
 * Auto complete or live search
 *
 * @param {*} str   to autocomplete
 */
function showResult(str) {
    if (str.length === 0) {
        document.getElementById("livesearch").innerHTML="";
        document.getElementById("livesearch").style.border="0px";
        return;
    }
    if (window.XMLHttpRequest) {
        // code for IE7+, Firefox, Chrome, Opera, Safari
        xmlhttp = new XMLHttpRequest();
    } else {  // code for IE6, IE5
        xmlhttp = new ActiveXObject("Microsoft.XMLHTTP");
    }
    xmlhttp.onreadystatechange=function() {
        if (this.readyState === 4 && this.status === 200) {
            document.getElementById("livesearch").innerHTML=this.responseText;
            document.getElementById("livesearch").style.border="1px solid #A5ACB2";
        } else if (this.status >= 400 && this.status <= 417) {
            console.log("we got a client error");
        } else if (this.status >= 500 && this.status <= 511) {
            console.log("sever error.");
        } else  {
            console.log("shit got real my friend");
        }
    };



    xmlhttp.open("GET","/assets/php/livesearch.php?q="+str,true);
    xmlhttp.send();
}
