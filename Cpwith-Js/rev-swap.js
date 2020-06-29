var a= [1,2,3,4];
var n=a.length;

for(var i=0;i<=n/2;i++)
{

var startindex=i;
var endindex=n-1-i;
var temp=a[startindex];
a[startindex]=a[endindex];
a[endindex]=temp;



for(var i=0;i<n;i++)
{
console.log(a[i]);
}
}
