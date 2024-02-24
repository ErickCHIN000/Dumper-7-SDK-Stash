#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5A (0x27A - 0x220)
// BlueprintGeneratedClass BP_EffigyAttack.BP_EffigyAttack_C
class ABP_EffigyAttack_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                SK_EffigyShellGhost;                               // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SK_Weapon_MainHand;                                // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_Opacity_Alpha_287C07174570B3A89A60C79D46F5D9C3; // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_Opacity__Direction_287C07174570B3A89A60C79D46F5D9C3; // 0x23C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1177[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_Opacity;                                  // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ApplyNewShell;                                     // 0x248(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ShiftEnd;                                          // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UMaterialInstanceDynamic*              MID_Ghost;                                         // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SK_Master;                                         // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EArmorTypes                       ShellType;                                         // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EComboTypes                       Weapon;                                            // 0x279(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_EffigyAttack_C* GetDefaultObj();

	class USkeletalMesh* GetWeaponMesh(enum class EComboTypes Temp_byte_Variable, class USkeletalMesh* Temp_object_Variable, class USkeletalMesh* Temp_object_Variable_1, class USkeletalMesh* Temp_object_Variable_2, class USkeletalMesh* Temp_object_Variable_3, class USkeletalMesh* Temp_object_Variable_4, class USkeletalMesh* Temp_object_Variable_5, class USkeletalMesh* Temp_object_Variable_6, class USkeletalMesh* K2Node_Select_Default);
	void Timeline_Opacity__FinishedFunc();
	void Timeline_Opacity__UpdateFunc();
	void OnNotifyEnd_8BCE359347EB28712895408C8A5EE249(class FName NotifyName);
	void OnNotifyBegin_8BCE359347EB28712895408C8A5EE249(class FName NotifyName);
	void OnInterrupted_8BCE359347EB28712895408C8A5EE249(class FName NotifyName);
	void OnBlendOut_8BCE359347EB28712895408C8A5EE249(class FName NotifyName);
	void OnCompleted_8BCE359347EB28712895408C8A5EE249(class FName NotifyName);
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_EffigyAttack(int32 EntryPoint, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, class USkeletalMesh* CallFunc_GetMeshForArmorType_ReturnValue, class USkeletalMesh* CallFunc_GetWeaponMesh_ReturnValue, float CallFunc_GetActiveMontage_OutPosition, class UAnimMontage* CallFunc_GetActiveMontage_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ShiftEnd__DelegateSignature();
	void ApplyNewShell__DelegateSignature();
};

}


