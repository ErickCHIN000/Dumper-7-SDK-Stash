#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x7E8 - 0x7D8)
// BlueprintGeneratedClass Projectile_SG_TOR_Magic_AltFire.Projectile_SG_TOR_Magic_AltFire_C
class AProjectile_SG_TOR_Magic_AltFire_C : public AProjectile_SG_Magic_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7D8(0x8)(Transient, DuplicateTransient)
	class UClass*                                LightProjectileData;                               // 0x7E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AProjectile_SG_TOR_Magic_AltFire_C* GetDefaultObj();

	void UserConstructionScript();
	void InitProjectile();
	void DoMagicTORStickyAttach(class AActor* InHitActor);
	void ExecuteUbergraph_Projectile_SG_TOR_Magic_AltFire(int32 EntryPoint, class AActor* K2Node_Event_InHitActor, class UClass* Temp_class_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, uint8 Temp_byte_Variable, class UClass* Temp_class_Variable1, class UClass* Temp_class_Variable2, float CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue, class UClass* Temp_class_Variable3, uint8 Temp_byte_Variable1, class AActor* CallFunc_GetOwner_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue2, int32 CallFunc_GetValueOfAttributeAsInteger_ReturnValue, class UWeaponFireProjectileComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UClass* K2Node_Select_Default, class UClass* K2Node_Select1_Default, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, const struct FLightProjectileInitializationData& K2Node_MakeStruct_LightProjectileInitializationData, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}


