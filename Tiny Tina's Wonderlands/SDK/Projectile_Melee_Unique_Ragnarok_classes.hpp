#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5C (0x834 - 0x7D8)
// BlueprintGeneratedClass Projectile_Melee_Unique_Ragnarok.Projectile_Melee_Unique_Ragnarok_C
class AProjectile_Melee_Unique_Ragnarok_C : public AProjectile_SG_Magic_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7D8(0x8)(Transient, DuplicateTransient)
	class UClass*                                LightProjectileData;                               // 0x7E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableValueHandle                 Handle_Melee_DamageRadius;                         // 0x7E8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableValueHandle                 Handle_Melee_ProjectileDamageScale;                // 0x800(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableValueHandle                 Handle_Melee_StickyDamageScale;                    // 0x818(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        WeaponDamage;                                      // 0x830(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AProjectile_Melee_Unique_Ragnarok_C* GetDefaultObj();

	void UserConstructionScript();
	void InitProjectile();
	void DoMagicTORStickyAttach(class AActor* InHitActor);
	void ExecuteUbergraph_Projectile_Melee_Unique_Ragnarok(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, class UParticleSystem* CallFunc_StaticGetParticleEffect_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess1, const struct FVector& CallFunc_MakeVector_ReturnValue, class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue, class UOakInventoryBalanceStateComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UClass* CallFunc_GetDamageType_ReturnValue, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, const struct FVector& CallFunc_MakeVector_ReturnValue1, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, class AActor* K2Node_Event_InHitActor, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, float CallFunc_GetDataTableValueFromHandle_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue2, const struct FLightProjectileInitializationData& K2Node_MakeStruct_LightProjectileInitializationData);
};

}


