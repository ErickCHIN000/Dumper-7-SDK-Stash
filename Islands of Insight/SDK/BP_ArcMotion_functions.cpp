#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ArcMotion.BP_ArcMotion_C
// (Actor)

class UClass* ABP_ArcMotion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ArcMotion_C");

	return Clss;
}


// BP_ArcMotion_C BP_ArcMotion.Default__BP_ArcMotion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ArcMotion_C* ABP_ArcMotion_C::GetDefaultObj()
{
	static class ABP_ArcMotion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ArcMotion_C*>(ABP_ArcMotion_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ArcMotion.BP_ArcMotion_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ArcMotion_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ArcMotion_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ArcMotion.BP_ArcMotion_C.ExecuteUbergraph_BP_ArcMotion
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_CalculateVelocityFromJumpPad_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ArcMotion_C::ExecuteUbergraph_BP_ArcMotion(int32 EntryPoint, const struct FVector& CallFunc_CalculateVelocityFromJumpPad_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ArcMotion_C", "ExecuteUbergraph_BP_ArcMotion");

	Params::ABP_ArcMotion_C_ExecuteUbergraph_BP_ArcMotion_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CalculateVelocityFromJumpPad_ReturnValue = CallFunc_CalculateVelocityFromJumpPad_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


