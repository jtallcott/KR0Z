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
	/// A page that displays a collection of item previews.  In the Split Application this page
	/// is used to display and select one of the available groups.
	/// </summary>
	public ref class CharacterSelectPage sealed
	{
	public:
		CharacterSelectPage();

	protected:
		virtual void LoadState(Platform::Object^ navigationParameter,
			Windows::Foundation::Collections::IMap<Platform::String^, Platform::Object^>^ pageState) override;
	};
}
