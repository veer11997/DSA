function binary_search(arr,key)
{

var s=0;
var e=arr.length-1;
while(s<=e)
{

var mid=(s+e)/2;
if(arr[mid]==key)
{
return mid;
}

if(arr[mid]>key){
s=mid+1;
}
else{
e=mid-1;
}
}


}

var arr=[1,2,5,8,14];
var k=binary_search(arr,5);
console.log(arr[k]);