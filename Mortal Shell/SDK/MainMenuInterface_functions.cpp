#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MainMenuInterface.MainMenuInterface_C
// (None)

class UClass* IMainMenuInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenuInterface_C");

	return Clss;
}


// MainMenuInterface_C MainMenuInterface.Default__MainMenuInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IMainMenuInterface_C* IMainMenuInterface_C::GetDefaultObj()
{
	static class IMainMenuInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IMainMenuInterface_C*>(IMainMenuInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MainMenuInterface.MainMenuInterface_C.EscapeMenu_OnClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IMainMenuInterface_C::EscapeMenu_OnClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuInterface_C", "EscapeMenu_OnClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuInterface.MainMenuInterface_C.EscapeMenu_OnOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IMainMenuInterface_C::EscapeMenu_OnOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuInterface_C", "EscapeMenu_OnOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuInterface.MainMenuInterface_C.MainMenu_OnBrightnessConfirmed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IMainMenuInterface_C::MainMenu_OnBrightnessConfirmed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuInterface_C", "MainMenu_OnBrightnessConfirmed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuInterface.MainMenuInterface_C.MainMenu_SetMenuState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_MainMenu_State     Menu_State                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IMainMenuInterface_C::MainMenu_SetMenuState(enum class Enum_MainMenu_State Menu_State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuInterface_C", "MainMenu_SetMenuState");

	Params::IMainMenuInterface_C_MainMenu_SetMenuState_Params Parms{};

	Parms.Menu_State = Menu_State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuInterface.MainMenuInterface_C.MainMenu_CloseCredits
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IMainMenuInterface_C::MainMenu_CloseCredits()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuInterface_C", "MainMenu_CloseCredits");



	UObject::ProcessEvent(Func, nullptr);

}

}


