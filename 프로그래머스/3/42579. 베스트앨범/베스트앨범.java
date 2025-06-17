import java.util.*;

// 장르 -> 재생 수 -> 고유번호 낮은
class Song {
    int songNum;
    int priorGenre;
    int cnt;
    Song(int songNum, int priorGenre, int cnt) {
        this.songNum = songNum;
        this.priorGenre = priorGenre;
        this.cnt = cnt;
    }
}


class Solution {
    public int[] solution(String[] genres, int[] plays) {
        PriorityQueue<Song> pq = new PriorityQueue<>(
            (a, b) -> {
                if (b.priorGenre != a.priorGenre) {
                    return Integer.compare(a.priorGenre, b.priorGenre);
                }
                else {
                    return Integer.compare(b.cnt, a.cnt);
                }
            }
        );
        
        Map<String, Integer> genMap = new HashMap<>();
        // 1. 장르 순위
        for (int i = 0; i < genres.length; i++) {
            genMap.put(genres[i], genMap.getOrDefault(genres[i], 0) + plays[i]);
        }
        
        // 정렬
        List<Map.Entry<String, Integer>> genList = new ArrayList<>(genMap.entrySet());
        genList.sort(Map.Entry.<String, Integer>comparingByValue().reversed());
        // 장르 순위를 map에 저장
        Map<String, Integer> genRank = new HashMap<>();
        int rank = 1;
        for (Map.Entry<String, Integer> entry : genList) {
            genRank.put(entry.getKey(), rank);
            rank++;
        }
        for (String key : genRank.keySet()) {
            System.out.println(key + "->" + genRank.get(key) + "위");
        }
        
        for (int i = 0; i < plays.length; i++) {
          pq.add(new Song(i, genRank.get(genres[i]), plays[i]));
        }
        Map<String, Integer> genreCount = new HashMap<>();
        List<Integer> result = new ArrayList<>();
        while (!pq.isEmpty()) {
            Song s = pq.poll();
            String genre = genres[s.songNum];
            genreCount.put(genre, genreCount.getOrDefault(genre, 0) + 1);
            if (genreCount.get(genre) <= 2) {
                result.add(s.songNum);
            }
        }
        System.out.println(result);

        return result.stream().mapToInt(i -> i).toArray();
    }
}