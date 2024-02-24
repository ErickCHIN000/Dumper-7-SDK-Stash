#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_Threat.BPI_Threat_C
// (None)

class UClass* IBPI_Threat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_Threat_C");

	return Clss;
}


// BPI_Threat_C BPI_Threat.Default__BPI_Threat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_Threat_C* IBPI_Threat_C::GetDefaultObj()
{
	static class IBPI_Threat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_Threat_C*>(IBPI_Threat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_Threat.BPI_Threat_C.GetThreat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ThreateningActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Threat                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Threat_C::GetThreat(class AActor* ThreateningActor, double* Threat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Threat_C", "GetThreat");

	Params::IBPI_Threat_C_GetThreat_Params Parms{};

	Parms.ThreateningActor = ThreateningActor;

	UObject::ProcessEvent(Func, &Parms);

	if (Threat != nullptr)
		*Threat = Parms.Threat;

}


// Function BPI_Threat.BPI_Threat_C.ModifyThreat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ThreateningActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Threat                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Threat_C::ModifyThreat(class AActor* ThreateningActor, double Threat, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Threat_C", "ModifyThreat");

	Params::IBPI_Threat_C_ModifyThreat_Params Parms{};

	Parms.ThreateningActor = ThreateningActor;
	Parms.Threat = Threat;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}

}


