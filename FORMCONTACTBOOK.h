#pragma once
#include<string>
#include<fstream>
#include"search.h"
#include"ContactsBook.h"
#include"result.h"
#include <msclr/marshal_cppstd.h>

namespace FINALPROJECTWINFORM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		ContactsBook* book;
	private: System::Windows::Forms::Panel^ panel20;
	private: System::Windows::Forms::Panel^ underline6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ addtogroup;
	private: System::Windows::Forms::Panel^ showgroups;
	private: System::Windows::Forms::Label^ groupshowlabel;
	private: System::Windows::Forms::DataGridView^ groupdetails;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ groupname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ noofcontact;
	private: System::Windows::Forms::Panel^ panel19;
	private: System::Windows::Forms::Panel^ underline7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ showlistgroups;







	private: System::Windows::Forms::Panel^ contactdetailsgroup;
	private: System::Windows::Forms::Label^ groupnamelabel;
	private: System::Windows::Forms::DataGridView^ groupcontactslist;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ groupdetailname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ groupdetailphone;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ groupdetailemail;
	private: System::Windows::Forms::Label^ labelgroup;
	private: System::Windows::Forms::Panel^ panel21;
	private: System::Windows::Forms::TextBox^ detailgroup;
	private: System::Windows::Forms::Button^ deletebutton;
	private: System::Windows::Forms::Panel^ panel22;
	private: System::Windows::Forms::Panel^ underline8;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ searchcontact;
	private: System::Windows::Forms::Panel^ searchpanel;
	private: System::Windows::Forms::Panel^ searchbox;
	private: System::Windows::Forms::TextBox^ searchtype;
	private: System::Windows::Forms::Label^ searching;



	private: System::Windows::Forms::Label^ searchlabel;
	private: System::Windows::Forms::DataGridView^ searchcontactlist;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ searchname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ searchphone;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ searchemail;
	private: System::Windows::Forms::Panel^ panel23;
	private: System::Windows::Forms::Panel^ underline9;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ sortcontacts;
	private: System::Windows::Forms::Panel^ sortpanel;
	private: System::Windows::Forms::Panel^ panel24;
	private: System::Windows::Forms::TextBox^ sorttype;

	private: System::Windows::Forms::Label^ sorting;

	private: System::Windows::Forms::Label^ sortlabel;
	private: System::Windows::Forms::Button^ searchhistory;
	private: System::Windows::Forms::Panel^ search_history_panel;
	private: System::Windows::Forms::Label^ historylabel;

	private: System::Windows::Forms::DataGridView^ search_history_list;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ searchhistoryno;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ searchhistorytext;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ searchhistorydate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ searchhistorytime;
	private: System::Windows::Forms::Button^ top5contacts;
	private: System::Windows::Forms::Panel^ creategroup;
	private: System::Windows::Forms::TextBox^ creategrouptext;


	private: System::Windows::Forms::Label^ groupcreatelabel;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Panel^ underline10;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ mergecontacts;
	private: System::Windows::Forms::Timer^ timer11;
	private: System::Windows::Forms::Timer^ timer12;





	public:
		   bool destructBook = true;
		MyForm(void)
		{
			book = book->load_from_file("saving_contacts.txt");
			InitializeComponent();

			book->load_groups("saving_groups.txt");
			book->load_search("saving_search.txt");			
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (destructBook) { this->book->save_to_file_contacts("saving_contacts.txt"); this->book->save_to_file_search("saving_search.txt"); this->book->save_to_file_groups("saving_groups.txt"); delete book; destructBook = false; }
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ leftpnl;
	private: System::Windows::Forms::Button^ addcontactbtn;
	private: System::Windows::Forms::Panel^ addcontacts;
	private: System::Windows::Forms::Panel^ rightpnl;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ plus2;
	private: System::Windows::Forms::Button^ contactshow;
	private: System::Windows::Forms::Panel^ getcontactpnl;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ firstname;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ lastname;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::TextBox^ countrybox;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::TextBox^ citybox;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::TextBox^ street;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ house;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ email;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ phonenumber;
	private: System::Windows::Forms::Label^ heading_contact;
	private: System::Windows::Forms::Button^ submit_contact;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Label^ plus;
	private: System::Windows::Forms::Panel^ underline;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Panel^ underline2;
	private: System::Windows::Forms::Timer^ timer3;
	private: System::Windows::Forms::Timer^ timer4;
	private: System::Windows::Forms::Panel^ showcontactpnl;
	private: System::Windows::Forms::DataGridView^ contactslistview;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cntname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cntphone;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cntemail;





	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Panel^ underline4;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ viewdetails;

	private: System::Windows::Forms::Timer^ timer5;
	private: System::Windows::Forms::Timer^ timer6;
	private: System::Windows::Forms::Timer^ timer7;
	private: System::Windows::Forms::Timer^ timer8;
	private: System::Windows::Forms::Panel^ viewcontactdetail;
	private: System::Windows::Forms::Panel^ detailpnl1;
	private: System::Windows::Forms::TextBox^ detailhouse;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::TextBox^ detailcountry;

	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::TextBox^ detailcity;

	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::TextBox^ detailstreet;
	private: System::Windows::Forms::Label^ labelname;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::TextBox^ detailname;
	private: System::Windows::Forms::Label^ labelstreet;


	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::TextBox^ detailemail;

	private: System::Windows::Forms::Label^ labelemail;
	private: System::Windows::Forms::Panel^ panel17;
	private: System::Windows::Forms::TextBox^ detailnumber;

	private: System::Windows::Forms::Label^ labelnumber;
	private: System::Windows::Forms::Label^ labelhouse;
private: System::Windows::Forms::Label^ labelcountry;





private: System::Windows::Forms::Label^ labelcity;

private: System::Windows::Forms::Label^ viewcontact;
private: System::Windows::Forms::Panel^ panel18;
private: System::Windows::Forms::Panel^ underline5;


private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Button^ deletecontact;
private: System::Windows::Forms::Timer^ timer9;
private: System::Windows::Forms::Timer^ timer10;









	private: System::ComponentModel::IContainer^ components;

	protected:
		
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle12 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle16 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle13 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle14 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle15 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle17 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle20 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle18 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle19 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle21 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle22 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle26 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle27 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle23 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle24 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle25 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->leftpnl = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->underline10 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->mergecontacts = (gcnew System::Windows::Forms::Button());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->underline9 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->sortcontacts = (gcnew System::Windows::Forms::Button());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->underline8 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->searchcontact = (gcnew System::Windows::Forms::Button());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->underline7 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->showlistgroups = (gcnew System::Windows::Forms::Button());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->underline6 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->addtogroup = (gcnew System::Windows::Forms::Button());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->underline5 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->deletecontact = (gcnew System::Windows::Forms::Button());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->underline4 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->viewdetails = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->underline2 = (gcnew System::Windows::Forms::Panel());
			this->plus2 = (gcnew System::Windows::Forms::Label());
			this->contactshow = (gcnew System::Windows::Forms::Button());
			this->addcontacts = (gcnew System::Windows::Forms::Panel());
			this->underline = (gcnew System::Windows::Forms::Panel());
			this->plus = (gcnew System::Windows::Forms::Label());
			this->addcontactbtn = (gcnew System::Windows::Forms::Button());
			this->searchpanel = (gcnew System::Windows::Forms::Panel());
			this->top5contacts = (gcnew System::Windows::Forms::Button());
			this->searchhistory = (gcnew System::Windows::Forms::Button());
			this->searchbox = (gcnew System::Windows::Forms::Panel());
			this->searchtype = (gcnew System::Windows::Forms::TextBox());
			this->searching = (gcnew System::Windows::Forms::Label());
			this->searchlabel = (gcnew System::Windows::Forms::Label());
			this->searchcontactlist = (gcnew System::Windows::Forms::DataGridView());
			this->searchname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->searchphone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->searchemail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->rightpnl = (gcnew System::Windows::Forms::Panel());
			this->sortpanel = (gcnew System::Windows::Forms::Panel());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->sorttype = (gcnew System::Windows::Forms::TextBox());
			this->sorting = (gcnew System::Windows::Forms::Label());
			this->sortlabel = (gcnew System::Windows::Forms::Label());
			this->search_history_panel = (gcnew System::Windows::Forms::Panel());
			this->historylabel = (gcnew System::Windows::Forms::Label());
			this->search_history_list = (gcnew System::Windows::Forms::DataGridView());
			this->searchhistoryno = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->searchhistorytext = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->searchhistorydate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->searchhistorytime = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->contactdetailsgroup = (gcnew System::Windows::Forms::Panel());
			this->groupnamelabel = (gcnew System::Windows::Forms::Label());
			this->groupcontactslist = (gcnew System::Windows::Forms::DataGridView());
			this->groupdetailname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupdetailphone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupdetailemail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->showgroups = (gcnew System::Windows::Forms::Panel());
			this->creategroup = (gcnew System::Windows::Forms::Panel());
			this->creategrouptext = (gcnew System::Windows::Forms::TextBox());
			this->groupcreatelabel = (gcnew System::Windows::Forms::Label());
			this->deletebutton = (gcnew System::Windows::Forms::Button());
			this->groupdetails = (gcnew System::Windows::Forms::DataGridView());
			this->groupname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->noofcontact = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupshowlabel = (gcnew System::Windows::Forms::Label());
			this->viewcontactdetail = (gcnew System::Windows::Forms::Panel());
			this->labelgroup = (gcnew System::Windows::Forms::Label());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->detailgroup = (gcnew System::Windows::Forms::TextBox());
			this->viewcontact = (gcnew System::Windows::Forms::Label());
			this->labelcountry = (gcnew System::Windows::Forms::Label());
			this->labelcity = (gcnew System::Windows::Forms::Label());
			this->labelhouse = (gcnew System::Windows::Forms::Label());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->detailnumber = (gcnew System::Windows::Forms::TextBox());
			this->labelnumber = (gcnew System::Windows::Forms::Label());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->detailemail = (gcnew System::Windows::Forms::TextBox());
			this->labelemail = (gcnew System::Windows::Forms::Label());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->detailname = (gcnew System::Windows::Forms::TextBox());
			this->labelstreet = (gcnew System::Windows::Forms::Label());
			this->labelname = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->detailcountry = (gcnew System::Windows::Forms::TextBox());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->detailcity = (gcnew System::Windows::Forms::TextBox());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->detailstreet = (gcnew System::Windows::Forms::TextBox());
			this->detailpnl1 = (gcnew System::Windows::Forms::Panel());
			this->detailhouse = (gcnew System::Windows::Forms::TextBox());
			this->showcontactpnl = (gcnew System::Windows::Forms::Panel());
			this->getcontactpnl = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->firstname = (gcnew System::Windows::Forms::TextBox());
			this->submit_contact = (gcnew System::Windows::Forms::Button());
			this->heading_contact = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->countrybox = (gcnew System::Windows::Forms::TextBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->citybox = (gcnew System::Windows::Forms::TextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->street = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->house = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->phonenumber = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->lastname = (gcnew System::Windows::Forms::TextBox());
			this->contactslistview = (gcnew System::Windows::Forms::DataGridView());
			this->cntname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cntphone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cntemail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer4 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer5 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer6 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer7 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer8 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer9 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer10 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer11 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer12 = (gcnew System::Windows::Forms::Timer(this->components));
			this->leftpnl->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel23->SuspendLayout();
			this->panel22->SuspendLayout();
			this->panel19->SuspendLayout();
			this->panel20->SuspendLayout();
			this->panel18->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel1->SuspendLayout();
			this->addcontacts->SuspendLayout();
			this->searchpanel->SuspendLayout();
			this->searchbox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->searchcontactlist))->BeginInit();
			this->rightpnl->SuspendLayout();
			this->sortpanel->SuspendLayout();
			this->panel24->SuspendLayout();
			this->search_history_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->search_history_list))->BeginInit();
			this->contactdetailsgroup->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->groupcontactslist))->BeginInit();
			this->showgroups->SuspendLayout();
			this->creategroup->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->groupdetails))->BeginInit();
			this->viewcontactdetail->SuspendLayout();
			this->panel21->SuspendLayout();
			this->panel17->SuspendLayout();
			this->panel16->SuspendLayout();
			this->panel14->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel13->SuspendLayout();
			this->detailpnl1->SuspendLayout();
			this->showcontactpnl->SuspendLayout();
			this->getcontactpnl->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->contactslistview))->BeginInit();
			this->SuspendLayout();
			// 
			// leftpnl
			// 
			this->leftpnl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->leftpnl->Controls->Add(this->panel10);
			this->leftpnl->Controls->Add(this->panel23);
			this->leftpnl->Controls->Add(this->panel22);
			this->leftpnl->Controls->Add(this->panel19);
			this->leftpnl->Controls->Add(this->panel20);
			this->leftpnl->Controls->Add(this->panel18);
			this->leftpnl->Controls->Add(this->panel12);
			this->leftpnl->Controls->Add(this->panel1);
			this->leftpnl->Controls->Add(this->addcontacts);
			this->leftpnl->Location = System::Drawing::Point(1, 0);
			this->leftpnl->Name = L"leftpnl";
			this->leftpnl->Size = System::Drawing::Size(324, 681);
			this->leftpnl->TabIndex = 0;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::Transparent;
			this->panel10->Controls->Add(this->underline10);
			this->panel10->Controls->Add(this->label1);
			this->panel10->Controls->Add(this->mergecontacts);
			this->panel10->Location = System::Drawing::Point(2, 554);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(321, 45);
			this->panel10->TabIndex = 10;
			// 
			// underline10
			// 
			this->underline10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->underline10->Location = System::Drawing::Point(33, 33);
			this->underline10->Name = L"underline10";
			this->underline10->Size = System::Drawing::Size(100, 3);
			this->underline10->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(27, 4);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(24, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"+";
			// 
			// mergecontacts
			// 
			this->mergecontacts->Cursor = System::Windows::Forms::Cursors::Hand;
			this->mergecontacts->FlatAppearance->BorderSize = 0;
			this->mergecontacts->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->mergecontacts->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->mergecontacts->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mergecontacts->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->mergecontacts->Location = System::Drawing::Point(50, 4);
			this->mergecontacts->Name = L"mergecontacts";
			this->mergecontacts->Size = System::Drawing::Size(269, 33);
			this->mergecontacts->TabIndex = 0;
			this->mergecontacts->Text = L"MERGE DUPLICATES";
			this->mergecontacts->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->mergecontacts->UseVisualStyleBackColor = true;
			this->mergecontacts->Click += gcnew System::EventHandler(this, &MyForm::mergecontacts_Click);
			// 
			// panel23
			// 
			this->panel23->BackColor = System::Drawing::Color::Transparent;
			this->panel23->Controls->Add(this->underline9);
			this->panel23->Controls->Add(this->label7);
			this->panel23->Controls->Add(this->sortcontacts);
			this->panel23->Location = System::Drawing::Point(2, 496);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(321, 45);
			this->panel23->TabIndex = 9;
			// 
			// underline9
			// 
			this->underline9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->underline9->Location = System::Drawing::Point(33, 33);
			this->underline9->Name = L"underline9";
			this->underline9->Size = System::Drawing::Size(100, 3);
			this->underline9->TabIndex = 4;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(27, 4);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(24, 25);
			this->label7->TabIndex = 1;
			this->label7->Text = L"+";
			// 
			// sortcontacts
			// 
			this->sortcontacts->Cursor = System::Windows::Forms::Cursors::Hand;
			this->sortcontacts->FlatAppearance->BorderSize = 0;
			this->sortcontacts->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->sortcontacts->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->sortcontacts->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->sortcontacts->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->sortcontacts->Location = System::Drawing::Point(50, 4);
			this->sortcontacts->Name = L"sortcontacts";
			this->sortcontacts->Size = System::Drawing::Size(269, 33);
			this->sortcontacts->TabIndex = 0;
			this->sortcontacts->Text = L"SORT CONTACTS";
			this->sortcontacts->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->sortcontacts->UseVisualStyleBackColor = true;
			this->sortcontacts->Click += gcnew System::EventHandler(this, &MyForm::sortcontacts_Click);
			// 
			// panel22
			// 
			this->panel22->BackColor = System::Drawing::Color::Transparent;
			this->panel22->Controls->Add(this->underline8);
			this->panel22->Controls->Add(this->label6);
			this->panel22->Controls->Add(this->searchcontact);
			this->panel22->Location = System::Drawing::Point(2, 436);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(321, 45);
			this->panel22->TabIndex = 8;
			// 
			// underline8
			// 
			this->underline8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->underline8->Location = System::Drawing::Point(33, 33);
			this->underline8->Name = L"underline8";
			this->underline8->Size = System::Drawing::Size(100, 3);
			this->underline8->TabIndex = 4;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(27, 4);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(24, 25);
			this->label6->TabIndex = 1;
			this->label6->Text = L"+";
			// 
			// searchcontact
			// 
			this->searchcontact->Cursor = System::Windows::Forms::Cursors::Hand;
			this->searchcontact->FlatAppearance->BorderSize = 0;
			this->searchcontact->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->searchcontact->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->searchcontact->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->searchcontact->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->searchcontact->Location = System::Drawing::Point(50, 4);
			this->searchcontact->Name = L"searchcontact";
			this->searchcontact->Size = System::Drawing::Size(269, 33);
			this->searchcontact->TabIndex = 0;
			this->searchcontact->Text = L"SEARCH CONTACTS";
			this->searchcontact->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->searchcontact->UseVisualStyleBackColor = true;
			this->searchcontact->Click += gcnew System::EventHandler(this, &MyForm::searchcontact_Click);
			// 
			// panel19
			// 
			this->panel19->BackColor = System::Drawing::Color::Transparent;
			this->panel19->Controls->Add(this->underline7);
			this->panel19->Controls->Add(this->label5);
			this->panel19->Controls->Add(this->showlistgroups);
			this->panel19->Location = System::Drawing::Point(2, 377);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(321, 45);
			this->panel19->TabIndex = 7;
			// 
			// underline7
			// 
			this->underline7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->underline7->Location = System::Drawing::Point(33, 33);
			this->underline7->Name = L"underline7";
			this->underline7->Size = System::Drawing::Size(100, 3);
			this->underline7->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(27, 4);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(24, 25);
			this->label5->TabIndex = 1;
			this->label5->Text = L"+";
			// 
			// showlistgroups
			// 
			this->showlistgroups->Cursor = System::Windows::Forms::Cursors::Hand;
			this->showlistgroups->FlatAppearance->BorderSize = 0;
			this->showlistgroups->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->showlistgroups->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->showlistgroups->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->showlistgroups->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->showlistgroups->Location = System::Drawing::Point(50, 4);
			this->showlistgroups->Name = L"showlistgroups";
			this->showlistgroups->Size = System::Drawing::Size(269, 33);
			this->showlistgroups->TabIndex = 0;
			this->showlistgroups->Text = L"SHOW GROUPS";
			this->showlistgroups->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->showlistgroups->UseVisualStyleBackColor = true;
			this->showlistgroups->Click += gcnew System::EventHandler(this, &MyForm::showlistgroups_Click);
			// 
			// panel20
			// 
			this->panel20->BackColor = System::Drawing::Color::Transparent;
			this->panel20->Controls->Add(this->underline6);
			this->panel20->Controls->Add(this->label4);
			this->panel20->Controls->Add(this->addtogroup);
			this->panel20->Location = System::Drawing::Point(2, 320);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(321, 45);
			this->panel20->TabIndex = 6;
			// 
			// underline6
			// 
			this->underline6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->underline6->Location = System::Drawing::Point(33, 33);
			this->underline6->Name = L"underline6";
			this->underline6->Size = System::Drawing::Size(100, 3);
			this->underline6->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(27, 4);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 25);
			this->label4->TabIndex = 1;
			this->label4->Text = L"+";
			// 
			// addtogroup
			// 
			this->addtogroup->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addtogroup->FlatAppearance->BorderSize = 0;
			this->addtogroup->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->addtogroup->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->addtogroup->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addtogroup->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->addtogroup->Location = System::Drawing::Point(50, 4);
			this->addtogroup->Name = L"addtogroup";
			this->addtogroup->Size = System::Drawing::Size(269, 33);
			this->addtogroup->TabIndex = 0;
			this->addtogroup->Text = L"ADD TO GROUP";
			this->addtogroup->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->addtogroup->UseVisualStyleBackColor = true;
			this->addtogroup->Click += gcnew System::EventHandler(this, &MyForm::addtogroup_Click);
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::Color::Transparent;
			this->panel18->Controls->Add(this->underline5);
			this->panel18->Controls->Add(this->label3);
			this->panel18->Controls->Add(this->deletecontact);
			this->panel18->Location = System::Drawing::Point(2, 264);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(321, 45);
			this->panel18->TabIndex = 5;
			// 
			// underline5
			// 
			this->underline5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->underline5->Location = System::Drawing::Point(33, 34);
			this->underline5->Name = L"underline5";
			this->underline5->Size = System::Drawing::Size(0, 3);
			this->underline5->TabIndex = 6;
			this->underline5->MouseLeave += gcnew System::EventHandler(this, &MyForm::underline5_MouseLeave);
			this->underline5->MouseHover += gcnew System::EventHandler(this, &MyForm::underline5_MouseHover);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(27, 4);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 25);
			this->label3->TabIndex = 1;
			this->label3->Text = L"+";
			// 
			// deletecontact
			// 
			this->deletecontact->Cursor = System::Windows::Forms::Cursors::Hand;
			this->deletecontact->FlatAppearance->BorderSize = 0;
			this->deletecontact->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->deletecontact->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->deletecontact->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deletecontact->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->deletecontact->Location = System::Drawing::Point(50, 4);
			this->deletecontact->Name = L"deletecontact";
			this->deletecontact->Size = System::Drawing::Size(269, 33);
			this->deletecontact->TabIndex = 0;
			this->deletecontact->Text = L"DELETE CONTACT";
			this->deletecontact->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->deletecontact->UseVisualStyleBackColor = true;
			this->deletecontact->Click += gcnew System::EventHandler(this, &MyForm::deletecontact_Click);
			this->deletecontact->MouseLeave += gcnew System::EventHandler(this, &MyForm::underline5_MouseLeave);
			this->deletecontact->MouseHover += gcnew System::EventHandler(this, &MyForm::underline5_MouseHover);
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::Transparent;
			this->panel12->Controls->Add(this->underline4);
			this->panel12->Controls->Add(this->label2);
			this->panel12->Controls->Add(this->viewdetails);
			this->panel12->Location = System::Drawing::Point(2, 207);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(321, 45);
			this->panel12->TabIndex = 4;
			// 
			// underline4
			// 
			this->underline4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->underline4->Location = System::Drawing::Point(33, 34);
			this->underline4->Name = L"underline4";
			this->underline4->Size = System::Drawing::Size(0, 3);
			this->underline4->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(27, 4);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(24, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"+";
			// 
			// viewdetails
			// 
			this->viewdetails->Cursor = System::Windows::Forms::Cursors::Hand;
			this->viewdetails->FlatAppearance->BorderSize = 0;
			this->viewdetails->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->viewdetails->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->viewdetails->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->viewdetails->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->viewdetails->Location = System::Drawing::Point(50, 4);
			this->viewdetails->Name = L"viewdetails";
			this->viewdetails->Size = System::Drawing::Size(269, 33);
			this->viewdetails->TabIndex = 0;
			this->viewdetails->Text = L"VIEW DETAILS";
			this->viewdetails->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->viewdetails->UseVisualStyleBackColor = true;
			this->viewdetails->Click += gcnew System::EventHandler(this, &MyForm::viewdetails_Click);
			this->viewdetails->MouseLeave += gcnew System::EventHandler(this, &MyForm::viewdetails_MouseLeave);
			this->viewdetails->MouseHover += gcnew System::EventHandler(this, &MyForm::viewdetails_MouseHover);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->underline2);
			this->panel1->Controls->Add(this->plus2);
			this->panel1->Controls->Add(this->contactshow);
			this->panel1->Location = System::Drawing::Point(0, 149);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(321, 45);
			this->panel1->TabIndex = 2;
			// 
			// underline2
			// 
			this->underline2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->underline2->Location = System::Drawing::Point(33, 33);
			this->underline2->Name = L"underline2";
			this->underline2->Size = System::Drawing::Size(0, 3);
			this->underline2->TabIndex = 4;
			// 
			// plus2
			// 
			this->plus2->AutoSize = true;
			this->plus2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plus2->Location = System::Drawing::Point(27, 4);
			this->plus2->Name = L"plus2";
			this->plus2->Size = System::Drawing::Size(24, 25);
			this->plus2->TabIndex = 1;
			this->plus2->Text = L"+";
			// 
			// contactshow
			// 
			this->contactshow->Cursor = System::Windows::Forms::Cursors::Hand;
			this->contactshow->FlatAppearance->BorderSize = 0;
			this->contactshow->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->contactshow->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->contactshow->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->contactshow->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->contactshow->Location = System::Drawing::Point(50, 4);
			this->contactshow->Name = L"contactshow";
			this->contactshow->Size = System::Drawing::Size(269, 33);
			this->contactshow->TabIndex = 0;
			this->contactshow->Text = L"SHOW CONTACT";
			this->contactshow->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->contactshow->UseVisualStyleBackColor = true;
			this->contactshow->Click += gcnew System::EventHandler(this, &MyForm::contactshow_Click);
			this->contactshow->MouseLeave += gcnew System::EventHandler(this, &MyForm::contactshow_MouseLeave);
			this->contactshow->MouseHover += gcnew System::EventHandler(this, &MyForm::contactshow_MouseHover);
			// 
			// addcontacts
			// 
			this->addcontacts->BackColor = System::Drawing::Color::Transparent;
			this->addcontacts->Controls->Add(this->underline);
			this->addcontacts->Controls->Add(this->plus);
			this->addcontacts->Controls->Add(this->addcontactbtn);
			this->addcontacts->Location = System::Drawing::Point(0, 91);
			this->addcontacts->Name = L"addcontacts";
			this->addcontacts->Size = System::Drawing::Size(321, 46);
			this->addcontacts->TabIndex = 1;
			// 
			// underline
			// 
			this->underline->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->underline->Location = System::Drawing::Point(33, 36);
			this->underline->Name = L"underline";
			this->underline->Size = System::Drawing::Size(0, 3);
			this->underline->TabIndex = 3;
			// 
			// plus
			// 
			this->plus->AutoSize = true;
			this->plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plus->Location = System::Drawing::Point(28, 5);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(24, 25);
			this->plus->TabIndex = 1;
			this->plus->Text = L"+";
			// 
			// addcontactbtn
			// 
			this->addcontactbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addcontactbtn->FlatAppearance->BorderSize = 0;
			this->addcontactbtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->addcontactbtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->addcontactbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addcontactbtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->addcontactbtn->Location = System::Drawing::Point(49, 5);
			this->addcontactbtn->Name = L"addcontactbtn";
			this->addcontactbtn->Size = System::Drawing::Size(269, 33);
			this->addcontactbtn->TabIndex = 0;
			this->addcontactbtn->Text = L"ADD CONTACT";
			this->addcontactbtn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->addcontactbtn->UseVisualStyleBackColor = true;
			this->addcontactbtn->Click += gcnew System::EventHandler(this, &MyForm::addcontactbtn_Click);
			this->addcontactbtn->MouseLeave += gcnew System::EventHandler(this, &MyForm::addcontactbtn_MouseLeave);
			this->addcontactbtn->MouseHover += gcnew System::EventHandler(this, &MyForm::addcontactbtn_MouseHover);
			// 
			// searchpanel
			// 
			this->searchpanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->searchpanel->Controls->Add(this->top5contacts);
			this->searchpanel->Controls->Add(this->searchhistory);
			this->searchpanel->Controls->Add(this->searchbox);
			this->searchpanel->Controls->Add(this->searching);
			this->searchpanel->Controls->Add(this->searchlabel);
			this->searchpanel->Controls->Add(this->searchcontactlist);
			this->searchpanel->Location = System::Drawing::Point(0, 0);
			this->searchpanel->Name = L"searchpanel";
			this->searchpanel->Size = System::Drawing::Size(880, 681);
			this->searchpanel->TabIndex = 21;
			this->searchpanel->Visible = false;
			// 
			// top5contacts
			// 
			this->top5contacts->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->top5contacts->Cursor = System::Windows::Forms::Cursors::Hand;
			this->top5contacts->FlatAppearance->BorderSize = 0;
			this->top5contacts->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->top5contacts->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->top5contacts->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->top5contacts->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->top5contacts->Location = System::Drawing::Point(497, 181);
			this->top5contacts->Name = L"top5contacts";
			this->top5contacts->Size = System::Drawing::Size(153, 33);
			this->top5contacts->TabIndex = 27;
			this->top5contacts->Text = L"TOP 5 VIEWED CONTACTS";
			this->top5contacts->UseVisualStyleBackColor = false;
			this->top5contacts->Click += gcnew System::EventHandler(this, &MyForm::top5contacts_Click);
			// 
			// searchhistory
			// 
			this->searchhistory->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->searchhistory->Cursor = System::Windows::Forms::Cursors::Hand;
			this->searchhistory->FlatAppearance->BorderSize = 0;
			this->searchhistory->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->searchhistory->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->searchhistory->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->searchhistory->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->searchhistory->Location = System::Drawing::Point(687, 181);
			this->searchhistory->Name = L"searchhistory";
			this->searchhistory->Size = System::Drawing::Size(153, 33);
			this->searchhistory->TabIndex = 26;
			this->searchhistory->Text = L"SHOW SEARCH HISTORY";
			this->searchhistory->UseVisualStyleBackColor = false;
			this->searchhistory->Click += gcnew System::EventHandler(this, &MyForm::searchhistory_Click);
			// 
			// searchbox
			// 
			this->searchbox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->searchbox->Controls->Add(this->searchtype);
			this->searchbox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->searchbox->Location = System::Drawing::Point(25, 179);
			this->searchbox->Name = L"searchbox";
			this->searchbox->Size = System::Drawing::Size(291, 41);
			this->searchbox->TabIndex = 25;
			// 
			// searchtype
			// 
			this->searchtype->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->searchtype->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->searchtype->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->searchtype->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchtype->ForeColor = System::Drawing::Color::White;
			this->searchtype->Location = System::Drawing::Point(15, 11);
			this->searchtype->Name = L"searchtype";
			this->searchtype->Size = System::Drawing::Size(268, 15);
			this->searchtype->TabIndex = 0;
			this->searchtype->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::searchtype_KeyPress);
			// 
			// searching
			// 
			this->searching->AutoSize = true;
			this->searching->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->searching->Location = System::Drawing::Point(22, 156);
			this->searching->Name = L"searching";
			this->searching->Size = System::Drawing::Size(140, 13);
			this->searching->TabIndex = 24;
			this->searching->Text = L"TYPE AND PRESS ENTER";
			// 
			// searchlabel
			// 
			this->searchlabel->AutoSize = true;
			this->searchlabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->searchlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchlabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->searchlabel->Location = System::Drawing::Point(142, 23);
			this->searchlabel->Name = L"searchlabel";
			this->searchlabel->Size = System::Drawing::Size(639, 73);
			this->searchlabel->TabIndex = 23;
			this->searchlabel->Text = L"SEARCH CONTACT";
			this->searchlabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// searchcontactlist
			// 
			this->searchcontactlist->AllowUserToAddRows = false;
			this->searchcontactlist->AllowUserToDeleteRows = false;
			this->searchcontactlist->AllowUserToResizeColumns = false;
			this->searchcontactlist->AllowUserToResizeRows = false;
			this->searchcontactlist->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->searchcontactlist->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->searchcontactlist->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->searchcontactlist->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->searchcontactlist->CausesValidation = false;
			this->searchcontactlist->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->searchcontactlist->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(147)));
			dataGridViewCellStyle1->Padding = System::Windows::Forms::Padding(20);
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->searchcontactlist->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->searchcontactlist->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->searchcontactlist->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->searchname,
					this->searchphone, this->searchemail
			});
			this->searchcontactlist->Cursor = System::Windows::Forms::Cursors::Hand;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(147)));
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->searchcontactlist->DefaultCellStyle = dataGridViewCellStyle5;
			this->searchcontactlist->EnableHeadersVisualStyles = false;
			this->searchcontactlist->Location = System::Drawing::Point(0, 237);
			this->searchcontactlist->MultiSelect = false;
			this->searchcontactlist->Name = L"searchcontactlist";
			this->searchcontactlist->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->searchcontactlist->RowHeadersVisible = false;
			this->searchcontactlist->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			this->searchcontactlist->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->searchcontactlist->RowTemplate->DefaultCellStyle->Padding = System::Windows::Forms::Padding(25, 15, 25, 15);
			this->searchcontactlist->RowTemplate->Height = 40;
			this->searchcontactlist->RowTemplate->ReadOnly = true;
			this->searchcontactlist->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->searchcontactlist->ShowCellErrors = false;
			this->searchcontactlist->ShowCellToolTips = false;
			this->searchcontactlist->ShowEditingIcon = false;
			this->searchcontactlist->ShowRowErrors = false;
			this->searchcontactlist->Size = System::Drawing::Size(880, 444);
			this->searchcontactlist->TabIndex = 22;
			this->searchcontactlist->CellContentDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::searchcontactlist_CellContentDoubleClick);
			// 
			// searchname
			// 
			this->searchname->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->searchname->DefaultCellStyle = dataGridViewCellStyle2;
			this->searchname->HeaderText = L"NAME";
			this->searchname->Name = L"searchname";
			this->searchname->ReadOnly = true;
			this->searchname->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->searchname->Width = 101;
			// 
			// searchphone
			// 
			this->searchphone->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->searchphone->DefaultCellStyle = dataGridViewCellStyle3;
			this->searchphone->HeaderText = L"PHONE";
			this->searchphone->Name = L"searchphone";
			this->searchphone->ReadOnly = true;
			this->searchphone->Width = 108;
			// 
			// searchemail
			// 
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->searchemail->DefaultCellStyle = dataGridViewCellStyle4;
			this->searchemail->HeaderText = L"EMAIL";
			this->searchemail->Name = L"searchemail";
			this->searchemail->ReadOnly = true;
			this->searchemail->Width = 102;
			// 
			// rightpnl
			// 
			this->rightpnl->Controls->Add(this->sortpanel);
			this->rightpnl->Controls->Add(this->search_history_panel);
			this->rightpnl->Controls->Add(this->searchpanel);
			this->rightpnl->Controls->Add(this->contactdetailsgroup);
			this->rightpnl->Controls->Add(this->showgroups);
			this->rightpnl->Controls->Add(this->viewcontactdetail);
			this->rightpnl->Controls->Add(this->showcontactpnl);
			this->rightpnl->Location = System::Drawing::Point(325, 0);
			this->rightpnl->Name = L"rightpnl";
			this->rightpnl->Size = System::Drawing::Size(880, 681);
			this->rightpnl->TabIndex = 3;
			// 
			// sortpanel
			// 
			this->sortpanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->sortpanel->Controls->Add(this->panel24);
			this->sortpanel->Controls->Add(this->sorting);
			this->sortpanel->Controls->Add(this->sortlabel);
			this->sortpanel->Location = System::Drawing::Point(0, 0);
			this->sortpanel->Name = L"sortpanel";
			this->sortpanel->Size = System::Drawing::Size(880, 681);
			this->sortpanel->TabIndex = 21;
			this->sortpanel->Visible = false;
			// 
			// panel24
			// 
			this->panel24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->panel24->Controls->Add(this->sorttype);
			this->panel24->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->panel24->Location = System::Drawing::Point(40, 228);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(776, 41);
			this->panel24->TabIndex = 28;
			// 
			// sorttype
			// 
			this->sorttype->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->sorttype->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->sorttype->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->sorttype->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sorttype->ForeColor = System::Drawing::Color::White;
			this->sorttype->Location = System::Drawing::Point(15, 11);
			this->sorttype->Name = L"sorttype";
			this->sorttype->Size = System::Drawing::Size(748, 15);
			this->sorttype->TabIndex = 0;
			this->sorttype->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::sorttype_KeyPress);
			// 
			// sorting
			// 
			this->sorting->AutoSize = true;
			this->sorting->Location = System::Drawing::Point(37, 205);
			this->sorting->Name = L"sorting";
			this->sorting->Size = System::Drawing::Size(140, 13);
			this->sorting->TabIndex = 27;
			this->sorting->Text = L"TYPE AND PRESS ENTER";
			// 
			// sortlabel
			// 
			this->sortlabel->AutoSize = true;
			this->sortlabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->sortlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sortlabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->sortlabel->Location = System::Drawing::Point(288, 44);
			this->sortlabel->Name = L"sortlabel";
			this->sortlabel->Size = System::Drawing::Size(331, 73);
			this->sortlabel->TabIndex = 26;
			this->sortlabel->Text = L"SORTING";
			this->sortlabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// search_history_panel
			// 
			this->search_history_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->search_history_panel->Controls->Add(this->historylabel);
			this->search_history_panel->Controls->Add(this->search_history_list);
			this->search_history_panel->Location = System::Drawing::Point(0, 0);
			this->search_history_panel->Name = L"search_history_panel";
			this->search_history_panel->Size = System::Drawing::Size(880, 681);
			this->search_history_panel->TabIndex = 22;
			this->search_history_panel->Visible = false;
			// 
			// historylabel
			// 
			this->historylabel->AutoSize = true;
			this->historylabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->historylabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->historylabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->historylabel->Location = System::Drawing::Point(288, 50);
			this->historylabel->Name = L"historylabel";
			this->historylabel->Size = System::Drawing::Size(324, 73);
			this->historylabel->TabIndex = 24;
			this->historylabel->Text = L"HISTORY";
			this->historylabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// search_history_list
			// 
			this->search_history_list->AllowUserToAddRows = false;
			this->search_history_list->AllowUserToDeleteRows = false;
			this->search_history_list->AllowUserToResizeColumns = false;
			this->search_history_list->AllowUserToResizeRows = false;
			this->search_history_list->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->search_history_list->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->search_history_list->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->search_history_list->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->search_history_list->CausesValidation = false;
			this->search_history_list->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->search_history_list->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(147)));
			dataGridViewCellStyle6->Padding = System::Windows::Forms::Padding(20);
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->search_history_list->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle6;
			this->search_history_list->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->search_history_list->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->searchhistoryno,
					this->searchhistorytext, this->searchhistorydate, this->searchhistorytime
			});
			this->search_history_list->Cursor = System::Windows::Forms::Cursors::Hand;
			dataGridViewCellStyle11->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			dataGridViewCellStyle11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle11->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle11->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(147)));
			dataGridViewCellStyle11->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle11->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->search_history_list->DefaultCellStyle = dataGridViewCellStyle11;
			this->search_history_list->EnableHeadersVisualStyles = false;
			this->search_history_list->Location = System::Drawing::Point(0, 201);
			this->search_history_list->MultiSelect = false;
			this->search_history_list->Name = L"search_history_list";
			this->search_history_list->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->search_history_list->RowHeadersVisible = false;
			this->search_history_list->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			this->search_history_list->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->search_history_list->RowTemplate->DefaultCellStyle->Padding = System::Windows::Forms::Padding(25, 15, 25, 15);
			this->search_history_list->RowTemplate->Height = 40;
			this->search_history_list->RowTemplate->ReadOnly = true;
			this->search_history_list->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->search_history_list->ShowCellErrors = false;
			this->search_history_list->ShowCellToolTips = false;
			this->search_history_list->ShowEditingIcon = false;
			this->search_history_list->ShowRowErrors = false;
			this->search_history_list->Size = System::Drawing::Size(880, 479);
			this->search_history_list->TabIndex = 23;
			// 
			// searchhistoryno
			// 
			this->searchhistoryno->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->searchhistoryno->DefaultCellStyle = dataGridViewCellStyle7;
			this->searchhistoryno->HeaderText = L"NUMBER";
			this->searchhistoryno->Name = L"searchhistoryno";
			this->searchhistoryno->ReadOnly = true;
			this->searchhistoryno->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->searchhistoryno->Width = 117;
			// 
			// searchhistorytext
			// 
			this->searchhistorytext->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->searchhistorytext->DefaultCellStyle = dataGridViewCellStyle8;
			this->searchhistorytext->HeaderText = L"SEARCHED TEXT";
			this->searchhistorytext->Name = L"searchhistorytext";
			this->searchhistorytext->ReadOnly = true;
			this->searchhistorytext->Width = 160;
			// 
			// searchhistorydate
			// 
			this->searchhistorydate->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->searchhistorydate->DefaultCellStyle = dataGridViewCellStyle9;
			this->searchhistorydate->HeaderText = L"DATE";
			this->searchhistorydate->Name = L"searchhistorydate";
			this->searchhistorydate->ReadOnly = true;
			this->searchhistorydate->Width = 99;
			// 
			// searchhistorytime
			// 
			this->searchhistorytime->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->searchhistorytime->DefaultCellStyle = dataGridViewCellStyle10;
			this->searchhistorytime->HeaderText = L"TIME";
			this->searchhistorytime->Name = L"searchhistorytime";
			this->searchhistorytime->ReadOnly = true;
			this->searchhistorytime->Width = 96;
			// 
			// contactdetailsgroup
			// 
			this->contactdetailsgroup->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->contactdetailsgroup->Controls->Add(this->groupnamelabel);
			this->contactdetailsgroup->Controls->Add(this->groupcontactslist);
			this->contactdetailsgroup->Location = System::Drawing::Point(0, 0);
			this->contactdetailsgroup->Name = L"contactdetailsgroup";
			this->contactdetailsgroup->Size = System::Drawing::Size(880, 681);
			this->contactdetailsgroup->TabIndex = 20;
			this->contactdetailsgroup->Visible = false;
			// 
			// groupnamelabel
			// 
			this->groupnamelabel->AutoSize = true;
			this->groupnamelabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->groupnamelabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupnamelabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->groupnamelabel->Location = System::Drawing::Point(212, 44);
			this->groupnamelabel->Name = L"groupnamelabel";
			this->groupnamelabel->Size = System::Drawing::Size(479, 73);
			this->groupnamelabel->TabIndex = 21;
			this->groupnamelabel->Text = L"GROUP NAME";
			this->groupnamelabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// groupcontactslist
			// 
			this->groupcontactslist->AllowUserToAddRows = false;
			this->groupcontactslist->AllowUserToDeleteRows = false;
			this->groupcontactslist->AllowUserToResizeColumns = false;
			this->groupcontactslist->AllowUserToResizeRows = false;
			this->groupcontactslist->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->groupcontactslist->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->groupcontactslist->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->groupcontactslist->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->groupcontactslist->CausesValidation = false;
			this->groupcontactslist->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->groupcontactslist->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle12->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			dataGridViewCellStyle12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(147)));
			dataGridViewCellStyle12->Padding = System::Windows::Forms::Padding(20);
			dataGridViewCellStyle12->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			dataGridViewCellStyle12->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle12->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->groupcontactslist->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle12;
			this->groupcontactslist->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->groupcontactslist->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->groupdetailname,
					this->groupdetailphone, this->groupdetailemail
			});
			this->groupcontactslist->Cursor = System::Windows::Forms::Cursors::Hand;
			dataGridViewCellStyle16->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			dataGridViewCellStyle16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle16->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle16->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(147)));
			dataGridViewCellStyle16->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle16->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->groupcontactslist->DefaultCellStyle = dataGridViewCellStyle16;
			this->groupcontactslist->EnableHeadersVisualStyles = false;
			this->groupcontactslist->Location = System::Drawing::Point(0, 169);
			this->groupcontactslist->MultiSelect = false;
			this->groupcontactslist->Name = L"groupcontactslist";
			this->groupcontactslist->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->groupcontactslist->RowHeadersVisible = false;
			this->groupcontactslist->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			this->groupcontactslist->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->groupcontactslist->RowTemplate->DefaultCellStyle->Padding = System::Windows::Forms::Padding(25, 15, 25, 15);
			this->groupcontactslist->RowTemplate->Height = 40;
			this->groupcontactslist->RowTemplate->ReadOnly = true;
			this->groupcontactslist->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->groupcontactslist->ShowCellErrors = false;
			this->groupcontactslist->ShowCellToolTips = false;
			this->groupcontactslist->ShowEditingIcon = false;
			this->groupcontactslist->ShowRowErrors = false;
			this->groupcontactslist->Size = System::Drawing::Size(880, 509);
			this->groupcontactslist->TabIndex = 20;
			this->groupcontactslist->CellContentDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::groupcontactslist_CellContentDoubleClick);
			// 
			// groupdetailname
			// 
			this->groupdetailname->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->groupdetailname->DefaultCellStyle = dataGridViewCellStyle13;
			this->groupdetailname->HeaderText = L"NAME";
			this->groupdetailname->Name = L"groupdetailname";
			this->groupdetailname->ReadOnly = true;
			this->groupdetailname->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->groupdetailname->Width = 101;
			// 
			// groupdetailphone
			// 
			this->groupdetailphone->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->groupdetailphone->DefaultCellStyle = dataGridViewCellStyle14;
			this->groupdetailphone->HeaderText = L"PHONE";
			this->groupdetailphone->Name = L"groupdetailphone";
			this->groupdetailphone->ReadOnly = true;
			this->groupdetailphone->Width = 108;
			// 
			// groupdetailemail
			// 
			dataGridViewCellStyle15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->groupdetailemail->DefaultCellStyle = dataGridViewCellStyle15;
			this->groupdetailemail->HeaderText = L"EMAIL";
			this->groupdetailemail->Name = L"groupdetailemail";
			this->groupdetailemail->ReadOnly = true;
			this->groupdetailemail->Width = 102;
			// 
			// showgroups
			// 
			this->showgroups->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->showgroups->Controls->Add(this->creategroup);
			this->showgroups->Controls->Add(this->groupcreatelabel);
			this->showgroups->Controls->Add(this->deletebutton);
			this->showgroups->Controls->Add(this->groupdetails);
			this->showgroups->Controls->Add(this->groupshowlabel);
			this->showgroups->Location = System::Drawing::Point(0, 0);
			this->showgroups->Name = L"showgroups";
			this->showgroups->Size = System::Drawing::Size(880, 681);
			this->showgroups->TabIndex = 6;
			this->showgroups->Visible = false;
			// 
			// creategroup
			// 
			this->creategroup->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->creategroup->Controls->Add(this->creategrouptext);
			this->creategroup->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->creategroup->Location = System::Drawing::Point(708, 199);
			this->creategroup->Name = L"creategroup";
			this->creategroup->Size = System::Drawing::Size(159, 41);
			this->creategroup->TabIndex = 30;
			// 
			// creategrouptext
			// 
			this->creategrouptext->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->creategrouptext->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->creategrouptext->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->creategrouptext->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->creategrouptext->ForeColor = System::Drawing::Color::White;
			this->creategrouptext->Location = System::Drawing::Point(13, 13);
			this->creategrouptext->Name = L"creategrouptext";
			this->creategrouptext->Size = System::Drawing::Size(135, 15);
			this->creategrouptext->TabIndex = 0;
			this->creategrouptext->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::creategrouptext_KeyPress);
			// 
			// groupcreatelabel
			// 
			this->groupcreatelabel->AutoSize = true;
			this->groupcreatelabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->groupcreatelabel->Location = System::Drawing::Point(786, 180);
			this->groupcreatelabel->Name = L"groupcreatelabel";
			this->groupcreatelabel->Size = System::Drawing::Size(92, 13);
			this->groupcreatelabel->TabIndex = 29;
			this->groupcreatelabel->Text = L"CREATE GROUP";
			// 
			// deletebutton
			// 
			this->deletebutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->deletebutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->deletebutton->FlatAppearance->BorderSize = 0;
			this->deletebutton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->deletebutton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->deletebutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deletebutton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->deletebutton->Location = System::Drawing::Point(775, 636);
			this->deletebutton->Name = L"deletebutton";
			this->deletebutton->Size = System::Drawing::Size(92, 33);
			this->deletebutton->TabIndex = 20;
			this->deletebutton->Text = L"DELETE GROUP";
			this->deletebutton->UseVisualStyleBackColor = false;
			this->deletebutton->Click += gcnew System::EventHandler(this, &MyForm::deletebutton_Click);
			// 
			// groupdetails
			// 
			this->groupdetails->AllowUserToAddRows = false;
			this->groupdetails->AllowUserToDeleteRows = false;
			this->groupdetails->AllowUserToResizeColumns = false;
			this->groupdetails->AllowUserToResizeRows = false;
			this->groupdetails->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->groupdetails->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->groupdetails->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->groupdetails->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->groupdetails->CausesValidation = false;
			this->groupdetails->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->groupdetails->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle17->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			dataGridViewCellStyle17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(147)));
			dataGridViewCellStyle17->Padding = System::Windows::Forms::Padding(20);
			dataGridViewCellStyle17->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			dataGridViewCellStyle17->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle17->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->groupdetails->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle17;
			this->groupdetails->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->groupdetails->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->groupname,
					this->noofcontact
			});
			this->groupdetails->Cursor = System::Windows::Forms::Cursors::Hand;
			dataGridViewCellStyle20->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			dataGridViewCellStyle20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle20->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle20->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(147)));
			dataGridViewCellStyle20->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle20->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->groupdetails->DefaultCellStyle = dataGridViewCellStyle20;
			this->groupdetails->EnableHeadersVisualStyles = false;
			this->groupdetails->Location = System::Drawing::Point(0, 153);
			this->groupdetails->MultiSelect = false;
			this->groupdetails->Name = L"groupdetails";
			this->groupdetails->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->groupdetails->RowHeadersVisible = false;
			this->groupdetails->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			this->groupdetails->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->groupdetails->RowTemplate->DefaultCellStyle->Padding = System::Windows::Forms::Padding(25, 15, 25, 15);
			this->groupdetails->RowTemplate->Height = 40;
			this->groupdetails->RowTemplate->ReadOnly = true;
			this->groupdetails->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->groupdetails->ShowCellErrors = false;
			this->groupdetails->ShowCellToolTips = false;
			this->groupdetails->ShowEditingIcon = false;
			this->groupdetails->ShowRowErrors = false;
			this->groupdetails->Size = System::Drawing::Size(880, 528);
			this->groupdetails->TabIndex = 19;
			this->groupdetails->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::groupdetails_CellDoubleClick);
			// 
			// groupname
			// 
			this->groupname->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->groupname->DefaultCellStyle = dataGridViewCellStyle18;
			this->groupname->HeaderText = L"GROUP NAME";
			this->groupname->Name = L"groupname";
			this->groupname->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->groupname->Width = 143;
			// 
			// noofcontact
			// 
			this->noofcontact->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			dataGridViewCellStyle19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->noofcontact->DefaultCellStyle = dataGridViewCellStyle19;
			this->noofcontact->HeaderText = L"NUMBER OF CONTACTS";
			this->noofcontact->Name = L"noofcontact";
			this->noofcontact->Width = 195;
			// 
			// groupshowlabel
			// 
			this->groupshowlabel->AutoSize = true;
			this->groupshowlabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->groupshowlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupshowlabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->groupshowlabel->Location = System::Drawing::Point(301, 44);
			this->groupshowlabel->Name = L"groupshowlabel";
			this->groupshowlabel->Size = System::Drawing::Size(316, 73);
			this->groupshowlabel->TabIndex = 18;
			this->groupshowlabel->Text = L"GROUPS";
			// 
			// viewcontactdetail
			// 
			this->viewcontactdetail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->viewcontactdetail->Controls->Add(this->labelgroup);
			this->viewcontactdetail->Controls->Add(this->panel21);
			this->viewcontactdetail->Controls->Add(this->viewcontact);
			this->viewcontactdetail->Controls->Add(this->labelcountry);
			this->viewcontactdetail->Controls->Add(this->labelcity);
			this->viewcontactdetail->Controls->Add(this->labelhouse);
			this->viewcontactdetail->Controls->Add(this->panel17);
			this->viewcontactdetail->Controls->Add(this->labelnumber);
			this->viewcontactdetail->Controls->Add(this->panel16);
			this->viewcontactdetail->Controls->Add(this->labelemail);
			this->viewcontactdetail->Controls->Add(this->panel14);
			this->viewcontactdetail->Controls->Add(this->labelstreet);
			this->viewcontactdetail->Controls->Add(this->labelname);
			this->viewcontactdetail->Controls->Add(this->panel11);
			this->viewcontactdetail->Controls->Add(this->panel15);
			this->viewcontactdetail->Controls->Add(this->panel13);
			this->viewcontactdetail->Controls->Add(this->detailpnl1);
			this->viewcontactdetail->Location = System::Drawing::Point(0, 0);
			this->viewcontactdetail->Name = L"viewcontactdetail";
			this->viewcontactdetail->Size = System::Drawing::Size(880, 681);
			this->viewcontactdetail->TabIndex = 5;
			this->viewcontactdetail->Visible = false;
			this->viewcontactdetail->Click += gcnew System::EventHandler(this, &MyForm::viewcontactdetail_Click);
			// 
			// labelgroup
			// 
			this->labelgroup->AutoSize = true;
			this->labelgroup->Location = System::Drawing::Point(81, 481);
			this->labelgroup->Name = L"labelgroup";
			this->labelgroup->Size = System::Drawing::Size(53, 13);
			this->labelgroup->TabIndex = 19;
			this->labelgroup->Text = L"GROUPS";
			// 
			// panel21
			// 
			this->panel21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->panel21->Controls->Add(this->detailgroup);
			this->panel21->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->panel21->Location = System::Drawing::Point(84, 503);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(291, 41);
			this->panel21->TabIndex = 18;
			// 
			// detailgroup
			// 
			this->detailgroup->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->detailgroup->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->detailgroup->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->detailgroup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->detailgroup->ForeColor = System::Drawing::Color::White;
			this->detailgroup->Location = System::Drawing::Point(15, 11);
			this->detailgroup->Name = L"detailgroup";
			this->detailgroup->ReadOnly = true;
			this->detailgroup->Size = System::Drawing::Size(268, 15);
			this->detailgroup->TabIndex = 0;
			// 
			// viewcontact
			// 
			this->viewcontact->AutoSize = true;
			this->viewcontact->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->viewcontact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->viewcontact->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->viewcontact->Location = System::Drawing::Point(179, 44);
			this->viewcontact->Name = L"viewcontact";
			this->viewcontact->Size = System::Drawing::Size(534, 73);
			this->viewcontact->TabIndex = 17;
			this->viewcontact->Text = L"VIEW CONTACT";
			// 
			// labelcountry
			// 
			this->labelcountry->AutoSize = true;
			this->labelcountry->Location = System::Drawing::Point(509, 481);
			this->labelcountry->Name = L"labelcountry";
			this->labelcountry->Size = System::Drawing::Size(60, 13);
			this->labelcountry->TabIndex = 16;
			this->labelcountry->Text = L"COUNTRY";
			// 
			// labelcity
			// 
			this->labelcity->AutoSize = true;
			this->labelcity->Location = System::Drawing::Point(508, 385);
			this->labelcity->Name = L"labelcity";
			this->labelcity->Size = System::Drawing::Size(31, 13);
			this->labelcity->TabIndex = 15;
			this->labelcity->Text = L"CITY";
			// 
			// labelhouse
			// 
			this->labelhouse->AutoSize = true;
			this->labelhouse->Location = System::Drawing::Point(508, 190);
			this->labelhouse->Name = L"labelhouse";
			this->labelhouse->Size = System::Drawing::Size(67, 13);
			this->labelhouse->TabIndex = 14;
			this->labelhouse->Text = L"HOUSE NO.";
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->panel17->Controls->Add(this->detailnumber);
			this->panel17->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->panel17->Location = System::Drawing::Point(84, 408);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(291, 41);
			this->panel17->TabIndex = 13;
			// 
			// detailnumber
			// 
			this->detailnumber->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->detailnumber->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->detailnumber->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->detailnumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->detailnumber->ForeColor = System::Drawing::Color::White;
			this->detailnumber->Location = System::Drawing::Point(15, 11);
			this->detailnumber->Name = L"detailnumber";
			this->detailnumber->ReadOnly = true;
			this->detailnumber->Size = System::Drawing::Size(268, 15);
			this->detailnumber->TabIndex = 0;
			this->detailnumber->TextChanged += gcnew System::EventHandler(this, &MyForm::detailnumber_TextChanged);
			this->detailnumber->DoubleClick += gcnew System::EventHandler(this, &MyForm::detailnumber_DoubleClick);
			// 
			// labelnumber
			// 
			this->labelnumber->AutoSize = true;
			this->labelnumber->Location = System::Drawing::Point(81, 385);
			this->labelnumber->Name = L"labelnumber";
			this->labelnumber->Size = System::Drawing::Size(54, 13);
			this->labelnumber->TabIndex = 12;
			this->labelnumber->Text = L"NUMBER";
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->panel16->Controls->Add(this->detailemail);
			this->panel16->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->panel16->Location = System::Drawing::Point(84, 309);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(291, 41);
			this->panel16->TabIndex = 11;
			// 
			// detailemail
			// 
			this->detailemail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->detailemail->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->detailemail->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->detailemail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->detailemail->ForeColor = System::Drawing::Color::White;
			this->detailemail->Location = System::Drawing::Point(15, 11);
			this->detailemail->Name = L"detailemail";
			this->detailemail->ReadOnly = true;
			this->detailemail->Size = System::Drawing::Size(268, 15);
			this->detailemail->TabIndex = 0;
			this->detailemail->TextChanged += gcnew System::EventHandler(this, &MyForm::detailemail_TextChanged);
			this->detailemail->DoubleClick += gcnew System::EventHandler(this, &MyForm::detailemail_DoubleClick);
			// 
			// labelemail
			// 
			this->labelemail->AutoSize = true;
			this->labelemail->Location = System::Drawing::Point(81, 286);
			this->labelemail->Name = L"labelemail";
			this->labelemail->Size = System::Drawing::Size(39, 13);
			this->labelemail->TabIndex = 10;
			this->labelemail->Text = L"EMAIL";
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->panel14->Controls->Add(this->detailname);
			this->panel14->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->panel14->Location = System::Drawing::Point(84, 215);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(291, 41);
			this->panel14->TabIndex = 9;
			// 
			// detailname
			// 
			this->detailname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->detailname->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->detailname->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->detailname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->detailname->ForeColor = System::Drawing::Color::White;
			this->detailname->Location = System::Drawing::Point(15, 11);
			this->detailname->Name = L"detailname";
			this->detailname->ReadOnly = true;
			this->detailname->Size = System::Drawing::Size(268, 15);
			this->detailname->TabIndex = 0;
			this->detailname->TextChanged += gcnew System::EventHandler(this, &MyForm::detailname_TextChanged);
			this->detailname->DoubleClick += gcnew System::EventHandler(this, &MyForm::detailname_DoubleClick);
			// 
			// labelstreet
			// 
			this->labelstreet->AutoSize = true;
			this->labelstreet->Location = System::Drawing::Point(508, 286);
			this->labelstreet->Name = L"labelstreet";
			this->labelstreet->Size = System::Drawing::Size(72, 13);
			this->labelstreet->TabIndex = 8;
			this->labelstreet->Text = L"STREET NO.";
			// 
			// labelname
			// 
			this->labelname->AutoSize = true;
			this->labelname->Location = System::Drawing::Point(81, 192);
			this->labelname->Name = L"labelname";
			this->labelname->Size = System::Drawing::Size(38, 13);
			this->labelname->TabIndex = 7;
			this->labelname->Text = L"NAME";
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->panel11->Controls->Add(this->detailcountry);
			this->panel11->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->panel11->Location = System::Drawing::Point(512, 503);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(291, 41);
			this->panel11->TabIndex = 6;
			// 
			// detailcountry
			// 
			this->detailcountry->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->detailcountry->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->detailcountry->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->detailcountry->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->detailcountry->ForeColor = System::Drawing::Color::White;
			this->detailcountry->Location = System::Drawing::Point(15, 11);
			this->detailcountry->Name = L"detailcountry";
			this->detailcountry->ReadOnly = true;
			this->detailcountry->Size = System::Drawing::Size(268, 15);
			this->detailcountry->TabIndex = 0;
			this->detailcountry->TextChanged += gcnew System::EventHandler(this, &MyForm::detailcountry_TextChanged);
			this->detailcountry->DoubleClick += gcnew System::EventHandler(this, &MyForm::detailcountry_DoubleClick);
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->panel15->Controls->Add(this->detailcity);
			this->panel15->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->panel15->Location = System::Drawing::Point(511, 408);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(291, 41);
			this->panel15->TabIndex = 5;
			// 
			// detailcity
			// 
			this->detailcity->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->detailcity->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->detailcity->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->detailcity->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->detailcity->ForeColor = System::Drawing::Color::White;
			this->detailcity->Location = System::Drawing::Point(15, 11);
			this->detailcity->Name = L"detailcity";
			this->detailcity->ReadOnly = true;
			this->detailcity->Size = System::Drawing::Size(268, 15);
			this->detailcity->TabIndex = 0;
			this->detailcity->TextChanged += gcnew System::EventHandler(this, &MyForm::detailcity_TextChanged);
			this->detailcity->DoubleClick += gcnew System::EventHandler(this, &MyForm::detailcity_DoubleClick);
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->panel13->Controls->Add(this->detailstreet);
			this->panel13->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->panel13->Location = System::Drawing::Point(511, 309);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(291, 41);
			this->panel13->TabIndex = 3;
			// 
			// detailstreet
			// 
			this->detailstreet->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->detailstreet->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->detailstreet->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->detailstreet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->detailstreet->ForeColor = System::Drawing::Color::White;
			this->detailstreet->Location = System::Drawing::Point(15, 11);
			this->detailstreet->Name = L"detailstreet";
			this->detailstreet->ReadOnly = true;
			this->detailstreet->Size = System::Drawing::Size(268, 15);
			this->detailstreet->TabIndex = 0;
			this->detailstreet->TextChanged += gcnew System::EventHandler(this, &MyForm::detailstreet_TextChanged);
			this->detailstreet->DoubleClick += gcnew System::EventHandler(this, &MyForm::detailstreet_DoubleClick);
			// 
			// detailpnl1
			// 
			this->detailpnl1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->detailpnl1->Controls->Add(this->detailhouse);
			this->detailpnl1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->detailpnl1->Location = System::Drawing::Point(511, 213);
			this->detailpnl1->Name = L"detailpnl1";
			this->detailpnl1->Size = System::Drawing::Size(291, 41);
			this->detailpnl1->TabIndex = 1;
			// 
			// detailhouse
			// 
			this->detailhouse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->detailhouse->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->detailhouse->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->detailhouse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->detailhouse->ForeColor = System::Drawing::Color::White;
			this->detailhouse->Location = System::Drawing::Point(15, 11);
			this->detailhouse->Name = L"detailhouse";
			this->detailhouse->ReadOnly = true;
			this->detailhouse->Size = System::Drawing::Size(268, 15);
			this->detailhouse->TabIndex = 0;
			this->detailhouse->TextChanged += gcnew System::EventHandler(this, &MyForm::detailhouse_TextChanged);
			this->detailhouse->DoubleClick += gcnew System::EventHandler(this, &MyForm::detailhouse_DoubleClick);
			// 
			// showcontactpnl
			// 
			this->showcontactpnl->BackColor = System::Drawing::Color::Gray;
			this->showcontactpnl->Controls->Add(this->getcontactpnl);
			this->showcontactpnl->Controls->Add(this->contactslistview);
			this->showcontactpnl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->showcontactpnl->Location = System::Drawing::Point(0, 0);
			this->showcontactpnl->Name = L"showcontactpnl";
			this->showcontactpnl->Size = System::Drawing::Size(880, 681);
			this->showcontactpnl->TabIndex = 4;
			// 
			// getcontactpnl
			// 
			this->getcontactpnl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->getcontactpnl->Controls->Add(this->panel2);
			this->getcontactpnl->Controls->Add(this->submit_contact);
			this->getcontactpnl->Controls->Add(this->heading_contact);
			this->getcontactpnl->Controls->Add(this->panel9);
			this->getcontactpnl->Controls->Add(this->panel8);
			this->getcontactpnl->Controls->Add(this->panel7);
			this->getcontactpnl->Controls->Add(this->panel6);
			this->getcontactpnl->Controls->Add(this->panel5);
			this->getcontactpnl->Controls->Add(this->panel4);
			this->getcontactpnl->Controls->Add(this->panel3);
			this->getcontactpnl->Location = System::Drawing::Point(0, 0);
			this->getcontactpnl->Name = L"getcontactpnl";
			this->getcontactpnl->Size = System::Drawing::Size(880, 681);
			this->getcontactpnl->TabIndex = 3;
			this->getcontactpnl->Visible = false;
			this->getcontactpnl->Click += gcnew System::EventHandler(this, &MyForm::getcontactpnl_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->panel2->Controls->Add(this->firstname);
			this->panel2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->panel2->Location = System::Drawing::Point(59, 166);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(291, 41);
			this->panel2->TabIndex = 0;
			// 
			// firstname
			// 
			this->firstname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->firstname->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->firstname->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->firstname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->firstname->ForeColor = System::Drawing::Color::White;
			this->firstname->Location = System::Drawing::Point(15, 11);
			this->firstname->Name = L"firstname";
			this->firstname->Size = System::Drawing::Size(268, 15);
			this->firstname->TabIndex = 0;
			this->firstname->Text = L"First Name";
			this->firstname->Click += gcnew System::EventHandler(this, &MyForm::firstname_Click);
			// 
			// submit_contact
			// 
			this->submit_contact->Cursor = System::Windows::Forms::Cursors::Hand;
			this->submit_contact->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->submit_contact->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->submit_contact->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->submit_contact->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->submit_contact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submit_contact->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->submit_contact->Location = System::Drawing::Point(350, 594);
			this->submit_contact->Name = L"submit_contact";
			this->submit_contact->Size = System::Drawing::Size(184, 38);
			this->submit_contact->TabIndex = 1;
			this->submit_contact->Text = L"Submit";
			this->submit_contact->UseVisualStyleBackColor = true;
			this->submit_contact->Click += gcnew System::EventHandler(this, &MyForm::submit_contact_Click);
			// 
			// heading_contact
			// 
			this->heading_contact->AutoSize = true;
			this->heading_contact->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->heading_contact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->heading_contact->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->heading_contact->Location = System::Drawing::Point(201, 37);
			this->heading_contact->Name = L"heading_contact";
			this->heading_contact->Size = System::Drawing::Size(504, 73);
			this->heading_contact->TabIndex = 8;
			this->heading_contact->Text = L"ADD CONTACT";
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->panel9->Controls->Add(this->countrybox);
			this->panel9->Location = System::Drawing::Point(525, 487);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(291, 41);
			this->panel9->TabIndex = 7;
			// 
			// countrybox
			// 
			this->countrybox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->countrybox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->countrybox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->countrybox->ForeColor = System::Drawing::Color::White;
			this->countrybox->Location = System::Drawing::Point(15, 11);
			this->countrybox->Name = L"countrybox";
			this->countrybox->Size = System::Drawing::Size(268, 15);
			this->countrybox->TabIndex = 0;
			this->countrybox->Text = L"Country";
			this->countrybox->Click += gcnew System::EventHandler(this, &MyForm::countrybox_Click);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->panel8->Controls->Add(this->citybox);
			this->panel8->Location = System::Drawing::Point(525, 378);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(291, 41);
			this->panel8->TabIndex = 6;
			// 
			// citybox
			// 
			this->citybox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->citybox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->citybox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->citybox->ForeColor = System::Drawing::Color::White;
			this->citybox->Location = System::Drawing::Point(15, 11);
			this->citybox->Name = L"citybox";
			this->citybox->Size = System::Drawing::Size(268, 15);
			this->citybox->TabIndex = 0;
			this->citybox->Text = L"City";
			this->citybox->Click += gcnew System::EventHandler(this, &MyForm::citybox_Click);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->panel7->Controls->Add(this->street);
			this->panel7->Location = System::Drawing::Point(525, 274);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(291, 41);
			this->panel7->TabIndex = 5;
			// 
			// street
			// 
			this->street->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->street->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->street->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->street->ForeColor = System::Drawing::Color::White;
			this->street->Location = System::Drawing::Point(15, 11);
			this->street->Name = L"street";
			this->street->Size = System::Drawing::Size(268, 15);
			this->street->TabIndex = 0;
			this->street->Text = L"Street";
			this->street->Click += gcnew System::EventHandler(this, &MyForm::street_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->panel6->Controls->Add(this->house);
			this->panel6->Location = System::Drawing::Point(525, 166);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(291, 41);
			this->panel6->TabIndex = 4;
			// 
			// house
			// 
			this->house->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->house->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->house->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->house->ForeColor = System::Drawing::Color::White;
			this->house->Location = System::Drawing::Point(15, 11);
			this->house->Name = L"house";
			this->house->Size = System::Drawing::Size(268, 15);
			this->house->TabIndex = 0;
			this->house->Text = L"House Number";
			this->house->Click += gcnew System::EventHandler(this, &MyForm::house_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->panel5->Controls->Add(this->email);
			this->panel5->Location = System::Drawing::Point(59, 487);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(291, 41);
			this->panel5->TabIndex = 3;
			// 
			// email
			// 
			this->email->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->email->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->email->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email->ForeColor = System::Drawing::Color::White;
			this->email->Location = System::Drawing::Point(15, 11);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(268, 15);
			this->email->TabIndex = 0;
			this->email->Text = L"Email Address";
			this->email->Click += gcnew System::EventHandler(this, &MyForm::email_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->panel4->Controls->Add(this->phonenumber);
			this->panel4->Location = System::Drawing::Point(59, 378);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(291, 41);
			this->panel4->TabIndex = 2;
			// 
			// phonenumber
			// 
			this->phonenumber->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->phonenumber->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->phonenumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phonenumber->ForeColor = System::Drawing::Color::White;
			this->phonenumber->Location = System::Drawing::Point(15, 11);
			this->phonenumber->Name = L"phonenumber";
			this->phonenumber->Size = System::Drawing::Size(268, 15);
			this->phonenumber->TabIndex = 0;
			this->phonenumber->Text = L"Phone Number";
			this->phonenumber->Click += gcnew System::EventHandler(this, &MyForm::phonenumber_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->panel3->Controls->Add(this->lastname);
			this->panel3->Location = System::Drawing::Point(59, 274);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(291, 41);
			this->panel3->TabIndex = 1;
			// 
			// lastname
			// 
			this->lastname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->lastname->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lastname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lastname->ForeColor = System::Drawing::Color::White;
			this->lastname->Location = System::Drawing::Point(15, 11);
			this->lastname->Name = L"lastname";
			this->lastname->Size = System::Drawing::Size(268, 15);
			this->lastname->TabIndex = 0;
			this->lastname->Text = L"Last Name";
			this->lastname->Click += gcnew System::EventHandler(this, &MyForm::lastname_Click);
			// 
			// contactslistview
			// 
			this->contactslistview->AllowUserToAddRows = false;
			this->contactslistview->AllowUserToDeleteRows = false;
			dataGridViewCellStyle21->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle21->ForeColor = System::Drawing::Color::Black;
			this->contactslistview->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle21;
			this->contactslistview->CausesValidation = false;
			this->contactslistview->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			dataGridViewCellStyle22->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle22->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle22->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle22->Padding = System::Windows::Forms::Padding(10);
			dataGridViewCellStyle22->SelectionBackColor = System::Drawing::SystemColors::GrayText;
			dataGridViewCellStyle22->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle22->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->contactslistview->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle22;
			this->contactslistview->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->contactslistview->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->cntname,
					this->cntphone, this->cntemail
			});
			dataGridViewCellStyle26->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle26->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle26->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle26->SelectionBackColor = System::Drawing::SystemColors::GrayText;
			dataGridViewCellStyle26->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle26->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->contactslistview->DefaultCellStyle = dataGridViewCellStyle26;
			this->contactslistview->Dock = System::Windows::Forms::DockStyle::Fill;
			this->contactslistview->Location = System::Drawing::Point(0, 0);
			this->contactslistview->Name = L"contactslistview";
			this->contactslistview->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->contactslistview->RowHeadersVisible = false;
			dataGridViewCellStyle27->ForeColor = System::Drawing::Color::Black;
			this->contactslistview->RowsDefaultCellStyle = dataGridViewCellStyle27;
			this->contactslistview->RowTemplate->ReadOnly = true;
			this->contactslistview->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->contactslistview->Size = System::Drawing::Size(880, 681);
			this->contactslistview->TabIndex = 4;
			this->contactslistview->CellLeave += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::contactslistview_CellLeave);
			// 
			// cntname
			// 
			this->cntname->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle23->ForeColor = System::Drawing::Color::Black;
			this->cntname->DefaultCellStyle = dataGridViewCellStyle23;
			this->cntname->HeaderText = L"NAME";
			this->cntname->Name = L"cntname";
			this->cntname->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->cntname->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// cntphone
			// 
			this->cntphone->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle24->ForeColor = System::Drawing::Color::Black;
			this->cntphone->DefaultCellStyle = dataGridViewCellStyle24;
			this->cntphone->HeaderText = L"PHONE NUMBER";
			this->cntphone->Name = L"cntphone";
			this->cntphone->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->cntphone->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// cntemail
			// 
			this->cntemail->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle25->ForeColor = System::Drawing::Color::Black;
			this->cntemail->DefaultCellStyle = dataGridViewCellStyle25;
			this->cntemail->HeaderText = L"EMAIL ADDRESS";
			this->cntemail->Name = L"cntemail";
			this->cntemail->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->cntemail->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// timer1
			// 
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 1;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Interval = 1;
			this->timer3->Tick += gcnew System::EventHandler(this, &MyForm::timer3_Tick);
			// 
			// timer4
			// 
			this->timer4->Interval = 1;
			this->timer4->Tick += gcnew System::EventHandler(this, &MyForm::timer4_Tick);
			// 
			// timer7
			// 
			this->timer7->Interval = 1;
			this->timer7->Tick += gcnew System::EventHandler(this, &MyForm::timer7_Tick);
			// 
			// timer8
			// 
			this->timer8->Interval = 1;
			this->timer8->Tick += gcnew System::EventHandler(this, &MyForm::timer8_Tick);
			// 
			// timer9
			// 
			this->timer9->Interval = 1;
			this->timer9->Tick += gcnew System::EventHandler(this, &MyForm::timer9_Tick);
			// 
			// timer10
			// 
			this->timer10->Interval = 1;
			this->timer10->Tick += gcnew System::EventHandler(this, &MyForm::timer10_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1204, 681);
			this->Controls->Add(this->rightpnl);
			this->Controls->Add(this->leftpnl);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Contacts Book";
			this->leftpnl->ResumeLayout(false);
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel23->ResumeLayout(false);
			this->panel23->PerformLayout();
			this->panel22->ResumeLayout(false);
			this->panel22->PerformLayout();
			this->panel19->ResumeLayout(false);
			this->panel19->PerformLayout();
			this->panel20->ResumeLayout(false);
			this->panel20->PerformLayout();
			this->panel18->ResumeLayout(false);
			this->panel18->PerformLayout();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->addcontacts->ResumeLayout(false);
			this->addcontacts->PerformLayout();
			this->searchpanel->ResumeLayout(false);
			this->searchpanel->PerformLayout();
			this->searchbox->ResumeLayout(false);
			this->searchbox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->searchcontactlist))->EndInit();
			this->rightpnl->ResumeLayout(false);
			this->sortpanel->ResumeLayout(false);
			this->sortpanel->PerformLayout();
			this->panel24->ResumeLayout(false);
			this->panel24->PerformLayout();
			this->search_history_panel->ResumeLayout(false);
			this->search_history_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->search_history_list))->EndInit();
			this->contactdetailsgroup->ResumeLayout(false);
			this->contactdetailsgroup->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->groupcontactslist))->EndInit();
			this->showgroups->ResumeLayout(false);
			this->showgroups->PerformLayout();
			this->creategroup->ResumeLayout(false);
			this->creategroup->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->groupdetails))->EndInit();
			this->viewcontactdetail->ResumeLayout(false);
			this->viewcontactdetail->PerformLayout();
			this->panel21->ResumeLayout(false);
			this->panel21->PerformLayout();
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			this->panel16->ResumeLayout(false);
			this->panel16->PerformLayout();
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			this->detailpnl1->ResumeLayout(false);
			this->detailpnl1->PerformLayout();
			this->showcontactpnl->ResumeLayout(false);
			this->getcontactpnl->ResumeLayout(false);
			this->getcontactpnl->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->contactslistview))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	////////////////////////////////////////////////////////////SHOWING CONTACTS////////////////////////////////////////////////////////////////////
	private: 
		String^ temp_name;
		String^ temp_phone;
		String^ temp_email;

		System::Void contactshow_Click(System::Object^ sender, System::EventArgs^ e) {
		this->getcontactpnl->Visible = false;
		this->viewcontactdetail->Visible = false;
		this->showgroups->Visible = false;
		this->contactdetailsgroup->Visible = false;
		this->searchpanel->Visible = false;
		this->search_history_panel->Visible = false;
		this->sortpanel->Visible = false;



		this->sort_contacts_showpanel = false;
		this->show_list_groups = false;

		this->contactslistview->Rows->Clear();
		
		for (int i = 0; i < book->GetContactList()->GetCount(); i++)
		{
			if (sort_contacts_showpanel == false) {
				getContactDetailGroup(i, book->GetContactList()->GetArr());
				this->contactslistview->Rows->Add(temp_name, temp_phone, temp_email);
			}
		}
	}
	
	private: System::Void addcontactbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->getcontactpnl->Visible = true;
	}

	/////////////////////////////////////////////PUTTING PLACEHOLDER ON ADD CONTACT////////////////////////////////////////////////////////////
	private: System::Void getcontactpnl_Click(System::Object^ sender, System::EventArgs^ e) {
		if (firstname->Text == "") {
			firstname->Text = "First Name";
		}
		if (lastname->Text == "") {
			lastname->Text = "Last Name";
		}
		if (phonenumber->Text == "") {
			phonenumber->Text = "Phone Number";
		}
		if (email->Text == "") {
			email->Text = "Email Address";
		}
		if (house->Text == "") {
			house->Text = "House Number";
		}
		if (street->Text == "") {
			street->Text = "Street";
		}
		if (citybox->Text == "") {
			citybox->Text = "City";
		}
		if (countrybox->Text == "") {
			countrybox->Text = "Country";
		}
	}
	/////////////////////////////////////CLEARING FIELDS OF ADD CONTACT//////////////////////////////////////////////
	private: System::Void firstname_Click(System::Object^ sender, System::EventArgs^ e) {
	
		if (firstname->Text == "First Name") {
			firstname->Text = "";
		}
	}
	private: System::Void lastname_Click(System::Object^ sender, System::EventArgs^ e) {
		if (lastname->Text == "Last Name") {
			lastname->Text = "";
		}
	}
	private: System::Void phonenumber_Click(System::Object^ sender, System::EventArgs^ e) {
		if (phonenumber->Text == "Phone Number") {
			phonenumber->Text = "";
		}
	}
	private: System::Void email_Click(System::Object^ sender, System::EventArgs^ e) {
		if (email->Text == "Email Address") {
			email->Text = "";
		}
	}
	private: System::Void house_Click(System::Object^ sender, System::EventArgs^ e) {
		if (house->Text == "House Number") {
			house->Text = "";
		}
	}
	private: System::Void street_Click(System::Object^ sender, System::EventArgs^ e) {
		if (street->Text == "Street") {
			street->Text = "";
		}
	}
	private: System::Void citybox_Click(System::Object^ sender, System::EventArgs^ e) {
		if (citybox->Text == "City") {
			citybox->Text = "";
		}
	}
	private: System::Void countrybox_Click(System::Object^ sender, System::EventArgs^ e) {
		if (countrybox->Text == "Country") {
			countrybox->Text = "";
		}
	}

	/////////////////////////////////////SUBMIT CONTACT////////////////////////////////////////////////////////////////
	private: System::Void submit_contact_Click(System::Object^ sender, System::EventArgs^ e) {
		Contact temp;
		temp.set_data( 
			msclr::interop::marshal_as<std::string>(firstname->Text), 
			msclr::interop::marshal_as<std::string>(lastname->Text),
			msclr::interop::marshal_as<std::string>(phonenumber->Text),
			msclr::interop::marshal_as<std::string>(email->Text) 
		);
		temp.get_address()->setData(
			msclr::interop::marshal_as<std::string>(house->Text),
			msclr::interop::marshal_as<std::string>(citybox->Text),
			msclr::interop::marshal_as<std::string>(countrybox->Text),
			msclr::interop::marshal_as<std::string>(street->Text) 
		);
		book->add_contact(temp);
		if (MessageBox::Show("Successfully Added", "", MessageBoxButtons::OK, MessageBoxIcon::None) == System::Windows::Forms::DialogResult::OK) {
			contactshow->PerformClick();
			getcontactpnl->Visible = false;
		}
	}
	/////////////////////////////////////////////UNDERLINE ANIMATIONS////////////////////////////////////////////////

	int count=0, count1=0, count2=0, count3=0,count4=0;
	private: System::Void contactshow_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		timer3->Stop();
		timer4->Start();

	}
	private: System::Void contactshow_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		timer4->Stop();
		timer3->Start();
	}
	private: System::Void addcontactbtn_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		timer2->Stop();
		timer1->Start();
	}
	private: System::Void addcontactbtn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		timer1->Stop();
		timer2->Start();
	}
	private: System::Void editcontact_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		timer5->Stop();
		timer6->Start();
	}
	private: System::Void editcontact_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		timer5->Start();
		timer6->Stop();
	}
	private: System::Void viewdetails_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		timer7->Start();
		timer8->Stop();
	}
	private: System::Void viewdetails_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		timer8->Start();
		timer7->Stop();
	}
	private: System::Void underline5_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		timer9->Start();
		timer10->Stop();
	}
	private: System::Void underline5_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		timer10->Start();
		timer9->Stop();
	}

	/////////////////////////////////////////////ANIMATION TIMERS////////////////////////////////////////////////

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (count < 100) {
			count += 5;
			this->underline->Size = System::Drawing::Size(count, 3);
		}
		else {
			timer1->Stop();
		}
		
	}
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (count > 0) {
			count -= 10;
			this->underline->Size = System::Drawing::Size(count, 3);
		}
		else {
			timer2->Stop();
		}
	}
	private: System::Void timer3_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (count1 < 110) {
			count1 += 5;
			this->underline2->Size = System::Drawing::Size(count1, 3);
		}
		else {
			timer3->Stop();
		}

	}
	private: System::Void timer4_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (count1 > 0) {
			count1 -= 10;
			this->underline2->Size = System::Drawing::Size(count1, 3);
		}
		else {
			timer4->Stop();
		}
	}
	private: System::Void timer7_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (count3 < 95) {
			count3 += 5;
			this->underline4->Size = System::Drawing::Size(count3, 3);
		}
		else {
			timer7->Stop();
		}
	}
	private: System::Void timer8_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (count3 > 0) {
			count3 -= 10;
			this->underline4->Size = System::Drawing::Size(count3, 3);
		}
		else {
			timer8->Stop();
		}
	}
	System::Void timer9_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (count4 < 115) {
			count4 += 5;
			this->underline5->Size = System::Drawing::Size(count4, 3);
		}
		else {
			timer9->Stop();
		}
	}
	System::Void timer10_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (count4 > 0) {
			count4 -= 10;
			this->underline5->Size = System::Drawing::Size(count4, 3);
		}
		else {
			timer10->Stop();
		}
	}

	///////////////////////////////////////////////////////////////////////////EDIT CONTACTS///////////////////////////////////////////////////////////////////////////
	private:
		int globalrow=0;
		bool flag = false;
		System::Void contactslistview_CellLeave(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

			if (flag == true) {
				this->contactslistview->Rows[globalrow]->ReadOnly = true;
				if (MessageBox::Show("Save Changes", "", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
					int row = this->contactslistview->CurrentCell->RowIndex;
					int col = this->contactslistview->CurrentCell->ColumnIndex;

					std::string temp_data = msclr::interop::marshal_as< std::string >(this->contactslistview->CurrentCell->Value->ToString());

					if (col == 0) {
						auto word = this->contactslistview->CurrentCell->Value->ToString()->Split(' ');

						int id = book->GetContactList()->GetArr()[row]->get_id();

						std::string first_name = msclr::interop::marshal_as< std::string >(word[0]->ToString());
						std::string last_name = msclr::interop::marshal_as< std::string >(word[1]->ToString());
						book->GetContactList()->GetArr()[row]->set_first_name(first_name);
						book->GetContactList()->GetArr()[row]->set_last_name(last_name);
					}
					else if (col == 1) {
						book->GetContactList()->GetArr()[row]->set_mobile_number(temp_data);
					}
					else if (col == 2) {
						book->GetContactList()->GetArr()[row]->set_email_address(temp_data);
					}
				}
				flag = false;
			}
			
		}



	///////////////////////////////////////////////////////////////////////////VIEW DETAILS///////////////////////////////////////////////////////////////////////////////////
	private:
		String^ temp_city;
		String^ temp_street;
		String^ temp_house;
		String^ temp_country;
		String^ temp_groups;
		static int topContactCounts = 0;
		static int totalContactCounts = 0;
		void getContactDetails() {
			std::string groups="";
			int count_group=0;
			if(this->book->GetGroupList()->GetCount()>0)
				count_group =this->book->GetGroupList()->GetCount();

			int count_contact = 0;
			int check_id = book->GetContactList()->GetArr()[globalrow]->get_id();
			int compare_id = 0;
			getContactDetailGroup(globalrow, this->book->GetContactList()->GetArr());

			for (int i = 0; i < count_group; i++)
			{
				count_contact = book->GetGroupList()->GetArr()[i]->GetContactsList()->GetCount();
				for (int j = 0; j < count_contact; j++)
				{
					compare_id = *book->GetGroupList()->GetArr()[i]->GetContactsList()->GetArr()[j];

					if (check_id == compare_id) {
						groups = groups + " " + book->GetGroupList()->GetArr()[i]->GetName();
					}
				}
			}
			temp_groups = gcnew String(groups.data());

		}
		void setContactDetail() {
			this->detailcity->Text = temp_city;
			this->detailcountry->Text = temp_country;
			this->detailhouse->Text = temp_house;
			this->detailstreet->Text = temp_street;
			this->detailname->Text = temp_name;
			this->detailemail->Text = temp_email;
			this->detailnumber->Text = temp_phone;
			this->detailgroup->Text = temp_groups;
		}
		void setContactListView() {
			temp_name = this->contactslistview->CurrentRow->Cells[0]->Value->ToString();
			temp_phone = this->contactslistview->CurrentRow->Cells[1]->Value->ToString();
			temp_email = this->contactslistview->CurrentRow->Cells[2]->Value->ToString();
		}
		System::Void viewdetails_Click(System::Object^ sender, System::EventArgs^ e) {
			if (this->contactslistview->RowCount > 0 && !show_list_groups) {
				this->viewcontactdetail->Visible = true;
				
				int index = 0;
				setContactListView();
				index = compareContacts(temp_name,temp_phone, temp_email);
				globalrow = index;
				getContactDetails();
				setContactDetail();

				if (topContactCounts == 5) {
					topContactCounts = 0;
					totalContactCounts = 5;
				}
				else {
					*this->book->GetTop5Contact()->GetArr()[topContactCounts] = this->book->GetContactList()->GetArr()[index]->get_id();
					topContactCounts++;
					totalContactCounts++;
				}
			}
		}

	//////////////////////////////////////////////////CHANGE DETAILS/////////////////////////////////////////////////////
	private:
		bool detailsFlag = false, name_flag = false, city_flag = false, country_flag = false, phone_flag = false, email_flag = false, house_flag = false, street_flag = false;
		System::Void detailname_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
			detailname->ReadOnly = false;
			detailsFlag = true;
			name_flag = false;
		}
		System::Void detailcity_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
			detailcity->ReadOnly = false;
			detailsFlag = true;
			city_flag = false;
		}
		System::Void detailemail_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
			detailemail->ReadOnly = false;
			detailsFlag = true;
			email_flag = false;
		}
		System::Void detailnumber_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
			detailnumber->ReadOnly = false;
			detailsFlag = true;
			phone_flag = false;
		}
		System::Void detailhouse_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
			detailhouse->ReadOnly = false;
			detailsFlag = true;
			house_flag = false;
		}
		System::Void detailstreet_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
			detailstreet->ReadOnly = false;
			detailsFlag = true;
			street_flag = false;
		}
		System::Void detailcountry_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
			detailcountry->ReadOnly = false;
			detailsFlag = true;
			country_flag = false;
		}

	//////////////////////////////////////////////////UPDATE DETAILS TO ORIGNAL ARRAY/////////////////////////////////////////////////////
	private:
		System::Void viewcontactdetail_Click(System::Object^ sender, System::EventArgs^ e) {
			if (detailsFlag) {
				if ((MessageBox::Show("Save Changes", "", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)) {
			
					if (name_flag) {
						auto word = this->detailname->Text->ToString()->Split(' ');
						book->GetContactList()->GetArr()[globalrow]->set_first_name(msclr::interop::marshal_as< std::string >(word[0]->ToString()));
						book->GetContactList()->GetArr()[globalrow]->set_last_name(msclr::interop::marshal_as< std::string >(word[1]->ToString()));
					}
					if (city_flag) {
						book->GetContactList()->GetArr()[globalrow]->get_address()->setCity(msclr::interop::marshal_as< std::string >(detailcity->Text->ToString()));
					}
					if (country_flag) {
						book->GetContactList()->GetArr()[globalrow]->get_address()->setCountry(msclr::interop::marshal_as< std::string >(detailcountry->Text->ToString()));
					}
					if (house_flag) {
						book->GetContactList()->GetArr()[globalrow]->get_address()->setHouse(msclr::interop::marshal_as< std::string >(detailhouse->Text->ToString()));
					}
					if (street_flag) {
						book->GetContactList()->GetArr()[globalrow]->get_address()->setStreet(msclr::interop::marshal_as< std::string >(detailstreet->Text->ToString()));
					}
					if (email_flag) {
						book->GetContactList()->GetArr()[globalrow]->set_email_address(msclr::interop::marshal_as< std::string >(detailemail->Text->ToString()));
					}
					if (phone_flag) {
						book->GetContactList()->GetArr()[globalrow]->set_mobile_number(msclr::interop::marshal_as< std::string >(detailnumber->Text->ToString()));
					}
					this->book->save_to_file_contacts("saving_contacts.txt");
				}
				detailnumber->ReadOnly = true;
				detailhouse->ReadOnly = true;
				detailstreet->ReadOnly = true;
				detailcountry->ReadOnly = true;
				detailemail->ReadOnly = true;
				detailname->ReadOnly = true;
				detailcity->ReadOnly = true;

				name_flag = false;
				city_flag = false;
				country_flag = false;
				phone_flag = false;
				email_flag = false;
				house_flag = false;
				street_flag = false;
			}
			detailsFlag = false;
		}

	//////////////////////////////////////////////////CHECKING TEXT IS CHANGED OR NOT/////////////////////////////////////////////////////
	private:
		System::Void detailname_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			if (detailsFlag)
				name_flag = true;
		}
		System::Void detailcity_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			if (detailsFlag)
				city_flag = true;
		}
		System::Void detailcountry_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			if (detailsFlag)
				country_flag = true;
		}
		System::Void detailemail_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			if (detailsFlag)
				email_flag = true;
		}
		System::Void detailnumber_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			if (detailsFlag)
				phone_flag = true;
		}
		System::Void detailhouse_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			if (detailsFlag)
				house_flag = true;
		}
		System::Void detailstreet_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			if (detailsFlag)
				street_flag = true;
		}

	//////////////////////////////////////////////////DELETE CONTACT///////////////////////////////////////////////////////////////////////
	private: 
		System::Void deletecontact_Click(System::Object^ sender, System::EventArgs^ e) {
			
			if (panelVisibility() 
				&& this->getcontactpnl->Visible == false 
				&& this->showgroups->Visible == false &&
				this->contactdetailsgroup->Visible == false &&
				this->search_history_panel->Visible == false &&
				this->sortpanel->Visible == false &&
				this->searchpanel->Visible == false && contactslistview->Rows->Count>0){

				int compare_id = 0; int i = 0,j=0;

				int index = 0;
				setContactListView();
				index = compareContacts(temp_name, temp_phone, temp_email);
				globalrow = index;


				compare_id = this->book->GetContactList()->GetArr()[globalrow]->get_id();
				book->GetContactList()->RemoveItem(globalrow);

				this->contactslistview->Rows->RemoveAt(globalrow);
				this->book->save_to_file_contacts("saving_contacts.txt");

				CheckContactInGroups(compare_id);
				contactshow_Click(sender, e);
			}
			else if (panelVisibility() && this->contactdetailsgroup->Visible == true&& (groupcontactslist->Rows->Count>0)) {
				globalrow = groupdetails->CurrentCell->RowIndex;
				group_row = groupcontactslist->CurrentCell->RowIndex;

				this->book->GetGroupList()->GetArr()[globalrow]->GetContactsList()->RemoveItem(group_row);
				showlistgroups_Click(sender, e);
				this->book->save_to_file_groups("saving_groups.txt");

			}
		}
		void CheckContactInGroups(int compare_id) {
			int count_group = this->book->GetGroupList()->GetCount();
			int count_contact = 0;
			int contact_id=0;

			for (int i = 0; i < count_group; i++)
			{
				count_contact = book->GetGroupList()->GetArr()[i]->GetContactsList()->GetCount();
				for (int j = 0; j < count_contact; j++)
				{
					contact_id = *book->GetGroupList()->GetArr()[i]->GetContactsList()->GetArr()[j];
					if (contact_id==compare_id) {
						book->GetGroupList()->GetArr()[i]->GetContactsList()->RemoveItem(j);
						break;
					}
				}
			}
		}
		array<int>^ CheckContactInGroupsGeneral(int compare_id) {
			if (this->book->GetGroupList()->GetCount() > 0) {
				int count_group = this->book->GetGroupList()->GetCount();
				int count_contact = 0;
				int contact_id = 0;
				int arr_count = 0;
				array<int>^ arr;
				arr = gcnew array<int>(count_group);

				for (int i = 0; i < arr->Length; i++)
				{
					arr[i] = -1;
				}

				for (int i= 0; i < count_group; i++)
				{
					count_contact = book->GetGroupList()->GetArr()[i]->GetContactsList()->GetCount();
					for (int j= 0; j < count_contact; j++)
					{
						contact_id = *book->GetGroupList()->GetArr()[i]->GetContactsList()->GetArr()[j];
						if (contact_id == compare_id) {
							arr[arr_count] = i;
							break;
						}
					}
				}
				return arr;
			}
		}

	//////////////////////////////////////////////////ADD TO GROUP///////////////////////////////////////////////////////////////////////
	private:
		String^ groups_name;
		String^ groups_count;
		int group_row = 0;
		bool add_contact_to_group = false, show_list_groups = false,view_contacts_group=false,sort_contacts_showpanel=false;
		String^ group_label;

		bool panelVisibility() {
			if (this->getcontactpnl->Visible == false
				&& this->viewcontactdetail->Visible == false) {
				return true;
			}
			else {
				return false;
			}
		}
		template<class type>
		void getContactDetailGroup(int i,type **arr) {
			if (this->book->GetContactList()->GetCount() > 0) {
				std::string city, house, street, country, name, email, phone,groups;

				house = arr[i]->get_address()->getHouse();
				street = arr[i]->get_address()->getStreet();
				city = arr[i]->get_address()->getCity();
				country = arr[i]->get_address()->getCountry();
				name = arr[i]->get_first_name() + " " + arr[i]->get_last_name();
				phone = arr[i]->get_mobile_number();
				email = arr[i]->get_email_address();

				if (book->GetGroupList() != NULL) {
					if(book->GetGroupList()->GetCount()>0)
					groups = groups + " " + book->GetGroupList()->GetArr()[group_row]->GetName();

				}

				temp_name = gcnew String(name.data());
				temp_phone = gcnew String(phone.data());
				temp_email = gcnew String(email.data());
				temp_house = gcnew String(house.data());
				temp_city = gcnew String(city.data());
				temp_country = gcnew String(country.data());
				temp_street = gcnew String(street.data());
				temp_groups = gcnew String(groups.data());
			}
		}
		void setContactDetailGroup() {
			groupcontactslist->Rows->Add(temp_name, temp_phone, temp_email);
		}
		void ContactDetails() {
			int id, contact_id;
			int length = book->GetGroupList()->GetArr()[group_row]->GetContactsList()->GetCount();
			int contact_length = this->book->GetContactList()->GetCount();

			for (int i = 0; i < length; i++)
			{
				id = *book->GetGroupList()->GetArr()[group_row]->GetContactsList()->GetArr()[i];
				for (int j = 0; j < contact_length; j++)
				{
					contact_id = this->book->GetContactList()->GetArr()[j]->get_id();
					if (id == contact_id) {

						if (searchpanel->Visible == false) {
							getContactDetailGroup(j,this->book->GetContactList()->GetArr());
							globalrow = j;
						}
						if (viewcontactdetail->Visible == true) {
							setContactDetail();
						}
						else {
							setContactDetailGroup();
						}

					}
				}
			}

		}
		void displayGroups() {
			this->showgroups->Visible = true;
			this->groupdetails->Rows->Clear();

			int count = 0;
			std::string temp_group_name, temp_group_count;
			if (this->book->GetGroupList() != NULL)
				count=book->GetGroupList()->GetCount();

			for (int i = 0; i < count; i++)
			{
				temp_group_name = this->book->GetGroupList()->GetArr()[i]->GetName();
				temp_group_count = ""+std::to_string(this->book->GetGroupList()->GetArr()[i]->GetContactsList()->GetCount());
				groups_name = gcnew String(temp_group_name.data());
				groups_count = gcnew String(temp_group_count.data());
				this->groupdetails->Rows->Add(groups_name, groups_count);
			}
		}
		int compareContacts(String^ temp_name, String^ temp_phone, String^ temp_email) {
			int resName, resPhone, resEmail;
			if(searchcontactlist->Rows->Count>0)
				group_row = searchcontactlist->CurrentCell->RowIndex;

			std::string name = msclr::interop::marshal_as< std::string >(temp_name->ToString());
			std::string phone = msclr::interop::marshal_as< std::string >(temp_phone->ToString());
			std::string email = msclr::interop::marshal_as< std::string >(temp_email->ToString());
			std::string checkname;
			std::string checkemail;
			std::string checkphone;
			int i = 0;
			int length = this->book->GetContactList()->GetCount();
			for (i = 0; i < length; i++)
			{
				checkname = this->book->GetContactList()->GetArr()[i]->get_first_name() + ' ' + this->book->GetContactList()->GetArr()[i]->get_last_name();
				checkphone = "" + this->book->GetContactList()->GetArr()[i]->get_mobile_number();
				checkemail = "" + this->book->GetContactList()->GetArr()[i]->get_email_address();
				resName = name.compare(checkname);
				resEmail = email.compare(checkemail);
				resPhone = phone.compare(checkphone);
				if (resName == 0 && resEmail == 0 && resPhone == 0) {
					return i;
				}
			}
		}

	private: 
		System::Void addtogroup_Click(System::Object^ sender, System::EventArgs^ e) {
			
			if (panelVisibility() && !show_list_groups) {
				groupcreatelabel->Visible = true;
				creategroup->Visible = true;

				deletebutton->Visible = false;
				groupshowlabel->Text = "ADD GROUP";
				groupshowlabel->Location = System::Drawing::Point((880 - groupshowlabel->Size.Width) / 2, 50);

				add_contact_to_group = true;
				displayGroups();
			}

	}
	
	//////////////////////////////////////////////////LIST OF GROUPS AND CONTACTS IN GROUP SHOW///////////////////////////////////////////////////////////////////////
	private: 
		System::Void groupdetails_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

			if (panelVisibility() && this->contactslistview->RowCount > 0 && add_contact_to_group&& !show_list_groups) {
				
				int index = 0;
				setContactListView();
				index = compareContacts(temp_name, temp_phone, temp_email);
				globalrow=index;

				group_row = this->groupdetails->CurrentCell->RowIndex;
				if ((MessageBox::Show("Save Changes", "", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)) {
					book->AddContactToGroup(book->GetContactList()->GetArr()[globalrow]->get_id(), book->GetGroupList()->GetArr()[group_row]->GetName());
					this->book->save_to_file_groups("saving_groups.txt");

					addtogroup_Click(sender, e);
				}

			}
			else if (show_list_groups && panelVisibility()) {
				group_row = this->groupdetails->CurrentCell->RowIndex;

				this->getcontactpnl->Visible = false;
				this->showgroups->Visible = false;
				this->search_history_panel->Visible = false;
				this->sortpanel->Visible = false;
				this->searchpanel->Visible = false;

				contactdetailsgroup->Visible = true;

				std::string name=this->book->GetGroupList()->GetArr()[group_row]->GetName();

				group_label = gcnew String(name.data());
				groupnamelabel->Text = group_label;
				
				groupnamelabel->Location = System::Drawing::Point( (880-groupnamelabel->Size.Width)/2, 50 );
				groupcontactslist->Rows->Clear();
				ContactDetails();
			}

		}
		
	private:
		System::Void showlistgroups_Click(System::Object^ sender, System::EventArgs^ e) {
			contactdetailsgroup->Visible = false;
			searchpanel->Visible = false;
			show_list_groups = true;

			groupcreatelabel->Visible = false;
			creategroup->Visible = false;
			deletebutton->Visible = true;
			groupshowlabel->Text = "SHOW GROUPS";
			groupshowlabel->Location = System::Drawing::Point((880 - groupshowlabel->Size.Width) / 2, 50);

			displayGroups();
		}


	//////////////////////////////////////////////////GROUP CONTACTS SHOW IN VIEW CONTACT///////////////////////////////////////////////////////////////////////
	private: 
		System::Void groupcontactslist_CellContentDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

		this->viewcontactdetail->Visible = true;

		this->getcontactpnl->Visible = false;
		this->showgroups->Visible = false;
		this->contactdetailsgroup->Visible = false;
		this->search_history_panel->Visible = false;
		this->sortpanel->Visible = false;
		this->searchpanel->Visible = false;

		view_contacts_group = true;

		group_row = this->groupdetails->CurrentCell->RowIndex;

		ContactDetails();
	}
	//////////////////////////////////////////////////DELETE GROUPS///////////////////////////////////////////////////////////////////////

	private: System::Void deletebutton_Click(System::Object^ sender, System::EventArgs^ e) {
		group_row = groupdetails->CurrentCell->RowIndex;
		this->book->GetGroupList()->RemoveItem(group_row);
		showlistgroups_Click(sender, e);
	}

	//////////////////////////////////////////////////SEARCH CONTACTS///////////////////////////////////////////////////////////////////////
	private: System::Void searchtype_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == (char)Keys::Enter) {
			if (this->book->GetSearchList() == NULL) {
				this->book->createSearchList();
			}

			int index = 0;
			searchcontactlist->Rows->Clear();

		/////STORING SEARCH
			if (searchtype->Text->Length > 0) {
				std::string search_store = msclr::interop::marshal_as< std::string >(searchtype->Text->ToString());
				this->book->GetSearchList()->addSearch(search_store);
			}

			auto word = searchtype->Text->ToString()->Split(' ');
			String^ temp;
			for (int i = 0; i < word->Length; i++)
			{
				if (i != word->Length - 1)
					word[i] += word[i + 1];

			}
			temp = gcnew String(word[0]->ToString());

			std::string pattern = msclr::interop::marshal_as< std::string >(temp);
			result obj = this->book->searchContact(pattern);
			for (int i = 0; i < obj.result_count; i++)
			{
				index = obj.result_arr[i];
				getContactDetailGroup(index,this->book->GetContactList()->GetArr());

				this->searchcontactlist->Rows->Add(temp_name, temp_phone, temp_email);
			}

			delete[] obj.result_arr;
		}
	}
	private: System::Void searchcontact_Click(System::Object^ sender, System::EventArgs^ e) {
		this->getcontactpnl->Visible = false;
		this->viewcontactdetail->Visible = false;
		this->showgroups->Visible = false;
		this->contactdetailsgroup->Visible = false;
		this->search_history_panel->Visible = false;
		this->sortpanel->Visible = false;
		searchpanel->Visible = true;
		this->searchcontactlist->Rows->Clear();

	}

	/////////////////////////////////////////////////TOP 5 CONTACTS///////////////////////////////////////////////////////////////////////
	private: System::Void top5contacts_Click(System::Object^ sender, System::EventArgs^ e) {
		this->searchcontactlist->Rows->Clear();
		for (int i = 0; i < this->book->GetContactList()->GetCount(); i++) {
			for (int j = 0; j < totalContactCounts; j++)
			{
				if (*this->book->GetTop5Contact()->GetArr()[j] == this->book->GetContactList()->GetArr()[i]->get_id()) {
					getContactDetailGroup(i, this->book->GetContactList()->GetArr());
					this->searchcontactlist->Rows->Add(temp_name, temp_phone, temp_email);
					break;
				}
			}
		}

	}
	//////////////////////////////////////////////////SEARCH CONTACTS VIEW///////////////////////////////////////////////////////////////////////

	private: System::Void searchcontactlist_CellContentDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (panelVisibility() && searchpanel->Visible == true) {
			std::string groups;
			int compare_id;
			viewcontactdetail->Visible = true;
			searchpanel->Visible = false;
			array<int>^ arr;
			temp_name = this->searchcontactlist->CurrentRow->Cells[0]->Value->ToString();
			temp_phone = this->searchcontactlist->CurrentRow->Cells[1]->Value->ToString();
			temp_email = this->searchcontactlist->CurrentRow->Cells[2]->Value->ToString();
			int index = 0;
			index = compareContacts(temp_name, temp_phone, temp_email);
			getContactDetailGroup(index,this->book->GetContactList()->GetArr());
			compare_id = this->book->GetContactList()->GetArr()[index]->get_id();

			if (this->book->GetGroupList() !=NULL) {
				arr = CheckContactInGroupsGeneral(compare_id);
				if (arr != nullptr) {
					for (int i = 0; i < arr->Length; i++)
					{
						if(arr[i]!=-1)
						groups= groups + " "+this->book->GetGroupList()->GetArr()[arr[i]]->GetName();
					}
					temp_groups = gcnew String(groups.data());

				}

			}

			globalrow = index;
			setContactDetail();
		}
		
	}
	


	//////////////////////////////////////////////////SORT CONTACTS///////////////////////////////////////////////////////////////////////
	private:
		void SortingContactsFunction() {
			if (panelVisibility()) {

				this->sort_contacts_showpanel = true;
			
				std::string choice = msclr::interop::marshal_as< std::string >(sort_choice->ToString());

				result obj = this->book->print_contacts_sorted(choice);
				int index = 0;
				this->contactslistview->Rows->Clear();

				for (int i = 0; i < obj.result_count; i++)
				{
					if (sort_contacts_showpanel) {
						index = obj.result_arr[i];
						getContactDetailGroup(index, this->book->GetContactList()->GetArr());
					}
					this->contactslistview->Rows->Add(temp_name, temp_phone, temp_email);
				}
				delete []obj.result_arr;
			}
		}
		String^ sort_choice;
		System::Void sortcontacts_Click(System::Object^ sender, System::EventArgs^ e) {
			sortpanel->Visible = true;
		}
	private: System::Void sorttype_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == (char)Keys::Enter) {
			if (sorttype->Text->Length > 0) {
				sort_choice = sorttype->Text->ToLower();
				sortpanel->Visible = false;
				SortingContactsFunction();
			}
		}

	}

	//////////////////////////////////////////////////Search History///////////////////////////////////////////////////////////////////////
	private: System::Void searchhistory_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->book->GetSearchList() != NULL) {
			int count = 0;
			std::string text,date,time;
			String^ text_temp, ^date_temp, ^time_temp;
			search_history_panel->Visible = true;
			search_history_list->Rows->Clear();
			this->getcontactpnl->Visible = false;
			this->viewcontactdetail->Visible = false;
			this->showgroups->Visible = false;
			this->contactdetailsgroup->Visible = false;
			this->sortpanel->Visible = false;
			this->searchpanel->Visible = false;
			count = this->book->GetSearchList()->getSearchText()->GetCount();
			for (int i = 0; i < count; i++)
			{
				text = *this->book->GetSearchList()->getSearchText()->GetArr()[i];
				date = this->book->GetSearchList()->gethistoryObj()->GetArr()[i]->getDate();
				time = this->book->GetSearchList()->gethistoryObj()->GetArr()[i]->getTime();
				text_temp = gcnew String(text.data());
				date_temp = gcnew String(date.data());
				time_temp = gcnew String(time.data());
				search_history_list->Rows->Add(""+(i+1), text_temp, date_temp, time_temp);

			}
		}

	}
	//////////////////////////////////////////////////GROUP CREATE///////////////////////////////////////////////////////////////////////
	private: System::Void creategrouptext_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == (char)Keys::Enter) {
			std::string group_name;
			group_name = msclr::interop::marshal_as<std::string>(creategrouptext->Text);
			this->book->CreateGroup(group_name);
			addtogroup_Click(sender, e);
		}
	}
	private: System::Void mergecontacts_Click(System::Object^ sender, System::EventArgs^ e) {
		if (contactslistview->Rows->Count > 0) {
			this->book->merge_duplicates();
			contactshow_Click(sender, e);

		}
	}
};
}
