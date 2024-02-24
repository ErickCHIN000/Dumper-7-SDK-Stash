#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x50 - 0x38)
// BlueprintGeneratedClass BP_AnimNotify_LadderClimb.BP_AnimNotify_LadderClimb_C
class UBP_AnimNotify_LadderClimb_C : public UAnimNotify
{
public:
	enum class EAudioPlayerPerspective           PerspectiveToPlayIn;                               // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAudioPlayerAppendageType         HandOrFoot;                                        // 0x39(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReversePlay;                                       // 0x3A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1932[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODEvent*                            HandTestFMODEvent;                                 // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            FootTestFMODEvent;                                 // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AnimNotify_LadderClimb_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UFMODEvent* Temp_wildcard_Variable, bool K2Node_SwitchEnum_CmpSuccess, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	class FString GetNotifyName(const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, bool Temp_bool_Variable, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
};

}


