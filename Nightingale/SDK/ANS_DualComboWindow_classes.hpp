#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x4C - 0x40)
// BlueprintGeneratedClass ANS_DualComboWindow.ANS_DualComboWindow_C
class UANS_DualComboWindow_C : public UANS_SendGameplayEvent_C
{
public:
	bool                                         bComboOnInput;                                     // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bBlendIntoSection;                                 // 0x41(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIncrementCounter;                                 // 0x42(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52AF[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  NNextComboSection;                                 // 0x44(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UANS_DualComboWindow_C* GetDefaultObj();

	void NextComboSection(class FName* NextComboSection);
	void IncrementCounter(bool* IncrementCounter);
	void BlendIntoSection(bool* BlendIntoSection);
	void ComboOnInput(bool* ComboOnInput);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, struct FAnimNotifyEventReference& EventReference, class AActor* CallFunc_GetOwner_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, int32 CallFunc_SendGameplayEventToActor_ReturnValue);
};

}


