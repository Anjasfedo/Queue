#include <iostream>
#define MAX 26
using namespace std;

struct Queue {
	int head; 
	int tail; 
	int data[MAX];
}
Q;


bool isFull() {
	return Q.tail == MAX;
}


bool isEmpty() {
	return Q.tail == 0;
}


void printQueue() {
	if (isEmpty()) {
    cout << "Kosong"<<endl;
	}
	else {
		cout << "QUEUE : ";
		for (int i = Q.head; i < Q.tail; i++)
			cout << Q.data[i] << ((Q.tail-1 == i) ? "" : ",");
		cout << endl;
  }
}


void enqueue() {
	if (isFull())
	{
		cout << "Penuh"<<endl;
	}
	else {
		int data;
		cout << "Masukkan data : ";cin >> data;
		Q.data[Q.tail] = data;
		Q.tail++;
		cout << "Data ditambahkan\n";
		printQueue();
	}
}


void dequeue() {
	if (isEmpty())
	{
		cout << "Kosong"<<endl;
	}
	else{
		cout << "Mengambil data \"" << Q.data[Q.head] << "\"..." << endl;
		for (int i = Q.head; i < Q.tail; i++)
			Q.data[i] = Q.data[i + 1];
		Q.tail--;
		printQueue();
	}
}

int main() {
	int choose;
	do
	{
		cout << "QUEUE\n"
			<< " 1. Tambahkan Data \n"
			<< " 2. Ambil Data\n"
			<< " 3. Keluar \n\n"
			<< "Masukkan pilihan : "; cin >> choose;
		switch (choose)
		{
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		default:
			cout << "Error";
			break;
		}
	} while (choose !=3);
	return 0;
}
