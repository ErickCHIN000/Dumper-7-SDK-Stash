#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Kitchen_Bench.BP_Kitchen_Bench_C
// (Actor)

class UClass* ABP_Kitchen_Bench_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Kitchen_Bench_C");

	return Clss;
}


// BP_Kitchen_Bench_C BP_Kitchen_Bench.Default__BP_Kitchen_Bench_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Kitchen_Bench_C* ABP_Kitchen_Bench_C::GetDefaultObj()
{
	static class ABP_Kitchen_Bench_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Kitchen_Bench_C*>(ABP_Kitchen_Bench_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Kitchen_Bench.BP_Kitchen_Bench_C.WaterNetworkStateUpdated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FModifier                   K2Node_MakeStruct_Modifier                                       (NoDestructor)
// int32                              CallFunc_AddModifierState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveModifierState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Kitchen_Bench_C::WaterNetworkStateUpdated(bool Active, const struct FModifier& K2Node_MakeStruct_Modifier, int32 CallFunc_AddModifierState_ReturnValue, bool CallFunc_RemoveModifierState_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Kitchen_Bench_C", "WaterNetworkStateUpdated");

	Params::ABP_Kitchen_Bench_C_WaterNetworkStateUpdated_Params Parms{};

	Parms.Active = Active;
	Parms.K2Node_MakeStruct_Modifier = K2Node_MakeStruct_Modifier;
	Parms.CallFunc_AddModifierState_ReturnValue = CallFunc_AddModifierState_ReturnValue;
	Parms.CallFunc_RemoveModifierState_ReturnValue = CallFunc_RemoveModifierState_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Kitchen_Bench.BP_Kitchen_Bench_C.ActorCanConnectToNetwork
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EIcarusResourceType     Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_Kitchen_Bench_C::ActorCanConnectToNetwork(enum class EIcarusResourceType Type, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Kitchen_Bench_C", "ActorCanConnectToNetwork");

	Params::ABP_Kitchen_Bench_C_ActorCanConnectToNetwork_Params Parms{};

	Parms.Type = Type;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Kitchen_Bench.BP_Kitchen_Bench_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Kitchen_Bench_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Kitchen_Bench_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Kitchen_Bench.BP_Kitchen_Bench_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Kitchen_Bench_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Kitchen_Bench_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Kitchen_Bench.BP_Kitchen_Bench_C.ExecuteUbergraph_BP_Kitchen_Bench
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Kitchen_Bench_C::ExecuteUbergraph_BP_Kitchen_Bench(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Kitchen_Bench_C", "ExecuteUbergraph_BP_Kitchen_Bench");

	Params::ABP_Kitchen_Bench_C_ExecuteUbergraph_BP_Kitchen_Bench_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


