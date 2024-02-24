#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Trophy_Bench.BP_Trophy_Bench_C
// (Actor)

class UClass* ABP_Trophy_Bench_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Trophy_Bench_C");

	return Clss;
}


// BP_Trophy_Bench_C BP_Trophy_Bench.Default__BP_Trophy_Bench_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Trophy_Bench_C* ABP_Trophy_Bench_C::GetDefaultObj()
{
	static class ABP_Trophy_Bench_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Trophy_Bench_C*>(ABP_Trophy_Bench_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Trophy_Bench.BP_Trophy_Bench_C.GrantBestiaryProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProcessingItem             Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Trophy_Bench_C::GrantBestiaryProgress(const struct FProcessingItem& Item, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Trophy_Bench_C", "GrantBestiaryProgress");

	Params::ABP_Trophy_Bench_C_GrantBestiaryProgress_Params Parms{};

	Parms.Item = Item;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Trophy_Bench.BP_Trophy_Bench_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Trophy_Bench_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Trophy_Bench_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Trophy_Bench.BP_Trophy_Bench_C.ExecuteUbergraph_BP_Trophy_Bench
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Trophy_Bench_C::ExecuteUbergraph_BP_Trophy_Bench(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Trophy_Bench_C", "ExecuteUbergraph_BP_Trophy_Bench");

	Params::ABP_Trophy_Bench_C_ExecuteUbergraph_BP_Trophy_Bench_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


