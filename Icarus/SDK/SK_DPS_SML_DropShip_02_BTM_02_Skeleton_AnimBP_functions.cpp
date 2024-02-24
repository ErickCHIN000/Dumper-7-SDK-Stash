#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP.SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP_C
// (None)

class UClass* USK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP_C");

	return Clss;
}


// SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP_C SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP.Default__SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP_C* USK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP_C::GetDefaultObj()
{
	static class USK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP_C*>(USK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP.SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP_C", "AnimGraph");

	Params::USK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP.SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP_C", "BlueprintUpdateAnimation");

	Params::USK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP.SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP_C.AnimNotify_PlaySound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP_C::AnimNotify_PlaySound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP_C", "AnimNotify_PlaySound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP.SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP_C.ExecuteUbergraph_SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PartBase_C*              K2Node_DynamicCast_AsBP_Part_Base                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFMODEvent*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerControllerSurvival*CallFunc_GetAssignedPlayer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFMODEvent*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Part_BTM_MK1_C*          K2Node_DynamicCast_AsBP_Part_BTM_MK1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetOwningComponent_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFMODValid              CallFunc_PlayEventAttached_IsValid                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODAudioComponent*         CallFunc_PlayEventAttached_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void USK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP_C::ExecuteUbergraph_SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABP_PartBase_C* K2Node_DynamicCast_AsBP_Part_Base, bool K2Node_DynamicCast_bSuccess, class UFMODEvent* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, class AIcarusPlayerControllerSurvival* CallFunc_GetAssignedPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsLocalPlayerController_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFMODEvent* Temp_object_Variable_1, bool Temp_bool_Variable, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue_1, class ABP_Part_BTM_MK1_C* K2Node_DynamicCast_AsBP_Part_BTM_MK1, bool K2Node_DynamicCast_bSuccess_1, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, class UFMODEvent* K2Node_Select_Default, enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP_C", "ExecuteUbergraph_SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP");

	Params::USK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP_C_ExecuteUbergraph_SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Part_Base = K2Node_DynamicCast_AsBP_Part_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAssignedPlayer_ReturnValue = CallFunc_GetAssignedPlayer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue = CallFunc_IsLocalPlayerController_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetOwningActor_ReturnValue_1 = CallFunc_GetOwningActor_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Part_BTM_MK1 = K2Node_DynamicCast_AsBP_Part_BTM_MK1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetOwningComponent_ReturnValue = CallFunc_GetOwningComponent_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayEventAttached_IsValid = CallFunc_PlayEventAttached_IsValid;
	Parms.CallFunc_PlayEventAttached_ReturnValue = CallFunc_PlayEventAttached_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


