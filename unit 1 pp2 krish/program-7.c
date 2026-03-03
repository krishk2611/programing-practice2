let arr1 = [1, 2, 3];
let arr2 = [4, 5, 6];

let merged = arr1.concat(arr2);
// OR
let merged = [...arr1, ...arr2];

console.log(merged);
// [1, 2, 3, 4, 5, 6]
