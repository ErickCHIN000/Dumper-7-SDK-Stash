#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE0 (0xA38 - 0x958)
// BlueprintGeneratedClass BPWeaponFireProjectileComponent_WizardsPipe.BPWeaponFireProjectileComponent_WizardsPipe_C
class UBPWeaponFireProjectileComponent_WizardsPipe_C : public UWeaponFireProjectileComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x958(0x8)(Transient, DuplicateTransient)
	int32                                        UseCount;                                          // 0x960(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4316[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEnvQueryParams                       TargetSearch;                                      // 0x968(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FDataTableValueHandle                 DamageScalar;                                      // 0xA20(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UBPWeaponFireProjectileComponent_WizardsPipe_C* GetDefaultObj();

	class UClass* GetElementFromHealthType(class AActor* Actor, bool TypeFound, class UClass* ProjDamageType, int32 Temp_int_Loop_Counter_Variable, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_SwitchName_CmpSuccess, bool Temp_bool_Variable, class UClass* K2Node_Select_Default, class UGameResourcePoolManagerComponent* CallFunc_GetComponentByClass_ReturnValue1, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue, bool CallFunc_IsResourcePoolInState_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1);
	void ReceiveBeginPlay();
	void WizardsPipe_OnUsed();
	void OpenArcaneGate();
	void CloseArcaneGate();
	void ExecuteUbergraph_BPWeaponFireProjectileComponent_WizardsPipe(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Variable, int32 Temp_int_Variable1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable2, int32 CallFunc_Add_IntInt_ReturnValue1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, float CallFunc_GetValueOfAttribute_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue2, float CallFunc_GetValueOfAttribute_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue3, class AActor* CallFunc_GetOwner_ReturnValue4, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue, class AWeapon* CallFunc_GetWeapon_ReturnValue, class UClass* CallFunc_GetElementFromHealthType_ReturnValue, class UMeshComponent* CallFunc_GetAttachmentMesh_ReturnValue, int32 Temp_int_Variable3, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class AActor* CallFunc_GetOwner_ReturnValue5, float CallFunc_GetValueOfAttribute_ReturnValue2, float CallFunc_GetDataTableValueFromHandle_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue6, float CallFunc_Multiply_FloatFloat_ReturnValue, class AWeapon* CallFunc_GetWeapon_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_GetValueOfAttribute_ReturnValue3, int32 CallFunc_GetLoadedAmmo_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue7, float CallFunc_Conv_IntToFloat_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue8, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetActorAimViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorAimViewPoint_OutRotation, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetUpVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue1, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue, int32 K2Node_Select_Default, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, const struct FOakLightProjectileInitializationData& K2Node_MakeStruct_OakLightProjectileInitializationData);
};

}


