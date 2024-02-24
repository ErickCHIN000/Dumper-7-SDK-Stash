#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x1120 - 0x10F8)
// BlueprintGeneratedClass RangedEnemy.RangedEnemy_C
class ARangedEnemy_C : public AEnemyCharacter_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x10F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        AI_RangedBasicAttackDistance;                      // 0x1100(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AI_RangedRetreatDistance;                          // 0x1104(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAiming_;                                         // 0x1108(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30D8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AimPitch;                                          // 0x110C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInMeleeMode_;                                    // 0x1110(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30E6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AimYaw;                                            // 0x1114(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          NextAttackMontage;                                 // 0x1118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ARangedEnemy_C* GetDefaultObj();

	void GetActiveProjectileLaunchVelocity(float* Velocity);
	void GetActiveProjectileGravityScale(float* GravityScale);
	void GetRangedAtkComponent(class USkeletalMeshComponent** WeaponSkMesh);
	void OnNotifyEnd_2D4E322F435995CF673A9D812786BF2A(class FName NotifyName);
	void OnNotifyBegin_2D4E322F435995CF673A9D812786BF2A(class FName NotifyName);
	void OnInterrupted_2D4E322F435995CF673A9D812786BF2A(class FName NotifyName);
	void OnBlendOut_2D4E322F435995CF673A9D812786BF2A(class FName NotifyName);
	void OnCompleted_2D4E322F435995CF673A9D812786BF2A(class FName NotifyName);
	void RangedAttackAnimSequence();
	void LaunchProjectile();
	void RangedRetreatAnimSequence();
	void SwitchToMeleeMode();
	void PlayMeleeAtkMontage(class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, class FName StartingSection);
	void ExecuteUbergraph_RangedEnemy(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, bool Temp_bool_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, class UAnimMontage* K2Node_CustomEvent_MontageToPlay, float K2Node_CustomEvent_PlayRate, float K2Node_CustomEvent_StartingPosition, class FName K2Node_CustomEvent_StartingSection, class UAnimMontage* K2Node_Select_Default, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


