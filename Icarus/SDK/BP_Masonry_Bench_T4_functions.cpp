#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Masonry_Bench_T4.BP_Masonry_Bench_T4_C
// (Actor)

class UClass* ABP_Masonry_Bench_T4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Masonry_Bench_T4_C");

	return Clss;
}


// BP_Masonry_Bench_T4_C BP_Masonry_Bench_T4.Default__BP_Masonry_Bench_T4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Masonry_Bench_T4_C* ABP_Masonry_Bench_T4_C::GetDefaultObj()
{
	static class ABP_Masonry_Bench_T4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Masonry_Bench_T4_C*>(ABP_Masonry_Bench_T4_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Masonry_Bench_T4.BP_Masonry_Bench_T4_C.WaterNetworkStateUpdated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FModifier                   K2Node_MakeStruct_Modifier                                       (NoDestructor)
// int32                              CallFunc_AddModifierState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveModifierState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Masonry_Bench_T4_C::WaterNetworkStateUpdated(bool Active, const struct FModifier& K2Node_MakeStruct_Modifier, int32 CallFunc_AddModifierState_ReturnValue, bool CallFunc_RemoveModifierState_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Masonry_Bench_T4_C", "WaterNetworkStateUpdated");

	Params::ABP_Masonry_Bench_T4_C_WaterNetworkStateUpdated_Params Parms{};

	Parms.Active = Active;
	Parms.K2Node_MakeStruct_Modifier = K2Node_MakeStruct_Modifier;
	Parms.CallFunc_AddModifierState_ReturnValue = CallFunc_AddModifierState_ReturnValue;
	Parms.CallFunc_RemoveModifierState_ReturnValue = CallFunc_RemoveModifierState_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Masonry_Bench_T4.BP_Masonry_Bench_T4_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Masonry_Bench_T4_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Masonry_Bench_T4_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Masonry_Bench_T4.BP_Masonry_Bench_T4_C.ExecuteUbergraph_BP_Masonry_Bench_T4
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Masonry_Bench_T4_C::ExecuteUbergraph_BP_Masonry_Bench_T4(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Masonry_Bench_T4_C", "ExecuteUbergraph_BP_Masonry_Bench_T4");

	Params::ABP_Masonry_Bench_T4_C_ExecuteUbergraph_BP_Masonry_Bench_T4_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


