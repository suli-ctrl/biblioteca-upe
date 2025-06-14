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
	/// Resumen de BajaLibro_Form
	/// </summary>
	public ref class BajaLibro_Form : public System::Windows::Forms::Form
	{
	public:
		BajaLibro_Form(void)
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
		~BajaLibro_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblInfoBaja;
	private: System::Windows::Forms::Label^ lblNombreBaja;
	private: System::Windows::Forms::TextBox^ txtNombreBaja;
	private: System::Windows::Forms::Button^ btnDarBajaLibro;




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
			this->lblInfoBaja = (gcnew System::Windows::Forms::Label());
			this->lblNombreBaja = (gcnew System::Windows::Forms::Label());
			this->txtNombreBaja = (gcnew System::Windows::Forms::TextBox());
			this->btnDarBajaLibro = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(662, -1);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Baja libro";
			// 
			// lblInfoBaja
			// 
			this->lblInfoBaja->AutoSize = true;
			this->lblInfoBaja->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblInfoBaja->Location = System::Drawing::Point(210, 45);
			this->lblInfoBaja->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblInfoBaja->Name = L"lblInfoBaja";
			this->lblInfoBaja->Size = System::Drawing::Size(311, 25);
			this->lblInfoBaja->TabIndex = 2;
			this->lblInfoBaja->Text = L"Ingrese información del libro";
			// 
			// lblNombreBaja
			// 
			this->lblNombreBaja->AutoSize = true;
			this->lblNombreBaja->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNombreBaja->Location = System::Drawing::Point(335, 84);
			this->lblNombreBaja->Name = L"lblNombreBaja";
			this->lblNombreBaja->Size = System::Drawing::Size(71, 20);
			this->lblNombreBaja->TabIndex = 3;
			this->lblNombreBaja->Text = L"Nombre";
			// 
			// txtNombreBaja
			// 
			this->txtNombreBaja->Location = System::Drawing::Point(289, 107);
			this->txtNombreBaja->Name = L"txtNombreBaja";
			this->txtNombreBaja->Size = System::Drawing::Size(164, 20);
			this->txtNombreBaja->TabIndex = 4;
			// 
			// btnDarBajaLibro
			// 
			this->btnDarBajaLibro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDarBajaLibro->Location = System::Drawing::Point(321, 133);
			this->btnDarBajaLibro->Name = L"btnDarBajaLibro";
			this->btnDarBajaLibro->Size = System::Drawing::Size(101, 23);
			this->btnDarBajaLibro->TabIndex = 5;
			this->btnDarBajaLibro->Text = L"Dar de baja";
			this->btnDarBajaLibro->UseVisualStyleBackColor = true;
			// 
			// BajaLibro_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(738, 429);
			this->Controls->Add(this->btnDarBajaLibro);
			this->Controls->Add(this->txtNombreBaja);
			this->Controls->Add(this->lblNombreBaja);
			this->Controls->Add(this->lblInfoBaja);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"BajaLibro_Form";
			this->Text = L"BajaLibro_Form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		//*----------------------------------------| Fin de codigo autogenerado por el Windows Form|--------------------------------------*

#pragma endregion
	};
}
