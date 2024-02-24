#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x15 (0xA47 - 0xA32)
// BlueprintGeneratedClass BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C
class UBP_ActionableBehaviour_Firearm_AimController_Base_C : public UBP_ActionableBehaviour_Firearm_Base_C
{
public:
	uint8                                        Pad_4076[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA38(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        AimAlpha;                                          // 0xA40(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseExtraVignetteStrength;                          // 0xA44(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         AllowAimWhileReloading;                            // 0xA45(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         AimPressed;                                        // 0xA46(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBP_ActionableBehaviour_Firearm_AimController_Base_C* GetDefaultObj();

	void WantsBowMode(bool* bWantsBowMode, class UBP_ActionableBehaviour_FireArm_FireController_Base_C* CallFunc_GetFireController_FireController, class UBP_ActionableBehaviour_FireArm_FireController_Charge_C* K2Node_DynamicCast_AsBP_Actionable_Behaviour_Fire_Arm_Fire_Controller_Charge, bool K2Node_DynamicCast_bSuccess);
	void WantsShowCrosshair(bool* bShowCrosshair, bool CallFunc_WantsBowMode_bWantsBowMode, bool CallFunc_IsAiming_IsAiming, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings, bool CallFunc_GetShowAimCrosshair_ReturnValue);
	void GetCrosshairAimAlpha(float* AimAlpha, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UBP_ActionableBehaviour_FireArm_FireController_Base_C* CallFunc_GetFireController_FireController, class UBP_ActionableBehaviour_FireArm_FireController_Charge_C* K2Node_DynamicCast_AsBP_Actionable_Behaviour_Fire_Arm_Fire_Controller_Charge, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetCurrentChargePower_ChargePower, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_IsAiming_IsAiming, float Temp_wildcard_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector2D& K2Node_Select_Default, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_FMax_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, float K2Node_Select_Default_1);
	void UpdateCosmetics(bool CallFunc_IsAiming_IsAiming, bool CallFunc_IsValid_ReturnValue);
	void SetExtraVignetteStrengthEnabled(bool Enabled);
	void TickCameraEffects(float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, float Temp_float_Variable_2, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings, float CallFunc_GetFieldOfView_ReturnValue, bool Temp_bool_Variable_1, float K2Node_Select_Default, int32 CallFunc_GetStat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float K2Node_MathExpression_ReturnValue, float CallFunc_Lerp_ReturnValue, class UCameraComponent* CallFunc_GetFirstPersonCamera_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float K2Node_Select_Default_1);
	void UpdateAim(bool CallFunc_IsAiming_IsAiming, class USkeletalMeshComponent* CallFunc_GetOwnerMeshComponent_AsSkeletal_Mesh_Component, bool CallFunc_GetOwnerMeshComponent_Valid, float CallFunc_Conv_BoolToFloat_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_GetADSTimeMultiplier_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, float CallFunc_FInterpTo_ReturnValue, const struct FTransform& Temp_wildcard_Variable, float CallFunc_FMin_ReturnValue);
	float GetADSTimeMultiplier(int32 CallFunc_GetStat_Value, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue);
	void CanAim(bool* CanAim, class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* CallFunc_GetAmmoController_AmmoController, bool CallFunc_IsReloading_Reloading, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void ToggleAim(bool CallFunc_IsAiming_IsAiming, bool CallFunc_Not_PreBool_ReturnValue);
	void SetAim(bool NewAim, bool CallFunc_IsSprinting_ReturnValue, class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* CallFunc_GetAmmoController_AmmoController, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* CallFunc_GetAmmoController_AmmoController_1, bool CallFunc_CanAbortReload_CanAbort, bool CallFunc_IsReloading_Reloading, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_CanAim_CanAim);
	void IsAiming(bool* IsAiming, bool CallFunc_IsAiming_ReturnValue);
	void IsToggleAim(bool* IsToggleAim, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings, bool CallFunc_GetToggleAim_ReturnValue);
	void ReceiveTick(float DeltaSeconds);
	void LateSetup();
	void NotifyReloadStart();
	void NotifyReloadEnd();
	void PerformAction(class AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger);
	void SprintToAim();
	void FinishSprintToAimDelay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AimController_Base(int32 EntryPoint, class UCameraComponent* CallFunc_GetFirstPersonCamera_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsToggleAim_IsToggleAim, bool CallFunc_IsToggleAim_IsToggleAim_1, bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server, float K2Node_Event_DeltaSeconds, bool CallFunc_LocalOrServer_Local_1, bool CallFunc_LocalOrServer_Server_1, class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* CallFunc_GetAmmoController_AmmoController, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsAiming_IsAiming, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class AActor* K2Node_Event_InvokingActor, enum class EActionableEventType K2Node_Event_OnActionType, enum class EActionableTrigger K2Node_Event_ActionTrigger, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetStat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings, float CallFunc_GetFieldOfView_ReturnValue);
};

}


