//
// CharacterSelectPage.xaml.h
// Declaration of the CharacterSelectPage class
//

#pragma once

#include "Common\LayoutAwarePage.h" // Required by generated header
#include "CharacterSelectPage.g.h"

namespace KR0Z_W8_App
{
	/// <summary>
	/// A basic page that provides characteristics common to most applications.
	/// </summary>
	public ref class CharacterSelectPage sealed
	{
	public:
		CharacterSelectPage();

	protected:
		virtual void LoadState(Platform::Object^ navigationParameter,
			Windows::Foundation::Collections::IMap<Platform::String^, Platform::Object^>^ pageState) override;
		virtual void SaveState(Windows::Foundation::Collections::IMap<Platform::String^, Platform::Object^>^ pageState) override;
	};
}
