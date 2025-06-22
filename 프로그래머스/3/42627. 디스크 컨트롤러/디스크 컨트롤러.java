import java.util.*;

class Job {
    int id ;
    int reqTime;
    int jobTime;
    int aroundTime;

    Job(int id, int reqTime, int jobTime) {
        this.id = id;
        this.reqTime = reqTime;
        this.jobTime = jobTime;
    }
    
    @Override
    public String toString() {
        return String.format("[id=%d, req=%d, time=%d]", id, reqTime, jobTime);
    }
}
class Solution {
    public int solution(int[][] jobs) {
        List<Job> jobList = new ArrayList<>();
        for (int i = 0; i < jobs.length; i++)
            jobList.add(new Job(i, jobs[i][0], jobs[i][1]));
        
        jobList.sort(Comparator.comparingInt(j -> j.reqTime));
        
        // 작업순서 = 소요시간, 요청시각, 번호작은거
        PriorityQueue<Job> waitQ = new PriorityQueue<>(
            (a, b) -> {
                if (b.jobTime != a.jobTime) return Integer.compare(a.jobTime, b.jobTime);
                else if (b.reqTime != a.reqTime) return Integer.compare(a.reqTime, b.reqTime);
                else return Integer.compare(a.id, b.id);
            }
        );
        
        int now = 0, jobIndex = 0, totalWait = 0, count = 0;

        while(count < jobs.length) {
            while (jobIndex < jobList.size() && jobList.get(jobIndex).reqTime <= now) {
                waitQ.add(jobList.get(jobIndex++));
            }
                
            if (!waitQ.isEmpty()) {
                Job job = waitQ.poll();
                now += job.jobTime;
                totalWait += now - job.reqTime;
                count++;
            }
            else {
                now = jobList.get(jobIndex).reqTime;
            }
        }
        
        return totalWait / jobs.length;
    }
}