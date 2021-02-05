function sort(list) {
  if (list.length <= 1) {
    return list;
  }
  var pivot = list[0];
  var left = [];
  var right = [];
  for(var i = 1; i < list.length; i++) {
    ((list[i] <= pivot) ? left : right).push(list[i])
  }
  return sort(left).concat(pivot).concat(sort(right));
}

var array = [5,3,1,5,6,3,5,8,6,4,2];
sort(array);
