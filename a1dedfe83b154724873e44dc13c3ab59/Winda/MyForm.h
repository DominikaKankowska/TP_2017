#pragma once
#include <vector>
#include <cstdlib>
#include <ctime>



namespace Winda {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;


	PictureBox^ *Buff;

	
	struct Ludzie
	{
		bool Wsiald = 0;
		bool Wysiadl = 0;
		int Start;
		int Koniec;
		PictureBox^ *ObrazWsk;
	};
	
	static vector<Ludzie> Czlowieki;

	
	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>

	public ref class MyForm : public System::Windows::Forms::Form
	{
		int pietro = 0;
		int licznik_ludzi = 0;
		int licznik_pas = 0;
		int czas_winda = 0;
		int czas_wejscie = 0;
		int czas_skok = 0;
		int kier_winda = 0;
		int kier_skok = 0;
		int wsiadl = 0;
		

	
	protected:

	private: System::Windows::Forms::Button^  Przejscie;
	private: System::Windows::Forms::Button^  Exit;
	private: System::Windows::Forms::Button^  Gora;
	private: System::Windows::Forms::Button^  Dol;
	private: System::Windows::Forms::Button^  P0_D4;
	private: System::Windows::Forms::Button^  P0_D3;
	private: System::Windows::Forms::Button^  P0_D2;
	private: System::Windows::Forms::Button^  P0_D1;
	private: System::Windows::Forms::Button^  P1_D0;
	private: System::Windows::Forms::Button^  P1_D2;
	private: System::Windows::Forms::Button^  P1_D3;
	private: System::Windows::Forms::Button^  P1_D4;
	private: System::Windows::Forms::Button^  P2_D0;
	private: System::Windows::Forms::Button^  P2_D1;
	private: System::Windows::Forms::Button^  P2_D3;
	private: System::Windows::Forms::Button^  P2_D4;
	private: System::Windows::Forms::Button^  P3_D0;
	private: System::Windows::Forms::Button^  P3_D1;
	private: System::Windows::Forms::Button^  P3_D2;
	private: System::Windows::Forms::Button^  P3_D4;
	private: System::Windows::Forms::Button^  P4_D0;
	private: System::Windows::Forms::Button^  P4_D1;
	private: System::Windows::Forms::Button^  P4_D2;
	private: System::Windows::Forms::Button^  P4_D3;
	private: System::Windows::Forms::Label^  LicznikL;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  WartoscL;



	public:
		
		MyForm(void)
		{
			InitializeComponent();
		}

	private: System::Windows::Forms::Label^  N_Winda;

	protected:

	private: System::Windows::Forms::PictureBox^  Szyb;
	private: System::Windows::Forms::PictureBox^  Winda;

	private:

	private: System::Windows::Forms::Timer^  Z_Winda;
	private: System::Windows::Forms::Timer^  Z_Przejscie;

	private: System::Windows::Forms::Timer^  Z_Skok;

	private: System::ComponentModel::IContainer^  components;

	protected:
		/// <summary>
		/// Wyczyść wszystkie używane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda obsługi projektanta — nie należy modyfikować 
		/// zawartość tej metody z edytorem kodu.
		/// </summary>

		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->N_Winda = (gcnew System::Windows::Forms::Label());
			this->Szyb = (gcnew System::Windows::Forms::PictureBox());
			this->Winda = (gcnew System::Windows::Forms::PictureBox());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->Gora = (gcnew System::Windows::Forms::Button());
			this->Przejscie = (gcnew System::Windows::Forms::Button());
			this->Z_Winda = (gcnew System::Windows::Forms::Timer(this->components));
			this->Z_Przejscie = (gcnew System::Windows::Forms::Timer(this->components));
			this->Z_Skok = (gcnew System::Windows::Forms::Timer(this->components));
			this->P0_D3 = (gcnew System::Windows::Forms::Button());
			this->Dol = (gcnew System::Windows::Forms::Button());
			this->P0_D4 = (gcnew System::Windows::Forms::Button());
			this->P0_D2 = (gcnew System::Windows::Forms::Button());
			this->P0_D1 = (gcnew System::Windows::Forms::Button());
			this->P1_D0 = (gcnew System::Windows::Forms::Button());
			this->P1_D2 = (gcnew System::Windows::Forms::Button());
			this->P1_D3 = (gcnew System::Windows::Forms::Button());
			this->P1_D4 = (gcnew System::Windows::Forms::Button());
			this->P2_D1 = (gcnew System::Windows::Forms::Button());
			this->P2_D3 = (gcnew System::Windows::Forms::Button());
			this->P2_D4 = (gcnew System::Windows::Forms::Button());
			this->P3_D0 = (gcnew System::Windows::Forms::Button());
			this->P3_D1 = (gcnew System::Windows::Forms::Button());
			this->P3_D2 = (gcnew System::Windows::Forms::Button());
			this->P3_D4 = (gcnew System::Windows::Forms::Button());
			this->P4_D0 = (gcnew System::Windows::Forms::Button());
			this->P4_D1 = (gcnew System::Windows::Forms::Button());
			this->P4_D2 = (gcnew System::Windows::Forms::Button());
			this->P4_D3 = (gcnew System::Windows::Forms::Button());
			this->P2_D0 = (gcnew System::Windows::Forms::Button());
			this->LicznikL = (gcnew System::Windows::Forms::Label());
			this->WartoscL = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Szyb))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Winda))->BeginInit();
			this->SuspendLayout();
			// 
			// N_Winda
			// 
			this->N_Winda->AutoSize = true;
			this->N_Winda->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->N_Winda->Location = System::Drawing::Point(568, 9);
			this->N_Winda->Name = L"N_Winda";
			this->N_Winda->Size = System::Drawing::Size(184, 55);
			this->N_Winda->TabIndex = 0;
			this->N_Winda->Text = L"WINDA";
			// 
			// Szyb
			// 
			this->Szyb->Enabled = false;
			this->Szyb->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Szyb.Image")));
			this->Szyb->Location = System::Drawing::Point(-4, 80);
			this->Szyb->Name = L"Szyb";
			this->Szyb->Size = System::Drawing::Size(1351, 756);
			this->Szyb->TabIndex = 1;
			this->Szyb->TabStop = false;
			// 
			// Winda
			// 
			this->Winda->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Winda.Image")));
			this->Winda->Location = System::Drawing::Point(436, 684);
			this->Winda->Name = L"Winda";
			this->Winda->Size = System::Drawing::Size(449, 149);
			this->Winda->TabIndex = 2;
			this->Winda->TabStop = false;
			// 
			// Exit
			// 
			this->Exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Exit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Exit->Location = System::Drawing::Point(1630, 937);
			this->Exit->Margin = System::Windows::Forms::Padding(0);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(147, 54);
			this->Exit->TabIndex = 4;
			this->Exit->Text = L"Wyjście";
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &MyForm::Exit_Click);
			// 
			// Gora
			// 
			this->Gora->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Gora->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Gora->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Gora->Location = System::Drawing::Point(1630, 820);
			this->Gora->Name = L"Gora";
			this->Gora->Size = System::Drawing::Size(147, 55);
			this->Gora->TabIndex = 5;
			this->Gora->Text = L"Gora";
			this->Gora->UseVisualStyleBackColor = false;
			this->Gora->Click += gcnew System::EventHandler(this, &MyForm::Gora_Click);
			// 
			// Przejscie
			// 
			this->Przejscie->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Przejscie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Przejscie->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Przejscie->Location = System::Drawing::Point(1630, 730);
			this->Przejscie->Name = L"Przejscie";
			this->Przejscie->Size = System::Drawing::Size(147, 84);
			this->Przejscie->TabIndex = 6;
			this->Przejscie->Text = L"Wejdź Wyjdź";
			this->Przejscie->UseVisualStyleBackColor = false;
			this->Przejscie->Click += gcnew System::EventHandler(this, &MyForm::Przejscie_Click);
			// 
			// Z_Winda
			// 
			this->Z_Winda->Interval = 15;
			this->Z_Winda->Tick += gcnew System::EventHandler(this, &MyForm::Z_Winda_Tick);
			// 
			// Z_Przejscie
			// 
			this->Z_Przejscie->Interval = 15;
			this->Z_Przejscie->Tick += gcnew System::EventHandler(this, &MyForm::Z_Przejscie_Tick_1);
			// 
			// Z_Skok
			// 
			this->Z_Skok->Interval = 15;
			this->Z_Skok->Tick += gcnew System::EventHandler(this, &MyForm::Z_Skok_Tick);
			// 
			// P0_D3
			// 
			this->P0_D3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P0_D3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P0_D3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P0_D3->Location = System::Drawing::Point(-4, 749);
			this->P0_D3->Name = L"P0_D3";
			this->P0_D3->Size = System::Drawing::Size(20, 22);
			this->P0_D3->TabIndex = 7;
			this->P0_D3->Text = L"3";
			this->P0_D3->UseVisualStyleBackColor = false;
			this->P0_D3->Click += gcnew System::EventHandler(this, &MyForm::P0_D3_Click);
			// 
			// Dol
			// 
			this->Dol->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Dol->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Dol->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Dol->Location = System::Drawing::Point(1630, 881);
			this->Dol->Name = L"Dol";
			this->Dol->Size = System::Drawing::Size(147, 53);
			this->Dol->TabIndex = 8;
			this->Dol->Text = L"Dół";
			this->Dol->UseVisualStyleBackColor = false;
			this->Dol->Click += gcnew System::EventHandler(this, &MyForm::Dol_Click_1);
			// 
			// P0_D4
			// 
			this->P0_D4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P0_D4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P0_D4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P0_D4->Location = System::Drawing::Point(-4, 721);
			this->P0_D4->Name = L"P0_D4";
			this->P0_D4->Size = System::Drawing::Size(20, 22);
			this->P0_D4->TabIndex = 9;
			this->P0_D4->Text = L"4";
			this->P0_D4->UseVisualStyleBackColor = false;
			this->P0_D4->Click += gcnew System::EventHandler(this, &MyForm::P0_D4_Click);
			// 
			// P0_D2
			// 
			this->P0_D2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P0_D2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P0_D2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P0_D2->Location = System::Drawing::Point(-4, 777);
			this->P0_D2->Name = L"P0_D2";
			this->P0_D2->Size = System::Drawing::Size(20, 22);
			this->P0_D2->TabIndex = 10;
			this->P0_D2->Text = L"2";
			this->P0_D2->UseVisualStyleBackColor = false;
			this->P0_D2->Click += gcnew System::EventHandler(this, &MyForm::P0_D2_Click);
			// 
			// P0_D1
			// 
			this->P0_D1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P0_D1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P0_D1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P0_D1->Location = System::Drawing::Point(-4, 805);
			this->P0_D1->Name = L"P0_D1";
			this->P0_D1->Size = System::Drawing::Size(20, 22);
			this->P0_D1->TabIndex = 11;
			this->P0_D1->Text = L"1";
			this->P0_D1->UseVisualStyleBackColor = false;
			this->P0_D1->Click += gcnew System::EventHandler(this, &MyForm::P0_D1_Click);
			// 
			// P1_D0
			// 
			this->P1_D0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P1_D0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P1_D0->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P1_D0->Location = System::Drawing::Point(1327, 653);
			this->P1_D0->Name = L"P1_D0";
			this->P1_D0->Size = System::Drawing::Size(20, 22);
			this->P1_D0->TabIndex = 12;
			this->P1_D0->Text = L"0";
			this->P1_D0->UseVisualStyleBackColor = false;
			// 
			// P1_D2
			// 
			this->P1_D2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P1_D2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P1_D2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P1_D2->Location = System::Drawing::Point(1327, 625);
			this->P1_D2->Name = L"P1_D2";
			this->P1_D2->Size = System::Drawing::Size(20, 22);
			this->P1_D2->TabIndex = 13;
			this->P1_D2->Text = L"2";
			this->P1_D2->UseVisualStyleBackColor = false;
			// 
			// P1_D3
			// 
			this->P1_D3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P1_D3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P1_D3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P1_D3->Location = System::Drawing::Point(1327, 597);
			this->P1_D3->Name = L"P1_D3";
			this->P1_D3->Size = System::Drawing::Size(20, 22);
			this->P1_D3->TabIndex = 14;
			this->P1_D3->Text = L"3";
			this->P1_D3->UseVisualStyleBackColor = false;
			// 
			// P1_D4
			// 
			this->P1_D4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P1_D4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P1_D4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P1_D4->Location = System::Drawing::Point(1327, 569);
			this->P1_D4->Name = L"P1_D4";
			this->P1_D4->Size = System::Drawing::Size(20, 22);
			this->P1_D4->TabIndex = 15;
			this->P1_D4->Text = L"4";
			this->P1_D4->UseVisualStyleBackColor = false;
			// 
			// P2_D1
			// 
			this->P2_D1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P2_D1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P2_D1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P2_D1->Location = System::Drawing::Point(-4, 472);
			this->P2_D1->Name = L"P2_D1";
			this->P2_D1->Size = System::Drawing::Size(20, 22);
			this->P2_D1->TabIndex = 17;
			this->P2_D1->Text = L"1";
			this->P2_D1->UseVisualStyleBackColor = false;
			this->P2_D1->Click += gcnew System::EventHandler(this, &MyForm::P2_D1_Click);
			// 
			// P2_D3
			// 
			this->P2_D3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P2_D3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P2_D3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P2_D3->Location = System::Drawing::Point(-4, 444);
			this->P2_D3->Name = L"P2_D3";
			this->P2_D3->Size = System::Drawing::Size(20, 22);
			this->P2_D3->TabIndex = 18;
			this->P2_D3->Text = L"3";
			this->P2_D3->UseVisualStyleBackColor = false;
			// 
			// P2_D4
			// 
			this->P2_D4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P2_D4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P2_D4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P2_D4->Location = System::Drawing::Point(-4, 416);
			this->P2_D4->Name = L"P2_D4";
			this->P2_D4->Size = System::Drawing::Size(20, 22);
			this->P2_D4->TabIndex = 19;
			this->P2_D4->Text = L"4";
			this->P2_D4->UseVisualStyleBackColor = false;
			this->P2_D4->Click += gcnew System::EventHandler(this, &MyForm::P2_D4_Click);
			// 
			// P3_D0
			// 
			this->P3_D0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P3_D0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P3_D0->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P3_D0->Location = System::Drawing::Point(1327, 351);
			this->P3_D0->Name = L"P3_D0";
			this->P3_D0->Size = System::Drawing::Size(20, 22);
			this->P3_D0->TabIndex = 20;
			this->P3_D0->Text = L"0";
			this->P3_D0->UseVisualStyleBackColor = false;
			// 
			// P3_D1
			// 
			this->P3_D1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P3_D1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P3_D1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P3_D1->Location = System::Drawing::Point(1327, 323);
			this->P3_D1->Name = L"P3_D1";
			this->P3_D1->Size = System::Drawing::Size(20, 22);
			this->P3_D1->TabIndex = 21;
			this->P3_D1->Text = L"1";
			this->P3_D1->UseVisualStyleBackColor = false;
			// 
			// P3_D2
			// 
			this->P3_D2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P3_D2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P3_D2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P3_D2->Location = System::Drawing::Point(1327, 295);
			this->P3_D2->Name = L"P3_D2";
			this->P3_D2->Size = System::Drawing::Size(20, 22);
			this->P3_D2->TabIndex = 22;
			this->P3_D2->Text = L"2";
			this->P3_D2->UseVisualStyleBackColor = false;
			// 
			// P3_D4
			// 
			this->P3_D4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P3_D4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P3_D4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P3_D4->Location = System::Drawing::Point(1327, 267);
			this->P3_D4->Name = L"P3_D4";
			this->P3_D4->Size = System::Drawing::Size(20, 22);
			this->P3_D4->TabIndex = 23;
			this->P3_D4->Text = L"4";
			this->P3_D4->UseVisualStyleBackColor = false;
			// 
			// P4_D0
			// 
			this->P4_D0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P4_D0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P4_D0->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P4_D0->Location = System::Drawing::Point(-4, 197);
			this->P4_D0->Name = L"P4_D0";
			this->P4_D0->Size = System::Drawing::Size(20, 22);
			this->P4_D0->TabIndex = 24;
			this->P4_D0->Text = L"0";
			this->P4_D0->UseVisualStyleBackColor = false;
			// 
			// P4_D1
			// 
			this->P4_D1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P4_D1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P4_D1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P4_D1->Location = System::Drawing::Point(-4, 169);
			this->P4_D1->Name = L"P4_D1";
			this->P4_D1->Size = System::Drawing::Size(20, 22);
			this->P4_D1->TabIndex = 25;
			this->P4_D1->Text = L"1";
			this->P4_D1->UseVisualStyleBackColor = false;
			// 
			// P4_D2
			// 
			this->P4_D2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P4_D2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P4_D2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P4_D2->Location = System::Drawing::Point(-4, 141);
			this->P4_D2->Name = L"P4_D2";
			this->P4_D2->Size = System::Drawing::Size(20, 22);
			this->P4_D2->TabIndex = 26;
			this->P4_D2->Text = L"2";
			this->P4_D2->UseVisualStyleBackColor = false;
			// 
			// P4_D3
			// 
			this->P4_D3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P4_D3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P4_D3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P4_D3->Location = System::Drawing::Point(-4, 113);
			this->P4_D3->Name = L"P4_D3";
			this->P4_D3->Size = System::Drawing::Size(20, 22);
			this->P4_D3->TabIndex = 27;
			this->P4_D3->Text = L"3";
			this->P4_D3->UseVisualStyleBackColor = false;
			// 
			// P2_D0
			// 
			this->P2_D0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->P2_D0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P2_D0->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->P2_D0->Location = System::Drawing::Point(-4, 500);
			this->P2_D0->Name = L"P2_D0";
			this->P2_D0->Size = System::Drawing::Size(20, 22);
			this->P2_D0->TabIndex = 16;
			this->P2_D0->Text = L"0";
			this->P2_D0->UseVisualStyleBackColor = false;
			this->P2_D0->Click += gcnew System::EventHandler(this, &MyForm::P2_D0_Click);
			// 
			// LicznikL
			// 
			this->LicznikL->AutoSize = true;
			this->LicznikL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LicznikL->Location = System::Drawing::Point(1387, 80);
			this->LicznikL->Name = L"LicznikL";
			this->LicznikL->Size = System::Drawing::Size(120, 25);
			this->LicznikL->TabIndex = 28;
			this->LicznikL->Text = L"Ilość Ludzi:";
			// 
			// WartoscL
			// 
			this->WartoscL->AutoSize = true;
			this->WartoscL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->WartoscL->Location = System::Drawing::Point(1504, 80);
			this->WartoscL->Name = L"WartoscL";
			this->WartoscL->Size = System::Drawing::Size(26, 25);
			this->WartoscL->TabIndex = 29;
			this->WartoscL->Text = L"X";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1530, 236);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 30;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(1800, 1000);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->WartoscL);
			this->Controls->Add(this->LicznikL);
			this->Controls->Add(this->P4_D3);
			this->Controls->Add(this->P4_D2);
			this->Controls->Add(this->P4_D1);
			this->Controls->Add(this->P4_D0);
			this->Controls->Add(this->P3_D4);
			this->Controls->Add(this->P3_D2);
			this->Controls->Add(this->P3_D1);
			this->Controls->Add(this->P3_D0);
			this->Controls->Add(this->P2_D4);
			this->Controls->Add(this->P2_D3);
			this->Controls->Add(this->P2_D1);
			this->Controls->Add(this->P2_D0);
			this->Controls->Add(this->P1_D4);
			this->Controls->Add(this->P1_D3);
			this->Controls->Add(this->P1_D2);
			this->Controls->Add(this->P1_D0);
			this->Controls->Add(this->P0_D1);
			this->Controls->Add(this->P0_D2);
			this->Controls->Add(this->P0_D4);
			this->Controls->Add(this->Dol);
			this->Controls->Add(this->P0_D3);
			this->Controls->Add(this->Przejscie);
			this->Controls->Add(this->Gora);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->Winda);
			this->Controls->Add(this->Szyb);
			this->Controls->Add(this->N_Winda);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Szyb))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Winda))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		
		

		public: PictureBox^ *Kreator(int X, int Y, int numer, PictureBox^ * &Buff)
		{
			PictureBox^ Ludz = gcnew PictureBox();
			Ludz->Location = Point(X, Y);
			Ludz->Size = System::Drawing::Size(52,90);
			switch (numer)
			{
			case 0:
				Ludz->Load("Foto/Ludz0.png");
				break;
			case 1:
				Ludz->Load("Foto/Ludz1.png");
				break;
			case 2:
				Ludz->Load("Foto/Ludz2.png");
				break;
			case 3:
				Ludz->Load("Foto/Ludz3.png");
				break;
			case 4:
				Ludz->Load("Foto/Ludz4.png");
				break;
			default:
				break;
			}
			Ludz->BackColor = System::Drawing::Color::Transparent;
			this->Controls->Add(Ludz);
			Ludz->BringToFront();
			PictureBox^ *Wsk = &Ludz;
			Buff = &Ludz;
			return Wsk;
		}

	

