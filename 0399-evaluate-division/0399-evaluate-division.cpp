class Solution {
public:
//     referred Tech Adora to solve this proble,: SOLVE IT AGAIN ONCE YOU ARE GOOD WITH GRAPHS 
    double dfs(string a,string&b,unordered_map<string,unordered_map<string,double>> graph, unordered_set<string> visited) {
        if(graph[a].find(b)!=graph[a].end()) {
            return graph[a][b];
        }
        for(auto nodes:graph[a]) {
            if(visited.find(nodes.first)==visited.end()) {
                visited.insert(nodes.first);
                double val = dfs(nodes.first,b,graph,visited);
                if(val) {
                    graph[a][b] = nodes.second*val;
                    return graph[a][b];
                }
            }
        }
        return 0;
    }
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        vector<double> ans;
        unordered_map<string,unordered_map<string,double>> graph;
        for(int i=0;i<equations.size();i++) {
//             create a/b = value and b/a = value
            graph[equations[i][0]][equations[i][1]]=values[i];
            graph[equations[i][1]][equations[i][0]]=(double)1/values[i];
        }
        for(int i=0;i<queries.size();i++) {
//             create a set where you map the pattern of the graph such as a<->b<->c<->a and return -1 if the graph is not connected to a new variable or value: if available push back the value
            unordered_set<string> visited;
//             call the dfs and get the value for the query checking the visited
            double val = dfs(queries[i][0],queries[i][1],graph,visited);
//             as told above if no val then just return -1.0 or push_back the val in case a val is present
            if(!val)
                ans.push_back(-1.0);
            else
                ans.push_back(val);
        }
        return ans;
    }
};