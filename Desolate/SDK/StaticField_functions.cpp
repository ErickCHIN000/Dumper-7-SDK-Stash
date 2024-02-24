#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StaticField.StaticField_C
// (Actor)

class UClass* AStaticField_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StaticField_C");

	return Clss;
}


// StaticField_C StaticField.Default__StaticField_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStaticField_C* AStaticField_C::GetDefaultObj()
{
	static class AStaticField_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStaticField_C*>(AStaticField_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StaticField.StaticField_C.OnDamageApplied
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASHPlayerController*         PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnDamageApplied_Result                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AStaticField_C::OnDamageApplied(class ASHPlayerController* PlayerController, bool* Result, bool CallFunc_OnDamageApplied_Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StaticField_C", "OnDamageApplied");

	Params::AStaticField_C_OnDamageApplied_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.CallFunc_OnDamageApplied_Result = CallFunc_OnDamageApplied_Result;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function StaticField.StaticField_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AStaticField_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StaticField_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StaticField.StaticField_C.ExecuteUbergraph_StaticField
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStaticField_C::ExecuteUbergraph_StaticField(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StaticField_C", "ExecuteUbergraph_StaticField");

	Params::AStaticField_C_ExecuteUbergraph_StaticField_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


