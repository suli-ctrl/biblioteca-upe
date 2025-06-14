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
	/// Resumen de RegistrarPrestamo_Form
	/// </summary>
	public ref class RegistrarPrestamo_Form : public System::Windows::Forms::Form
	{
	public:
		RegistrarPrestamo_Form(void)
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
		~RegistrarPrestamo_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblRegistrarPrestamo;
	protected:

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
			this->lblRegistrarPrestamo = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblRegistrarPrestamo
			// 
			this->lblRegistrarPrestamo->AutoSize = true;
			this->lblRegistrarPrestamo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblRegistrarPrestamo->Location = System::Drawing::Point(567, 0);
			this->lblRegistrarPrestamo->Name = L"lblRegistrarPrestamo";
			this->lblRegistrarPrestamo->Size = System::Drawing::Size(155, 18);
			this->lblRegistrarPrestamo->TabIndex = 0;
			this->lblRegistrarPrestamo->Text = L"Registrar Prestamo";
			// 
			// RegistrarPrestamo_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(722, 390);
			this->Controls->Add(this->lblRegistrarPrestamo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"RegistrarPrestamo_Form";
			this->Text = L"RegistrarPrestamo_Form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		//*----------------------------------------| Fin de codigo autogenerado por el Windows Form|--------------------------------------*

#pragma endregion
	};
}
