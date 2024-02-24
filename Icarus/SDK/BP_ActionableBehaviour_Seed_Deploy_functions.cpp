#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionableBehaviour_Seed_Deploy.BP_ActionableBehaviour_Seed_Deploy_C
// (None)

class UClass* UBP_ActionableBehaviour_Seed_Deploy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionableBehaviour_Seed_Deploy_C");

	return Clss;
}


// BP_ActionableBehaviour_Seed_Deploy_C BP_ActionableBehaviour_Seed_Deploy.Default__BP_ActionableBehaviour_Seed_Deploy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionableBehaviour_Seed_Deploy_C* UBP_ActionableBehaviour_Seed_Deploy_C::GetDefaultObj()
{
	static class UBP_ActionableBehaviour_Seed_Deploy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionableBehaviour_Seed_Deploy_C*>(UBP_ActionableBehaviour_Seed_Deploy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionableBehaviour_Seed_Deploy.BP_ActionableBehaviour_Seed_Deploy_C.CustomDeploymentCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      HitActor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ValidPlacement                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Reason                                                           (Parm, OutParm)
// class ABP_Crop_Plot_Base_C*        K2Node_DynamicCast_AsBP_Crop_Plot_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnySeeds_IsSeeded                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Seed_Deploy_C::CustomDeploymentCheck(class AActor* HitActor, bool* ValidPlacement, class FText* Reason, class ABP_Crop_Plot_Base_C* K2Node_DynamicCast_AsBP_Crop_Plot_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAnySeeds_IsSeeded, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Seed_Deploy_C", "CustomDeploymentCheck");

	Params::UBP_ActionableBehaviour_Seed_Deploy_C_CustomDeploymentCheck_Params Parms{};

	Parms.HitActor = HitActor;
	Parms.K2Node_DynamicCast_AsBP_Crop_Plot_Base = K2Node_DynamicCast_AsBP_Crop_Plot_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasAnySeeds_IsSeeded = CallFunc_HasAnySeeds_IsSeeded;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ValidPlacement != nullptr)
		*ValidPlacement = Parms.ValidPlacement;

	if (Reason != nullptr)
		*Reason = Parms.Reason;

}


// Function BP_ActionableBehaviour_Seed_Deploy.BP_ActionableBehaviour_Seed_Deploy_C.BlueprintDeploy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  DeployTransform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// class AActor*                      FoundationActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// int32                              VarientIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADeployable*                 K2Node_DynamicCast_AsDeployable                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Crop_Plot_Base_C*        K2Node_DynamicCast_AsBP_Crop_Plot_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacter*      K2Node_DynamicCast_AsIcarus_Player_Character                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanPlantSeed_CanPlant                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PlantSeed_Planted                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDeployableSubsystem*        CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Seed_Deploy_C::BlueprintDeploy(const struct FTransform& DeployTransform, class AActor* FoundationActor, const struct FItemData& ItemData, int32 VarientIndex, class AActor* CallFunc_GetOwner_ReturnValue, class ADeployable* K2Node_DynamicCast_AsDeployable, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue_1, class ABP_Crop_Plot_Base_C* K2Node_DynamicCast_AsBP_Crop_Plot_Base, bool K2Node_DynamicCast_bSuccess_1, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_CanPlantSeed_CanPlant, bool CallFunc_PlantSeed_Planted, class UDeployableSubsystem* CallFunc_GetWorldSubsystem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Seed_Deploy_C", "BlueprintDeploy");

	Params::UBP_ActionableBehaviour_Seed_Deploy_C_BlueprintDeploy_Params Parms{};

	Parms.DeployTransform = DeployTransform;
	Parms.FoundationActor = FoundationActor;
	Parms.ItemData = ItemData;
	Parms.VarientIndex = VarientIndex;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsDeployable = K2Node_DynamicCast_AsDeployable;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Crop_Plot_Base = K2Node_DynamicCast_AsBP_Crop_Plot_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character = K2Node_DynamicCast_AsIcarus_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_CanPlantSeed_CanPlant = CallFunc_CanPlantSeed_CanPlant;
	Parms.CallFunc_PlantSeed_Planted = CallFunc_PlantSeed_Planted;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


