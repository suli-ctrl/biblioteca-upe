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
	/// Resumen de BajaSocio_Form
	/// </summary>
	public ref class BajaSocio_Form : public System::Windows::Forms::Form
	{
	public:
		BajaSocio_Form(void)
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
		~BajaSocio_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnDarBaja;
	protected:

	private: System::Windows::Forms::TextBox^ txtDNIBaja;
	protected:

	private: System::Windows::Forms::Label^ lblDNIBaja;

	private: System::Windows::Forms::Label^ lblIngreseInfoBaja;

	private: System::Windows::Forms::Label^ lblBajaSocio;


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
			this->btnDarBaja = (gcnew System::Windows::Forms::Button());
			this->txtDNIBaja = (gcnew System::Windows::Forms::TextBox());
			this->lblDNIBaja = (gcnew System::Windows::Forms::Label());
			this->lblIngreseInfoBaja = (gcnew System::Windows::Forms::Label());
			this->lblBajaSocio = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnDarBaja
			// 
			this->btnDarBaja->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDarBaja->Location = System::Drawing::Point(289, 197);
			this->btnDarBaja->Name = L"btnDarBaja";
			this->btnDarBaja->Size = System::Drawing::Size(101, 23);
			this->btnDarBaja->TabIndex = 10;
			this->btnDarBaja->Text = L"Dar de baja";
			this->btnDarBaja->UseVisualStyleBackColor = true;
			// 
			// txtDNIBaja
			// 
			this->txtDNIBaja->Location = System::Drawing::Point(260, 150);
			this->txtDNIBaja->Name = L"txtDNIBaja";
			this->txtDNIBaja->Size = System::Drawing::Size(164, 20);
			this->txtDNIBaja->TabIndex = 9;
			// 
			// lblDNIBaja
			// 
			this->lblDNIBaja->AutoSize = true;
			this->lblDNIBaja->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDNIBaja->Location = System::Drawing::Point(318, 127);
			this->lblDNIBaja->Name = L"lblDNIBaja";
			this->lblDNIBaja->Size = System::Drawing::Size(40, 20);
			this->lblDNIBaja->TabIndex = 8;
			this->lblDNIBaja->Text = L"DNI";
			// 
			// lblIngreseInfoBaja
			// 
			this->lblIngreseInfoBaja->AutoSize = true;
			this->lblIngreseInfoBaja->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblIngreseInfoBaja->Location = System::Drawing::Point(191, 47);
			this->lblIngreseInfoBaja->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblIngreseInfoBaja->Name = L"lblIngreseInfoBaja";
			this->lblIngreseInfoBaja->Size = System::Drawing::Size(321, 25);
			this->lblIngreseInfoBaja->TabIndex = 7;
			this->lblIngreseInfoBaja->Text = L"Ingrese información del socio";
			// 
			// lblBajaSocio
			// 
			this->lblBajaSocio->AutoSize = true;
			this->lblBajaSocio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBajaSocio->Location = System::Drawing::Point(633, -1);
			this->lblBajaSocio->Name = L"lblBajaSocio";
			this->lblBajaSocio->Size = System::Drawing::Size(90, 18);
			this->lblBajaSocio->TabIndex = 6;
			this->lblBajaSocio->Text = L"Baja Socio";
			// 
			// BajaSocio_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(722, 390);
			this->Controls->Add(this->btnDarBaja);
			this->Controls->Add(this->txtDNIBaja);
			this->Controls->Add(this->lblDNIBaja);
			this->Controls->Add(this->lblIngreseInfoBaja);
			this->Controls->Add(this->lblBajaSocio);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"BajaSocio_Form";
			this->Text = L"BajaSocio_Form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}


		//*----------------------------------------| Fin de codigo autogenerado por el Windows Form|--------------------------------------*

#pragma endregion
	};
}
