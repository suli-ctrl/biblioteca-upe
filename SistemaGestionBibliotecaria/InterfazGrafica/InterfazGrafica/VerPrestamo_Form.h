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
	/// Resumen de VerPrestamo_Form
	/// </summary>
	public ref class VerPrestamo_Form : public System::Windows::Forms::Form
	{
	public:
		VerPrestamo_Form(void)
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
		~VerPrestamo_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblVerPrestamos;
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
			this->lblVerPrestamos = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblVerPrestamos
			// 
			this->lblVerPrestamos->AutoSize = true;
			this->lblVerPrestamos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblVerPrestamos->Location = System::Drawing::Point(547, -3);
			this->lblVerPrestamos->Name = L"lblVerPrestamos";
			this->lblVerPrestamos->Size = System::Drawing::Size(177, 18);
			this->lblVerPrestamos->TabIndex = 0;
			this->lblVerPrestamos->Text = L"Ver prestamos activos";
			// 
			// VerPrestamo_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(722, 390);
			this->Controls->Add(this->lblVerPrestamos);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"VerPrestamo_Form";
			this->Text = L"VerPrestamo_Form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		//*----------------------------------------| Fin de codigo autogenerado por el Windows Form|--------------------------------------*

#pragma endregion
	};
}
