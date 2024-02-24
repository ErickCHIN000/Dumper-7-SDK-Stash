#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MainMenuButtonOwnerInterface.MainMenuButtonOwnerInterface_C
// (None)

class UClass* IMainMenuButtonOwnerInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenuButtonOwnerInterface_C");

	return Clss;
}


// MainMenuButtonOwnerInterface_C MainMenuButtonOwnerInterface.Default__MainMenuButtonOwnerInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IMainMenuButtonOwnerInterface_C* IMainMenuButtonOwnerInterface_C::GetDefaultObj()
{
	static class IMainMenuButtonOwnerInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IMainMenuButtonOwnerInterface_C*>(IMainMenuButtonOwnerInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MainMenuButtonOwnerInterface.MainMenuButtonOwnerInterface_C.OnButtonPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IMainMenuButtonOwnerInterface_C::OnButtonPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuButtonOwnerInterface_C", "OnButtonPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuButtonOwnerInterface.MainMenuButtonOwnerInterface_C.IsAnyPopupVisible
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IMainMenuButtonOwnerInterface_C::IsAnyPopupVisible(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuButtonOwnerInterface_C", "IsAnyPopupVisible");

	Params::IMainMenuButtonOwnerInterface_C_IsAnyPopupVisible_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}

}


