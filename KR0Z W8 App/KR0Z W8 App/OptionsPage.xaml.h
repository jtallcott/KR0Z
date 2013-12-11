//
// OptionsPage.xaml.h
// Declaration of the OptionsPage class
//

#pragma once

#include "Common\LayoutAwarePage.h" // Required by generated header
#include "OptionsPage.g.h"

namespace KR0Z_W8_App
{
	/// <summary>
	/// A basic page that provides characteristics common to most applications.
	/// </summary>
	public ref class OptionsPage sealed
	{
	public:
		OptionsPage();

	protected:
		virtual void LoadState(Platform::Object^ navigationParameter,
			Windows::Foundation::Collections::IMap<Platform::String^, Platform::Object^>^ pageState) override;
		virtual void SaveState(Windows::Foundation::Collections::IMap<Platform::String^, Platform::Object^>^ pageState) override;
	private:
		void Save_Prompt_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Music_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void SFX_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
