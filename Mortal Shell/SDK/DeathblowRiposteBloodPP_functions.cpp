#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DeathblowRiposteBloodPP.DeathblowRiposteBloodPP_C
// (Actor)

class UClass* ADeathblowRiposteBloodPP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DeathblowRiposteBloodPP_C");

	return Clss;
}


// DeathblowRiposteBloodPP_C DeathblowRiposteBloodPP.Default__DeathblowRiposteBloodPP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADeathblowRiposteBloodPP_C* ADeathblowRiposteBloodPP_C::GetDefaultObj()
{
	static class ADeathblowRiposteBloodPP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADeathblowRiposteBloodPP_C*>(ADeathblowRiposteBloodPP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DeathblowRiposteBloodPP.DeathblowRiposteBloodPP_C.Animate__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ADeathblowRiposteBloodPP_C::Animate__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeathblowRiposteBloodPP_C", "Animate__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DeathblowRiposteBloodPP.DeathblowRiposteBloodPP_C.Animate__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ADeathblowRiposteBloodPP_C::Animate__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeathblowRiposteBloodPP_C", "Animate__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DeathblowRiposteBloodPP.DeathblowRiposteBloodPP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADeathblowRiposteBloodPP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeathblowRiposteBloodPP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DeathblowRiposteBloodPP.DeathblowRiposteBloodPP_C.ExecuteUbergraph_DeathblowRiposteBloodPP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADeathblowRiposteBloodPP_C::ExecuteUbergraph_DeathblowRiposteBloodPP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeathblowRiposteBloodPP_C", "ExecuteUbergraph_DeathblowRiposteBloodPP");

	Params::ADeathblowRiposteBloodPP_C_ExecuteUbergraph_DeathblowRiposteBloodPP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


