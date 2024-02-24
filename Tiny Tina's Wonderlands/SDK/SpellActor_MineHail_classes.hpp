#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x32 (0x684 - 0x652)
// BlueprintGeneratedClass SpellActor_MineHail.SpellActor_MineHail_C
class ASpellActor_MineHail_C : public ASpellActor_Meteor_Base_C
{
public:
	uint8                                        Pad_31F3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x658(0x8)(Transient, DuplicateTransient)
	int32                                        ProjCount;                                         // 0x660(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RadialProjSpread;                                  // 0x664(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CenterProjDirection;                               // 0x668(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ProjTravelDistance;                                // 0x674(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbility_MineHail_C*                   SpellAbility;                                      // 0x678(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ProjDamageScalar;                                  // 0x680(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ASpellActor_MineHail_C* GetDefaultObj();

	void FireProjectile(const struct FVector& StartLocation, const struct FVector& EndLocation, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsGbx_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, const struct FSpellLightProjectileInitializationData& K2Node_MakeStruct_SpellLightProjectileInitializationData);
	void UserConstructionScript();
	void GbxAsyncRequest_Miss_4A7B387C40EAC214732A09A551E2090E(struct FHitResult& Result);
	void GbxAsyncRequest_Hit_4A7B387C40EAC214732A09A551E2090E(struct FHitResult& Result);
	void GbxAsyncRequest_Miss_DBABB6984A03648419A408A4A0EEE900(struct FHitResult& Result);
	void GbxAsyncRequest_Hit_DBABB6984A03648419A408A4A0EEE900(struct FHitResult& Result);
	void TrySpawnMeteor();
	void FindMeteorSpawnLoc();
	void ReceiveBeginPlay();
	void BeginCleanup();
	void ExecuteUbergraph_SpellActor_MineHail(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FHitResult& K2Node_CustomEvent_Result1, const struct FHitResult& Temp_struct_Variable, const struct FHitResult& K2Node_CustomEvent_Result, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, TArray<struct FTransform>& CallFunc_GeneratePointsOnCone_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& K2Node_CustomEvent_Result2, const struct FHitResult& K2Node_CustomEvent_Result3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2, const struct FVector& CallFunc_RandomPointInBoundingBox_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FGbxTraceAsyncRequest& K2Node_MakeStruct_GbxTraceAsyncRequest, const struct FVector& CallFunc_Add_VectorVector_ReturnValue3, int32 Temp_int_Array_Index_Variable, TArray<class AActor*>& K2Node_MakeArray_Array1, const struct FTransform& CallFunc_Array_Get_Item, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue4, const struct FVector& CallFunc_MakeVector_ReturnValue1, const struct FVector& CallFunc_RandomPointInBoundingBox_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, float CallFunc_Add_FloatFloat_ReturnValue, const struct FGbxTraceAsyncRequest& K2Node_MakeStruct_GbxTraceAsyncRequest1, const struct FVector& CallFunc_MakeVector_ReturnValue2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue5, float CallFunc_GetValueOfAttribute_ReturnValue, class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, class UAbility_MineHail_C* K2Node_DynamicCast_AsAbility_Mine_Hail, bool K2Node_DynamicCast_bSuccess);
};

}


