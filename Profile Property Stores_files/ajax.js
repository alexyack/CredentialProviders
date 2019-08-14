var xmlhttp = null;
var table = null;

function CreateTable()
{
  table = document.createElement("TABLE");
  table.border=1;
  var tHead = document.createElement("THEAD");
  var headers = ["Dll", "Ordinal", "OS", "Export Method"];
  for(var i = 0; i < 4; ++i)
  {
    var th = document.createElement("TH");
    th.innerHTML = headers[i];
    tHead.appendChild(th);
  }
  table.appendChild(tHead);
  var tBody = document.createElement("TBODY");
  table.appendChild(tBody);
  return tBody;
}

function WriteTable()
{
  if(xmlhttp.readyState == 4)
  {
    var status = xmlhttp.status;
    if(status == 200 || status == 0)
    {
      var versions = xmlhttp.responseText;
      var rows = versions.split(';');
      var tbody = CreateTable();
      var numRows = rows.length;
      for(var i = 0; i < numRows; ++i)
      {
        var row = tbody.insertRow(-1);
        var columns = rows[i].split(':');
        var numCols = columns.length;
        for(var j = 0; j < numCols; ++j)
        {
           var td = row.insertCell(-1);
           td.innerHTML = columns[j];
        }
      }
      var pTag = document.createElement("P");
      pTag.innerHTML = "Version Info";
      pTag.className = "divider";
      document.body.appendChild(pTag);
      document.body.appendChild(table);
      if(top == self)
      {
        var linkCont = document.createElement("P");
        linkCont.className = "mainLinkCont";
        var otherLink = document.createElement("A");
        otherLink.className = "otherLink";
        otherLink.href = "../index.php";
        otherLink.innerHTML = "Go to Home Page";
        linkCont.appendChild(otherLink);
        document.body.appendChild(linkCont);
      }
      xmlhttp = null;
    }
  }
}

function getHomelinkElement()
{
   var links = document.getElementsByTagName('a');
   var count = 0;
   var numLinks = links.length;
   for(; count < numLinks; ++count)
   {
      if(links[count].className == "homeLink")
      {
         return links[count];
      }
   }
   return null;
}

function init()
{
  if(top == self)
  {
     var homeLinkNode = getHomelinkElement();
     if(homeLinkNode)
     {
        homeLinkNode.style.visibility = 'visible';
     }
  }
  if (window.XMLHttpRequest)
  {// code for IE7+, Firefox, Chrome, Opera, Safari
      xmlhttp=new XMLHttpRequest();
  }
  else
  {// code for IE6, IE5
      xmlhttp=new ActiveXObject("Microsoft.XMLHTTP");
  }
  if(xmlhttp == null)
  {
     return;
  }
  var fnNames = document.getElementsByName('Search.MSHAttr.APIName');
  var names = "";
  var numNames = fnNames.length;
  if(fnNames != null && numNames != 0)
  {
    for(var i = 0; i < numNames; ++i)
    {
       names += fnNames[i].getAttribute('content');
       if(i < (numNames - 1))
       {
           names += ';';
       }
    }
    xmlhttp.onreadystatechange=WriteTable;
    xmlhttp.open("GET", "../getversions.php?names=" + names, true);
    xmlhttp.send(null);
  }
}

function uninit()
{
  if(xmlhttp)
  {
     xmlhttp.abort();
     xmlhttp = null;
  }
}