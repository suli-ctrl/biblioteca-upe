#pragma once


//*----------------------------------------| Inicio de codigo autogenerado por el Windows Form|--------------------------------------*

namespace InterfazGrafica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de AltaLibro_Form
	/// </summary>
	public ref class AltaLibro_Form : public System::Windows::Forms::Form
	{
	public:
		AltaLibro_Form(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~AltaLibro_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblSubAltaLibro;
	private: System::Windows::Forms::Label^ lblIngreseLibroAlta;
	private: System::Windows::Forms::Label^ lblNombreAlta;
	private: System::Windows::Forms::TextBox^ txtNombreAlta;
	private: System::Windows::Forms::TextBox^ txtAreaAlta;







	private: System::Windows::Forms::Label^ lblAreaAlta;
	private: System::Windows::Forms::TextBox^ txtSubareaAlta;




	private: System::Windows::Forms::Label^ lblSubAreaAlta;
	private: System::Windows::Forms::Label^ lblEstadoAlta;
	private: System::Windows::Forms::TextBox^ txtAnioPubliAlta;
	private: System::Windows::Forms::Label^ lblAnioPubliAlta;









	private: System::Windows::Forms::TextBox^ txtUbiAlta;


	private: System::Windows::Forms::Label^ lblUbicacionAlta;
	private: System::Windows::Forms::TextBox^ txtAutoresAlta;


	private: System::Windows::Forms::Label^ lblAutoresAlta;
	private: System::Windows::Forms::TextBox^ txtEditorialAlta;



	private: System::Windows::Forms::Label^ lblEditorialAlta;
	private: System::Windows::Forms::Button^ btnDarAltaLibro;

	private: System::Windows::Forms::ListBox^ lstEstadoAlta;




	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblSubAltaLibro = (gcnew System::Windows::Forms::Label());
			this->lblIngreseLibroAlta = (gcnew System::Windows::Forms::Label());
			this->lblNombreAlta = (gcnew System::Windows::Forms::Label());
			this->txtNombreAlta = (gcnew System::Windows::Forms::TextBox());
			this->txtAreaAlta = (gcnew System::Windows::Forms::TextBox());
			this->lblAreaAlta = (gcnew System::Windows::Forms::Label());
			this->txtSubareaAlta = (gcnew System::Windows::Forms::TextBox());
			this->lblSubAreaAlta = (gcnew System::Windows::Forms::Label());
			this->lblEstadoAlta = (gcnew System::Windows::Forms::Label());
			this->txtAnioPubliAlta = (gcnew System::Windows::Forms::TextBox());
			this->lblAnioPubliAlta = (gcnew System::Windows::Forms::Label());
			this->txtUbiAlta = (gcnew System::Windows::Forms::TextBox());
			this->lblUbicacionAlta = (gcnew System::Windows::Forms::Label());
			this->txtAutoresAlta = (gcnew System::Windows::Forms::TextBox());
			this->lblAutoresAlta = (gcnew System::Windows::Forms::Label());
			this->txtEditorialAlta = (gcnew System::Windows::Forms::TextBox());
			this->lblEditorialAlta = (gcnew System::Windows::Forms::Label());
			this->btnDarAltaLibro = (gcnew System::Windows::Forms::Button());
			this->lstEstadoAlta = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// lblSubAltaLibro
			// 
			this->lblSubAltaLibro->AutoSize = true;
			this->lblSubAltaLibro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSubAltaLibro->Location = System::Drawing::Point(658, 0);
			this->lblSubAltaLibro->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblSubAltaLibro->Name = L"lblSubAltaLibro";
			this->lblSubAltaLibro->Size = System::Drawing::Size(79, 18);
			this->lblSubAltaLibro->TabIndex = 0;
			this->lblSubAltaLibro->Text = L"Alta Libro";
			// 
			// lblIngreseLibroAlta
			// 
			this->lblIngreseLibroAlta->AutoSize = true;
			this->lblIngreseLibroAlta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblIngreseLibroAlta->Location = System::Drawing::Point(210, 45);
			this->lblIngreseLibroAlta->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblIngreseLibroAlta->Name = L"lblIngreseLibroAlta";
			this->lblIngreseLibroAlta->Size = System::Drawing::Size(311, 25);
			this->lblIngreseLibroAlta->TabIndex = 1;
			this->lblIngreseLibroAlta->Text = L"Ingrese información del libro";
			// 
			// lblNombreAlta
			// 
			this->lblNombreAlta->AutoSize = true;
			this->lblNombreAlta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNombreAlta->Location = System::Drawing::Point(93, 97);
			this->lblNombreAlta->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblNombreAlta->Name = L"lblNombreAlta";
			this->lblNombreAlta->Size = System::Drawing::Size(62, 16);
			this->lblNombreAlta->TabIndex = 2;
			this->lblNombreAlta->Text = L"Nombre";
			// 
			// txtNombreAlta
			// 
			this->txtNombreAlta->Location = System::Drawing::Point(97, 117);
			this->txtNombreAlta->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtNombreAlta->Name = L"txtNombreAlta";
			this->txtNombreAlta->Size = System::Drawing::Size(188, 20);
			this->txtNombreAlta->TabIndex = 3;
			// 
			// txtAreaAlta
			// 
			this->txtAreaAlta->Location = System::Drawing::Point(97, 173);
			this->txtAreaAlta->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtAreaAlta->Name = L"txtAreaAlta";
			this->txtAreaAlta->Size = System::Drawing::Size(188, 20);
			this->txtAreaAlta->TabIndex = 5;
			// 
			// lblAreaAlta
			// 
			this->lblAreaAlta->AutoSize = true;
			this->lblAreaAlta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAreaAlta->Location = System::Drawing::Point(93, 153);
			this->lblAreaAlta->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblAreaAlta->Name = L"lblAreaAlta";
			this->lblAreaAlta->Size = System::Drawing::Size(40, 16);
			this->lblAreaAlta->TabIndex = 4;
			this->lblAreaAlta->Text = L"Area";
			// 
			// txtSubareaAlta
			// 
			this->txtSubareaAlta->Location = System::Drawing::Point(97, 231);
			this->txtSubareaAlta->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtSubareaAlta->Name = L"txtSubareaAlta";
			this->txtSubareaAlta->Size = System::Drawing::Size(188, 20);
			this->txtSubareaAlta->TabIndex = 7;
			// 
			// lblSubAreaAlta
			// 
			this->lblSubAreaAlta->AutoSize = true;
			this->lblSubAreaAlta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSubAreaAlta->Location = System::Drawing::Point(93, 211);
			this->lblSubAreaAlta->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblSubAreaAlta->Name = L"lblSubAreaAlta";
			this->lblSubAreaAlta->Size = System::Drawing::Size(67, 16);
			this->lblSubAreaAlta->TabIndex = 6;
			this->lblSubAreaAlta->Text = L"SubArea";
			// 
			// lblEstadoAlta
			// 
			this->lblEstadoAlta->AutoSize = true;
			this->lblEstadoAlta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEstadoAlta->Location = System::Drawing::Point(93, 269);
			this->lblEstadoAlta->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblEstadoAlta->Name = L"lblEstadoAlta";
			this->lblEstadoAlta->Size = System::Drawing::Size(56, 16);
			this->lblEstadoAlta->TabIndex = 8;
			this->lblEstadoAlta->Text = L"Estado";
			// 
			// txtAnioPubliAlta
			// 
			this->txtAnioPubliAlta->Location = System::Drawing::Point(448, 289);
			this->txtAnioPubliAlta->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtAnioPubliAlta->Name = L"txtAnioPubliAlta";
			this->txtAnioPubliAlta->Size = System::Drawing::Size(188, 20);
			this->txtAnioPubliAlta->TabIndex = 17;
			// 
			// lblAnioPubliAlta
			// 
			this->lblAnioPubliAlta->AutoSize = true;
			this->lblAnioPubliAlta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAnioPubliAlta->Location = System::Drawing::Point(444, 269);
			this->lblAnioPubliAlta->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblAnioPubliAlta->Name = L"lblAnioPubliAlta";
			this->lblAnioPubliAlta->Size = System::Drawing::Size(140, 16);
			this->lblAnioPubliAlta->TabIndex = 16;
			this->lblAnioPubliAlta->Text = L"Año de publicación";
			// 
			// txtUbiAlta
			// 
			this->txtUbiAlta->Location = System::Drawing::Point(448, 231);
			this->txtUbiAlta->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtUbiAlta->Name = L"txtUbiAlta";
			this->txtUbiAlta->Size = System::Drawing::Size(188, 20);
			this->txtUbiAlta->TabIndex = 15;
			// 
			// lblUbicacionAlta
			// 
			this->lblUbicacionAlta->AutoSize = true;
			this->lblUbicacionAlta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUbicacionAlta->Location = System::Drawing::Point(444, 211);
			this->lblUbicacionAlta->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblUbicacionAlta->Name = L"lblUbicacionAlta";
			this->lblUbicacionAlta->Size = System::Drawing::Size(77, 16);
			this->lblUbicacionAlta->TabIndex = 14;
			this->lblUbicacionAlta->Text = L"Ubicación";
			// 
			// txtAutoresAlta
			// 
			this->txtAutoresAlta->Location = System::Drawing::Point(448, 173);
			this->txtAutoresAlta->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtAutoresAlta->Name = L"txtAutoresAlta";
			this->txtAutoresAlta->Size = System::Drawing::Size(188, 20);
			this->txtAutoresAlta->TabIndex = 13;
			// 
			// lblAutoresAlta
			// 
			this->lblAutoresAlta->AutoSize = true;
			this->lblAutoresAlta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAutoresAlta->Location = System::Drawing::Point(444, 153);
			this->lblAutoresAlta->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblAutoresAlta->Name = L"lblAutoresAlta";
			this->lblAutoresAlta->Size = System::Drawing::Size(60, 16);
			this->lblAutoresAlta->TabIndex = 12;
			this->lblAutoresAlta->Text = L"Autores";
			// 
			// txtEditorialAlta
			// 
			this->txtEditorialAlta->Location = System::Drawing::Point(448, 117);
			this->txtEditorialAlta->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtEditorialAlta->Name = L"txtEditorialAlta";
			this->txtEditorialAlta->Size = System::Drawing::Size(188, 20);
			this->txtEditorialAlta->TabIndex = 11;
			// 
			// lblEditorialAlta
			// 
			this->lblEditorialAlta->AutoSize = true;
			this->lblEditorialAlta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEditorialAlta->Location = System::Drawing::Point(444, 97);
			this->lblEditorialAlta->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblEditorialAlta->Name = L"lblEditorialAlta";
			this->lblEditorialAlta->Size = System::Drawing::Size(65, 16);
			this->lblEditorialAlta->TabIndex = 10;
			this->lblEditorialAlta->Text = L"Editorial";
			// 
			// btnDarAltaLibro
			// 
			this->btnDarAltaLibro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDarAltaLibro->Location = System::Drawing::Point(288, 344);
			this->btnDarAltaLibro->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnDarAltaLibro->Name = L"btnDarAltaLibro";
			this->btnDarAltaLibro->Size = System::Drawing::Size(142, 30);
			this->btnDarAltaLibro->TabIndex = 18;
			this->btnDarAltaLibro->Text = L"Dar alta";
			this->btnDarAltaLibro->UseVisualStyleBackColor = true;
			// 
			// lstEstadoAlta
			// 
			this->lstEstadoAlta->FormattingEnabled = true;
			this->lstEstadoAlta->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Bien", L"Regular", L"Malo", L"Destruido" });
			this->lstEstadoAlta->Location = System::Drawing::Point(97, 290);
			this->lstEstadoAlta->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->lstEstadoAlta->Name = L"lstEstadoAlta";
			this->lstEstadoAlta->Size = System::Drawing::Size(188, 30);
			this->lstEstadoAlta->TabIndex = 19;
			// 
			// AltaLibro_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(738, 429);
			this->Controls->Add(this->lstEstadoAlta);
			this->Controls->Add(this->btnDarAltaLibro);
			this->Controls->Add(this->txtAnioPubliAlta);
			this->Controls->Add(this->lblAnioPubliAlta);
			this->Controls->Add(this->txtUbiAlta);
			this->Controls->Add(this->lblUbicacionAlta);
			this->Controls->Add(this->txtAutoresAlta);
			this->Controls->Add(this->lblAutoresAlta);
			this->Controls->Add(this->txtEditorialAlta);
			this->Controls->Add(this->lblEditorialAlta);
			this->Controls->Add(this->lblEstadoAlta);
			this->Controls->Add(this->txtSubareaAlta);
			this->Controls->Add(this->lblSubAreaAlta);
			this->Controls->Add(this->txtAreaAlta);
			this->Controls->Add(this->lblAreaAlta);
			this->Controls->Add(this->txtNombreAlta);
			this->Controls->Add(this->lblNombreAlta);
			this->Controls->Add(this->lblIngreseLibroAlta);
			this->Controls->Add(this->lblSubAltaLibro);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"AltaLibro_Form";
			this->Text = L"AltaLibro_Form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

//*----------------------------------------| Fin de codigo autogenerado por el Windows Form|--------------------------------------*

#pragma endregion
	
};
}
