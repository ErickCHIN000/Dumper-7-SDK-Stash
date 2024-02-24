#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RunePrereqWire.BP_RunePrereqWire_C
// (Actor)

class UClass* ABP_RunePrereqWire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RunePrereqWire_C");

	return Clss;
}


// BP_RunePrereqWire_C BP_RunePrereqWire.Default__BP_RunePrereqWire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_RunePrereqWire_C* ABP_RunePrereqWire_C::GetDefaultObj()
{
	static class ABP_RunePrereqWire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_RunePrereqWire_C*>(ABP_RunePrereqWire_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_RunePrereqWire.BP_RunePrereqWire_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_Conv_LinearColorToVector_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RunePrereqWire_C::UserConstructionScript(const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RunePrereqWire_C", "UserConstructionScript");

	Params::ABP_RunePrereqWire_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_Conv_LinearColorToVector_ReturnValue = CallFunc_Conv_LinearColorToVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RunePrereqWire.BP_RunePrereqWire_C.SolveWire_Timeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_RunePrereqWire_C::SolveWire_Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RunePrereqWire_C", "SolveWire_Timeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RunePrereqWire.BP_RunePrereqWire_C.SolveWire_Timeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_RunePrereqWire_C::SolveWire_Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RunePrereqWire_C", "SolveWire_Timeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RunePrereqWire.BP_RunePrereqWire_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_RunePrereqWire_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RunePrereqWire_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RunePrereqWire.BP_RunePrereqWire_C.BP_ActivateWire
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_RunePrereqWire_C::BP_ActivateWire()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RunePrereqWire_C", "BP_ActivateWire");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RunePrereqWire.BP_RunePrereqWire_C.ExecuteUbergraph_BP_RunePrereqWire
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_LinearColorToVector_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RunePrereqWire_C::ExecuteUbergraph_BP_RunePrereqWire(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RunePrereqWire_C", "ExecuteUbergraph_BP_RunePrereqWire");

	Params::ABP_RunePrereqWire_C_ExecuteUbergraph_BP_RunePrereqWire_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.CallFunc_Conv_LinearColorToVector_ReturnValue = CallFunc_Conv_LinearColorToVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


