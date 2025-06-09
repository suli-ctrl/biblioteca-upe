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
	/// Resumen de VerYBuscarLibro_Form
	/// </summary>
	public ref class VerYBuscarLibro_Form : public System::Windows::Forms::Form
	{
	public:
		VerYBuscarLibro_Form(void)
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
		~VerYBuscarLibro_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblVisualYbusquedaLibro;
	protected:

	private: System::Windows::Forms::TextBox^ txtNomLibro;
	private: System::Windows::Forms::TextBox^ txtAreaLibro;
	private: System::Windows::Forms::TextBox^ txtAutoresLibro;



	private: System::Windows::Forms::TextBox^ txtSubAreaLibro;
	private: System::Windows::Forms::TextBox^ txtUbiLibro;



	private: System::Windows::Forms::TextBox^ txtAnioPubliLibro;

	private: System::Windows::Forms::TextBox^ txtEditorialLibro;
	private: System::Windows::Forms::CheckBox^ chkMostrarTodosLibros;
	private: System::Windows::Forms::Button^ btnBuscarLibro;
	private: System::Windows::Forms::DataGridView^ TablaLibros;






	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::ListBox^ lstEstadoLibro;
	private: System::Windows::Forms::TextBox^ txtCodBarrasLibro;











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
			this->lblVisualYbusquedaLibro = (gcnew System::Windows::Forms::Label());
			this->txtNomLibro = (gcnew System::Windows::Forms::TextBox());
			this->txtAreaLibro = (gcnew System::Windows::Forms::TextBox());
			this->txtAutoresLibro = (gcnew System::Windows::Forms::TextBox());
			this->txtSubAreaLibro = (gcnew System::Windows::Forms::TextBox());
			this->txtUbiLibro = (gcnew System::Windows::Forms::TextBox());
			this->txtAnioPubliLibro = (gcnew System::Windows::Forms::TextBox());
			this->txtEditorialLibro = (gcnew System::Windows::Forms::TextBox());
			this->chkMostrarTodosLibros = (gcnew System::Windows::Forms::CheckBox());
			this->btnBuscarLibro = (gcnew System::Windows::Forms::Button());
			this->TablaLibros = (gcnew System::Windows::Forms::DataGridView());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lstEstadoLibro = (gcnew System::Windows::Forms::ListBox());
			this->txtCodBarrasLibro = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TablaLibros))->BeginInit();
			this->SuspendLayout();
			// 
			// lblVisualYbusquedaLibro
			// 
			this->lblVisualYbusquedaLibro->AutoSize = true;
			this->lblVisualYbusquedaLibro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblVisualYbusquedaLibro->Location = System::Drawing::Point(538, 0);
			this->lblVisualYbusquedaLibro->Name = L"lblVisualYbusquedaLibro";
			this->lblVisualYbusquedaLibro->Size = System::Drawing::Size(197, 18);
			this->lblVisualYbusquedaLibro->TabIndex = 0;
			this->lblVisualYbusquedaLibro->Text = L"Visualización y busqueda";
			// 
			// txtNomLibro
			// 
			this->txtNomLibro->Location = System::Drawing::Point(3, 12);
			this->txtNomLibro->Name = L"txtNomLibro";
			this->txtNomLibro->Size = System::Drawing::Size(175, 20);
			this->txtNomLibro->TabIndex = 1;
			this->txtNomLibro->Text = L"Nombre";
			// 
			// txtAreaLibro
			// 
			this->txtAreaLibro->Location = System::Drawing::Point(3, 38);
			this->txtAreaLibro->Name = L"txtAreaLibro";
			this->txtAreaLibro->Size = System::Drawing::Size(175, 20);
			this->txtAreaLibro->TabIndex = 2;
			this->txtAreaLibro->Text = L"Area";
			// 
			// txtAutoresLibro
			// 
			this->txtAutoresLibro->Location = System::Drawing::Point(3, 90);
			this->txtAutoresLibro->Name = L"txtAutoresLibro";
			this->txtAutoresLibro->Size = System::Drawing::Size(175, 20);
			this->txtAutoresLibro->TabIndex = 4;
			this->txtAutoresLibro->Text = L"Autores";
			// 
			// txtSubAreaLibro
			// 
			this->txtSubAreaLibro->Location = System::Drawing::Point(3, 64);
			this->txtSubAreaLibro->Name = L"txtSubAreaLibro";
			this->txtSubAreaLibro->Size = System::Drawing::Size(175, 20);
			this->txtSubAreaLibro->TabIndex = 3;
			this->txtSubAreaLibro->Text = L"SubArea";
			// 
			// txtUbiLibro
			// 
			this->txtUbiLibro->Location = System::Drawing::Point(221, 38);
			this->txtUbiLibro->Name = L"txtUbiLibro";
			this->txtUbiLibro->Size = System::Drawing::Size(175, 20);
			this->txtUbiLibro->TabIndex = 7;
			this->txtUbiLibro->Text = L"Ubicación(EstN°- FN°)";
			// 
			// txtAnioPubliLibro
			// 
			this->txtAnioPubliLibro->Location = System::Drawing::Point(221, 12);
			this->txtAnioPubliLibro->Name = L"txtAnioPubliLibro";
			this->txtAnioPubliLibro->Size = System::Drawing::Size(175, 20);
			this->txtAnioPubliLibro->TabIndex = 6;
			this->txtAnioPubliLibro->Text = L"Año de publicación";
			// 
			// txtEditorialLibro
			// 
			this->txtEditorialLibro->Location = System::Drawing::Point(3, 116);
			this->txtEditorialLibro->Name = L"txtEditorialLibro";
			this->txtEditorialLibro->Size = System::Drawing::Size(175, 20);
			this->txtEditorialLibro->TabIndex = 5;
			this->txtEditorialLibro->Text = L"Editorial";
			// 
			// chkMostrarTodosLibros
			// 
			this->chkMostrarTodosLibros->AutoSize = true;
			this->chkMostrarTodosLibros->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chkMostrarTodosLibros->Location = System::Drawing::Point(221, 126);
			this->chkMostrarTodosLibros->Name = L"chkMostrarTodosLibros";
			this->chkMostrarTodosLibros->Size = System::Drawing::Size(114, 19);
			this->chkMostrarTodosLibros->TabIndex = 10;
			this->chkMostrarTodosLibros->Text = L"Mostrar todos";
			this->chkMostrarTodosLibros->UseVisualStyleBackColor = true;
			// 
			// btnBuscarLibro
			// 
			this->btnBuscarLibro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBuscarLibro->Location = System::Drawing::Point(431, 73);
			this->btnBuscarLibro->Name = L"btnBuscarLibro";
			this->btnBuscarLibro->Size = System::Drawing::Size(112, 37);
			this->btnBuscarLibro->TabIndex = 11;
			this->btnBuscarLibro->Text = L"Buscar";
			this->btnBuscarLibro->UseVisualStyleBackColor = true;
			// 
			// TablaLibros
			// 
			this->TablaLibros->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->TablaLibros->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Nombre, this->Column8,
					this->Column9, this->Column1, this->Column2, this->Column3, this->Column4, this->Column5, this->Column6
			});
			this->TablaLibros->Location = System::Drawing::Point(3, 174);
			this->TablaLibros->Name = L"TablaLibros";
			this->TablaLibros->Size = System::Drawing::Size(732, 254);
			this->TablaLibros->TabIndex = 12;
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->Name = L"Nombre";
			this->Nombre->ReadOnly = true;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Area";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"SubArea";
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Autores";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Editorial";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Año de publicación";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Ubicación";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Estado";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Código de barras";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			// 
			// lstEstadoLibro
			// 
			this->lstEstadoLibro->FormattingEnabled = true;
			this->lstEstadoLibro->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Bien", L"Regular", L"Malo", L"Destruido" });
			this->lstEstadoLibro->Location = System::Drawing::Point(221, 64);
			this->lstEstadoLibro->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->lstEstadoLibro->Name = L"lstEstadoLibro";
			this->lstEstadoLibro->Size = System::Drawing::Size(175, 30);
			this->lstEstadoLibro->TabIndex = 37;
			// 
			// txtCodBarrasLibro
			// 
			this->txtCodBarrasLibro->Location = System::Drawing::Point(221, 100);
			this->txtCodBarrasLibro->Name = L"txtCodBarrasLibro";
			this->txtCodBarrasLibro->Size = System::Drawing::Size(175, 20);
			this->txtCodBarrasLibro->TabIndex = 38;
			this->txtCodBarrasLibro->Text = L"Código de barras";
			// 
			// VerYBuscarLibro_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(738, 429);
			this->Controls->Add(this->txtCodBarrasLibro);
			this->Controls->Add(this->lstEstadoLibro);
			this->Controls->Add(this->TablaLibros);
			this->Controls->Add(this->btnBuscarLibro);
			this->Controls->Add(this->chkMostrarTodosLibros);
			this->Controls->Add(this->txtUbiLibro);
			this->Controls->Add(this->txtAnioPubliLibro);
			this->Controls->Add(this->txtEditorialLibro);
			this->Controls->Add(this->txtAutoresLibro);
			this->Controls->Add(this->txtSubAreaLibro);
			this->Controls->Add(this->txtAreaLibro);
			this->Controls->Add(this->txtNomLibro);
			this->Controls->Add(this->lblVisualYbusquedaLibro);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"VerYBuscarLibro_Form";
			this->Text = L"VerYBuscarLibro_Form";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TablaLibros))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

//*----------------------------------------| Fin de codigo autogenerado por el Windows Form|--------------------------------------*
#pragma endregion
	
};
}
