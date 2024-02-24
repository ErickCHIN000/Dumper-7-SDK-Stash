#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0xB55 - 0xB14)
// BlueprintGeneratedClass BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C
class UBP_ActionableBehaviour_FireArm_FireController_Charge_C : public UBP_ActionableBehaviour_FireArm_FireController_Base_C
{
public:
	uint8                                        Pad_3BDF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB18(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        ChargePower;                                       // 0xB20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StaminaUsed;                                       // 0xB24(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FullChargePowerTimeStamp;                          // 0xB28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BF6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMatineeCameraShake*                   CameraShake;                                       // 0xB30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LocalChargeCancel;                                 // 0xB38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C02[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          ChargeShakeTimer;                                  // 0xB40(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDoingChargeShake;                                // 0xB48(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C0A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LastChargePower;                                   // 0xB4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AcceptableClientPowerDifference;                   // 0xB50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LocalIsFiring;                                     // 0xB54(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBP_ActionableBehaviour_FireArm_FireController_Charge_C* GetDefaultObj();

	void GetFiring(bool* Firing, bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server);
	void HandleRep_WantsFire();
	void FinishFiring();
	void BeginFire(bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server, bool CallFunc_LocalOrServer_Local_1, bool CallFunc_LocalOrServer_Server_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ECanFireReturnType CallFunc_CanFire_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void IsChargedForFiring(bool* Charged, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void EndFire(bool WillFire, bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server, bool CallFunc_GetFiring_Firing, bool CallFunc_LocalOrServer_Local_1, bool CallFunc_LocalOrServer_Server_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ECanFireReturnType CallFunc_CanFire_ReturnValue, bool CallFunc_IsChargedForFiring_Charged, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1);
	void CancelCharging(bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server, bool CallFunc_Not_PreBool_ReturnValue, class UBP_ActionableBehaviour_Firearm_AimController_Base_C* CallFunc_GetAimController_AimController, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LocalOrServer_Local_1, bool CallFunc_LocalOrServer_Server_1);
	void CheckCancelCharge(bool CallFunc_IsCharging_IsCharging, bool CallFunc_BooleanAND_ReturnValue);
	void TickCameraEffects(float DesiredShakeScale, bool CallFunc_IsAiming_IsAiming, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_4, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, class UCameraShakeBase* CallFunc_StartCameraShake_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UMatineeCameraShake* CallFunc_Conv_MatineeCameraShake_ReturnValue, float Temp_wildcard_Variable, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1);
	float GetChargeTimeMultiplier(int32 CallFunc_GetStat_Value, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue);
	void TickCharge(bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float Temp_float_Variable, float CallFunc_GetChargeTimeMultiplier_ReturnValue, float CallFunc_GetChargeTimeMultiplier_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class UPlayerCharacterState* CallFunc_GetPlayerCharacterState_ReturnValue, int32 CallFunc_Abs_Int_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_Multiply_IntInt_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_FMax_ReturnValue, float CallFunc_FMax_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue_3, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, float CallFunc_GetServerWorldTimeSeconds_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_IsCharging_IsCharging, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_FInterpTo_Constant_ReturnValue, float K2Node_Select_Default, float CallFunc_FInterpTo_Constant_ReturnValue_1, float CallFunc_FMin_ReturnValue);
	float GetLaunchForce(int32 CallFunc_GetStat_Value, float CallFunc_GetCurrentChargePower_ChargePower, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetLaunchForce_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void IsCharging(bool* IsCharging, bool CallFunc_GetFiring_Firing, bool CallFunc_IsReloading_IsReloading, bool CallFunc_IsAiming_IsAiming, bool CallFunc_Not_PreBool_ReturnValue, class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* CallFunc_GetAmmoController_AmmoController, int32 CallFunc_GetCurrentAmmoCount_CurrentAmmoCount, bool CallFunc_IsSprinting_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5);
	void UpdatePersistentAudioCharge(bool CallFunc_IsCharging_IsCharging, float CallFunc_GetCurrentChargePower_ChargePower);
	void GetCurrentChargePower(float* ChargePower);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void OnReloadPressed();
	void ChargeShakeBegin();
	void ChargeShakeEnd();
	void LateSetup();
	void Server_CancelCharge();
	void Server_OnReleasedShot(bool ClientFired, float ClientChargePower);
	void ExecuteUbergraph_BP_ActionableBehaviour_FireArm_FireController_Charge(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaSeconds, enum class EEndPlayReason K2Node_Event_EndPlayReason, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* CallFunc_GetAmmoController_AmmoController, bool CallFunc_IsValid_ReturnValue_1, class UBP_ActionableBehaviour_Firearm_AimController_Base_C* CallFunc_GetAimController_AimController, class UBP_ActionableBehaviour_Firearm_AimController_Base_C* CallFunc_GetAimController_AimController_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool K2Node_CustomEvent_ClientFired, float K2Node_CustomEvent_ClientChargePower, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Greater_FloatFloat_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
};

}


