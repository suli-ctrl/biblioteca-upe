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
	/// Resumen de ModificarLibro_Form
	/// </summary>
	public ref class ModificarLibro_Form : public System::Windows::Forms::Form
	{
	public:
		ModificarLibro_Form(void)
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
		~ModificarLibro_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ lstEstadoModi;

	private: System::Windows::Forms::Button^ btnModificarLibro;
	private: System::Windows::Forms::TextBox^ txtAnioPubliModi;


	private: System::Windows::Forms::Label^ lblAnioPubliModi;
	private: System::Windows::Forms::TextBox^ txtUbiModi;



	private: System::Windows::Forms::Label^ lblUbiModi;
	private: System::Windows::Forms::TextBox^ txtAutoresModi;


	private: System::Windows::Forms::Label^ lblAutoresModi;
	private: System::Windows::Forms::TextBox^ txtEditorialModi;


	private: System::Windows::Forms::Label^ lblEditorialModi;

	private: System::Windows::Forms::Label^ lblEstadoModi;
	private: System::Windows::Forms::TextBox^ txtSubareModi;


	private: System::Windows::Forms::Label^ lblSubareaModi;
	private: System::Windows::Forms::TextBox^ txtAreaModi;


	private: System::Windows::Forms::Label^ lblAreaModi;
	private: System::Windows::Forms::TextBox^ txtNombreModi;



	private: System::Windows::Forms::Label^ lblNomModi;

	private: System::Windows::Forms::Label^ lblInfoModificar;
	private: System::Windows::Forms::TextBox^ txtNombreAModi;

	private: System::Windows::Forms::Button^ btnBuscarNomModi;



	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lstEstadoModi = (gcnew System::Windows::Forms::ListBox());
			this->btnModificarLibro = (gcnew System::Windows::Forms::Button());
			this->txtAnioPubliModi = (gcnew System::Windows::Forms::TextBox());
			this->lblAnioPubliModi = (gcnew System::Windows::Forms::Label());
			this->txtUbiModi = (gcnew System::Windows::Forms::TextBox());
			this->lblUbiModi = (gcnew System::Windows::Forms::Label());
			this->txtAutoresModi = (gcnew System::Windows::Forms::TextBox());
			this->lblAutoresModi = (gcnew System::Windows::Forms::Label());
			this->txtEditorialModi = (gcnew System::Windows::Forms::TextBox());
			this->lblEditorialModi = (gcnew System::Windows::Forms::Label());
			this->lblEstadoModi = (gcnew System::Windows::Forms::Label());
			this->txtSubareModi = (gcnew System::Windows::Forms::TextBox());
			this->lblSubareaModi = (gcnew System::Windows::Forms::Label());
			this->txtAreaModi = (gcnew System::Windows::Forms::TextBox());
			this->lblAreaModi = (gcnew System::Windows::Forms::Label());
			this->txtNombreModi = (gcnew System::Windows::Forms::TextBox());
			this->lblNomModi = (gcnew System::Windows::Forms::Label());
			this->lblInfoModificar = (gcnew System::Windows::Forms::Label());
			this->txtNombreAModi = (gcnew System::Windows::Forms::TextBox());
			this->btnBuscarNomModi = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(619, -3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(121, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Modificar Libro";
			// 
			// lstEstadoModi
			// 
			this->lstEstadoModi->FormattingEnabled = true;
			this->lstEstadoModi->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Bien", L"Regular", L"Malo", L"Destruido" });
			this->lstEstadoModi->Location = System::Drawing::Point(175, 306);
			this->lstEstadoModi->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->lstEstadoModi->Name = L"lstEstadoModi";
			this->lstEstadoModi->Size = System::Drawing::Size(188, 30);
			this->lstEstadoModi->TabIndex = 36;
			// 
			// btnModificarLibro
			// 
			this->btnModificarLibro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnModificarLibro->Location = System::Drawing::Point(314, 358);
			this->btnModificarLibro->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnModificarLibro->Name = L"btnModificarLibro";
			this->btnModificarLibro->Size = System::Drawing::Size(142, 30);
			this->btnModificarLibro->TabIndex = 35;
			this->btnModificarLibro->Text = L"Modificar";
			this->btnModificarLibro->UseVisualStyleBackColor = true;
			// 
			// txtAnioPubliModi
			// 
			this->txtAnioPubliModi->Location = System::Drawing::Point(395, 306);
			this->txtAnioPubliModi->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtAnioPubliModi->Name = L"txtAnioPubliModi";
			this->txtAnioPubliModi->Size = System::Drawing::Size(188, 20);
			this->txtAnioPubliModi->TabIndex = 34;
			// 
			// lblAnioPubliModi
			// 
			this->lblAnioPubliModi->AutoSize = true;
			this->lblAnioPubliModi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAnioPubliModi->Location = System::Drawing::Point(391, 286);
			this->lblAnioPubliModi->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblAnioPubliModi->Name = L"lblAnioPubliModi";
			this->lblAnioPubliModi->Size = System::Drawing::Size(140, 16);
			this->lblAnioPubliModi->TabIndex = 33;
			this->lblAnioPubliModi->Text = L"Año de publicación";
			// 
			// txtUbiModi
			// 
			this->txtUbiModi->Location = System::Drawing::Point(394, 260);
			this->txtUbiModi->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtUbiModi->Name = L"txtUbiModi";
			this->txtUbiModi->Size = System::Drawing::Size(188, 20);
			this->txtUbiModi->TabIndex = 32;
			// 
			// lblUbiModi
			// 
			this->lblUbiModi->AutoSize = true;
			this->lblUbiModi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUbiModi->Location = System::Drawing::Point(390, 240);
			this->lblUbiModi->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblUbiModi->Name = L"lblUbiModi";
			this->lblUbiModi->Size = System::Drawing::Size(77, 16);
			this->lblUbiModi->TabIndex = 31;
			this->lblUbiModi->Text = L"Ubicación";
			// 
			// txtAutoresModi
			// 
			this->txtAutoresModi->Location = System::Drawing::Point(394, 213);
			this->txtAutoresModi->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtAutoresModi->Name = L"txtAutoresModi";
			this->txtAutoresModi->Size = System::Drawing::Size(188, 20);
			this->txtAutoresModi->TabIndex = 30;
			// 
			// lblAutoresModi
			// 
			this->lblAutoresModi->AutoSize = true;
			this->lblAutoresModi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAutoresModi->Location = System::Drawing::Point(390, 193);
			this->lblAutoresModi->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblAutoresModi->Name = L"lblAutoresModi";
			this->lblAutoresModi->Size = System::Drawing::Size(60, 16);
			this->lblAutoresModi->TabIndex = 29;
			this->lblAutoresModi->Text = L"Autores";
			// 
			// txtEditorialModi
			// 
			this->txtEditorialModi->Location = System::Drawing::Point(395, 167);
			this->txtEditorialModi->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtEditorialModi->Name = L"txtEditorialModi";
			this->txtEditorialModi->Size = System::Drawing::Size(188, 20);
			this->txtEditorialModi->TabIndex = 28;
			// 
			// lblEditorialModi
			// 
			this->lblEditorialModi->AutoSize = true;
			this->lblEditorialModi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEditorialModi->Location = System::Drawing::Point(391, 147);
			this->lblEditorialModi->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblEditorialModi->Name = L"lblEditorialModi";
			this->lblEditorialModi->Size = System::Drawing::Size(65, 16);
			this->lblEditorialModi->TabIndex = 27;
			this->lblEditorialModi->Text = L"Editorial";
			// 
			// lblEstadoModi
			// 
			this->lblEstadoModi->AutoSize = true;
			this->lblEstadoModi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEstadoModi->Location = System::Drawing::Point(171, 285);
			this->lblEstadoModi->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblEstadoModi->Name = L"lblEstadoModi";
			this->lblEstadoModi->Size = System::Drawing::Size(56, 16);
			this->lblEstadoModi->TabIndex = 26;
			this->lblEstadoModi->Text = L"Estado";
			// 
			// txtSubareModi
			// 
			this->txtSubareModi->Location = System::Drawing::Point(175, 260);
			this->txtSubareModi->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtSubareModi->Name = L"txtSubareModi";
			this->txtSubareModi->Size = System::Drawing::Size(188, 20);
			this->txtSubareModi->TabIndex = 25;
			// 
			// lblSubareaModi
			// 
			this->lblSubareaModi->AutoSize = true;
			this->lblSubareaModi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSubareaModi->Location = System::Drawing::Point(171, 240);
			this->lblSubareaModi->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblSubareaModi->Name = L"lblSubareaModi";
			this->lblSubareaModi->Size = System::Drawing::Size(67, 16);
			this->lblSubareaModi->TabIndex = 24;
			this->lblSubareaModi->Text = L"SubArea";
			// 
			// txtAreaModi
			// 
			this->txtAreaModi->Location = System::Drawing::Point(175, 213);
			this->txtAreaModi->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtAreaModi->Name = L"txtAreaModi";
			this->txtAreaModi->Size = System::Drawing::Size(188, 20);
			this->txtAreaModi->TabIndex = 23;
			// 
			// lblAreaModi
			// 
			this->lblAreaModi->AutoSize = true;
			this->lblAreaModi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAreaModi->Location = System::Drawing::Point(171, 193);
			this->lblAreaModi->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblAreaModi->Name = L"lblAreaModi";
			this->lblAreaModi->Size = System::Drawing::Size(40, 16);
			this->lblAreaModi->TabIndex = 22;
			this->lblAreaModi->Text = L"Area";
			// 
			// txtNombreModi
			// 
			this->txtNombreModi->Location = System::Drawing::Point(175, 167);
			this->txtNombreModi->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtNombreModi->Name = L"txtNombreModi";
			this->txtNombreModi->Size = System::Drawing::Size(188, 20);
			this->txtNombreModi->TabIndex = 21;
			// 
			// lblNomModi
			// 
			this->lblNomModi->AutoSize = true;
			this->lblNomModi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNomModi->Location = System::Drawing::Point(171, 147);
			this->lblNomModi->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblNomModi->Name = L"lblNomModi";
			this->lblNomModi->Size = System::Drawing::Size(62, 16);
			this->lblNomModi->TabIndex = 20;
			this->lblNomModi->Text = L"Nombre";
			// 
			// lblInfoModificar
			// 
			this->lblInfoModificar->AutoSize = true;
			this->lblInfoModificar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblInfoModificar->Location = System::Drawing::Point(170, 30);
			this->lblInfoModificar->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblInfoModificar->Name = L"lblInfoModificar";
			this->lblInfoModificar->Size = System::Drawing::Size(416, 25);
			this->lblInfoModificar->TabIndex = 37;
			this->lblInfoModificar->Text = L"Ingrese el nombre del libro a modificar";
			// 
			// txtNombreAModi
			// 
			this->txtNombreAModi->Location = System::Drawing::Point(282, 58);
			this->txtNombreAModi->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtNombreAModi->Name = L"txtNombreAModi";
			this->txtNombreAModi->Size = System::Drawing::Size(199, 20);
			this->txtNombreAModi->TabIndex = 38;
			this->txtNombreAModi->Text = L"Nombre";
			// 
			// btnBuscarNomModi
			// 
			this->btnBuscarNomModi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBuscarNomModi->Location = System::Drawing::Point(338, 84);
			this->btnBuscarNomModi->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnBuscarNomModi->Name = L"btnBuscarNomModi";
			this->btnBuscarNomModi->Size = System::Drawing::Size(95, 26);
			this->btnBuscarNomModi->TabIndex = 39;
			this->btnBuscarNomModi->Text = L"Buscar";
			this->btnBuscarNomModi->UseVisualStyleBackColor = true;
			// 
			// ModificarLibro_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(738, 429);
			this->Controls->Add(this->btnBuscarNomModi);
			this->Controls->Add(this->txtNombreAModi);
			this->Controls->Add(this->lblInfoModificar);
			this->Controls->Add(this->lstEstadoModi);
			this->Controls->Add(this->btnModificarLibro);
			this->Controls->Add(this->txtAnioPubliModi);
			this->Controls->Add(this->lblAnioPubliModi);
			this->Controls->Add(this->txtUbiModi);
			this->Controls->Add(this->lblUbiModi);
			this->Controls->Add(this->txtAutoresModi);
			this->Controls->Add(this->lblAutoresModi);
			this->Controls->Add(this->txtEditorialModi);
			this->Controls->Add(this->lblEditorialModi);
			this->Controls->Add(this->lblEstadoModi);
			this->Controls->Add(this->txtSubareModi);
			this->Controls->Add(this->lblSubareaModi);
			this->Controls->Add(this->txtAreaModi);
			this->Controls->Add(this->lblAreaModi);
			this->Controls->Add(this->txtNombreModi);
			this->Controls->Add(this->lblNomModi);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ModificarLibro_Form";
			this->Text = L"ModificarLibro_Form";
			this->Load += gcnew System::EventHandler(this, &ModificarLibro_Form::ModificarLibro_Form_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		//*----------------------------------------| Fin de codigo autogenerado por el Windows Form|--------------------------------------*
#pragma endregion

	private: System::Void ModificarLibro_Form_Load(System::Object^ sender, System::EventArgs^ e) //ocultamos las opciones de modificación al cargar el form
	{
		txtNombreModi->Visible = false;
		txtAreaModi->Visible = false;
		txtSubareModi->Visible = false;
		lstEstadoModi->Visible = false;
		txtEditorialModi->Visible = false;
		txtAutoresModi->Visible = false;
		txtUbiModi->Visible = false;
		txtAnioPubliModi->Visible = false;

		lblNomModi->Visible = false;
		lblAreaModi->Visible = false;
		lblSubareaModi->Visible = false;
		lblEstadoModi->Visible = false;
		lblEditorialModi->Visible = false;
		lblAutoresModi->Visible = false;
		lblUbiModi->Visible = false;
		lblAnioPubliModi->Visible = false;
		btnModificarLibro->Visible = false;
	}
	};
}
