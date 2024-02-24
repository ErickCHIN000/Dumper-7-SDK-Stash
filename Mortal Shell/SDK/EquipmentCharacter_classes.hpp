#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0xCE8 - 0xC18)
// BlueprintGeneratedClass EquipmentCharacter.EquipmentCharacter_C
class AEquipmentCharacter_C : public ABaseCharacter_C
{
public:
	class USkeletalMeshComponent*                OffHand;                                           // 0xC18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                MainHand;                                          // 0xC20(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                LeftRing;                                          // 0xC28(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                RightRing;                                         // 0xC30(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Accessory;                                         // 0xC38(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Waist;                                             // 0xC40(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Back;                                              // 0xC48(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Feet;                                              // 0xC50(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Legs;                                              // 0xC58(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Hands;                                             // 0xC60(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Chest;                                             // 0xC68(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Shoulder;                                          // 0xC70(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Head;                                              // 0xC78(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         HeadMesh;                                          // 0xC80(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         ShoulderMesh;                                      // 0xC88(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         ChestMesh;                                         // 0xC90(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         HandsMesh;                                         // 0xC98(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         LegsMesh;                                          // 0xCA0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         FeetMesh;                                          // 0xCA8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         BackMesh;                                          // 0xCB0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         WaistMesh;                                         // 0xCB8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         AccessoryMesh;                                     // 0xCC0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         RightRingMesh;                                     // 0xCC8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         LeftRingMesh;                                      // 0xCD0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         MainHandMesh;                                      // 0xCD8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         OffHandMesh;                                       // 0xCE0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AEquipmentCharacter_C* GetDefaultObj();

	void OnKatanasToAxe();
	void OnMainHandWeaponChanged();
	void OnRep_OffHandMesh(const struct FEquipmentSockets& LocalEquipmentSockets);
	void OnRep_MainHandMesh(class FName Local_ID, class FName SocketToUse, const struct FEquipmentSockets& LocalEquipmentSockets, bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, bool Temp_bool_Variable_1, class UMaterialInterface* Temp_object_Variable_2, class UMaterialInterface* Temp_object_Variable_3, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue_2, bool CallFunc_TwitchDrop_ShouldUseWeaponSkin_bYes, class UMaterialInterface* K2Node_Select_Default, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_K2_AttachToComponent_ReturnValue_3, bool CallFunc_K2_AttachToComponent_ReturnValue_4, bool CallFunc_K2_AttachToComponent_ReturnValue_5, bool CallFunc_K2_AttachToComponent_ReturnValue_6, const struct FInventoryItem& CallFunc_GetMainHandWeapon_EquippedMainHandWeapon, bool CallFunc_TwitchDrop_ShouldUseWeaponSkin_bYes_1, class UMaterialInterface* K2Node_Select_Default_1, bool CallFunc_K2_AttachToComponent_ReturnValue_7);
	void OnRep_LeftRingMesh(const struct FEquipmentSockets& LocalEquipmentSockets, bool CallFunc_K2_AttachTo_ReturnValue);
	void OnRep_RightRingMesh(const struct FEquipmentSockets& LocalEquipmentSlots, bool CallFunc_K2_AttachTo_ReturnValue);
	void OnRep_AccessoryMesh();
	void OnRep_WaistMesh();
	void OnRep_BackMesh();
	void OnRep_FeetMesh();
	void OnRep_LegsMesh();
	void OnRep_HandsMesh();
	void OnRep_ChestMesh();
	void OnRep_ShoulderMesh();
	void OnRep_HeadMesh();
};

}


