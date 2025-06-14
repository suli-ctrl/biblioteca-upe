#pragma once

#include "Libros_Form.h" //Incluimos los subformularios para poder acceder a ellos y mostrarlos
#include "Socios_Form.h"
#include "Prestamos_Form.h"

//*----------------------------------------| Inicio de codigo autogenerado por el Windows Form|--------------------------------------*
namespace InterfazGrafica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Inicio_Form : public System::Windows::Forms::Form
	{
	public:
		Inicio_Form(void)
		{
			InitializeComponent();
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen; //mantiene centrado al formulario
		}
	protected:
		~Inicio_Form()
		{
			if (components)
			{
				delete components; //limpia los recursos que no se estan usando
			}
		}
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ lblBibliotecaUpe;
	private: System::Windows::Forms::PictureBox^ pbLogo;







	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ lblOpciones;
	private: System::Windows::Forms::Button^ btnLibros;





	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ PBbotonLibros;
	private: System::Windows::Forms::PictureBox^ pbSalir;


	private: System::Windows::Forms::Button^ btnSalir;
	private: System::Windows::Forms::PictureBox^ pbSocios;


	private: System::Windows::Forms::Button^ btnSocios;
	private: System::Windows::Forms::PictureBox^ pbPrestamos;


	private: System::Windows::Forms::Button^ btnPrestamos;
	private: System::Windows::Forms::Label^ lblBienvenida;




	protected:
	protected:
	private:
		System::ComponentModel::Container^ components; //variable del diseñador necesario

#pragma region Windows Form Designer generated code
		void InitializeComponent(void) /// Método necesario para admitir el Diseñador. 
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Inicio_Form::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lblBibliotecaUpe = (gcnew System::Windows::Forms::Label());
			this->pbLogo = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pbSalir = (gcnew System::Windows::Forms::PictureBox());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->pbSocios = (gcnew System::Windows::Forms::PictureBox());
			this->btnSocios = (gcnew System::Windows::Forms::Button());
			this->pbPrestamos = (gcnew System::Windows::Forms::PictureBox());
			this->btnPrestamos = (gcnew System::Windows::Forms::Button());
			this->PBbotonLibros = (gcnew System::Windows::Forms::PictureBox());
			this->btnLibros = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->lblOpciones = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lblBienvenida = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbLogo))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSalir))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSocios))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPrestamos))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBbotonLibros))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel2->SuspendLayout();
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
			this->panel1->TabIndex = 0;
			// 
			// lblBibliotecaUpe
			// 
			this->lblBibliotecaUpe->AutoSize = true;
			this->lblBibliotecaUpe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBibliotecaUpe->Location = System::Drawing::Point(54, 8);
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
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->pbSalir);
			this->panel3->Controls->Add(this->btnSalir);
			this->panel3->Controls->Add(this->pbSocios);
			this->panel3->Controls->Add(this->btnSocios);
			this->panel3->Controls->Add(this->pbPrestamos);
			this->panel3->Controls->Add(this->btnPrestamos);
			this->panel3->Controls->Add(this->PBbotonLibros);
			this->panel3->Controls->Add(this->btnLibros);
			this->panel3->Location = System::Drawing::Point(0, 91);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(164, 338);
			this->panel3->TabIndex = 2;
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
			// btnSalir
			// 
			this->btnSalir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSalir->Location = System::Drawing::Point(6, 277);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(150, 49);
			this->btnSalir->TabIndex = 7;
			this->btnSalir->Text = L"Salir";
			this->btnSalir->UseVisualStyleBackColor = true;
			this->btnSalir->Click += gcnew System::EventHandler(this, &Inicio_Form::btnSalir_Click);
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
			// btnSocios
			// 
			this->btnSocios->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSocios->Location = System::Drawing::Point(6, 128);
			this->btnSocios->Name = L"btnSocios";
			this->btnSocios->Size = System::Drawing::Size(150, 49);
			this->btnSocios->TabIndex = 5;
			this->btnSocios->Text = L"Socios";
			this->btnSocios->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnSocios->UseVisualStyleBackColor = true;
			this->btnSocios->Click += gcnew System::EventHandler(this, &Inicio_Form::btnSocios_Click);
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
			// btnPrestamos
			// 
			this->btnPrestamos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPrestamos->Location = System::Drawing::Point(6, 73);
			this->btnPrestamos->Name = L"btnPrestamos";
			this->btnPrestamos->Size = System::Drawing::Size(150, 49);
			this->btnPrestamos->TabIndex = 3;
			this->btnPrestamos->Text = L"Prestamos";
			this->btnPrestamos->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnPrestamos->UseVisualStyleBackColor = true;
			this->btnPrestamos->Click += gcnew System::EventHandler(this, &Inicio_Form::btnPrestamos_Click);
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
			// btnLibros
			// 
			this->btnLibros->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLibros->Location = System::Drawing::Point(6, 18);
			this->btnLibros->Name = L"btnLibros";
			this->btnLibros->Size = System::Drawing::Size(150, 49);
			this->btnLibros->TabIndex = 0;
			this->btnLibros->Text = L"Libros";
			this->btnLibros->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnLibros->UseVisualStyleBackColor = true;
			this->btnLibros->Click += gcnew System::EventHandler(this, &Inicio_Form::btnLibros_Click);
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->lblOpciones);
			this->panel4->Location = System::Drawing::Point(0, 52);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(164, 41);
			this->panel4->TabIndex = 3;
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
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->lblBienvenida);
			this->panel2->Location = System::Drawing::Point(163, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(738, 429);
			this->panel2->TabIndex = 4;
			// 
			// lblBienvenida
			// 
			this->lblBienvenida->AutoSize = true;
			this->lblBienvenida->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBienvenida->Location = System::Drawing::Point(113, 141);
			this->lblBienvenida->Name = L"lblBienvenida";
			this->lblBienvenida->Size = System::Drawing::Size(522, 62);
			this->lblBienvenida->TabIndex = 0;
			this->lblBienvenida->Text = L"Bienvenido al Sistema de Gestión de la\r\n Biblioteca UPE";
			// 
			// Inicio_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(901, 430);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Inicio_Form";
			this->Text = L"Inicio_Form";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbLogo))->EndInit();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSalir))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSocios))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPrestamos))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBbotonLibros))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}

		//-------------------------------------------| Fin de codigo autogenerado por el Windows Form |--------------------------------------*

