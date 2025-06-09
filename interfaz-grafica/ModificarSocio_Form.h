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
	/// Resumen de ModificarSocio_Form
	/// </summary>
	public ref class ModificarSocio_Form : public System::Windows::Forms::Form
	{
	public:
		ModificarSocio_Form(void)
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
		~ModificarSocio_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnBuscarSocioModi;
	protected:

	private: System::Windows::Forms::TextBox^ txtDNIaMoid;
	protected:

	private: System::Windows::Forms::Label^ lblIngreseDNIModi;
	private: System::Windows::Forms::Button^ btnModificar;



	private: System::Windows::Forms::Label^ lblModificarSocio;
	private: System::Windows::Forms::TextBox^ txtEmailModi;

















	private: System::Windows::Forms::Label^ lblEmailModi;
	private: System::Windows::Forms::TextBox^ txtFechaNacimientoModi;


	private: System::Windows::Forms::Label^ lblFechaNacimientoModi;
	private: System::Windows::Forms::TextBox^ txtEdadModi;


	private: System::Windows::Forms::Label^ lblEdadModi;
	private: System::Windows::Forms::TextBox^ txtNumTelModi;


	private: System::Windows::Forms::Label^ lblNumTelModi;
	private: System::Windows::Forms::TextBox^ txtDNIModi;




	private: System::Windows::Forms::Label^ lblDNIModi;
	private: System::Windows::Forms::TextBox^ txtApellidoModi;


	private: System::Windows::Forms::Label^ lblApellidoModi;
	private: System::Windows::Forms::ListBox^ lstGeneroModi;


	private: System::Windows::Forms::Label^ lblDireModi;
	private: System::Windows::Forms::TextBox^ txtDireModi;


	private: System::Windows::Forms::Label^ lblGeneroModi;




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
			this->btnBuscarSocioModi = (gcnew System::Windows::Forms::Button());
			this->txtDNIaMoid = (gcnew System::Windows::Forms::TextBox());
			this->lblIngreseDNIModi = (gcnew System::Windows::Forms::Label());
			this->btnModificar = (gcnew System::Windows::Forms::Button());
			this->lblModificarSocio = (gcnew System::Windows::Forms::Label());
			this->txtEmailModi = (gcnew System::Windows::Forms::TextBox());
			this->lblEmailModi = (gcnew System::Windows::Forms::Label());
			this->txtFechaNacimientoModi = (gcnew System::Windows::Forms::TextBox());
			this->lblFechaNacimientoModi = (gcnew System::Windows::Forms::Label());
			this->txtEdadModi = (gcnew System::Windows::Forms::TextBox());
			this->lblEdadModi = (gcnew System::Windows::Forms::Label());
			this->txtNumTelModi = (gcnew System::Windows::Forms::TextBox());
			this->lblNumTelModi = (gcnew System::Windows::Forms::Label());
			this->txtDNIModi = (gcnew System::Windows::Forms::TextBox());
			this->lblDNIModi = (gcnew System::Windows::Forms::Label());
			this->txtApellidoModi = (gcnew System::Windows::Forms::TextBox());
			this->lblApellidoModi = (gcnew System::Windows::Forms::Label());
			this->lstGeneroModi = (gcnew System::Windows::Forms::ListBox());
			this->lblDireModi = (gcnew System::Windows::Forms::Label());
			this->txtDireModi = (gcnew System::Windows::Forms::TextBox());
			this->lblGeneroModi = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnBuscarSocioModi
			// 
			this->btnBuscarSocioModi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBuscarSocioModi->Location = System::Drawing::Point(329, 86);
			this->btnBuscarSocioModi->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnBuscarSocioModi->Name = L"btnBuscarSocioModi";
			this->btnBuscarSocioModi->Size = System::Drawing::Size(119, 26);
			this->btnBuscarSocioModi->TabIndex = 60;
			this->btnBuscarSocioModi->Text = L"Buscar";
			this->btnBuscarSocioModi->UseVisualStyleBackColor = true;
			// 
			// txtDNIaMoid
			// 
			this->txtDNIaMoid->Location = System::Drawing::Point(286, 60);
			this->txtDNIaMoid->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtDNIaMoid->Name = L"txtDNIaMoid";
			this->txtDNIaMoid->Size = System::Drawing::Size(199, 20);
			this->txtDNIaMoid->TabIndex = 59;
			this->txtDNIaMoid->Text = L"DNI";
			// 
			// lblIngreseDNIModi
			// 
			this->lblIngreseDNIModi->AutoSize = true;
			this->lblIngreseDNIModi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblIngreseDNIModi->Location = System::Drawing::Point(184, 32);
			this->lblIngreseDNIModi->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblIngreseDNIModi->Name = L"lblIngreseDNIModi";
			this->lblIngreseDNIModi->Size = System::Drawing::Size(386, 25);
			this->lblIngreseDNIModi->TabIndex = 58;
			this->lblIngreseDNIModi->Text = L"Ingrese el DNI del socio a modificar";
			// 
			// btnModificar
			// 
			this->btnModificar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnModificar->Location = System::Drawing::Point(312, 360);
			this->btnModificar->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnModificar->Name = L"btnModificar";
			this->btnModificar->Size = System::Drawing::Size(142, 30);
			this->btnModificar->TabIndex = 56;
			this->btnModificar->Text = L"Modificar";
			this->btnModificar->UseVisualStyleBackColor = true;
			// 
			// lblModificarSocio
			// 
			this->lblModificarSocio->AutoSize = true;
			this->lblModificarSocio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblModificarSocio->Location = System::Drawing::Point(595, -3);
			this->lblModificarSocio->Name = L"lblModificarSocio";
			this->lblModificarSocio->Size = System::Drawing::Size(127, 18);
			this->lblModificarSocio->TabIndex = 61;
			this->lblModificarSocio->Text = L"Modificar Socio";
			// 
			// txtEmailModi
			// 
			this->txtEmailModi->Location = System::Drawing::Point(421, 322);
			this->txtEmailModi->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtEmailModi->Name = L"txtEmailModi";
			this->txtEmailModi->Size = System::Drawing::Size(188, 20);
			this->txtEmailModi->TabIndex = 76;
			// 
			// lblEmailModi
			// 
			this->lblEmailModi->AutoSize = true;
			this->lblEmailModi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEmailModi->Location = System::Drawing::Point(417, 302);
			this->lblEmailModi->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblEmailModi->Name = L"lblEmailModi";
			this->lblEmailModi->Size = System::Drawing::Size(51, 16);
			this->lblEmailModi->TabIndex = 75;
			this->lblEmailModi->Text = L"E-mail";
			// 
			// txtFechaNacimientoModi
			// 
			this->txtFechaNacimientoModi->Location = System::Drawing::Point(421, 264);
			this->txtFechaNacimientoModi->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtFechaNacimientoModi->Name = L"txtFechaNacimientoModi";
			this->txtFechaNacimientoModi->Size = System::Drawing::Size(188, 20);
			this->txtFechaNacimientoModi->TabIndex = 74;
			// 
			// lblFechaNacimientoModi
			// 
			this->lblFechaNacimientoModi->AutoSize = true;
			this->lblFechaNacimientoModi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblFechaNacimientoModi->Location = System::Drawing::Point(417, 244);
			this->lblFechaNacimientoModi->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblFechaNacimientoModi->Name = L"lblFechaNacimientoModi";
			this->lblFechaNacimientoModi->Size = System::Drawing::Size(151, 16);
			this->lblFechaNacimientoModi->TabIndex = 73;
			this->lblFechaNacimientoModi->Text = L"Fecha de nacimiento";
			// 
			// txtEdadModi
			// 
			this->txtEdadModi->Location = System::Drawing::Point(421, 206);
			this->txtEdadModi->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtEdadModi->Name = L"txtEdadModi";
			this->txtEdadModi->Size = System::Drawing::Size(188, 20);
			this->txtEdadModi->TabIndex = 72;
			// 
			// lblEdadModi
			// 
			this->lblEdadModi->AutoSize = true;
			this->lblEdadModi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEdadModi->Location = System::Drawing::Point(417, 186);
			this->lblEdadModi->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblEdadModi->Name = L"lblEdadModi";
			this->lblEdadModi->Size = System::Drawing::Size(44, 16);
			this->lblEdadModi->TabIndex = 71;
			this->lblEdadModi->Text = L"Edad";
			// 
			// txtNumTelModi
			// 
			this->txtNumTelModi->Location = System::Drawing::Point(421, 150);
			this->txtNumTelModi->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtNumTelModi->Name = L"txtNumTelModi";
			this->txtNumTelModi->Size = System::Drawing::Size(188, 20);
			this->txtNumTelModi->TabIndex = 70;
			// 
			// lblNumTelModi
			// 
			this->lblNumTelModi->AutoSize = true;
			this->lblNumTelModi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNumTelModi->Location = System::Drawing::Point(417, 130);
			this->lblNumTelModi->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblNumTelModi->Name = L"lblNumTelModi";
			this->lblNumTelModi->Size = System::Drawing::Size(143, 16);
			this->lblNumTelModi->TabIndex = 69;
			this->lblNumTelModi->Text = L"Número de teléfono";
			// 
			// txtDNIModi
			// 
			this->txtDNIModi->Location = System::Drawing::Point(189, 206);
			this->txtDNIModi->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtDNIModi->Name = L"txtDNIModi";
			this->txtDNIModi->Size = System::Drawing::Size(188, 20);
			this->txtDNIModi->TabIndex = 65;
			// 
			// lblDNIModi
			// 
			this->lblDNIModi->AutoSize = true;
			this->lblDNIModi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDNIModi->Location = System::Drawing::Point(185, 186);
			this->lblDNIModi->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblDNIModi->Name = L"lblDNIModi";
			this->lblDNIModi->Size = System::Drawing::Size(33, 16);
			this->lblDNIModi->TabIndex = 64;
			this->lblDNIModi->Text = L"DNI";
			// 
			// txtApellidoModi
			// 
			this->txtApellidoModi->Location = System::Drawing::Point(189, 150);
			this->txtApellidoModi->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtApellidoModi->Name = L"txtApellidoModi";
			this->txtApellidoModi->Size = System::Drawing::Size(188, 20);
			this->txtApellidoModi->TabIndex = 63;
			// 
			// lblApellidoModi
			// 
			this->lblApellidoModi->AutoSize = true;
			this->lblApellidoModi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblApellidoModi->Location = System::Drawing::Point(185, 130);
			this->lblApellidoModi->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblApellidoModi->Name = L"lblApellidoModi";
			this->lblApellidoModi->Size = System::Drawing::Size(65, 16);
			this->lblApellidoModi->TabIndex = 62;
			this->lblApellidoModi->Text = L"Apellido";
			// 
			// lstGeneroModi
			// 
			this->lstGeneroModi->FormattingEnabled = true;
			this->lstGeneroModi->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Masculino", L"Femenino", L"No especificado" });
			this->lstGeneroModi->Location = System::Drawing::Point(189, 254);
			this->lstGeneroModi->Name = L"lstGeneroModi";
			this->lstGeneroModi->Size = System::Drawing::Size(188, 30);
			this->lstGeneroModi->TabIndex = 80;
			// 
			// lblDireModi
			// 
			this->lblDireModi->AutoSize = true;
			this->lblDireModi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDireModi->Location = System::Drawing::Point(185, 302);
			this->lblDireModi->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblDireModi->Name = L"lblDireModi";
			this->lblDireModi->Size = System::Drawing::Size(133, 16);
			this->lblDireModi->TabIndex = 79;
			this->lblDireModi->Text = L"Dirección de calle";
			// 
			// txtDireModi
			// 
			this->txtDireModi->Location = System::Drawing::Point(189, 322);
			this->txtDireModi->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->txtDireModi->Name = L"txtDireModi";
			this->txtDireModi->Size = System::Drawing::Size(188, 20);
			this->txtDireModi->TabIndex = 78;
			// 
			// lblGeneroModi
			// 
			this->lblGeneroModi->AutoSize = true;
			this->lblGeneroModi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGeneroModi->Location = System::Drawing::Point(185, 234);
			this->lblGeneroModi->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblGeneroModi->Name = L"lblGeneroModi";
			this->lblGeneroModi->Size = System::Drawing::Size(58, 16);
			this->lblGeneroModi->TabIndex = 77;
			this->lblGeneroModi->Text = L"Género";
			// 
			// ModificarSocio_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(722, 390);
			this->Controls->Add(this->lstGeneroModi);
			this->Controls->Add(this->lblDireModi);
			this->Controls->Add(this->txtDireModi);
			this->Controls->Add(this->lblGeneroModi);
			this->Controls->Add(this->txtEmailModi);
			this->Controls->Add(this->lblEmailModi);
			this->Controls->Add(this->txtFechaNacimientoModi);
			this->Controls->Add(this->lblFechaNacimientoModi);
			this->Controls->Add(this->txtEdadModi);
			this->Controls->Add(this->lblEdadModi);
			this->Controls->Add(this->txtNumTelModi);
			this->Controls->Add(this->lblNumTelModi);
			this->Controls->Add(this->txtDNIModi);
			this->Controls->Add(this->lblDNIModi);
			this->Controls->Add(this->txtApellidoModi);
			this->Controls->Add(this->lblApellidoModi);
			this->Controls->Add(this->lblModificarSocio);
			this->Controls->Add(this->btnBuscarSocioModi);
			this->Controls->Add(this->txtDNIaMoid);
			this->Controls->Add(this->lblIngreseDNIModi);
			this->Controls->Add(this->btnModificar);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ModificarSocio_Form";
			this->Text = L"ModificarSocio_Form";
			this->Load += gcnew System::EventHandler(this, &ModificarSocio_Form::ModificarSocio_Form_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

//*----------------------------------------| Fin de codigo autogenerado por el Windows Form|--------------------------------------*

#pragma endregion
	
private: System::Void ModificarSocio_Form_Load(System::Object^ sender, System::EventArgs^ e) //al cargar el form oculto las opciones de modificación
{
	txtApellidoModi->Visible = false;
	txtDNIModi->Visible = false;
	lstGeneroModi->Visible = false;
	txtDireModi->Visible = false;
	txtNumTelModi->Visible = false;
	txtEdadModi->Visible = false;
	txtFechaNacimientoModi->Visible = false;
	txtEmailModi->Visible = false;

	lblApellidoModi->Visible = false;
	lblDNIModi->Visible = false;
	lblGeneroModi->Visible = false;
	lblDireModi->Visible = false;
	lblNumTelModi->Visible = false;
	lblEdadModi->Visible = false;
	lblFechaNacimientoModi->Visible = false;
	lblEmailModi->Visible = false;
	btnModificar->Visible = false;
}
};
}
