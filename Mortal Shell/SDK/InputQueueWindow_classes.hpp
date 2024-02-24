#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x49 - 0x30)
// BlueprintGeneratedClass InputQueueWindow.InputQueueWindow_C
class UInputQueueWindow_C : public UAnimNotifyState
{
public:
	bool                                         bDoNotCallMasterEvent;                             // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1ECF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class Enum_QueuedInput>          AllowedInputs;                                     // 0x38(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	enum class Enum_QueueWindow_ParryType        ParryType;                                         // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UInputQueueWindow_C* GetDefaultObj();

	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AZero_Base_C* Local_0Base, class AActor* CallFunc_GetOwner_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, class AZero_Base_C* Local_0Base, class AActor* CallFunc_GetOwner_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
};

}


