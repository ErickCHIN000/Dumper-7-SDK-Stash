#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x48 - 0x30)
// BlueprintGeneratedClass NotifyState_QuickHideWeapon.NotifyState_QuickHideWeapon_C
class UNotifyState_QuickHideWeapon_C : public UAnimNotifyState
{
public:
	bool                                         OnlyIf;                                            // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EComboTypes>               Weapons;                                           // 0x38(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UNotifyState_QuickHideWeapon_C* GetDefaultObj();

	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, class AActor* CallFunc_GetOwner_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue);
};

}


