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
	/// Resumen de VerYBuscarSocios_Form
	/// </summary>
	public ref class VerYBuscarSocios_Form : public System::Windows::Forms::Form
	{
	public:
		VerYBuscarSocios_Form(void)
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
		~VerYBuscarSocios_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ TablaSocios;
	protected:

	private: System::Windows::Forms::Button^ btnBuscar;
	protected:










	private: System::Windows::Forms::TextBox^ txtFechaNacimiento;



	private: System::Windows::Forms::TextBox^ txtEdad;

	private: System::Windows::Forms::TextBox^ txtNumTel;
	private: System::Windows::Forms::TextBox^ txtEmail;


	private: System::Windows::Forms::TextBox^ txtDireccion;

	private: System::Windows::Forms::TextBox^ txtDNI;


	private: System::Windows::Forms::TextBox^ txtApellido;

	private: System::Windows::Forms::Label^ lblVisualYBusquedaSocio;
	private: System::Windows::Forms::CheckBox^ chkMostrarTodosSocios;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Apellido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::ListBox^ lstGenero;


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
			this->TablaSocios = (gcnew System::Windows::Forms::DataGridView());
			this->Apellido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->txtFechaNacimiento = (gcnew System::Windows::Forms::TextBox());
			this->txtEdad = (gcnew System::Windows::Forms::TextBox());
			this->txtNumTel = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtDireccion = (gcnew System::Windows::Forms::TextBox());
			this->txtDNI = (gcnew System::Windows::Forms::TextBox());
			this->txtApellido = (gcnew System::Windows::Forms::TextBox());
			this->lblVisualYBusquedaSocio = (gcnew System::Windows::Forms::Label());
			this->chkMostrarTodosSocios = (gcnew System::Windows::Forms::CheckBox());
			this->lstGenero = (gcnew System::Windows::Forms::ListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TablaSocios))->BeginInit();
			this->SuspendLayout();
			// 
			// TablaSocios
			// 
			this->TablaSocios->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->TablaSocios->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Apellido,
					this->Column8, this->Column9, this->Column1, this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->TablaSocios->Location = System::Drawing::Point(2, 177);
			this->TablaSocios->Name = L"TablaSocios";
			this->TablaSocios->Size = System::Drawing::Size(720, 215);
			this->TablaSocios->TabIndex = 25;
			// 
			// Apellido
			// 
			this->Apellido->HeaderText = L"Apellido";
			this->Apellido->Name = L"Apellido";
			this->Apellido->ReadOnly = true;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"DNI";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Genero";
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Dirección de calle";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Número de Tél.";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Edad";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Fecha de nacimiento";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"E-mail";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// btnBuscar
			// 
			this->btnBuscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBuscar->Location = System::Drawing::Point(430, 76);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(112, 37);
			this->btnBuscar->TabIndex = 24;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = true;
			// 
			// txtFechaNacimiento
			// 
			this->txtFechaNacimiento->Location = System::Drawing::Point(220, 67);
			this->txtFechaNacimiento->Name = L"txtFechaNacimiento";
			this->txtFechaNacimiento->Size = System::Drawing::Size(175, 20);
			this->txtFechaNacimiento->TabIndex = 21;
			this->txtFechaNacimiento->Text = L"Fecha de nacimiento(D/M/A)";
			// 
			// txtEdad
			// 
			this->txtEdad->Location = System::Drawing::Point(220, 41);
			this->txtEdad->Name = L"txtEdad";
			this->txtEdad->Size = System::Drawing::Size(175, 20);
			this->txtEdad->TabIndex = 20;
			this->txtEdad->Text = L"Edad";
			// 
			// txtNumTel
			// 
			this->txtNumTel->Location = System::Drawing::Point(220, 15);
			this->txtNumTel->Name = L"txtNumTel";
			this->txtNumTel->Size = System::Drawing::Size(175, 20);
			this->txtNumTel->TabIndex = 19;
			this->txtNumTel->Text = L"Número de teléfono";
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(220, 94);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(175, 20);
			this->txtEmail->TabIndex = 18;
			this->txtEmail->Text = L"E-mail";
			// 
			// txtDireccion
			// 
			this->txtDireccion->Location = System::Drawing::Point(2, 103);
			this->txtDireccion->Name = L"txtDireccion";
			this->txtDireccion->Size = System::Drawing::Size(175, 20);
			this->txtDireccion->TabIndex = 17;
			this->txtDireccion->Text = L"Dirección de calle";
			// 
			// txtDNI
			// 
			this->txtDNI->Location = System::Drawing::Point(2, 41);
			this->txtDNI->Name = L"txtDNI";
			this->txtDNI->Size = System::Drawing::Size(175, 20);
			this->txtDNI->TabIndex = 15;
			this->txtDNI->Text = L"DNI";
			// 
			// txtApellido
			// 
			this->txtApellido->Location = System::Drawing::Point(2, 15);
			this->txtApellido->Name = L"txtApellido";
			this->txtApellido->Size = System::Drawing::Size(175, 20);
			this->txtApellido->TabIndex = 14;
			this->txtApellido->Text = L"Apellido";
			// 
			// lblVisualYBusquedaSocio
			// 
			this->lblVisualYBusquedaSocio->AutoSize = true;
			this->lblVisualYBusquedaSocio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblVisualYBusquedaSocio->Location = System::Drawing::Point(525, 3);
			this->lblVisualYBusquedaSocio->Name = L"lblVisualYBusquedaSocio";
			this->lblVisualYBusquedaSocio->Size = System::Drawing::Size(197, 18);
			this->lblVisualYBusquedaSocio->TabIndex = 13;
			this->lblVisualYBusquedaSocio->Text = L"Visualización y busqueda";
			// 
			// chkMostrarTodosSocios
			// 
			this->chkMostrarTodosSocios->AutoSize = true;
			this->chkMostrarTodosSocios->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chkMostrarTodosSocios->Location = System::Drawing::Point(2, 129);
			this->chkMostrarTodosSocios->Name = L"chkMostrarTodosSocios";
			this->chkMostrarTodosSocios->Size = System::Drawing::Size(114, 19);
			this->chkMostrarTodosSocios->TabIndex = 26;
			this->chkMostrarTodosSocios->Text = L"Mostrar todos";
			this->chkMostrarTodosSocios->UseVisualStyleBackColor = true;
			// 
			// lstGenero
			// 
			this->lstGenero->FormattingEnabled = true;
			this->lstGenero->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Masculino", L"Femenino", L"No especificado" });
			this->lstGenero->Location = System::Drawing::Point(2, 67);
			this->lstGenero->Name = L"lstGenero";
			this->lstGenero->Size = System::Drawing::Size(175, 30);
			this->lstGenero->TabIndex = 81;
			// 
			// VerYBuscarSocios_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(722, 390);
			this->Controls->Add(this->lstGenero);
			this->Controls->Add(this->chkMostrarTodosSocios);
			this->Controls->Add(this->TablaSocios);
			this->Controls->Add(this->btnBuscar);
			this->Controls->Add(this->txtFechaNacimiento);
			this->Controls->Add(this->txtEdad);
			this->Controls->Add(this->txtNumTel);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->txtDireccion);
			this->Controls->Add(this->txtDNI);
			this->Controls->Add(this->txtApellido);
			this->Controls->Add(this->lblVisualYBusquedaSocio);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"VerYBuscarSocios_Form";
			this->Text = L"VerYBuscarSocios_Form";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TablaSocios))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
//*----------------------------------------| Fin de codigo autogenerado por el Windows Form|--------------------------------------*

#pragma endregion
	
};
}
