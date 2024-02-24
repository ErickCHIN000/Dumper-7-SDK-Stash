#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SK_Dev_Hammer_AnimBP.SK_Dev_Hammer_AnimBP_C
// (None)

class UClass* USK_Dev_Hammer_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_Dev_Hammer_AnimBP_C");

	return Clss;
}


// SK_Dev_Hammer_AnimBP_C SK_Dev_Hammer_AnimBP.Default__SK_Dev_Hammer_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_Dev_Hammer_AnimBP_C* USK_Dev_Hammer_AnimBP_C::GetDefaultObj()
{
	static class USK_Dev_Hammer_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_Dev_Hammer_AnimBP_C*>(USK_Dev_Hammer_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SK_Dev_Hammer_AnimBP.SK_Dev_Hammer_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USK_Dev_Hammer_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Dev_Hammer_AnimBP_C", "AnimGraph");

	Params::USK_Dev_Hammer_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function SK_Dev_Hammer_AnimBP.SK_Dev_Hammer_AnimBP_C.GetHammerActionable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBP_ActionableBehaviour_Flying_Hammer_C*Hammer                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ActionableBehaviour_Flying_Hammer_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_Dev_Hammer_AnimBP_C::GetHammerActionable(class UBP_ActionableBehaviour_Flying_Hammer_C** Hammer, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue, class UBP_ActionableBehaviour_Flying_Hammer_C* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Dev_Hammer_AnimBP_C", "GetHammerActionable");

	Params::USK_Dev_Hammer_AnimBP_C_GetHammerActionable_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Hammer != nullptr)
		*Hammer = Parms.Hammer;

}


// Function SK_Dev_Hammer_AnimBP.SK_Dev_Hammer_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_Dev_Hammer_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Dev_Hammer_AnimBP_C", "BlueprintUpdateAnimation");

	Params::USK_Dev_Hammer_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SK_Dev_Hammer_AnimBP.SK_Dev_Hammer_AnimBP_C.AnimNotify_FmodEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USK_Dev_Hammer_AnimBP_C::AnimNotify_FmodEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Dev_Hammer_AnimBP_C", "AnimNotify_FmodEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_Dev_Hammer_AnimBP.SK_Dev_Hammer_AnimBP_C.ExecuteUbergraph_SK_Dev_Hammer_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ActionableBehaviour_Flying_Hammer_C*CallFunc_GetHammerActionable_Hammer                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_ActionableBehaviour_Flying_Hammer_C*CallFunc_GetHammerActionable_Hammer_1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ActionableBehaviour_Flying_Hammer_C*CallFunc_GetHammerActionable_Hammer_2                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ActionableBehaviour_Flying_Hammer_C*CallFunc_GetHammerActionable_Hammer_3                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetOwningComponent_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFMODValid              CallFunc_PlayEventAttached_IsValid                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODAudioComponent*         CallFunc_PlayEventAttached_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void USK_Dev_Hammer_AnimBP_C::ExecuteUbergraph_SK_Dev_Hammer_AnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class UBP_ActionableBehaviour_Flying_Hammer_C* CallFunc_GetHammerActionable_Hammer, bool CallFunc_IsValid_ReturnValue, class UBP_ActionableBehaviour_Flying_Hammer_C* CallFunc_GetHammerActionable_Hammer_1, class UBP_ActionableBehaviour_Flying_Hammer_C* CallFunc_GetHammerActionable_Hammer_2, float CallFunc_Multiply_FloatFloat_ReturnValue, class UBP_ActionableBehaviour_Flying_Hammer_C* CallFunc_GetHammerActionable_Hammer_3, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Dev_Hammer_AnimBP_C", "ExecuteUbergraph_SK_Dev_Hammer_AnimBP");

	Params::USK_Dev_Hammer_AnimBP_C_ExecuteUbergraph_SK_Dev_Hammer_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetHammerActionable_Hammer = CallFunc_GetHammerActionable_Hammer;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetHammerActionable_Hammer_1 = CallFunc_GetHammerActionable_Hammer_1;
	Parms.CallFunc_GetHammerActionable_Hammer_2 = CallFunc_GetHammerActionable_Hammer_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetHammerActionable_Hammer_3 = CallFunc_GetHammerActionable_Hammer_3;
	Parms.CallFunc_GetOwningComponent_ReturnValue = CallFunc_GetOwningComponent_ReturnValue;
	Parms.CallFunc_PlayEventAttached_IsValid = CallFunc_PlayEventAttached_IsValid;
	Parms.CallFunc_PlayEventAttached_ReturnValue = CallFunc_PlayEventAttached_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


