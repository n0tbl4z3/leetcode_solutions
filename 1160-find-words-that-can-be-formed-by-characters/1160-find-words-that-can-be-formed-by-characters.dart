class Solution {
 int countCharacters(List<String> words, String chars) {
  Map<String, int> ump = {};
  for (int i = 0; i < chars.length; i++) {
    ump[chars[i]] = (ump[chars[i]] ?? 0) + 1;
  }

  int response = 0;

  for (int j = 0; j < words.length; j++) {
    if (chars.length >= words[j].length) {
      Map<String, int> currentMap = Map.from(ump);
      bool addable = true;

      for (int k = 0; k < words[j].length; k++) {
        String char = words[j][k];
        if (currentMap.containsKey(char) && currentMap[char]! > 0) {
          currentMap[char] = currentMap[char]! - 1;
        } else {
          addable = false;
          break;
        }
      }

      if (addable) {
        response += words[j].length;
      }
    }
  }

  return response;
}
}