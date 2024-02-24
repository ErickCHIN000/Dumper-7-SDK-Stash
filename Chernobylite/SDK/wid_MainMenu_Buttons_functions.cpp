#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_MainMenu_Buttons.wid_MainMenu_Buttons_C
// (None)

class UClass* UWid_MainMenu_Buttons_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_MainMenu_Buttons_C");

	return Clss;
}


// wid_MainMenu_Buttons_C wid_MainMenu_Buttons.Default__wid_MainMenu_Buttons_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_MainMenu_Buttons_C* UWid_MainMenu_Buttons_C::GetDefaultObj()
{
	static class UWid_MainMenu_Buttons_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_MainMenu_Buttons_C*>(UWid_MainMenu_Buttons_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_MainMenu_Buttons.wid_MainMenu_Buttons_C.SetButtonsOwner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IMainMenuButtonOwnerInterface_C>Owner                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_Buttons_C::SetButtonsOwner(TScriptInterface<class IMainMenuButtonOwnerInterface_C> Owner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Buttons_C", "SetButtonsOwner");

	Params::UWid_MainMenu_Buttons_C_SetButtonsOwner_Params Parms{};

	Parms.Owner = Owner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Buttons.wid_MainMenu_Buttons_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Buttons_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Buttons_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Buttons.wid_MainMenu_Buttons_C.ExecuteUbergraph_wid_MainMenu_Buttons
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Buttons_C::ExecuteUbergraph_wid_MainMenu_Buttons(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Buttons_C", "ExecuteUbergraph_wid_MainMenu_Buttons");

	Params::UWid_MainMenu_Buttons_C_ExecuteUbergraph_wid_MainMenu_Buttons_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


