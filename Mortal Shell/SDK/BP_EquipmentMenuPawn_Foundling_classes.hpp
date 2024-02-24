#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x56 (0x366 - 0x310)
// BlueprintGeneratedClass BP_EquipmentMenuPawn_Foundling.BP_EquipmentMenuPawn_Foundling_C
class ABP_EquipmentMenuPawn_Foundling_C : public ABP_EquipmentMenuPawn_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                   SpotLight_Top;                                     // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   SpotLight_Right;                                   // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   SpotLight_Left;                                    // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URectLightComponent*                   RectLight;                                         // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SK_Weapon_OffHand;                                 // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SK_Weapon_MainHand;                                // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       InventoryLookAtPlane;                              // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SK_Mannequin;                                      // 0x350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CursorLookAtLocation;                              // 0x358(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EComboTypes                       CurrentWeapon;                                     // 0x364(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Weapon_ReinitPose;                                 // 0x365(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_EquipmentMenuPawn_Foundling_C* GetDefaultObj();

	void UpdateDye(enum class Enum_ShellDye CustomDyeValue, class USkeletalMesh* CallFunc_GetMeshForArmorType_ReturnValue);
	void SetLights(bool On);
	class UBlendSpaceBase* GetWeaponAnimation(enum class EComboTypes Temp_byte_Variable, class UBlendSpaceBase* Temp_object_Variable, class UBlendSpaceBase* Temp_object_Variable_1, class UBlendSpaceBase* Temp_object_Variable_2, class UBlendSpaceBase* Temp_object_Variable_3, class UBlendSpaceBase* Temp_object_Variable_4, class UBlendSpaceBase* Temp_object_Variable_5, class UBlendSpaceBase* Temp_object_Variable_6, class UBlendSpaceBase* K2Node_Select_Default);
	void SetCorrectAnimation(class UBlendSpaceBase* CallFunc_GetWeaponAnimation_ReturnValue);
	void ShowSelf();
	void HideSelf();
	class FName GetWeaponSocket(enum class EComboTypes Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, class FName Temp_name_Variable_6, class FName K2Node_Select_Default);
	void SetWeaponVisibility(bool IsVisible_);
	void Mannequin_SetWeapon(enum class EComboTypes Selection, class FName CallFunc_GetWeaponSocket_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, class FName CallFunc_GetWeaponSocket_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue_2, class FName CallFunc_GetWeaponSocket_ReturnValue_2, bool CallFunc_K2_AttachToComponent_ReturnValue_3, bool CallFunc_K2_AttachToComponent_ReturnValue_4, class FName CallFunc_GetWeaponSocket_ReturnValue_3, bool CallFunc_K2_AttachToComponent_ReturnValue_5, class FName CallFunc_GetWeaponSocket_ReturnValue_4, bool CallFunc_K2_AttachToComponent_ReturnValue_6, class FName CallFunc_GetWeaponSocket_ReturnValue_5, bool CallFunc_K2_AttachToComponent_ReturnValue_7, bool K2Node_SwitchEnum_CmpSuccess);
	void CalcCursorLookAtLocation(const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, float CallFunc_GetMousePosition_LocationX, float CallFunc_GetMousePosition_LocationY, bool CallFunc_GetMousePosition_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector& CallFunc_DeprojectScreenToWorld_WorldPosition, const struct FVector& CallFunc_DeprojectScreenToWorld_WorldDirection, bool CallFunc_DeprojectScreenToWorld_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_LinePlaneIntersection_OriginNormal_T, const struct FVector& CallFunc_LinePlaneIntersection_OriginNormal_Intersection, bool CallFunc_LinePlaneIntersection_OriginNormal_ReturnValue);
	void Mannequin_SetDarkForm(class USkeletalMesh* CallFunc_GetMeshForArmorType_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveTick(float DeltaSeconds);
	void Event_CustomPossess();
	void Event_CustomUnpossess();
	void ExecuteUbergraph_BP_EquipmentMenuPawn_Foundling(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_Event_OtherActor, float K2Node_Event_DeltaSeconds, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue);
};

}


