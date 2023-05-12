/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    var map_arr = [];
    for(var i=0;i<arr.length;i++){
        map_arr.push(fn(arr[i],i));
    }
    return map_arr;
};