function bubblesort(arr)
{


var n=arr.length;
for(var i=0;i<n-1;i++)
{

var num=arr[i];
for(var j=i+1;j<n;j++)
{

if(arr[j]<num)
{

num=arr[j];
var temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}

}
}

return arr;
}


var a=bubblesort([1,4,0,2,3]);
console.log(a);