﻿//
// BasicPage.xaml.cpp
// Implementation of the BasicPage class
//

#include "pch.h"
#include "BasicPage.xaml.h"
#include "GamePage.xaml.h"
#include "CharacterSelectPage.xaml.h"
#include "OptionsPage.xaml.h"

using namespace KR0Z_W8_App;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The Basic Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=234237

BasicPage::BasicPage()
{
	InitializeComponent();
}

/// <summary>
/// Populates the page with content passed during navigation.  Any saved state is also
/// provided when recreating a page from a prior session.
/// </summary>
/// <param name="navigationParameter">The parameter value passed to
/// <see cref="Frame::Navigate(Type, Object)"/> when this page was initially requested.
/// </param>
/// <param name="pageState">A map of state preserved by this page during an earlier
/// session.  This will be null the first time a page is visited.</param>
void BasicPage::LoadState(Object^ navigationParameter, IMap<String^, Object^>^ pageState)
{
	(void) navigationParameter;	// Unused parameter
	(void) pageState;	// Unused parameter
}

/// <summary>
/// Preserves state associated with this page in case the application is suspended or the
/// page is discarded from the navigation cache.  Values must conform to the serialization
/// requirements of <see cref="SuspensionManager::SessionState"/>.
/// </summary>
/// <param name="pageState">An empty map to be populated with serializable state.</param>
void BasicPage::SaveState(IMap<String^, Object^>^ pageState)
{
	(void) pageState;	// Unused parameter
}


void KR0Z_W8_App::BasicPage::Button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	if(this->Frame != nullptr)
	{
		this->Frame->Navigate(GamePage::typeid);
	}
}


void KR0Z_W8_App::BasicPage::CS_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	if(this->Frame != nullptr)
	{
		this->Frame->Navigate(CharacterSelectPage::typeid);
	}
}


void KR0Z_W8_App::BasicPage::Opt_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	if(this->Frame != nullptr)
	{
		this->Frame->Navigate(OptionsPage::typeid);
	}
}
