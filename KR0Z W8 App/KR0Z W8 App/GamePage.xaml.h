//
// GamePage.xaml.h
// Declaration of the GamePage class
//

#pragma once

#include "Common\LayoutAwarePage.h" // Required by generated header
#include "GamePage.g.h"

namespace KR0Z_W8_App
{
	/// <summary>
	/// A basic page that provides characteristics common to most applications.
	/// </summary>
	public ref class GamePage sealed
	{
	public:
		GamePage();

	protected:
		virtual void LoadState(Platform::Object^ navigationParameter,
			Windows::Foundation::Collections::IMap<Platform::String^, Platform::Object^>^ pageState) override;
		virtual void SaveState(Windows::Foundation::Collections::IMap<Platform::String^, Platform::Object^>^ pageState) override;
	private:
		void TextBox_TextChanged_1(Platform::Object^ sender, Windows::UI::Xaml::Controls::TextChangedEventArgs^ e);
		void OnKeyDown(Platform::Object^ sender, Windows::UI::Xaml::Input::KeyRoutedEventArgs^ e);
		void KeyDownHandler(Platform::Object^ sender, Windows::UI::Xaml::Input::KeyRoutedEventArgs^ e);
		void Focus(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void textBox1_changed(Platform::Object^ sender, Windows::UI::Xaml::Controls::TextChangedEventArgs^ e);
		void KeyDownHandle(Platform::Object^ sender, Windows::UI::Xaml::Input::KeyRoutedEventArgs^ e);
	};
}
