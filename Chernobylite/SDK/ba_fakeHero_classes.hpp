#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x308 - 0x2C0)
// BlueprintGeneratedClass ba_fakeHero.ba_fakeHero_C
class Aba_fakeHero_C : public ACGFakeHero
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                  CustomActionStaticMesh_00;                         // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                CustomActionSkeletalMesh_01;                       // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                CustomActionSkeletalMesh_00;                       // 0x2D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                  CustomActionStaticMesh_01;                         // 0x2E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAk_Component_Hero_C*                  Ak_Component_Hero;                                 // 0x2E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCapsuleComponent*                     Capsule;                                           // 0x2F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCameraComponent*                      Camera;                                            // 0x2F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x300(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Aba_fakeHero_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void OnAnimItemAttachment(uint8 SkeletalIdx, class UAnimSequence* Anim);
	void OnAnimItemVisibility();
	void OnAnimStarted();
	void ExecuteUbergraph_ba_fakeHero(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 Temp_int_Array_Index_Variable_1, uint8 K2Node_CustomEvent_SkeletalIdx, class UAnimSequence* K2Node_CustomEvent_Anim, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, class FName CallFunc_GetAttachSocketName_ReturnValue, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue, class FName CallFunc_GetAttachSocketName_ReturnValue_1, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue_2, class FName CallFunc_GetAttachSocketName_ReturnValue_2, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue_3, bool CallFunc_SetStaticMesh_ReturnValue_1, class FName CallFunc_GetAttachSocketName_ReturnValue_3, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, bool CallFunc_K2_AttachToComponent_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue_2, bool CallFunc_K2_AttachToComponent_ReturnValue_3, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult_2, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult_3, uint8 Temp_byte_Variable, class USkeletalMeshComponent* K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, const struct FWeightedBlendable& CallFunc_Array_Get_Item, const struct FWeightedBlendable& CallFunc_Array_Get_Item_1, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, TScriptInterface<class IBlendableInterface> CallFunc_RemoveBlendable_InBlendableObject_CastInput, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput);
};

}


