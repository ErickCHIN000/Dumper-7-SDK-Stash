#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SK_DPS_Respawn_Pod_Skeleton_AnimBP.SK_DPS_Respawn_Pod_Skeleton_AnimBP_C
// (None)

class UClass* USK_DPS_Respawn_Pod_Skeleton_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_DPS_Respawn_Pod_Skeleton_AnimBP_C");

	return Clss;
}


// SK_DPS_Respawn_Pod_Skeleton_AnimBP_C SK_DPS_Respawn_Pod_Skeleton_AnimBP.Default__SK_DPS_Respawn_Pod_Skeleton_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_DPS_Respawn_Pod_Skeleton_AnimBP_C* USK_DPS_Respawn_Pod_Skeleton_AnimBP_C::GetDefaultObj()
{
	static class USK_DPS_Respawn_Pod_Skeleton_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_DPS_Respawn_Pod_Skeleton_AnimBP_C*>(USK_DPS_Respawn_Pod_Skeleton_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SK_DPS_Respawn_Pod_Skeleton_AnimBP.SK_DPS_Respawn_Pod_Skeleton_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USK_DPS_Respawn_Pod_Skeleton_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_DPS_Respawn_Pod_Skeleton_AnimBP_C", "AnimGraph");

	Params::USK_DPS_Respawn_Pod_Skeleton_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function SK_DPS_Respawn_Pod_Skeleton_AnimBP.SK_DPS_Respawn_Pod_Skeleton_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_DPS_Respawn_Pod_Skeleton_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_DPS_Respawn_Pod_Skeleton_AnimBP_C", "BlueprintUpdateAnimation");

	Params::USK_DPS_Respawn_Pod_Skeleton_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SK_DPS_Respawn_Pod_Skeleton_AnimBP.SK_DPS_Respawn_Pod_Skeleton_AnimBP_C.OnDoorOpenComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USK_DPS_Respawn_Pod_Skeleton_AnimBP_C::OnDoorOpenComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_DPS_Respawn_Pod_Skeleton_AnimBP_C", "OnDoorOpenComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_DPS_Respawn_Pod_Skeleton_AnimBP.SK_DPS_Respawn_Pod_Skeleton_AnimBP_C.ExecuteUbergraph_SK_DPS_Respawn_Pod_Skeleton_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Part_MID_RespawnPod_C*   K2Node_DynamicCast_AsBP_Part_MID_Respawn_Pod                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetOwningComponent_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFMODValid              CallFunc_PlayEventAttached_IsValid                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODAudioComponent*         CallFunc_PlayEventAttached_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetOwningComponent_ReturnValue_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFMODValid              CallFunc_PlayEventAttached_IsValid_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODAudioComponent*         CallFunc_PlayEventAttached_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFMODValid              CallFunc_PlayEventAttached_IsValid_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODAudioComponent*         CallFunc_PlayEventAttached_ReturnValue_2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFMODValid              CallFunc_PlayEventAttached_IsValid_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODAudioComponent*         CallFunc_PlayEventAttached_ReturnValue_3                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFMODValid              CallFunc_PlayEventAttached_IsValid_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODAudioComponent*         CallFunc_PlayEventAttached_ReturnValue_4                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void USK_DPS_Respawn_Pod_Skeleton_AnimBP_C::ExecuteUbergraph_SK_DPS_Respawn_Pod_Skeleton_AnimBP(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABP_Part_MID_RespawnPod_C* K2Node_DynamicCast_AsBP_Part_MID_Respawn_Pod, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_NotEqual_BoolBool_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, enum class EFMODValid CallFunc_PlayEventAttached_IsValid_1, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EFMODValid CallFunc_PlayEventAttached_IsValid_2, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue_2, enum class EFMODValid CallFunc_PlayEventAttached_IsValid_3, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, enum class EFMODValid CallFunc_PlayEventAttached_IsValid_4, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue_4, bool K2Node_SwitchEnum_CmpSuccess_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_DPS_Respawn_Pod_Skeleton_AnimBP_C", "ExecuteUbergraph_SK_DPS_Respawn_Pod_Skeleton_AnimBP");

	Params::USK_DPS_Respawn_Pod_Skeleton_AnimBP_C_ExecuteUbergraph_SK_DPS_Respawn_Pod_Skeleton_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Part_MID_Respawn_Pod = K2Node_DynamicCast_AsBP_Part_MID_Respawn_Pod;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningComponent_ReturnValue = CallFunc_GetOwningComponent_ReturnValue;
	Parms.CallFunc_PlayEventAttached_IsValid = CallFunc_PlayEventAttached_IsValid;
	Parms.CallFunc_PlayEventAttached_ReturnValue = CallFunc_PlayEventAttached_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_GetOwningComponent_ReturnValue_1 = CallFunc_GetOwningComponent_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PlayEventAttached_IsValid_1 = CallFunc_PlayEventAttached_IsValid_1;
	Parms.CallFunc_PlayEventAttached_ReturnValue_1 = CallFunc_PlayEventAttached_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_PlayEventAttached_IsValid_2 = CallFunc_PlayEventAttached_IsValid_2;
	Parms.CallFunc_PlayEventAttached_ReturnValue_2 = CallFunc_PlayEventAttached_ReturnValue_2;
	Parms.CallFunc_PlayEventAttached_IsValid_3 = CallFunc_PlayEventAttached_IsValid_3;
	Parms.CallFunc_PlayEventAttached_ReturnValue_3 = CallFunc_PlayEventAttached_ReturnValue_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_PlayEventAttached_IsValid_4 = CallFunc_PlayEventAttached_IsValid_4;
	Parms.CallFunc_PlayEventAttached_ReturnValue_4 = CallFunc_PlayEventAttached_ReturnValue_4;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


