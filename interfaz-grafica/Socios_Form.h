#pragma once
#include "AltaSocio_Form.h"
#include "BajaSocio_Form.h"
#include "ModificarSocio_Form.h"
#include "VerYBuscarSocios_Form.h"


//*----------------------------------------| Inicio de codigo autogenerado por el Windows Form|--------------------------------------*

namespace InterfazGrafica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class Socios_Form : public System::Windows::Forms::Form
	{
	public:
		Socios_Form(void)
		{
			InitializeComponent();
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen; //mantiene centrado al formulario
		}

	protected:

		~Socios_Form()
		{
			if (components)
			{
				delete components; /// Limpiar los recursos que se estén usando.
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ lblBibliotecaUpe;
	private: System::Windows::Forms::PictureBox^ pbLogo;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ lblOpciones;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnVeryBuscar;

	private: System::Windows::Forms::PictureBox^ pbSalir;
	private: System::Windows::Forms::Button^ btnVolver;

	private: System::Windows::Forms::PictureBox^ pbSocios;
	private: System::Windows::Forms::Button^ btnModificarSocio;

	private: System::Windows::Forms::PictureBox^ pbPrestamos;
	private: System::Windows::Forms::Button^ btnBajaSocio;

	private: System::Windows::Forms::PictureBox^ PBbotonLibros;
	private: System::Windows::Forms::Button^ btnAltaSocio;
	private: System::Windows::Forms::Panel^ Panel_Contenedor;



	private:
		System::ComponentModel::Container ^components; 		/// Variable del diseñador necesaria.

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void) /// Método necesario para admitir el Diseñador.
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Socios_Form::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lblBibliotecaUpe = (gcnew System::Windows::Forms::Label());
			this->pbLogo = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->lblOpciones = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnVeryBuscar = (gcnew System::Windows::Forms::Button());
			this->pbSalir = (gcnew System::Windows::Forms::PictureBox());
			this->btnVolver = (gcnew System::Windows::Forms::Button());
			this->pbSocios = (gcnew System::Windows::Forms::PictureBox());
			this->btnModificarSocio = (gcnew System::Windows::Forms::Button());
			this->pbPrestamos = (gcnew System::Windows::Forms::PictureBox());
			this->btnBajaSocio = (gcnew System::Windows::Forms::Button());
			this->PBbotonLibros = (gcnew System::Windows::Forms::PictureBox());
			this->btnAltaSocio = (gcnew System::Windows::Forms::Button());
			this->Panel_Contenedor = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbLogo))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSalir))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSocios))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPrestamos))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBbotonLibros))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->lblBibliotecaUpe);
			this->panel1->Controls->Add(this->pbLogo);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(164, 53);
			this->panel1->TabIndex = 2;
			// 
			// lblBibliotecaUpe
			// 
			this->lblBibliotecaUpe->AutoSize = true;
			this->lblBibliotecaUpe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBibliotecaUpe->Location = System::Drawing::Point(54, 7);
			this->lblBibliotecaUpe->Name = L"lblBibliotecaUpe";
			this->lblBibliotecaUpe->Size = System::Drawing::Size(77, 32);
			this->lblBibliotecaUpe->TabIndex = 1;
			this->lblBibliotecaUpe->Text = L"Biblioteca\r\nUPE";
			// 
			// pbLogo
			// 
			this->pbLogo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pbLogo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbLogo.Image")));
			this->pbLogo->Location = System::Drawing::Point(3, 7);
			this->pbLogo->Name = L"pbLogo";
			this->pbLogo->Size = System::Drawing::Size(45, 41);
			this->pbLogo->TabIndex = 0;
			this->pbLogo->TabStop = false;
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->lblOpciones);
			this->panel4->Location = System::Drawing::Point(0, 52);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(164, 41);
			this->panel4->TabIndex = 5;
			// 
			// lblOpciones
			// 
			this->lblOpciones->AutoSize = true;
			this->lblOpciones->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblOpciones->Location = System::Drawing::Point(3, 3);
			this->lblOpciones->Name = L"lblOpciones";
			this->lblOpciones->Size = System::Drawing::Size(95, 32);
			this->lblOpciones->TabIndex = 0;
			this->lblOpciones->Text = L"Opciones de\r\nGestión";
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->pictureBox1);
			this->panel3->Controls->Add(this->btnVeryBuscar);
			this->panel3->Controls->Add(this->pbSalir);
			this->panel3->Controls->Add(this->btnVolver);
			this->panel3->Controls->Add(this->pbSocios);
			this->panel3->Controls->Add(this->btnModificarSocio);
			this->panel3->Controls->Add(this->pbPrestamos);
			this->panel3->Controls->Add(this->btnBajaSocio);
			this->panel3->Controls->Add(this->PBbotonLibros);
			this->panel3->Controls->Add(this->btnAltaSocio);
			this->panel3->Location = System::Drawing::Point(0, 91);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(164, 338);
			this->panel3->TabIndex = 6;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Enabled = false;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(11, 194);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(37, 29);
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// btnVeryBuscar
			// 
			this->btnVeryBuscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVeryBuscar->Location = System::Drawing::Point(6, 183);
			this->btnVeryBuscar->Name = L"btnVeryBuscar";
			this->btnVeryBuscar->Size = System::Drawing::Size(150, 49);
			this->btnVeryBuscar->TabIndex = 9;
			this->btnVeryBuscar->Text = L"Visualización\r\ny Busqueda";
			this->btnVeryBuscar->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnVeryBuscar->UseVisualStyleBackColor = true;
			this->btnVeryBuscar->Click += gcnew System::EventHandler(this, &Socios_Form::btnVeryBuscar_Click);
			// 
			// pbSalir
			// 
			this->pbSalir->Enabled = false;
			this->pbSalir->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbSalir.Image")));
			this->pbSalir->Location = System::Drawing::Point(11, 287);
			this->pbSalir->Name = L"pbSalir";
			this->pbSalir->Size = System::Drawing::Size(37, 29);
			this->pbSalir->TabIndex = 8;
			this->pbSalir->TabStop = false;
			// 
			// btnVolver
			// 
			this->btnVolver->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVolver->Location = System::Drawing::Point(6, 277);
			this->btnVolver->Name = L"btnVolver";
			this->btnVolver->Size = System::Drawing::Size(150, 49);
			this->btnVolver->TabIndex = 7;
			this->btnVolver->Text = L"Volver";
			this->btnVolver->UseVisualStyleBackColor = true;
			this->btnVolver->Click += gcnew System::EventHandler(this, &Socios_Form::btnSalir_Click);
			// 
			// pbSocios
			// 
			this->pbSocios->Enabled = false;
			this->pbSocios->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbSocios.Image")));
			this->pbSocios->Location = System::Drawing::Point(11, 138);
			this->pbSocios->Name = L"pbSocios";
			this->pbSocios->Size = System::Drawing::Size(37, 29);
			this->pbSocios->TabIndex = 6;
			this->pbSocios->TabStop = false;
			// 
			// btnModificarSocio
			// 
			this->btnModificarSocio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnModificarSocio->Location = System::Drawing::Point(6, 128);
			this->btnModificarSocio->Name = L"btnModificarSocio";
			this->btnModificarSocio->Size = System::Drawing::Size(150, 49);
			this->btnModificarSocio->TabIndex = 5;
			this->btnModificarSocio->Text = L"Modificar\r\nSocio";
			this->btnModificarSocio->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnModificarSocio->UseVisualStyleBackColor = true;
			this->btnModificarSocio->Click += gcnew System::EventHandler(this, &Socios_Form::btnModificarSocio_Click);
			// 
			// pbPrestamos
			// 
			this->pbPrestamos->Enabled = false;
			this->pbPrestamos->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbPrestamos.Image")));
			this->pbPrestamos->Location = System::Drawing::Point(11, 83);
			this->pbPrestamos->Name = L"pbPrestamos";
			this->pbPrestamos->Size = System::Drawing::Size(37, 29);
			this->pbPrestamos->TabIndex = 4;
			this->pbPrestamos->TabStop = false;
			// 
			// btnBajaSocio
			// 
			this->btnBajaSocio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBajaSocio->Location = System::Drawing::Point(6, 73);
			this->btnBajaSocio->Name = L"btnBajaSocio";
			this->btnBajaSocio->Size = System::Drawing::Size(150, 49);
			this->btnBajaSocio->TabIndex = 3;
			this->btnBajaSocio->Text = L"Dar baja\r\nSocio";
			this->btnBajaSocio->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnBajaSocio->UseVisualStyleBackColor = true;
			this->btnBajaSocio->Click += gcnew System::EventHandler(this, &Socios_Form::btnBajaSocio_Click);
			// 
			// PBbotonLibros
			// 
			this->PBbotonLibros->Enabled = false;
			this->PBbotonLibros->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PBbotonLibros.Image")));
			this->PBbotonLibros->Location = System::Drawing::Point(11, 28);
			this->PBbotonLibros->Name = L"PBbotonLibros";
			this->PBbotonLibros->Size = System::Drawing::Size(37, 29);
			this->PBbotonLibros->TabIndex = 2;
			this->PBbotonLibros->TabStop = false;
			// 
			// btnAltaSocio
			// 
			this->btnAltaSocio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAltaSocio->Location = System::Drawing::Point(6, 18);
			this->btnAltaSocio->Name = L"btnAltaSocio";
			this->btnAltaSocio->Size = System::Drawing::Size(150, 49);
			this->btnAltaSocio->TabIndex = 0;
			this->btnAltaSocio->Text = L"Dar alta\r\nSocio";
			this->btnAltaSocio->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnAltaSocio->UseVisualStyleBackColor = true;
			this->btnAltaSocio->Click += gcnew System::EventHandler(this, &Socios_Form::btnAltaSocio_Click);
			// 
			// Panel_Contenedor
			// 
			this->Panel_Contenedor->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Panel_Contenedor->Location = System::Drawing::Point(163, 0);
			this->Panel_Contenedor->Name = L"Panel_Contenedor";
			this->Panel_Contenedor->Size = System::Drawing::Size(738, 429);
			this->Panel_Contenedor->TabIndex = 7;
			// 
			// Socios_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(901, 430);
			this->Controls->Add(this->Panel_Contenedor);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Socios_Form";
			this->Text = L"Socios_Form";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbLogo))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSalir))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSocios))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPrestamos))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBbotonLibros))->EndInit();
			this->ResumeLayout(false);

		}

