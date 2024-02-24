#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkinningBench.BP_SkinningBench_C
// (Actor)

class UClass* ABP_SkinningBench_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkinningBench_C");

	return Clss;
}


// BP_SkinningBench_C BP_SkinningBench.Default__BP_SkinningBench_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkinningBench_C* ABP_SkinningBench_C::GetDefaultObj()
{
	static class ABP_SkinningBench_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkinningBench_C*>(ABP_SkinningBench_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SkinningBench.BP_SkinningBench_C.GrantBestiaryProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProcessingItem             Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int32                              TotalCount                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerDataComponent*        PlayerData                                                       (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SkinningBench_C::GrantBestiaryProgress(const struct FProcessingItem& Item, int32 TotalCount, class UPlayerDataComponent* PlayerData, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkinningBench_C", "GrantBestiaryProgress");

	Params::ABP_SkinningBench_C_GrantBestiaryProgress_Params Parms{};

	Parms.Item = Item;
	Parms.TotalCount = TotalCount;
	Parms.PlayerData = PlayerData;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkinningBench.BP_SkinningBench_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SkinningBench_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkinningBench_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkinningBench.BP_SkinningBench_C.ExecuteUbergraph_BP_SkinningBench
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SkinningBench_C::ExecuteUbergraph_BP_SkinningBench(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkinningBench_C", "ExecuteUbergraph_BP_SkinningBench");

	Params::ABP_SkinningBench_C_ExecuteUbergraph_BP_SkinningBench_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


