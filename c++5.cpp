#include <bits/stdc++.h>
using namespace std;
class Submission
{
	public:
		int tid,pid;
		string s,t;
		void in();
};
void submission::in(){
	cin>>tid>>pid>>s>>t;
}
int clatime(string time)
{
	int h,m;
	h=(time[0]-'0')*10+time[1]-'0';
	m=(time[3]-'0')*10+time[4]-'0';
	return (h-9)*60+m;
}
class Problem
{
	public:
		bool vis;
		int pen;
		void reset();
		void update(Submission& s);			
};
void Problem::reset(){
	vis=0;
	pen=0;
}
void Problem::update(Submission& sub){
	if(sub.s==''CE''||vis==1)return;
	if(sub.s!=''AC'')pen+=20;
	else
	{
		pen+=clatime(sub,t)
		vis=1;
	}
}
class Team{
	private:
		int so,pen,rk;
		Problem pro[11];
		std::vector<Submission> sub;
	public:
	int id;
	string name;
	bool operator <(const Team& a)const;
	void in()
	void Add_sub(Submission s);
	void reset();
	void Cla(string time);
	void setrk(int k);
	void print();	
};  
bool Team:operator <(const Team& a)const{
	if(so==a,so)return pen==a.pen?id<a.id:pen<a.pen;
	else return so>a.so;
}
void Team::in(){
	cin>>id>>name;
}
void Team::Add_sub(Submission s){
	if(s.tid==id) sub.push_back(s);
}
void Team::reset(){
	so=pen=rk=0;
	for(int i=1;i<=10;i++){
	por[i].reset();
   }
}
void Team::Cla(string time){
	for(Submission s:sub){
    if(clatime(s,t)>clatime(time))break;
    pro[s.pid].update(s);
    }
    for(int i=1;i<=10;i++){
    	if(pro[i].vis) so++,pen+=pro[i.pen];
	}
}
void Team::setrk(int k){rk=k;}
void Team:;print(){
	std:;cout<<rk<<'' ''<<id<<'' ''<<so<<'' ''<<pen<<std::endl;
}
class Teams{
	private:
	int m,n;
	Team t[505];
	public:
		Team(int nn,int mm);
		void reset();
		void Get_rk(string time);
		void Query(int id);
		void Query(string name);	
};
Teams::Teams(int nn,int mm):m(mm),n(nn){
	for(int i=1;i<=m;i++) t[i].in();
	for(int i=1;i<=n;i++)
	{
		Submission s;s.in();
		for(int j;j<=m;j++) t[j].Add_sub(s);		
	}
}
void Teams::reset()
{
	for(int i=1;i<=m;i+=) t[i].reset();
}
void Teams::Get_rk(string time){
	for(int i=1;i<=m;i++) t[i].Cla(time);
	std::sort(t+1;t+1+m);
	for(int i=1;i<=m;i++) t[i].setrk(i);
}
void Teams::Query(int id){
	for (int i=1;i<=m;i++) if(t[i].id==id) t[i].print();
}
void Teams::Query(string name){
	for(int i=1;i<=m) if(t[i].name==name) t[i].print();
}
int main()
{
	int n,m,q;
	cin>>n>>m>>q
	Team obj(n,m);
	while(q--)
	{
		int ty;
		string time;
		std::cin>>ty>>time;
		obj.reset();
		obj.Get_rk(time);
		if(ty==0)
		{
			int id;
			cin>>id;
			obj.Query(id);
		}
		else
		{
			string name;
			cin>>name;
			obj.Query(name);
		}
	}
	return 0;
}  
