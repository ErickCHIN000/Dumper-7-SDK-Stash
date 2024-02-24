#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_GlobalActorInfo.BPI_GlobalActorInfo_C
// (None)

class UClass* IBPI_GlobalActorInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_GlobalActorInfo_C");

	return Clss;
}


// BPI_GlobalActorInfo_C BPI_GlobalActorInfo.Default__BPI_GlobalActorInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_GlobalActorInfo_C* IBPI_GlobalActorInfo_C::GetDefaultObj()
{
	static class IBPI_GlobalActorInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_GlobalActorInfo_C*>(IBPI_GlobalActorInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_GlobalActorInfo.BPI_GlobalActorInfo_C.ActorDead?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Dead_                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_GlobalActorInfo_C::ActorDead_(bool* Dead_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_GlobalActorInfo_C", "ActorDead?");

	Params::IBPI_GlobalActorInfo_C_ActorDead__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Dead_ != nullptr)
		*Dead_ = Parms.Dead_;

}

}


