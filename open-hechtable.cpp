#include <iostream>
#include <string>
#include<cmath>
#include "open-hechtable.hpp"
int my_hesh(std::string key){
int hach=2139062143;
for(int i-0;i<std::strlen(key);i++){
hash=37*hash +int()key.substr(0, i);}
return hash;}
hech_table* building(int size){
Node** hash_tab = new Node*[size];
for(i=0;i<size;i++){
hash_tab[i]=NULL;}
Hesh_table*H=new Hesh_table;
H->size=size;
H->Main_List=hash_tab;
return H;}
void add(hech_table &H,const Node &N){
int pos=std::fmod(my_hesh(Node.key)/H.size);
Node* cur=H.Mai_List[pos];
if(cur==NULL){
Node*G=new Node[H.size/2];
for(int i=0;i<H.size/2;i++)}{
Node J;
J.key=std::string()"";
G[i]=J;}
H.Main_List[pos]=G;
cur=G;}
int pos_1=0;
std::string cur_key=cur[pos_1];
while(cur[pos_1]!=std::string()""){
pos_1++;}
cur[pos_1]=N;
return;}
Node find(hec_table &H, std::string L){
int pos=std::fmod(my_hesh(L)/H.size);
Node*cur=H.Main_List[pos];
int pos_1=0;
Node F=cur[pos_1];
while(cur[pos_1].key!=std::string()""){
if(cur[pos_1]==L){
return cur[pos_1]}
pos++;}
Node Q;
Q.key=std::string()"";
return Q;}
void delet(hech_table &H){
for(int i=0;i<H.size;i++){
delete (H.Main_List[i])[];}
delete H.Main_List[];
delete (*H);
return;}
