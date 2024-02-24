#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_GenericAction.BPI_GenericAction_C
// (None)

class UClass* IBPI_GenericAction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_GenericAction_C");

	return Clss;
}


// BPI_GenericAction_C BPI_GenericAction.Default__BPI_GenericAction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_GenericAction_C* IBPI_GenericAction_C::GetDefaultObj()
{
	static class IBPI_GenericAction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_GenericAction_C*>(IBPI_GenericAction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_GenericAction.BPI_GenericAction_C.GenericActionWithCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusPlayerCharacter*      Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_GenericAction_C::GenericActionWithCharacter(class AIcarusPlayerCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_GenericAction_C", "GenericActionWithCharacter");

	Params::IBPI_GenericAction_C_GenericActionWithCharacter_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_GenericAction.BPI_GenericAction_C.GenericAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_GenericAction_C::GenericAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_GenericAction_C", "GenericAction");



	UObject::ProcessEvent(Func, nullptr);

}

}


