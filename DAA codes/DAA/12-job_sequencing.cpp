#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Job {
    char id;
    int deadline;
    int profit;
};

// Compare jobs by decreasing profit
bool compare(Job a, Job b) {
    return a.profit > b.profit;
}

void jobSequencing(vector<Job>& jobs) {
    // Sort jobs according to profit in descending order
    sort(jobs.begin(), jobs.end(), compare);

    // Find maximum deadline
    int maxDeadline = 0;
    for (auto job : jobs) {
        maxDeadline = max(maxDeadline, job.deadline);
    }

    // Time slots
    vector<char> slot(maxDeadline + 1, '-');

    int totalProfit = 0;
    int jobCount = 0;

    // Schedule each job in the latest available slot
    for (auto job : jobs) {
        for (int j = job.deadline; j >= 1; j--) {
            if (slot[j] == '-') {
                slot[j] = job.id;
                totalProfit += job.profit;
                jobCount++;
                break;
            }
        }
    }

    // Display result
    cout << "Selected Jobs: ";
    for (int i = 1; i <= maxDeadline; i++) {
        if (slot[i] != '-')
            cout << slot[i] << " ";
    }

    cout << "\nTotal Jobs: " << jobCount;
    cout << "\nMaximum Profit: " << totalProfit << endl;
}

int main() {
    int n;

    cout << "Enter number of jobs: ";
    cin >> n;

    vector<Job> jobs(n);

    cout << "Enter Job ID, Deadline and Profit:\n";

    for (int i = 0; i < n; i++) {
        cin >> jobs[i].id
            >> jobs[i].deadline
            >> jobs[i].profit;
    }

    jobSequencing(jobs);

    return 0;
}