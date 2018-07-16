#include<iostream>
using namespace std;

class book
{
 public:
  char title[20],author[20],publisher[20];
  int price,available_stock;

	 void accept();
	 void display();
	 void update();
	 void search();
};

int main()
{

	book b;

	int y;

 	cout<<"Enter your choice \n 1: To accept the book \n 2: To display the book \n 3: To update the available book \n 4: To search a book"<<endl;
	cin>>y;

	switch(y)
	{
		case 1 : b.accept();
       			  break;
 		case 2 : b.display();
			  break;
		case 3 : b.update();
        		  break;
		case 4:  b.search();
			  break;
		default : cout<<"Enter te valid choice"<<endl;
			  break;

	}

return 0;
}


void book::accept()
{
 	int i;
	cout<<"Enter book details:"<<endl;

	for(i=0;i<3;i++)
 	 {
   		cin>>b[i].title>>b[i].author>>b[i].publisher;
   		cin>>b[i].price>>b[i].available_stock;
  	 }

}

void book::display()
{
  	int i;
  	for(i=0;i<3;i++)
  	{

  	 cout<<"\n"<<"Title of book is="<<b[i].title<<"\n"<<"Author of book is="<<b[i].author<<"\n"<<"Publisher of book is="<<b[i].publisher<<endl;
   	 cout<<"\n"<<"Price of book is="<<b[i].price<<"\n"<<"Available stock is="<<b[i].available_stock<<endl;
  	}

}
void book::update()
{
	int n;
	cout<<"Which book you want to update"<<endl;
	cin>>n;

	cout<<"\n"<<"Title of book is="<<endl;
	cin>>b[n].title;

	cout<<"\n"<<"Author of book is="<<endl;
	cin>>b[n].author;

	cout<<"\n"<<"Publisher of book is="<<endl;
	cin>>b[n].publisher;

	cout<<"\n"<<"Price of book is="<<endl;
	cin>>b[n].price;

	cout<<"\n"<<"Available stock is="<<endl;
	cin>>b[n].available_stock;

}
void book::search()
{
	int p,k=3;
	char l[20];
	cout<<"How you want to search your book \n 1: By title \n 2: By author \n 3: By publisher \n ";
	cin>>p;

	switch(p)
	{
		case 1: cout<<"Searching book by title";
			cout<<"Enter the title of the book";
			cin>>l;
			while(k--)
			{
				if(b[k]==l)
				{
					cout<<"Book found on"<<k<<endl;
						break;
				}

			}
			break;
		case 2: cout<<"Searching book by author";
			cin>>l;
			while(k--)
			{
				if(b[k]==l)
				{
					cout<<"Book found on"<<k<<endl;
						break;
				}

			}
			break;
		case 3: cout<<"Searching book by publisher";
			cin>>l;
			while(k--)
			{
				if(b[k]==l)
				{
					cout<<"Book found on"<<k<<endl;
						break;
				}

			}
			break;
		default : cout<<"Enter te valid choice"<<endl;

			break;

	}

}

