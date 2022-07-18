#pragma once

namespace dictionaryProjects {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// MyForm i�in �zet
	/// </summary>
	/// 
	

	public ref class MyForm : public System::Windows::Forms::Form
	{

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Olu�turucu kodunu buraya ekle
			//
		}

	protected:
		/// <summary>
		///Kullan�lan t�m kaynaklar� temizleyin.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;



	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;




	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button3;

	private:
		/// <summary>
		///Gerekli tasar�mc� de�i�keni.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Tasar�mc� deste�i i�in gerekli metot - bu metodun 
		///i�eri�ini kod d�zenleyici ile de�i�tirmeyin.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->Location = System::Drawing::Point(160, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"TR";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 41);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(342, 40);
			this->textBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label2->Location = System::Drawing::Point(602, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 29);
			this->label2->TabIndex = 2;
			this->label2->Text = L"EN";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button1->Location = System::Drawing::Point(360, 41);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 40);
			this->button1->TabIndex = 4;
			this->button1->Text = L"CEVIR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button2->Location = System::Drawing::Point(360, 167);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 40);
			this->button2->TabIndex = 9;
			this->button2->Text = L"TRANSLATE";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label3->Location = System::Drawing::Point(602, 135);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 29);
			this->label3->TabIndex = 8;
			this->label3->Text = L"TR";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 167);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(342, 40);
			this->textBox2->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label4->Location = System::Drawing::Point(160, 135);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 29);
			this->label4->TabIndex = 6;
			this->label4->Text = L"EN";
			// 
			// listBox1
			// 
			this->listBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(494, 41);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(306, 84);
			this->listBox1->TabIndex = 12;
			// 
			// listBox2
			// 
			this->listBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(494, 167);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(306, 84);
			this->listBox2->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label7->Location = System::Drawing::Point(460, 313);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(205, 20);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Type the translate (TR)";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(455, 336);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(250, 25);
			this->textBox5->TabIndex = 21;
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label8->Location = System::Drawing::Point(460, 263);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(178, 20);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Add New Word (EN)";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(455, 286);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(250, 24);
			this->textBox6->TabIndex = 19;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button4->Location = System::Drawing::Point(711, 274);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(101, 101);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Add Word";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label5->Location = System::Drawing::Point(31, 313);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(200, 20);
			this->label5->TabIndex = 27;
			this->label5->Text = L"�evirisini Yaz�n�z (EN)";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(26, 336);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(266, 25);
			this->textBox3->TabIndex = 26;
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label6->Location = System::Drawing::Point(31, 263);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(233, 20);
			this->label6->TabIndex = 25;
			this->label6->Text = L"Yeni Kelime Ekleyiniz (TR)";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(26, 286);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(266, 24);
			this->textBox4->TabIndex = 24;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button3->Location = System::Drawing::Point(298, 274);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 101);
			this->button3->TabIndex = 23;
			this->button3->Text = L"Kelime Ekle";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(824, 388);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=dictionary;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();
		String^ getwordQuery = "SELECT * FROM tr_en WHERE tr=@tr";
		SqlCommand command(getwordQuery, % sqlConn);
		command.Parameters->AddWithValue("@tr", this->textBox1->Text);
		

		SqlDataReader^ reader = command.ExecuteReader();
	
		listBox1->Items->Clear();
			while (reader->Read()) {
				listBox1->Items->Add(reader->GetString(2));
			}
		
		
	
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=dictionary;Integrated Security=True";
	SqlConnection sqlConn(connString);
	sqlConn.Open();
	String^ getwordQuery = "SELECT * FROM tr_en WHERE en=@en";
	SqlCommand command(getwordQuery, % sqlConn);
	command.Parameters->AddWithValue("@en", this->textBox2->Text);


	SqlDataReader^ reader = command.ExecuteReader();
	listBox2->Items->Clear();
		while (reader->Read()) {
			listBox2->Items->Add(reader->GetString(1));
		}
	
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	try {

	
	String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=dictionary;Integrated Security=True";
	SqlConnection sqlConn(connString);
	sqlConn.Open();
	String^ addwordQuery = "INSERT INTO tr_en (tr,en) VALUES (@tr,@en)";
	SqlCommand command(addwordQuery, % sqlConn);
	command.Parameters->AddWithValue("@tr", this->textBox4->Text);
	command.Parameters->AddWithValue("@en", this->textBox3->Text);
	
	command.ExecuteNonQuery();
	MessageBox::Show("Kelime ba�ar�yla eklendi", "Ba�ar�l�", MessageBoxButtons::OK);
	}
	catch (Exception^ ex) {
		MessageBox::Show("Failed to add new word", "Database Error", MessageBoxButtons::OK);
	}

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=dictionary;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();
		String^ addwordQuery = "INSERT INTO tr_en (tr,en) VALUES (@tr,@en)";
		SqlCommand command(addwordQuery, % sqlConn);
		command.Parameters->AddWithValue("@tr", this->textBox4->Text);
		command.Parameters->AddWithValue("@en", this->textBox3->Text);

		command.ExecuteNonQuery();
		MessageBox::Show("Word added succesfully", "Succesfull", MessageBoxButtons::OK);
	}
	catch (Exception^ ex) {
		MessageBox::Show("Failed to add new word", "Database Error", MessageBoxButtons::OK);
	}
	
}
};
}
