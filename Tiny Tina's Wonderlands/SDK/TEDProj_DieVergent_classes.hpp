#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x208 (0xE08 - 0xC00)
// BlueprintGeneratedClass TEDProj_DieVergent.TEDProj_DieVergent_C
class ATEDProj_DieVergent_C : public ATEDProjectile_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC00(0x8)(Transient, DuplicateTransient)
	struct FForceSelection                       LargeDieImpactForce;                               // 0xC08(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableValueHandle                 LargeDieDMGScaler;                                 // 0xC28(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class AActor*                                DamagedActor;                                      // 0xC40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        DamagedTargets;                                    // 0xC48(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UMaterialInstanceDynamic*              Dice_DMI;                                          // 0xC58(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class UClass*, struct FLinearColor>     Damage_Type_Base;                                  // 0xC60(0x50)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance)
	TMap<class UClass*, struct FLinearColor>     Damage_Type_Missive;                               // 0xCB0(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                Damage_type;                                       // 0xD00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class UClass*, struct FLinearColor>     Damage_Type_BaseColor;                             // 0xD08(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<class UClass*, class UMaterialInstance*> Dice_Materials;                                    // 0xD58(0x50)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance)
	TMap<enum class EOakElementalType, class UMaterialInstance*> Dice_Materials_0;                                  // 0xDA8(0x50)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance)
	enum class EOakElementalType                 Element;                                           // 0xDF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_253A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 NewVar_0;                                          // 0xE00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ATEDProj_DieVergent_C* GetDefaultObj();

	void CalcExplosionDamageOverride(float* Damage, float PelletMultiplier, class APawn* CallFunc_GetInstigator_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue1, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, int32 CallFunc_Max_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue3, float CallFunc_Multiply_FloatFloat_ReturnValue4);
	void UserConstructionScript();
	void SpawnMirvTornado();
	void Determine_Material_Color();
	void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature_TEDProjectile_DiceSmash(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_TEDProj_DieVergent(int32 EntryPoint, class UTeamComponent* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FHitResult& Temp_struct_Variable, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FLinearColor& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FLinearColor& CallFunc_Map_Find_Value1, bool CallFunc_Map_Find_ReturnValue1, float CallFunc_CalcExplosionDamageOverride_Damage, const struct FLinearColor& CallFunc_Map_Find_Value2, bool CallFunc_Map_Find_ReturnValue2, class UClass* CallFunc_GetProjectileDamageType_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, enum class ETeamAttitude CallFunc_GetTeamAttitudeTowardsActor_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


