#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x728 (0xA32 - 0x30A)
// BlueprintGeneratedClass BP_ActionableBehaviour_Firearm_Base.BP_ActionableBehaviour_Firearm_Base_C
class UBP_ActionableBehaviour_Firearm_Base_C : public UBP_ActionableBehaviour_Base_C
{
public:
	uint8                                        Pad_358C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AIcarusActor*                          OwningActor;                                       // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacterSurvival*        OwningPlayer;                                      // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFirearmData                          FirearmData;                                       // 0x328(0x6F8)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                          LateSetupTimer;                                    // 0xA20(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_FirearmCosmeticController_C*       CosmeticController;                                // 0xA28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WeaponIsReady;                                     // 0xA30(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ComponentInitComplete;                             // 0xA31(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBP_ActionableBehaviour_Firearm_Base_C* GetDefaultObj();

	void GetTimeStamp(float* Timestamp, class AGameStateBase* CallFunc_GetGameState_ReturnValue, float CallFunc_GetServerWorldTimeSeconds_ReturnValue);
	int32 GetAdjustedDurabilityDamage(int32 DurabilityLost, class UIcarusStatContainer* StatContainer, int32 CallFunc_GetStat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_RollChanceStat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_FFloor_ReturnValue, class UIcarusStatContainer* CallFunc_GetComponentByClass_ReturnValue);
	void SetupCosmeticController(class AActor* CallFunc_GetOwner_ReturnValue, class UBP_FirearmCosmeticController_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class UBP_FirearmCosmeticController_C* CallFunc_AddComponentByClass_ReturnValue);
	void StopAllAnimations(class USkeletalMeshComponent* CallFunc_GetOwnerMeshComponent_AsSkeletal_Mesh_Component, bool CallFunc_GetOwnerMeshComponent_Valid, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetFirstPersonMesh_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2);
	void TickCameraEffects();
	void RollBoolStat(const struct FStatsEnum& Stat, bool* RollResult, int32 CallFunc_GetStat_Value, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue);
	void DamageItemDurability(int32 Amount, int32 CalculatedDurabilityLoss, int32 CallFunc_GetAdjustedDurabilityDamage_ReturnValue, bool CallFunc_RollBoolStat_RollResult, class UPlayerFeedbackSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AIcarusItem* CallFunc_GetFocusedItem_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class EValid CallFunc_GetTrait_Paths, class UDurableComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_PartiallyRepairItem_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_DealSelfDamage_ReturnValue);
	void GetOwnerMeshComponent(class USkeletalMeshComponent** AsSkeletal_Mesh_Component, bool* Valid, bool CallFunc_IsValid_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess);
	void PlayFirearmSound(struct FFirearmSoundData& FirearmSoundData, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UFMODEvent* K2Node_DynamicCast_AsFMODEvent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* CallFunc_GetAmmoController_AmmoController, bool CallFunc_IsReloading_Reloading, bool CallFunc_IsValid_ReturnValue_4, class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* CallFunc_GetAmmoController_AmmoController_1, class USkeletalMeshComponent* CallFunc_GetOwnerMeshComponent_AsSkeletal_Mesh_Component, bool CallFunc_GetOwnerMeshComponent_Valid, int32 CallFunc_GetCurrentAmmoCount_CurrentAmmoCount, enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Variable, class UBP_ActionableBehaviour_FireArm_FireController_Base_C* CallFunc_GetFireController_FireController, class UBP_ActionableBehaviour_FireArm_FireController_Charge_C* K2Node_DynamicCast_AsBP_Actionable_Behaviour_Fire_Arm_Fire_Controller_Charge, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Variable_1, float CallFunc_GetCurrentChargePower_ChargePower, bool K2Node_Select_Default, uint8 CallFunc_Conv_BoolToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue);
	void GetStat(const struct FStatsEnum& Stat, bool ErrorIfZero, int32* Value, class FName CallFunc_StructToName_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetStat_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void GetAimController(class UBP_ActionableBehaviour_Firearm_AimController_Base_C** AimController, class UBP_ActionableBehaviour_Firearm_AimController_Base_C* CallFunc_GetComponentByClass_ReturnValue);
	void GetFireController(class UBP_ActionableBehaviour_FireArm_FireController_Base_C** FireController, class UBP_ActionableBehaviour_FireArm_FireController_Base_C* CallFunc_GetComponentByClass_ReturnValue);
	void GetAmmoController(class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C** AmmoController, class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* CallFunc_GetComponentByClass_ReturnValue);
	void LocalOrServer(bool* Local, bool* Server, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue);
	void SetupFirearmData(class AIcarusItem* K2Node_DynamicCast_AsIcarus_Item, bool K2Node_DynamicCast_bSuccess, const struct FFirearmData& CallFunc_GetFirearmData_FirearmData, enum class EDataValid CallFunc_GetFirearmData_Paths, bool K2Node_SwitchEnum_CmpSuccess);
	void SetupPlayer(bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess);
	void SetupOwner(class AIcarusActor* Owner);
	void Setup(class AIcarusActor* ForOwner, bool CallFunc_IsValid_ReturnValue);
	void ReceiveBeginPlay();
	void PreloadAssets();
	void ReceiveTick(float DeltaSeconds);
	void LateSetup();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void OnStatContainerUpdated();
	void ExecuteUbergraph_BP_ActionableBehaviour_Firearm_Base(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusItem* K2Node_DynamicCast_AsIcarus_Item, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaSeconds, bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server, enum class EEndPlayReason K2Node_Event_EndPlayReason);
};

}


