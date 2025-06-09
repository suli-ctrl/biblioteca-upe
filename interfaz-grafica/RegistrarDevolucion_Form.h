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
	/// Resumen de RegistrarDevolucion_Form
	/// </summary>
	public ref class RegistrarDevolucion_Form : public System::Windows::Forms::Form
	{
	public:
		RegistrarDevolucion_Form(void)
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
		~RegistrarDevolucion_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblRegistrarDevo;
	protected:

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
			this->lblRegistrarDevo = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblRegistrarDevo
			// 
			this->lblRegistrarDevo->AutoSize = true;
			this->lblRegistrarDevo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRegistrarDevo->Location = System::Drawing::Point(559, -1);
			this->lblRegistrarDevo->Name = L"lblRegistrarDevo";
			this->lblRegistrarDevo->Size = System::Drawing::Size(163, 18);
			this->lblRegistrarDevo->TabIndex = 0;
			this->lblRegistrarDevo->Text = L"Registrar devolución";
			// 
			// RegistrarDevolucion_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(722, 390);
			this->Controls->Add(this->lblRegistrarDevo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"RegistrarDevolucion_Form";
			this->Text = L"RegistrarDevolucion_Form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

//*----------------------------------------| Fin de codigo autogenerado por el Windows Form|--------------------------------------*

#pragma endregion
	};
}
