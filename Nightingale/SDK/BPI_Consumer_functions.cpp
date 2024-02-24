#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_Consumer.BPI_Consumer_C
// (None)

class UClass* IBPI_Consumer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_Consumer_C");

	return Clss;
}


// BPI_Consumer_C BPI_Consumer.Default__BPI_Consumer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_Consumer_C* IBPI_Consumer_C::GetDefaultObj()
{
	static class IBPI_Consumer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_Consumer_C*>(IBPI_Consumer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_Consumer.BPI_Consumer_C.HasHungrySquadMember
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bHasHungrySquadMember                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Consumer_C::HasHungrySquadMember(bool* bHasHungrySquadMember)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Consumer_C", "HasHungrySquadMember");

	Params::IBPI_Consumer_C_HasHungrySquadMember_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bHasHungrySquadMember != nullptr)
		*bHasHungrySquadMember = Parms.bHasHungrySquadMember;

}


// Function BPI_Consumer.BPI_Consumer_C.IsHungry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsHungry                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Consumer_C::IsHungry(bool* bIsHungry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Consumer_C", "IsHungry");

	Params::IBPI_Consumer_C_IsHungry_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bIsHungry != nullptr)
		*bIsHungry = Parms.bIsHungry;

}

}


