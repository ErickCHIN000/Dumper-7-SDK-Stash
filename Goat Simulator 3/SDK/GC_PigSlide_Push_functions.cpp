#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_PigSlide_Push.GC_PigSlide_Push_C
// (None)

class UClass* UGC_PigSlide_Push_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_PigSlide_Push_C");

	return Clss;
}


// GC_PigSlide_Push_C GC_PigSlide_Push.Default__GC_PigSlide_Push_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_PigSlide_Push_C* UGC_PigSlide_Push_C::GetDefaultObj()
{
	static class UGC_PigSlide_Push_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_PigSlide_Push_C*>(UGC_PigSlide_Push_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GC_PigSlide_Push.GC_PigSlide_Push_C.K2_HandleGameplayCue
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_DynamicCast_AsCharacter                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Montage_Play_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGC_PigSlide_Push_C::K2_HandleGameplayCue(class AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters, bool K2Node_SwitchEnum_CmpSuccess, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, float CallFunc_Montage_Play_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_PigSlide_Push_C", "K2_HandleGameplayCue");

	Params::UGC_PigSlide_Push_C_K2_HandleGameplayCue_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter = K2Node_DynamicCast_AsCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_Montage_Play_ReturnValue = CallFunc_Montage_Play_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


