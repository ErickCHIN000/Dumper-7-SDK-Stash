#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x370 - 0x348)
// WidgetBlueprintGeneratedClass WBP_SubtitleText.WBP_SubtitleText_C
class UWBP_SubtitleText_C : public UNWXSubtitleDisplayWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            Text_Dialogue;                                     // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Speaker;                                      // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Component_SoftEdge_Divider_C*     WBP_Component_SoftEdge_Divider;                    // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNWXGameUserSettings*                  GameUserSettings;                                  // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_SubtitleText_C* GetDefaultObj();

	void OnSubtitleSetFromManager(class FText InText, bool CallFunc_GetShowSubtitles_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue);
	void OnSubtitlesEnded(class UDialogue* Dialogue, int32 DialogueNodeID);
	void OnSubtitlesStarted(class UDialogue* Dialogue, int32 DialogueNodeID, bool CallFunc_GetShowSubtitles_ReturnValue, class FText CallFunc_GetTextForId_OutText, bool CallFunc_GetTextForId_ReturnValue, class FText CallFunc_GetSpeakerNameForId_OutText, bool CallFunc_GetSpeakerNameForId_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void Construct();
	void Destruct();
	void OnSetSubtitleFromManager(class FText& InText);
	void ExecuteUbergraph_WBP_SubtitleText(int32 EntryPoint, class UAudioDialogueSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FText K2Node_Event_InText, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, class UAudioDialogueSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1);
};

}


