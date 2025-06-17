import java.util.*;

class Song {
    int songNum;
    int playCount;

    Song(int songNum, int playCount) {
        this.songNum = songNum;
        this.playCount = playCount;
    }
}

class Solution {
    public int[] solution(String[] genres, int[] plays) {
        // 장르별 재생 수
        Map<String, Integer> genreTotal = new HashMap<>();
        for (int i = 0; i < genres.length; i++) {
            genreTotal.put(genres[i], genreTotal.getOrDefault(genres[i], 0) + plays[i]);
        }

        // 장르별 곡
        Map<String, List<Song>> genreToSongs = new HashMap<>();
        for (int i = 0; i < genres.length; i++) {
            genreToSongs.computeIfAbsent(genres[i], k -> new ArrayList<>())
                        .add(new Song(i, plays[i]));
        }

        // 장르 순서 (재생 수 내림차)
        List<String> sortedGenres = new ArrayList<>(genreTotal.keySet());
        sortedGenres.sort((a, b) -> genreTotal.get(b) - genreTotal.get(a));

        // 장르에서 2곡씩 선택 (재생 수 내림차, 고유번호 오름차)
        List<Integer> result = new ArrayList<>();
        for (String genre : sortedGenres) {
            List<Song> songs = genreToSongs.get(genre);
            songs.sort((a, b) -> {
                if (b.playCount != a.playCount) {
                    return b.playCount - a.playCount;
                }
                return a.songNum - b.songNum;
            });

            for (int i = 0; i < Math.min(2, songs.size()); i++) {
                result.add(songs.get(i).songNum);
            }
        }

        return result.stream().mapToInt(i -> i).toArray();
    }
}
