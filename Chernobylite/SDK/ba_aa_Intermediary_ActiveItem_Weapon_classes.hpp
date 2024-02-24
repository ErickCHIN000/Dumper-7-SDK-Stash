#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x7D0 - 0x730)
// BlueprintGeneratedClass ba_aa_Intermediary_ActiveItem_Weapon.ba_aa_Intermediary_ActiveItem_Weapon_C
class Aba_aa_Intermediary_ActiveItem_Weapon_C : public ACGWeapon
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x730(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	float                                        ScopeFade_Alpha_D9A2E15F4B288834979079B161D20765;  // 0x738(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ScopeFade__Direction_D9A2E15F4B288834979079B161D20765; // 0x73C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_23ED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ScopeFade;                                         // 0x740(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Itemtooltip;                                       // 0x748(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     ScopeViewPP;                                       // 0x750(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     ThermalViewPP;                                     // 0x758(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class USceneComponent*, bool>           PreHiddenChanges;                                  // 0x760(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         bEnableInventoryUpdates;                           // 0x7B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2409[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          UpdateThermalActorsTimerHandle;                    // 0x7B8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class ACGAICharacter*>                ThermalVisionActors;                               // 0x7C0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class Aba_aa_Intermediary_ActiveItem_Weapon_C* GetDefaultObj();

	void GetDamageDistanceModifier(const struct FVector& InWeaponLocation, const struct FVector& InTraceEnd, const struct FVector& InHitLocation, float* OutDMGModifier, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, float CallFunc_VSize_ReturnValue, float CallFunc_VSize_ReturnValue_1, float CallFunc_GetCombinedAttachment_Range_OutCombinedRange, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue);
	void GetCombinedAttachment_Sway(float* OutCombinedSway, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3);
	void GetCombinedAttachment_Recoil(int32* OutCombinedRecoil, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3);
	void GetCombinedAttachment_Range(float* OutCombinedRange, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3);
	void GetCombinedAttachment_Damage(float* OutCombinedDamage, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3);
	void UnhideNonHidden(TMap<class USceneComponent*, bool> InPreChanges, const TArray<class USceneComponent*>& Key, const TArray<bool>& Val, TArray<bool>& CallFunc_Map_Values_Values, TArray<class USceneComponent*>& CallFunc_Map_Keys_Keys, int32 Temp_int_Array_Index_Variable, bool CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, class USceneComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void ApplyRagdollPush(const struct FCGMultitraceResult& InLastMultitrace, float InPushScale, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsValid_ReturnValue);
	void GetDamageModifierByRange(const struct FVector& InTraceStart, const struct FVector& InTraceEnd, const struct FVector& InImpactPoint, float* OutDamageModifier, float CallFunc_GetCombinedAttachment_Range_OutCombinedRange, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, float CallFunc_VSize_ReturnValue, float CallFunc_VSize_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue);
	void ApplyAIRagdollPush(class ACGAICharacter* InLastAIHit, const struct FCGMultitraceResult& InLastMultitrace, float InPushScale, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
	void ScopeFade__FinishedFunc();
	void ScopeFade__UpdateFunc();
	void ScopeFade__Event__EventFunc();
	void OnHideShowAdditional(enum class EState OutTargetState);
	void SwitchToScopeView(float InFadeScale, bool InThermalVision);
	void UpdateThermalVisionActors();
	void StartThermalVisionTimer();
	void DisableThermalVisionForActors();
	void ExecuteUbergraph_ba_aa_Intermediary_ActiveItem_Weapon(int32 EntryPoint, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class EState K2Node_Event_OutTargetState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, float K2Node_CustomEvent_InFadeScale, bool K2Node_CustomEvent_InThermalVision, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, TScriptInterface<class IBlendableInterface> CallFunc_RemoveBlendable_InBlendableObject_CastInput, TScriptInterface<class IBlendableInterface> CallFunc_RemoveBlendable_InBlendableObject_CastInput_1, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_1, bool Temp_bool_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, bool CallFunc_Not_PreBool_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, class USceneComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_2, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue);
};

}


