#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7D0 (0x878 - 0xA8)
// BlueprintGeneratedClass BP_RangedWeaponComponent.BP_RangedWeaponComponent_C
class UBP_RangedWeaponComponent_C : public URangedWeaponComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       Cooldown;                                          // 0xB0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WeaponReady;                                       // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_68B4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CooldownTimerHandle;                               // 0xC0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         HasCooldown;                                       // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_68BA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnCooldownEnd;                                     // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FS_Gun_SFX                            Gun_SFX;                                           // 0xE0(0x28)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_68C4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData_WeaponRanged                StaticRangedWeaponData;                            // 0x110(0x760)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_RangedWeapon_Base_C*               OwningWeapon;                                      // 0x870(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_RangedWeaponComponent_C* GetDefaultObj();

	void GetReloadType(enum class ERangedWeaponReloadType* GetReloadType);
	void GetBaseSpread(double* BaseSpread, double K2Node_FunctionResult_BaseSpread_ImplicitCast);
	void Get_Iron_Sights_Post_Process_Settings(struct FPostProcessSettings* IronSightsPostProcess);
	double GetRaycastDistance(double K2Node_FunctionResult_ReturnValue_ImplicitCast);
	void CalculateFalloffDamage(double Distance, double InputDamage, double* CalculatedDamage, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
	void InitializeRangedWeaponData(const struct FItemData_WeaponRanged& RangedWeaponData, float NewLocalVar, const struct FS_Gun_SFX& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, double K2Node_VariableSet_Cooldown_ImplicitCast);
	struct FGameplayTagContainer GetFiredBulletMuzzleTags(const struct FItemData_Ammo& CallFunc_GetLoadedAmmoData_LoadedAmmo, bool CallFunc_GetLoadedAmmoData_bWasSuccessful, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_RangedWeapon_Base_C* K2Node_DynamicCast_AsBP_Ranged_Weapon_Base, bool K2Node_DynamicCast_bSuccess);
	void GetRecoilValues(struct FVector2D* RecoilYawRange, struct FVector2D* RecoilPitchRange, class UCurveFloat** RecoilCurve, class UCurveFloat** RecoveryCurve, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, bool CallFunc_UsingAThirdPersonCamera_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1);
	void GetProjectileSpeed(double* ProjectileSpeed, double K2Node_FunctionResult_ProjectileSpeed_ImplicitCast);
	void GetPrimaryFireCooldown(class AActor* WeaponOwner, double* CooldownTotal, double CooldownBonus, bool CallFunc_IsServer_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue);
	void SetTimer(double Time, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_K2_SetTimer_Time_ImplicitCast);
	void GetRemainingCooldown(double* TimeRemaining, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue, double K2Node_FunctionResult_TimeRemaining_ImplicitCast);
	void SetCooldownComplete();
	void SetOnCooldown(class AActor* WeaponOwner, double CallFunc_GetPrimaryFireCooldown_CooldownTotal, bool CallFunc_CanFire_CanFire);
	void CanFire(bool* CanFire);
	void OnBeginCooldown(double Time);
	void ExecuteUbergraph_BP_RangedWeaponComponent(int32 EntryPoint, double K2Node_CustomEvent_Time);
	void OnCooldownEnd__DelegateSignature();
};

}


