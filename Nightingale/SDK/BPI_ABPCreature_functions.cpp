#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_ABPCreature.BPI_ABPCreature_C
// (None)

class UClass* IBPI_ABPCreature_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_ABPCreature_C");

	return Clss;
}


// BPI_ABPCreature_C BPI_ABPCreature.Default__BPI_ABPCreature_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_ABPCreature_C* IBPI_ABPCreature_C::GetDefaultObj()
{
	static class IBPI_ABPCreature_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_ABPCreature_C*>(IBPI_ABPCreature_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_ABPCreature.BPI_ABPCreature_C.SetAITarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      AITarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_ABPCreature_C::SetAITarget(class AActor* AITarget, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_ABPCreature_C", "SetAITarget");

	Params::IBPI_ABPCreature_C_SetAITarget_Params Parms{};

	Parms.AITarget = AITarget;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPI_ABPCreature.BPI_ABPCreature_C.SetIsInHitResponse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsInHitResponse                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_ABPCreature_C::SetIsInHitResponse(bool IsInHitResponse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_ABPCreature_C", "SetIsInHitResponse");

	Params::IBPI_ABPCreature_C_SetIsInHitResponse_Params Parms{};

	Parms.IsInHitResponse = IsInHitResponse;

	UObject::ProcessEvent(Func, &Parms);

}

}


