class Solution {
  void rotate(List<List<int>> matrix) {
    Map<String, int> myMap = {};
    int n = matrix.length;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < matrix[i].length; j++) {
        myMap['$i,$j'] = matrix[i][j];
      }
    }

    for (int k = 0; k < n; k++) {
      for (int s = 0; s < matrix[k].length; s++) {
        matrix[k][s] = myMap['${(n - 1) - s},$k']!;
      }
    }
  }
}