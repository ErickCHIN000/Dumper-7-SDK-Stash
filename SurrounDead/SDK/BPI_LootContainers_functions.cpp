#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_LootContainers.BPI_LootContainers_C
// (None)

class UClass* IBPI_LootContainers_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_LootContainers_C");

	return Clss;
}


// BPI_LootContainers_C BPI_LootContainers.Default__BPI_LootContainers_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_LootContainers_C* IBPI_LootContainers_C::GetDefaultObj()
{
	static class IBPI_LootContainers_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_LootContainers_C*>(IBPI_LootContainers_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_LootContainers.BPI_LootContainers_C.IsHeld?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Held_                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_LootContainers_C::IsHeld_(bool* Held_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_LootContainers_C", "IsHeld?");

	Params::IBPI_LootContainers_C_IsHeld__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Held_ != nullptr)
		*Held_ = Parms.Held_;

}


// Function BPI_LootContainers.BPI_LootContainers_C.GetSettings
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             ChanceToProduceNoise                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Default_ChanceToProduceNoise                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             DurationToHold                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_LootContainers_C::GetSettings(double* ChanceToProduceNoise, double* Default_ChanceToProduceNoise, double* DurationToHold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_LootContainers_C", "GetSettings");

	Params::IBPI_LootContainers_C_GetSettings_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ChanceToProduceNoise != nullptr)
		*ChanceToProduceNoise = Parms.ChanceToProduceNoise;

	if (Default_ChanceToProduceNoise != nullptr)
		*Default_ChanceToProduceNoise = Parms.Default_ChanceToProduceNoise;

	if (DurationToHold != nullptr)
		*DurationToHold = Parms.DurationToHold;

}

}


