#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x63 (0x93 - 0x30)
// BlueprintGeneratedClass bpn_hero_showHandItem.bpn_hero_showHandItem_C
class Ubpn_hero_showHandItem_C : public UAnimNotifyState
{
public:
	class USkeletalMesh*                         SkeletalMesh;                                      // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Anim;                                              // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                SkeletalAnimInstance;                              // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           StaticMesh;                                        // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SocketName;                                        // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A6E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            LocalTransform;                                    // 0x60(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	bool                                         bCustomHands;                                      // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EHandItemIndex                    HandItemIndex;                                     // 0x91(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bStartHidden;                                      // 0x92(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class Ubpn_hero_showHandItem_C* GetDefaultObj();

	void ResetSkinMaterialsStaticMesh(class UStaticMeshComponent* StaticMeshComponent, int32 CallFunc_GetNumMaterials_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void UpdateSkinStaticMesh(class UStaticMeshComponent* StaticMeshComponent, const struct FAttachmentSkinInfo& SkinInfo, class ACGWeapon* Weapon, bool ReplacedAlready, int32 Temp_int_Loop_Counter_Variable, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_K2_GetWeaponSkinByType_OutSuccess, const struct FWeaponSkinInfo& CallFunc_K2_GetWeaponSkinByType_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, TSoftObjectPtr<class UStaticMesh> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AMainPawnCpp* CallFunc_GetCGPawnBase_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, class ACGWeapon* K2Node_DynamicCast_AsCGWeapon, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_FindFirstContaining_ReturnValue, enum class EWeaponSkinType CallFunc_ItemIdToWeaponSkinType_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_K2_GetWeaponSkinByType_OutSuccess_1, const struct FWeaponSkinInfo& CallFunc_K2_GetWeaponSkinByType_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FAttachmentSkinInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, const struct FKnifeSkinInfo& CallFunc_Array_Get_Item, bool CallFunc_Array_Contains_ReturnValue, TSoftObjectPtr<class UMaterialInterface> CallFunc_Array_Get_Item_1, bool CallFunc_BooleanOR_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_SetStaticMesh_ReturnValue, TSoftObjectPtr<class UStaticMesh> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_1);
	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, class ACh_Hero_00_C* Hero, float CurveScale, class AActor* CallFunc_GetOwner_ReturnValue, class ACGFakeHero* K2Node_DynamicCast_AsCGFake_Hero, bool K2Node_DynamicCast_bSuccess, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* K2Node_DynamicCast_AsCh_Hero_00, bool K2Node_DynamicCast_bSuccess_1, enum class EHandItemIndex Temp_byte_Variable, class USkeletalMeshComponent* K2Node_Select_Default, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetCurveValue_ReturnValue);
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class ACh_Hero_00_C* Hero, enum class EHandItemIndex Temp_byte_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class ACGFakeHero* K2Node_DynamicCast_AsCGFake_Hero, bool K2Node_DynamicCast_bSuccess, class ACh_Hero_00_C* K2Node_DynamicCast_AsCh_Hero_00, bool K2Node_DynamicCast_bSuccess_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, enum class EHandItemIndex Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UStaticMeshComponent* K2Node_Select_Default, class USkinnedMeshComponent* K2Node_Select_Default_1, bool CallFunc_SetStaticMesh_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, bool bFakeHero, class UStaticMeshComponent* RealStatic, class USkeletalMeshComponent* RealSkeletal, class ACh_Hero_00_C* Hero, enum class EHandItemIndex Temp_byte_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class ACGFakeHero* K2Node_DynamicCast_AsCGFake_Hero, bool K2Node_DynamicCast_bSuccess, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* K2Node_DynamicCast_AsCh_Hero_00, bool K2Node_DynamicCast_bSuccess_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UStaticMeshComponent* K2Node_Select_Default, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult_1, bool CallFunc_K2_AttachToComponent_ReturnValue_3, enum class EHandItemIndex Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, class USkeletalMeshComponent* K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue_1);
};

}


