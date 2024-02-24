#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericEnergyGenerator.GenericEnergyGenerator_C
// (Actor)

class UClass* AGenericEnergyGenerator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericEnergyGenerator_C");

	return Clss;
}


// GenericEnergyGenerator_C GenericEnergyGenerator.Default__GenericEnergyGenerator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericEnergyGenerator_C* AGenericEnergyGenerator_C::GetDefaultObj()
{
	static class AGenericEnergyGenerator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericEnergyGenerator_C*>(AGenericEnergyGenerator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GenericEnergyGenerator.GenericEnergyGenerator_C.GetPower
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                              Power                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGenericEnergyGenerator_C::GetPower(float* Power)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericEnergyGenerator_C", "GetPower");

	Params::AGenericEnergyGenerator_C_GetPower_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Power != nullptr)
		*Power = Parms.Power;

}


// Function GenericEnergyGenerator.GenericEnergyGenerator_C.GetEnergyLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Level                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGenericEnergyGenerator_C::GetEnergyLevel(float* Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericEnergyGenerator_C", "GetEnergyLevel");

	Params::AGenericEnergyGenerator_C_GetEnergyLevel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Level != nullptr)
		*Level = Parms.Level;

}


// Function GenericEnergyGenerator.GenericEnergyGenerator_C.GetIsWorking
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsWorking                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGenericEnergyGenerator_C::GetIsWorking(bool* IsWorking)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericEnergyGenerator_C", "GetIsWorking");

	Params::AGenericEnergyGenerator_C_GetIsWorking_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsWorking != nullptr)
		*IsWorking = Parms.IsWorking;

}


// Function GenericEnergyGenerator.GenericEnergyGenerator_C.Discharge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGenericEnergyGenerator_C::Discharge(float Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericEnergyGenerator_C", "Discharge");

	Params::AGenericEnergyGenerator_C_Discharge_Params Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GenericEnergyGenerator.GenericEnergyGenerator_C.ExecuteUbergraph_GenericEnergyGenerator
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Amount                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGenericEnergyGenerator_C::ExecuteUbergraph_GenericEnergyGenerator(int32 EntryPoint, float K2Node_Event_Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericEnergyGenerator_C", "ExecuteUbergraph_GenericEnergyGenerator");

	Params::AGenericEnergyGenerator_C_ExecuteUbergraph_GenericEnergyGenerator_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Amount = K2Node_Event_Amount;

	UObject::ProcessEvent(Func, &Parms);

}

}


