#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SK_BOW_Crossbow_02_AnimBP.SK_BOW_Crossbow_02_AnimBP_C
// (None)

class UClass* USK_BOW_Crossbow_02_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_BOW_Crossbow_02_AnimBP_C");

	return Clss;
}


// SK_BOW_Crossbow_02_AnimBP_C SK_BOW_Crossbow_02_AnimBP.Default__SK_BOW_Crossbow_02_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_BOW_Crossbow_02_AnimBP_C* USK_BOW_Crossbow_02_AnimBP_C::GetDefaultObj()
{
	static class USK_BOW_Crossbow_02_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_BOW_Crossbow_02_AnimBP_C*>(USK_BOW_Crossbow_02_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SK_BOW_Crossbow_02_AnimBP.SK_BOW_Crossbow_02_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USK_BOW_Crossbow_02_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_BOW_Crossbow_02_AnimBP_C", "AnimGraph");

	Params::USK_BOW_Crossbow_02_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function SK_BOW_Crossbow_02_AnimBP.SK_BOW_Crossbow_02_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_BOW_Crossbow_02_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_BOW_Crossbow_02_AnimBP_C", "BlueprintUpdateAnimation");

	Params::USK_BOW_Crossbow_02_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SK_BOW_Crossbow_02_AnimBP.SK_BOW_Crossbow_02_AnimBP_C.ExecuteUbergraph_SK_BOW_Crossbow_02_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAiming_IsAiming                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ActionableBehaviour_Firearm_Base_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentAmmo_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsADS_ADS                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_ActionableBehaviour_Firearm_C*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_ActionableBehaviour_Firearm_AimController_Base_C*CallFunc_GetAimController_AimController                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAmmo_HasAmmo                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsReloading_Reloading                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C*CallFunc_GetAmmoController_AmmoController                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ActionableBehaviour_FireArm_FireController_Base_C*CallFunc_GetFireController_FireController                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_BOW_Crossbow_02_AnimBP_C::ExecuteUbergraph_SK_BOW_Crossbow_02_AnimBP(int32 EntryPoint, bool CallFunc_IsAiming_IsAiming, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class UBP_ActionableBehaviour_Firearm_Base_C* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_GetCurrentAmmo_ReturnValue, bool CallFunc_IsADS_ADS, bool CallFunc_Greater_IntInt_ReturnValue, class UBP_ActionableBehaviour_Firearm_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_NotEqual_BoolBool_ReturnValue, class UBP_ActionableBehaviour_Firearm_AimController_Base_C* CallFunc_GetAimController_AimController, bool CallFunc_HasAmmo_HasAmmo, bool CallFunc_IsReloading_Reloading, class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* CallFunc_GetAmmoController_AmmoController, class UBP_ActionableBehaviour_FireArm_FireController_Base_C* CallFunc_GetFireController_FireController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_BOW_Crossbow_02_AnimBP_C", "ExecuteUbergraph_SK_BOW_Crossbow_02_AnimBP");

	Params::USK_BOW_Crossbow_02_AnimBP_C_ExecuteUbergraph_SK_BOW_Crossbow_02_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsAiming_IsAiming = CallFunc_IsAiming_IsAiming;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetCurrentAmmo_ReturnValue = CallFunc_GetCurrentAmmo_ReturnValue;
	Parms.CallFunc_IsADS_ADS = CallFunc_IsADS_ADS;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_GetAimController_AimController = CallFunc_GetAimController_AimController;
	Parms.CallFunc_HasAmmo_HasAmmo = CallFunc_HasAmmo_HasAmmo;
	Parms.CallFunc_IsReloading_Reloading = CallFunc_IsReloading_Reloading;
	Parms.CallFunc_GetAmmoController_AmmoController = CallFunc_GetAmmoController_AmmoController;
	Parms.CallFunc_GetFireController_FireController = CallFunc_GetFireController_FireController;

	UObject::ProcessEvent(Func, &Parms);

}

}


