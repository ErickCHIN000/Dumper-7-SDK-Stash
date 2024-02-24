#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x180 - 0x158)
// BlueprintGeneratedClass ArsenalChangeWeaponComponent.ArsenalChangeWeaponComponent_C
class UArsenalChangeWeaponComponent_C : public UTTLChangeWeaponComponentBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x158(0x8)(Transient, DuplicateTransient)
	bool                                         DebugDrawDetectBox;                                // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8CD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  LeftSocketName;                                    // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  RightSocketName;                                   // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseCharacter_C*                      Owner;                                             // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UArsenalChangeWeaponComponent_C* GetDefaultObj();

	void ChangeWeaponMulti(enum class ETTLWeaponSlot ChangeSlot, bool DestroyOldWeapon);
	class ATTLWeaponBase* CallChangeWeaponFromBP(enum class ETTLWeaponSlot ChangeSlot, bool IsDestroyOldWeapon, bool NeedsRegisterMultiList, class ATTLWeaponBase* CallFunc_ChangeWeapon_OldWeapon);
	void ChangeNewWeapon(class FName RowName, enum class ETTLWeaponSlot WeaponSlot, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class ATTLWeaponBase* CallFunc_ChangeWeapon_OldWeapon, class UClass* CallFunc_GetWeaponClass_Actor, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class ATTLWeaponBase* K2Node_DynamicCast_AsTTLWeapon_Base, bool K2Node_DynamicCast_bSuccess);
	void ChangeWeapon(enum class ETTLWeaponSlot ChangeSlot, bool DestroyOldWeapon, bool NeedsRegisterMultiList, class ATTLWeaponBase** OldWeapon, class ATTLWeaponBase* NewWeaponToChange, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class USkeletalMeshComponent* CallFunc_GetMeshForWeaponLeft_Mesh, bool CallFunc_ChangeHandWeapon_ReturnValue, class USkeletalMeshComponent* CallFunc_GetMeshForWeaponRight_Mesh, bool CallFunc_ChangeHandWeapon_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, class ATTLSupportWeaponBase* K2Node_DynamicCast_AsTTLSupport_Weapon_Base, bool K2Node_DynamicCast_bSuccess, class ATTLShoulderWeaponBase* K2Node_DynamicCast_AsTTLShoulder_Weapon_Base, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsValid_ReturnValue5, bool CallFunc_IsValid_ReturnValue6, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess2, class USkeletalMeshComponent* CallFunc_GetMeshForShoulderWeaponLeft_Mesh, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UArsenal_AnimBP_C* K2Node_DynamicCast_AsArsenal_Anim_BP, bool K2Node_DynamicCast_bSuccess3);
	void ResetChargeTime();
	void ReceiveBeginPlay();
	void OnMulticastChangeWeapon(enum class ETTLWeaponSlot ChangeSlot, bool DestroyOldWeapon);
	void ExecuteUbergraph_ArsenalChangeWeaponComponent(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, enum class ETTLWeaponSlot K2Node_Event_changeSlot, bool K2Node_Event_destroyOldWeapon, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, class ATTLWeaponBase* CallFunc_ChangeWeapon_OldWeapon);
};

}