#pragma endregion
public: void Wsiadanie()
{
	int x = 0;
	(*Czlowieki[x].ObrazWsk)->Left -= 1;

	for (int i = 0; i <= licznik_ludzi; i++)
	{
		if (Czlowieki[i].Start = pietro)
		{
			//*vek.ObrazWsk->Left += -1;;
		}
	}
}
private: System::Void Gora_Click(System::Object^  sender, System::EventArgs^  e) {

	if (pietro < 4)
	{
		pietro++;
		kier_winda = 0;
		this->Z_Winda->Start();
	}

}
private: System::Void Dol_Click_1(System::Object^  sender, System::EventArgs^  e) {

	if (pietro > 0)
	{
		pietro--;
		kier_winda = 1;
		this->Z_Winda->Start();
	}
}
private: System::Void Z_Winda_Tick(System::Object^  sender, System::EventArgs^  e) {
	czas_winda++;
	if (czas_winda == 150)
	{
		this->Z_Winda->Stop();
		czas_winda = 0;
	}
	if (kier_winda == 0)
	{
		this->Winda->Top += -1;
	}
	else
	{
		this->Winda->Top += 1;
	}

}
private: System::Void Exit_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
private: System::Void Przejscie_Click(System::Object^  sender, System::EventArgs^  e) {
	//this->Z_Wejscie->Start();
	//this->Z_Skok->Start();
}
private: System::Void Z_Przejscie_Tick_1(System::Object^  sender, System::EventArgs^  e) {
	/*czas_wejscie++;
	if (czas_wejscie == 625)
	{
	this->Z_Wejscie->Stop();
	this->Z_Skok->Stop();
	czas_wejscie = 0;
	wsiadl = 1;
	}

	switch (wsiadl)
	{
	case 0:
	{
	this->Ludz0->Left += 1;
	break;
	}
	case 1:
	{
	if (licznik_pieter % 2 == 1)
	{
	this->Ludz0->Left += 1;
	}
	else
	{
	this->Ludz0->Left += -1;
	}
	break;
	}
	default:
	break;
	}*/
}
private: System::Void Z_Skok_Tick(System::Object^  sender, System::EventArgs^  e) {
	/*if (kier_skok == 0)
	{
	czas_skok++;
	this->Ludz0->Top += -1;
	if (czas_skok == 5)
	{
	czas_skok = 0;
	kier_skok = 1;
	}
	}
	else
	{
	czas_skok++;
	this->Ludz0->Top += 1;
	if (czas_skok == 5)
	{
	czas_skok = 0;
	kier_skok = 0;
	}

	}*/
}

 private: System::Void P0_D1_Click(System::Object^  sender, System::EventArgs^  e) {
	 Ludzie Ludz;
	 Ludz.Start = 0;
	 Ludz.Koniec = 1;
	 Ludz.ObrazWsk = Buff;//Kreator(20, 735, 1, Buff);
	 Czlowieki.push_back(Ludz);
	 licznik_ludzi++;
}
 private: System::Void P0_D2_Click(System::Object^  sender, System::EventArgs^  e) {
	 Ludzie Ludz;
	 Ludz.Start = 0;
	 Ludz.Koniec = 2;
	 Ludz.ObrazWsk = Kreator(70, 735, 2, Buff);
	 Czlowieki.push_back(Ludz);
	 licznik_ludzi++;
}
private: System::Void P0_D3_Click(System::Object^  sender, System::EventArgs^  e) {
	Ludzie Ludz;
	Ludz.Start = 0;
	Ludz.Koniec = 3;
	Ludz.ObrazWsk = Kreator(120, 735, 3, Buff);
	Czlowieki.push_back(Ludz);
	licznik_ludzi++;
}
private: System::Void P0_D4_Click(System::Object^  sender, System::EventArgs^  e) {
	Ludzie Ludz;
	Ludz.Start = 0;
	Ludz.Koniec = 4;
	Ludz.ObrazWsk = Kreator(170, 735, 4, Buff);
	Czlowieki.push_back(Ludz);
	licznik_ludzi++;
}
private: System::Void P2_D0_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void P2_D1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void P2_D4_Click(System::Object^  sender, System::EventArgs^  e) {
	
}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	
	Wsiadanie();
}
};
}
