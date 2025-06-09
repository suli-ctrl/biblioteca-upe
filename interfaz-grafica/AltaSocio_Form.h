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
	/// Resumen de AltaSocio_Form
	/// </summary>
	public ref class AltaSocio_Form : public System::Windows::Forms::Form
	{
	public:
		AltaSocio_Form(void)
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
		~AltaSocio_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnDarAlta;
	protected:

	protected:

	private: System::Windows::Forms::TextBox^ txtEmailAlta;

	private: System::Windows::Forms::Label^ lblEmailAlta;
	private: System::Windows::Forms::TextBox^ txtFechaNacimientoAlta;


	private: System::Windows::Forms::Label^ lblFechaNacimientoAlta;
	private: System::Windows::Forms::TextBox^ txtEdadAlta;


	private: System::Windows::Forms::Label^ lblEdadAlta;
	private: System::Windows::Forms::TextBox^ txtNumTelAlta;


	private: System::Windows::Forms::Label^ lblNumTelAlta;

	private: System::Windows::Forms::Label^ lblDireAlta;
	private: System::Windows::Forms::TextBox^ txtDireAlta;


	private: System::Windows::Forms::Label^ lblGeneroAlta;
	private: System::Windows::Forms::TextBox^ txtDNIAlta;


	private: System::Windows::Forms::Label^ lblDNIAlta;
	private: System::Windows::Forms::TextBox^ txtApellidoAlta;



	private: System::Windows::Forms::Label^ lblApellidoAlta;
	private: System::Windows::Forms::Label^ lblIngreseInfoSocioAlta;



	private: System::Windows::Forms::Label^ lblSubAltaLibro;
	private: System::Windows::Forms::ListBox^ lstGeneroAlta;


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
			this->btnDarAlta = (gcnew System::Windows::Forms::Button());
			this->txtEmailAlta = (gcnew System::Windows::Forms::TextBox());
			this->lblEmailAlta = (gcnew System::Windows::Forms::Label());
			this->txtFechaNacimientoAlta = (gcnew System::Windows::Forms::TextBox());
			this->lblFechaNacimientoAlta = (gcnew System::Windows::Forms::Label());
			this->txtEdadAlta = (gcnew System::Windows::Forms::TextBox());
			this->lblEdadAlta = (gcnew System::Windows::Forms::Label());
			this->txtNumTelAlta = (gcnew System::Windows::Forms::TextBox());
			this->lblNumTelAlta = (gcnew System::Windows::Forms::Label());
			this->lblDireAlta = (gcnew System::Windows::Forms::Label());
			this->txtDireAlta = (gcnew System::Windows::Forms::TextBox());
			this->lblGeneroAlta = (gcnew System::Windows::Forms::Label());
			this->txtDNIAlta = (gcnew System::Windows::Forms::TextBox());
			this->lblDNIAlta = (gcnew System::Windows::Forms::Label());
			this->txtApellidoAlta = (gcnew System::Windows::Forms::TextBox());
			this->lblApellidoAlta = (gcnew System::Windows::Forms::Label());
			this->lblIngreseInfoSocioAlta = (gcnew System::Windows::Forms::Label());
			this->lblSubAltaLibro = (gcnew System::Windows::Forms::Label());
			this->lstGeneroAlta = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// btnDarAlta
			// 
			this->btnDarAlta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDarAlta->Location = System::Drawing::Point(271, 345);
			this->btnDarAlta->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnDarAlta->Name = L"btnDarAlta";
			this->btnDarAlta->Size = System::Drawing::Size(142, 30);
			this->btnDarAlta->TabIndex = 37;
			this->btnDarAlta->Text = L"Dar alta";
			this->btnDarAlta->UseVisualStyleBackColor = true;
			// 
			// txtEmailAlta
			// 
			this->txtEmailAlta->Location = System::Drawing::Point(431, 290);
			this->txtEmailAlta->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtEmailAlta->Name = L"txtEmailAlta";
			this->txtEmailAlta->Size = System::Drawing::Size(188, 20);
			this->txtEmailAlta->TabIndex = 36;
			// 
			// lblEmailAlta
			// 
			this->lblEmailAlta->AutoSize = true;
			this->lblEmailAlta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEmailAlta->Location = System::Drawing::Point(427, 270);
			this->lblEmailAlta->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblEmailAlta->Name = L"lblEmailAlta";
			this->lblEmailAlta->Size = System::Drawing::Size(51, 16);
			this->lblEmailAlta->TabIndex = 35;
			this->lblEmailAlta->Text = L"E-mail";
			// 
			// txtFechaNacimientoAlta
			// 
			this->txtFechaNacimientoAlta->Location = System::Drawing::Point(431, 232);
			this->txtFechaNacimientoAlta->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtFechaNacimientoAlta->Name = L"txtFechaNacimientoAlta";
			this->txtFechaNacimientoAlta->Size = System::Drawing::Size(188, 20);
			this->txtFechaNacimientoAlta->TabIndex = 34;
			// 
			// lblFechaNacimientoAlta
			// 
			this->lblFechaNacimientoAlta->AutoSize = true;
			this->lblFechaNacimientoAlta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblFechaNacimientoAlta->Location = System::Drawing::Point(427, 212);
			this->lblFechaNacimientoAlta->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblFechaNacimientoAlta->Name = L"lblFechaNacimientoAlta";
			this->lblFechaNacimientoAlta->Size = System::Drawing::Size(151, 16);
			this->lblFechaNacimientoAlta->TabIndex = 33;
			this->lblFechaNacimientoAlta->Text = L"Fecha de nacimiento";
			// 
			// txtEdadAlta
			// 
			this->txtEdadAlta->Location = System::Drawing::Point(431, 174);
			this->txtEdadAlta->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtEdadAlta->Name = L"txtEdadAlta";
			this->txtEdadAlta->Size = System::Drawing::Size(188, 20);
			this->txtEdadAlta->TabIndex = 32;
			// 
			// lblEdadAlta
			// 
			this->lblEdadAlta->AutoSize = true;
			this->lblEdadAlta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEdadAlta->Location = System::Drawing::Point(427, 154);
			this->lblEdadAlta->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblEdadAlta->Name = L"lblEdadAlta";
			this->lblEdadAlta->Size = System::Drawing::Size(44, 16);
			this->lblEdadAlta->TabIndex = 31;
			this->lblEdadAlta->Text = L"Edad";
			// 
			// txtNumTelAlta
			// 
			this->txtNumTelAlta->Location = System::Drawing::Point(431, 118);
			this->txtNumTelAlta->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtNumTelAlta->Name = L"txtNumTelAlta";
			this->txtNumTelAlta->Size = System::Drawing::Size(188, 20);
			this->txtNumTelAlta->TabIndex = 30;
			// 
			// lblNumTelAlta
			// 
			this->lblNumTelAlta->AutoSize = true;
			this->lblNumTelAlta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNumTelAlta->Location = System::Drawing::Point(427, 98);
			this->lblNumTelAlta->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblNumTelAlta->Name = L"lblNumTelAlta";
			this->lblNumTelAlta->Size = System::Drawing::Size(143, 16);
			this->lblNumTelAlta->TabIndex = 29;
			this->lblNumTelAlta->Text = L"Número de teléfono";
			// 
			// lblDireAlta
			// 
			this->lblDireAlta->AutoSize = true;
			this->lblDireAlta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDireAlta->Location = System::Drawing::Point(76, 270);
			this->lblDireAlta->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblDireAlta->Name = L"lblDireAlta";
			this->lblDireAlta->Size = System::Drawing::Size(133, 16);
			this->lblDireAlta->TabIndex = 28;
			this->lblDireAlta->Text = L"Dirección de calle";
			// 
			// txtDireAlta
			// 
			this->txtDireAlta->Location = System::Drawing::Point(80, 290);
			this->txtDireAlta->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtDireAlta->Name = L"txtDireAlta";
			this->txtDireAlta->Size = System::Drawing::Size(188, 20);
			this->txtDireAlta->TabIndex = 27;
			// 
			// lblGeneroAlta
			// 
			this->lblGeneroAlta->AutoSize = true;
			this->lblGeneroAlta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGeneroAlta->Location = System::Drawing::Point(76, 202);
			this->lblGeneroAlta->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblGeneroAlta->Name = L"lblGeneroAlta";
			this->lblGeneroAlta->Size = System::Drawing::Size(58, 16);
			this->lblGeneroAlta->TabIndex = 26;
			this->lblGeneroAlta->Text = L"Género";
			// 
			// txtDNIAlta
			// 
			this->txtDNIAlta->Location = System::Drawing::Point(80, 174);
			this->txtDNIAlta->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtDNIAlta->Name = L"txtDNIAlta";
			this->txtDNIAlta->Size = System::Drawing::Size(188, 20);
			this->txtDNIAlta->TabIndex = 25;
			// 
			// lblDNIAlta
			// 
			this->lblDNIAlta->AutoSize = true;
			this->lblDNIAlta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDNIAlta->Location = System::Drawing::Point(76, 154);
			this->lblDNIAlta->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblDNIAlta->Name = L"lblDNIAlta";
			this->lblDNIAlta->Size = System::Drawing::Size(33, 16);
			this->lblDNIAlta->TabIndex = 24;
			this->lblDNIAlta->Text = L"DNI";
			// 
			// txtApellidoAlta
			// 
			this->txtApellidoAlta->Location = System::Drawing::Point(80, 118);
			this->txtApellidoAlta->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtApellidoAlta->Name = L"txtApellidoAlta";
			this->txtApellidoAlta->Size = System::Drawing::Size(188, 20);
			this->txtApellidoAlta->TabIndex = 23;
			// 
			// lblApellidoAlta
			// 
			this->lblApellidoAlta->AutoSize = true;
			this->lblApellidoAlta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblApellidoAlta->Location = System::Drawing::Point(76, 98);
			this->lblApellidoAlta->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblApellidoAlta->Name = L"lblApellidoAlta";
			this->lblApellidoAlta->Size = System::Drawing::Size(65, 16);
			this->lblApellidoAlta->TabIndex = 22;
			this->lblApellidoAlta->Text = L"Apellido";
			// 
			// lblIngreseInfoSocioAlta
			// 
			this->lblIngreseInfoSocioAlta->AutoSize = true;
			this->lblIngreseInfoSocioAlta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblIngreseInfoSocioAlta->Location = System::Drawing::Point(193, 46);
			this->lblIngreseInfoSocioAlta->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblIngreseInfoSocioAlta->Name = L"lblIngreseInfoSocioAlta";
			this->lblIngreseInfoSocioAlta->Size = System::Drawing::Size(321, 25);
			this->lblIngreseInfoSocioAlta->TabIndex = 21;
			this->lblIngreseInfoSocioAlta->Text = L"Ingrese información del socio";
			// 
			// lblSubAltaLibro
			// 
			this->lblSubAltaLibro->AutoSize = true;
			this->lblSubAltaLibro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSubAltaLibro->Location = System::Drawing::Point(640, 0);
			this->lblSubAltaLibro->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblSubAltaLibro->Name = L"lblSubAltaLibro";
			this->lblSubAltaLibro->Size = System::Drawing::Size(85, 18);
			this->lblSubAltaLibro->TabIndex = 20;
			this->lblSubAltaLibro->Text = L"Alta Socio";
			// 
			// lstGeneroAlta
			// 
			this->lstGeneroAlta->FormattingEnabled = true;
			this->lstGeneroAlta->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Masculino", L"Femenino", L"No especificado" });
			this->lstGeneroAlta->Location = System::Drawing::Point(80, 222);
			this->lstGeneroAlta->Name = L"lstGeneroAlta";
			this->lstGeneroAlta->Size = System::Drawing::Size(188, 30);
			this->lstGeneroAlta->TabIndex = 38;
			// 
			// AltaSocio_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(722, 390);
			this->Controls->Add(this->lstGeneroAlta);
			this->Controls->Add(this->btnDarAlta);
			this->Controls->Add(this->txtEmailAlta);
			this->Controls->Add(this->lblEmailAlta);
			this->Controls->Add(this->txtFechaNacimientoAlta);
			this->Controls->Add(this->lblFechaNacimientoAlta);
			this->Controls->Add(this->txtEdadAlta);
			this->Controls->Add(this->lblEdadAlta);
			this->Controls->Add(this->txtNumTelAlta);
			this->Controls->Add(this->lblNumTelAlta);
			this->Controls->Add(this->lblDireAlta);
			this->Controls->Add(this->txtDireAlta);
			this->Controls->Add(this->lblGeneroAlta);
			this->Controls->Add(this->txtDNIAlta);
			this->Controls->Add(this->lblDNIAlta);
			this->Controls->Add(this->txtApellidoAlta);
			this->Controls->Add(this->lblApellidoAlta);
			this->Controls->Add(this->lblIngreseInfoSocioAlta);
			this->Controls->Add(this->lblSubAltaLibro);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AltaSocio_Form";
			this->Text = L"AltaSocio_Form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

//*----------------------------------------| Fin de codigo autogenerado por el Windows Form|--------------------------------------*

#pragma endregion
	};
}
