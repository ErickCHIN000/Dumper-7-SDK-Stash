#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x990 - 0x958)
// BlueprintGeneratedClass BPWeaponFireProjectileComponent_Magic_SMG.BPWeaponFireProjectileComponent_Magic_SMG_C
class UBPWeaponFireProjectileComponent_Magic_SMG_C : public UWeaponFireProjectileComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x958(0x8)(Transient, DuplicateTransient)
	class AActor*                                Weapon;                                            // 0x960(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAttributeFloat                    Att_MagicSMG_ShockCharge;                          // 0x968(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_1E7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                BonusFireProj;                                     // 0x978(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                        FireProjectiles;                                   // 0x980(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBPWeaponFireProjectileComponent_Magic_SMG_C* GetDefaultObj();

	void Notify_Used_Shock();
	void ReceiveBeginPlay();
	void UsedFire();
	void Fire_BonusProjectile();
	void ExecuteUbergraph_BPWeaponFireProjectileComponent_Magic_SMG(int32 EntryPoint, class AGbxCharacter* CallFunc_GetAssociatedPrimaryCharacter_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, class ABPWeap_BaseWeapon_C* K2Node_DynamicCast_AsBPWeap_Base_Weapon, bool K2Node_DynamicCast_bSuccess, float CallFunc_RandomFloatInRange_ReturnValue, class UGbxDamageType* CallFunc_GetDamageType_ReturnValue, enum class EOakElementalType CallFunc_GetElementalType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EGbxAttributeModifierActionExecOutput CallFunc_AddModifierToGbxAttribute_ModifierActionResult, const struct FGbxAttributeModifierHandle& CallFunc_AddModifierToGbxAttribute_ReturnValue, bool K2Node_SwitchEnum1_CmpSuccess, float CallFunc_Conv_GbxAttributeFloatToFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_GetActorAimViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorAimViewPoint_OutRotation, int32 CallFunc_RandomIntegerInRange_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, class UClass* CallFunc_Array_Get_Item, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FTransform& CallFunc_GetActorSocket_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FOakLightProjectileInitializationData& K2Node_MakeStruct_OakLightProjectileInitializationData);
};

}


