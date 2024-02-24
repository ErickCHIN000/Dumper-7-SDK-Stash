#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_Quest.BPI_Quest_C
// (None)

class UClass* IBPI_Quest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_Quest_C");

	return Clss;
}


// BPI_Quest_C BPI_Quest.Default__BPI_Quest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_Quest_C* IBPI_Quest_C::GetDefaultObj()
{
	static class IBPI_Quest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_Quest_C*>(IBPI_Quest_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_Quest.BPI_Quest_C.GetQuestArgument
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Argument                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void IBPI_Quest_C::GetQuestArgument(const class FString& Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Quest_C", "GetQuestArgument");

	Params::IBPI_Quest_C_GetQuestArgument_Params Parms{};

	Parms.Argument = Argument;

	UObject::ProcessEvent(Func, &Parms);

}

}


