#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_BurningHeadbutt.GC_BurningHeadbutt_C
// (None)

class UClass* UGC_BurningHeadbutt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_BurningHeadbutt_C");

	return Clss;
}


// GC_BurningHeadbutt_C GC_BurningHeadbutt.Default__GC_BurningHeadbutt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_BurningHeadbutt_C* UGC_BurningHeadbutt_C::GetDefaultObj()
{
	static class UGC_BurningHeadbutt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_BurningHeadbutt_C*>(UGC_BurningHeadbutt_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GC_BurningHeadbutt.GC_BurningHeadbutt_C.K2_HandleGameplayCue
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGGoat*                     K2Node_DynamicCast_AsGGGoat                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGC_BurningHeadbutt_C::K2_HandleGameplayCue(class AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters, bool K2Node_SwitchEnum_CmpSuccess, class AGGGoat* K2Node_DynamicCast_AsGGGoat, bool K2Node_DynamicCast_bSuccess, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_BurningHeadbutt_C", "K2_HandleGameplayCue");

	Params::UGC_BurningHeadbutt_C_K2_HandleGameplayCue_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsGGGoat = K2Node_DynamicCast_AsGGGoat;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