//*----------------------------------------| Fin de codigo autogenerado por el Windows Form|--------------------------------------*
#pragma endregion

		template<class SubForm> //declaramos una plantilla de clase que indica que el código será génerico(funciona con cualquier tipo de dato), y dependerá del tipo de dato que se le pasa como parametro(en este caso SubForm).
		void abrirSubForm(SubForm FormHijo) //metodo para cargar un formulario hijo dentro de un panel como si fuera un control más en vez de abrir una ventana nueva
		{
			if (this->Panel_Contenedor->Controls->Count > 0) //verifica si hay otro formulario cargado en el panel
			{
				this->Panel_Contenedor->Controls->RemoveAt(0); //elimina todos los controladores activos en el panel para dejar espacio para el nuevo form
			}
			FormHijo->TopLevel = false; //form hijo pasa de comportarse como una ventana independiente a ser un control secundario(panel)
			FormHijo->Dock = DockStyle::Fill; //el form hijo va a ocupar todo el espacio del panel
			this->Panel_Contenedor->Controls->Add(FormHijo); //agrega el formulario al panel como si fuera un controlador
			this->Panel_Contenedor->Tag = FormHijo; //se guarda una referencia para identificarlo cuando se necesite ver que formulario está activo o si necesitamos  hacer algo sobre el
			FormHijo->Show(); //muestra el formulario dentro del panel
		}


	private: System::Void btnSalir_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close(); //this hace referencia al form activo
	}
private: System::Void btnAltaSocio_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->abrirSubForm(gcnew InterfazGrafica::AltaSocio_Form); //se llama la función para mostrar al formHijo y se le pasa como parametro una instancia (mediante el uso de memoria gestionada) del form AltaSocio_Form que está en el namespace InterfazGrafica 
}
private: System::Void btnBajaSocio_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->abrirSubForm(gcnew InterfazGrafica::BajaSocio_Form); //se llama la función para mostrar al formHijo y se le pasa como parametro una instancia (mediante el uso de memoria gestionada) del form BajaSocio_Form que está en el namespace InterfazGrafica 
}
private: System::Void btnModificarSocio_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->abrirSubForm(gcnew InterfazGrafica::ModificarSocio_Form); //se llama la función para mostrar al formHijo y se le pasa como parametro una instancia (mediante el uso de memoria gestionada) del form ModificarSocio_Form que está en el namespace InterfazGrafica 
}
private: System::Void btnVeryBuscar_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->abrirSubForm(gcnew InterfazGrafica::VerYBuscarSocios_Form); //se llama la función para mostrar al formHijo y se le pasa como parametro una instancia (mediante el uso de memoria gestionada) del form VerYBuscarSocios_Form que está en el namespace InterfazGrafica 
}
};
}
