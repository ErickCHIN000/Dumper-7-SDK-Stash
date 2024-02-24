#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x49 (0x4B9 - 0x470)
// BlueprintGeneratedClass ba_aa_Armor_Template.ba_aa_Armor_Template_C
class Aba_aa_Armor_Template_C : public ACGActiveItem
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x470(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x478(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x480(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          EmptyUpgradesArray;                                // 0x488(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FArmorInsertInfo                      OldInsertInfo;                                     // 0x498(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                        Pad_1044[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   ArmorInfoDT;                                       // 0x4A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         IsSameArmor;                                       // 0x4B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class Aba_aa_Armor_Template_C* GetDefaultObj();

	void ShowArmorLog(bool Equipped, bool Temp_bool_Variable, enum class Enum_OnscreenLogDictionaryKeys Temp_byte_Variable, enum class Enum_OnscreenLogDictionaryKeys Temp_byte_Variable_1, TArray<float>& K2Node_MakeArray_Array, enum class Enum_OnscreenLogDictionaryKeys K2Node_Select_Default, const struct FArmorInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array_1);
	void DropInserts(class FName Name, float Amount, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess, class ABP_PickableItem_Spawnable_00_C* CallFunc_FinishSpawningActor_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue);
	void OnNotifyEnd_70A8BD00490CF35E04FC62AF37A858A4(class FName NotifyName);
	void OnNotifyBegin_70A8BD00490CF35E04FC62AF37A858A4(class FName NotifyName);
	void OnInterrupted_70A8BD00490CF35E04FC62AF37A858A4(class FName NotifyName);
	void OnBlendOut_70A8BD00490CF35E04FC62AF37A858A4(class FName NotifyName);
	void OnCompleted_70A8BD00490CF35E04FC62AF37A858A4(class FName NotifyName);
	void OnNotifyEnd_67A9357F4118C6DA868DA58FA709B84A(class FName NotifyName);
	void OnNotifyBegin_67A9357F4118C6DA868DA58FA709B84A(class FName NotifyName);
	void OnInterrupted_67A9357F4118C6DA868DA58FA709B84A(class FName NotifyName);
	void OnBlendOut_67A9357F4118C6DA868DA58FA709B84A(class FName NotifyName);
	void OnCompleted_67A9357F4118C6DA868DA58FA709B84A(class FName NotifyName);
	void AlternativeActivateItem();
	void ActivateItem();
	void InstantUnequip();
	void ReturnInsertsFromOldArmor(float ArmorAmount, struct FArmorInsertInfo& ArmorInsertInfo);
	void ExecuteUbergraph_ba_aa_Armor_Template(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_7, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName Temp_name_Variable_1, class USkeletalMeshComponent* CallFunc_GetHands_ReturnValue, class USkeletalMeshComponent* CallFunc_GetHands_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, float CallFunc_Conv_IntToFloat_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, class FName CallFunc_GetEquippedArmorInfoName_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsArmorEquipped_ReturnValue, class USkeletalMeshComponent* CallFunc_GetHands_ReturnValue_2, class USkeletalMeshComponent* CallFunc_GetHands_ReturnValue_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, const struct FArmorInsertInfo& CallFunc_GetInsertInfo_ReturnValue, bool CallFunc_IsArmorEquipped_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue, class USkeletalMeshComponent* CallFunc_GetHands_ReturnValue_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, float CallFunc_EquipDifferentArmor_ReturnValue, class FName K2Node_CustomEvent_NotifyName_8, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, float CallFunc_EquipDifferentArmor_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, TArray<float>& K2Node_MakeArray_Array, bool CallFunc_Greater_FloatFloat_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8, const struct FArmorInsertInfo& CallFunc_GetInsertInfo_ReturnValue_1, float CallFunc_EquipDifferentArmor_ReturnValue_2, bool CallFunc_IsArmorEquipped_ReturnValue_2, float K2Node_CustomEvent_ArmorAmount, const struct FArmorInsertInfo& K2Node_CustomEvent_ArmorInsertInfo, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9, float CallFunc_Divide_FloatFloat_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_3, float CallFunc_Add_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool CallFunc_Greater_FloatFloat_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue_1, TArray<float>& K2Node_MakeArray_Array_2, bool CallFunc_Greater_FloatFloat_ReturnValue_3, class FName K2Node_CustomEvent_NotifyName_9, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array_3);
};

}


