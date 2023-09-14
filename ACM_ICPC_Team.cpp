// Hacker Rank Question link : https://www.hackerrank.com/challenges/acm-icpc-team/problem?isFullScreen=true





vector<int> acmTeam(vector<string> topic) {
    int known_topic = 0, team = 0;
    vector<int> ans, temp;
    for (int i = 0; i < topic.size() - 1; i++){
        for (int j = i + 1; j < topic.size(); j++){ 
            int count = 0;
            for (int k = 0; k < topic[0].size(); k++){
                if (topic[i][k] == '1' || topic[j][k] == '1'){
                    count = count + 1;
                }
            }
            temp.push_back(count);
            if (count > known_topic)
            {
                known_topic = count;
            }
        }
    }
    for (int i = 0; i < temp.size(); i++){
        if(temp[i] == known_topic)
        {
            team = team + 1; 
        }
    }
    ans.push_back(known_topic);
    ans.push_back(team);
    return ans;
}