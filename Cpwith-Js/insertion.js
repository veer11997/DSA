
function insertion(arr)
{

var n=arr.length;
for(var i=0;i<n;i++)
{
for(var j=0;j<n;j++)
{

if(arr[i]<arr[j])
{
var temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
return arr;
}


var a=insertion([2,5,1,4,7]);
console.log(a);
