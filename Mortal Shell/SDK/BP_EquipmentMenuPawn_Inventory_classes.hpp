#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x350 - 0x310)
// BlueprintGeneratedClass BP_EquipmentMenuPawn_Inventory.BP_EquipmentMenuPawn_Inventory_C
class ABP_EquipmentMenuPawn_Inventory_C : public ABP_EquipmentMenuPawn_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                SK_Weapon_OffHand;                                 // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SK_Weapon_MainHand;                                // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       InventoryLookAtPlane;                              // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   SpotLight;                                         // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SK_Mannequin;                                      // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CursorLookAtLocation;                              // 0x340(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EComboTypes                       CurrentWeapon;                                     // 0x34C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAnimPlaying;                                     // 0x34D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EItemConsumeAnimToPlay            AnimType;                                          // 0x34E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Weapon_ReinitPose;                                 // 0x34F(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_EquipmentMenuPawn_Inventory_C* GetDefaultObj();

	void ShowSelf();
	void HideSelf();
	class FName GetWeaponSocket(enum class EComboTypes Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, class FName Temp_name_Variable_6, class FName K2Node_Select_Default);
	void SetWeaponVisibility(bool IsVisible_);
	void Mannequin_SetWeapon(enum class EComboTypes Selection, class FName CallFunc_GetWeaponSocket_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, class FName CallFunc_GetWeaponSocket_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue_2, class FName CallFunc_GetWeaponSocket_ReturnValue_2, bool CallFunc_K2_AttachToComponent_ReturnValue_3, bool CallFunc_K2_AttachToComponent_ReturnValue_4, class FName CallFunc_GetWeaponSocket_ReturnValue_3, bool CallFunc_K2_AttachToComponent_ReturnValue_5, class FName CallFunc_GetWeaponSocket_ReturnValue_4, bool CallFunc_K2_AttachToComponent_ReturnValue_6, class FName CallFunc_GetWeaponSocket_ReturnValue_5, bool CallFunc_K2_AttachToComponent_ReturnValue_7, bool K2Node_SwitchEnum_CmpSuccess);
	void CalcCursorLookAtLocation(const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, float CallFunc_GetMousePosition_LocationX, float CallFunc_GetMousePosition_LocationY, bool CallFunc_GetMousePosition_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector& CallFunc_DeprojectScreenToWorld_WorldPosition, const struct FVector& CallFunc_DeprojectScreenToWorld_WorldDirection, bool CallFunc_DeprojectScreenToWorld_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_LinePlaneIntersection_OriginNormal_T, const struct FVector& CallFunc_LinePlaneIntersection_OriginNormal_Intersection, bool CallFunc_LinePlaneIntersection_OriginNormal_ReturnValue);
	void Mannequin_SetArmor(enum class EArmorTypes Selection, class USkeletalMesh* CallFunc_GetMeshForArmorType_ReturnValue);
	void OnNotifyEnd_8F60FBF44F3884FDD3F5DB8D54E1E74B(class FName NotifyName);
	void OnNotifyBegin_8F60FBF44F3884FDD3F5DB8D54E1E74B(class FName NotifyName);
	void OnInterrupted_8F60FBF44F3884FDD3F5DB8D54E1E74B(class FName NotifyName);
	void OnBlendOut_8F60FBF44F3884FDD3F5DB8D54E1E74B(class FName NotifyName);
	void OnCompleted_8F60FBF44F3884FDD3F5DB8D54E1E74B(class FName NotifyName);
	void OnNotifyEnd_6610B3F6444A7277CA1023915A34D5E2(class FName NotifyName);
	void OnNotifyBegin_6610B3F6444A7277CA1023915A34D5E2(class FName NotifyName);
	void OnInterrupted_6610B3F6444A7277CA1023915A34D5E2(class FName NotifyName);
	void OnBlendOut_6610B3F6444A7277CA1023915A34D5E2(class FName NotifyName);
	void OnCompleted_6610B3F6444A7277CA1023915A34D5E2(class FName NotifyName);
	void OnNotifyEnd_488031004E68BD651625C798C16B2A2A(class FName NotifyName);
	void OnNotifyBegin_488031004E68BD651625C798C16B2A2A(class FName NotifyName);
	void OnInterrupted_488031004E68BD651625C798C16B2A2A(class FName NotifyName);
	void OnBlendOut_488031004E68BD651625C798C16B2A2A(class FName NotifyName);
	void OnCompleted_488031004E68BD651625C798C16B2A2A(class FName NotifyName);
	void OnNotifyEnd_B83E6F504D0E5A9AA85A6AA85F1EF929(class FName NotifyName);
	void OnNotifyBegin_B83E6F504D0E5A9AA85A6AA85F1EF929(class FName NotifyName);
	void OnInterrupted_B83E6F504D0E5A9AA85A6AA85F1EF929(class FName NotifyName);
	void OnBlendOut_B83E6F504D0E5A9AA85A6AA85F1EF929(class FName NotifyName);
	void OnCompleted_B83E6F504D0E5A9AA85A6AA85F1EF929(class FName NotifyName);
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveTick(float DeltaSeconds);
	void PlayItemAnimation(enum class EItemConsumeAnimToPlay AnimType);
	void Event_CustomPossess();
	void Event_CustomUnpossess();
	void ExecuteUbergraph_BP_EquipmentMenuPawn_Inventory(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_17, class FName K2Node_CustomEvent_NotifyName_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_14, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_9, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName Temp_name_Variable_2, enum class EItemConsumeAnimToPlay Temp_byte_Variable, class UAnimMontage* Temp_object_Variable, class UAnimMontage* Temp_object_Variable_1, class UAnimMontage* Temp_object_Variable_2, class UAnimMontage* Temp_object_Variable_3, class UAnimMontage* Temp_object_Variable_4, class UAnimMontage* Temp_object_Variable_5, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class FName Temp_name_Variable_3, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_18, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, bool CallFunc_IsValid_ReturnValue_2, class FName K2Node_CustomEvent_NotifyName_19, class UAnimMontage* K2Node_Select_Default, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, class AActor* K2Node_Event_OtherActor, bool CallFunc_IsValid_ReturnValue_3, float K2Node_Event_DeltaSeconds, enum class EItemConsumeAnimToPlay K2Node_CustomEvent_AnimType, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, bool CallFunc_IsValid_ReturnValue_4);
};

}


