#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IPowerGenerator.IPowerGenerator_C
// (None)

class UClass* IIPowerGenerator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IPowerGenerator_C");

	return Clss;
}


// IPowerGenerator_C IPowerGenerator.Default__IPowerGenerator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IIPowerGenerator_C* IIPowerGenerator_C::GetDefaultObj()
{
	static class IIPowerGenerator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IIPowerGenerator_C*>(IIPowerGenerator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IPowerGenerator.IPowerGenerator_C.GetIsWorking
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsWorking                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIPowerGenerator_C::GetIsWorking(bool* IsWorking)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IPowerGenerator_C", "GetIsWorking");

	Params::IIPowerGenerator_C_GetIsWorking_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsWorking != nullptr)
		*IsWorking = Parms.IsWorking;

}


// Function IPowerGenerator.IPowerGenerator_C.Discharge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIPowerGenerator_C::Discharge(float Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IPowerGenerator_C", "Discharge");

	Params::IIPowerGenerator_C_Discharge_Params Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IPowerGenerator.IPowerGenerator_C.GetEnergyLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Level                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIPowerGenerator_C::GetEnergyLevel(float* Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IPowerGenerator_C", "GetEnergyLevel");

	Params::IIPowerGenerator_C_GetEnergyLevel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Level != nullptr)
		*Level = Parms.Level;

}


// Function IPowerGenerator.IPowerGenerator_C.GetPower
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                              Power                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIPowerGenerator_C::GetPower(float* Power)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IPowerGenerator_C", "GetPower");

	Params::IIPowerGenerator_C_GetPower_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Power != nullptr)
		*Power = Parms.Power;

}

}


