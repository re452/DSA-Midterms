    while (!s_num.empty() && !q_num.empty()) {
        combined_v.push_back(s_num.top());
        s_num.pop();
        combined_v.push_back(q_num.front());
        q_num.pop();
    }
    cout << "Two: ";
    for (int i = 0; i < combined_v.size(); i++) {
        cout << combined_v[i] << " ";
    }
    cout << endl;
    return 0;
}
