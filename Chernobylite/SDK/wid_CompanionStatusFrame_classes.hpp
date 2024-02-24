#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC2 (0x322 - 0x260)
// WidgetBlueprintGeneratedClass wid_CompanionStatusFrame.wid_CompanionStatusFrame_C
class UWid_CompanionStatusFrame_C : public UUserWidget
{
public:
	class UWid_CompanionAvatarBlock_C*           CompanionAvatar_1;                                 // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_CompanionAvatarBlock_C*           CompanionAvatar_2;                                 // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        CurrentRelationTextBox_1;                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        CurrentRelationTextBox_2;                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RelationTextBox_1;                                 // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RelationTextBox_2;                                 // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              SecondBox;                                         // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  TextBetterRelation;                                // 0x298(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  TextWorseRelation;                                 // 0x2B0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsSecondBoxEmpty;                                  // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C26[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class ERelationshipStatusType, class FText> StatusTexts;                                       // 0x2D0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         WasFirstStatusBetter;                              // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsSameStatus;                                      // 0x321(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_CompanionStatusFrame_C* GetDefaultObj();

	void GetSoundToPlay(class UAkAudioEvent** Event, enum class ECompanionFrameStatusSoundType Temp_byte_Variable, class UAkAudioEvent* Temp_object_Variable, class UAkAudioEvent* Temp_object_Variable_1, class UAkAudioEvent* Temp_object_Variable_2, enum class ECompanionFrameStatusSoundType CallFunc_GetSoundStatusType_SoundType, class UAkAudioEvent* K2Node_Select_Default);
	void GetSoundStatusType(enum class ECompanionFrameStatusSoundType* SoundType, bool Temp_bool_Variable, enum class ECompanionFrameStatusSoundType Temp_byte_Variable, enum class ECompanionFrameStatusSoundType Temp_byte_Variable_1, enum class ECompanionFrameStatusSoundType K2Node_Select_Default);
	void ShowSecondBox(bool IsVisible, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateBox(bool IsFirstBox, bool NewStatusIsBetter, class FName CompanionID, enum class ERelationshipStatusType NewStatus, const struct FCompanionDefinition& CompanionInfo, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool CallFunc_EqualEqual_BoolBool_ReturnValue, class URichTextBlock* K2Node_Select_Default, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const struct FActorInfo& CallFunc_K2_GetActorInfo_Info, bool CallFunc_K2_GetActorInfo_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, const struct FCompanionDefinition& CallFunc_GetCompanionsInfo_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UWid_CompanionAvatarBlock_C* K2Node_Select_Default_1, class FText K2Node_Select_Default_2, class FText CallFunc_TextToUpper_ReturnValue_1, class URichTextBlock* K2Node_Select_Default_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Replace_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
};

}


