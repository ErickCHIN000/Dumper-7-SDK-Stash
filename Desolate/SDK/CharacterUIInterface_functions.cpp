#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CharacterUIInterface.CharacterUIInterface_C
// (None)

class UClass* ICharacterUIInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CharacterUIInterface_C");

	return Clss;
}


// CharacterUIInterface_C CharacterUIInterface.Default__CharacterUIInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ICharacterUIInterface_C* ICharacterUIInterface_C::GetDefaultObj()
{
	static class ICharacterUIInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ICharacterUIInterface_C*>(ICharacterUIInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CharacterUIInterface.CharacterUIInterface_C.ShowTutorial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TutorialID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ICharacterUIInterface_C::ShowTutorial(class FName TutorialID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterUIInterface_C", "ShowTutorial");

	Params::ICharacterUIInterface_C_ShowTutorial_Params Parms{};

	Parms.TutorialID = TutorialID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterUIInterface.CharacterUIInterface_C.HideUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ICharacterUIInterface_C::HideUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterUIInterface_C", "HideUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterUIInterface.CharacterUIInterface_C.Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ICharacterUIInterface_C::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterUIInterface_C", "Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterUIInterface.CharacterUIInterface_C.ToggleScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECharacterScreenType    ScreenType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ICharacterUIInterface_C::ToggleScreen(enum class ECharacterScreenType ScreenType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterUIInterface_C", "ToggleScreen");

	Params::ICharacterUIInterface_C_ToggleScreen_Params Parms{};

	Parms.ScreenType = ScreenType;

	UObject::ProcessEvent(Func, &Parms);

}

}