#pragma endregion


	private: System::Void btnSalir_Click(System::Object^ sender, System::EventArgs^ e) //boton que cierra el programa
	{
		this->Close();
	}
	private: System::Void btnLibros_Click(System::Object^ sender, System::EventArgs^ e) //boton para ir al form de libros
	{
		InterfazGrafica::Libros_Form^ librosOpciones = gcnew InterfazGrafica::Libros_Form; //se crea una nueva ventana del tipo Libros_Form utilizando memoria gestionada y se la referencia con librosOpciones
		this->Visible = false; //oculta el formulario actual (this hace referencia al formulario activo)
		librosOpciones->ShowDialog(); //mostramos unicamente Libros_Form hasta que se cierre el mismo
		this->Visible = true; //vuelve a mostrar el formulario actual una vez que se cierra Libros_Form

	}
	private: System::Void btnPrestamos_Click(System::Object^ sender, System::EventArgs^ e) //boton para ir al form de prestamos
	{
		InterfazGrafica::Prestamos_Form^ prestamosOpciones = gcnew InterfazGrafica::Prestamos_Form;//se crea una nueva ventana del tipo Prestamos_Form utilizando memoria gestionada y se la referencia con prestamosOpciones
		this->Visible = false;
		prestamosOpciones->ShowDialog(); //mostramos unicamente Prestamos_Form hasta que se cierre el mismo
		this->Visible = true;

	}
	private: System::Void btnSocios_Click(System::Object^ sender, System::EventArgs^ e) //boton para ir al form de socios
	{
		InterfazGrafica::Socios_Form^ sociosOpciones = gcnew InterfazGrafica::Socios_Form; //se crea una nueva ventana del tipo Socios_Form utilizando memoria gestionada y se la referencia con sociosOpciones
		this->Visible = false;
		sociosOpciones->ShowDialog(); //mostramos unicamente Socios_Form hasta que se cierre el mismo
		this->Visible = true;
	}
	};
}
