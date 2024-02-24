#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB9 (0x6A1 - 0x5E8)
// BlueprintGeneratedClass BP_SophiaHUD.BP_SophiaHUD_C
class ABP_SophiaHUD_C : public ASophiaHUD
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x5F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWBP_DungeonInfo_C*                    DungeonInfoWindget;                                // 0x5F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Subtitles_C*                      SubtitlesWidget;                                   // 0x600(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_HelperBondPuzzleSolved_C*         HelperBond;                                        // 0x608(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                DelayArray;                                        // 0x610(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSubtitleInfo>                 Subtitles;                                         // 0x620(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        SubtitleIdx;                                       // 0x630(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16F9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          SubtitleTimer;                                     // 0x638(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<enum class ESubtitleType, class UFMODEvent*> VoiceAudio;                                        // 0x640(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FFMODEventInstance                    ActiveVoiceoverAudio;                              // 0x690(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTimerHandle                          VoiceoverExpiration;                               // 0x698(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bShowServerFPS;                                    // 0x6A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_SophiaHUD_C* GetDefaultObj();

	void PlayVoiceoverForTextLength(class FText Text, enum class ESubtitleType Type, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UFMODEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue);
	void AdvanceSubtitles(bool* FinishedSubtitles, int32 Temp_int_Variable, bool CallFunc_AdvanceSubtitles_FinishedSubtitles, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void UnpauseVoiceover(bool CallFunc_IsValid_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool CallFunc_EventInstanceIsValid_ReturnValue);
	void PauseVoiceover(bool CallFunc_IsValid_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool CallFunc_EventInstanceIsValid_ReturnValue);
	void StopVoiceover(bool CallFunc_EventInstanceIsValid_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue);
	void PlayVoiceover(class FText Text, enum class ESubtitleType Type, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFMODEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue);
	bool BP_IsHelperBondEndMenu(bool CallFunc_IsValid_ReturnValue);
	void ShowDungeonInfo(class ABP_Dungeon_C*& Dungeon);
	void ShowSubtitles(class FText Text, enum class ESubtitleType Speaker, bool TimedAudio);
	void BPI_StopCutscene();
	void AmbassadorNotification();
	void PlaySubtitles(TArray<struct FSubtitleInfo>& Subtitles);
	void ActuallyShowSubtitles();
	void PlaySubtitlesWithInput(TArray<struct FSubtitleInfo>& Subtitles);
	void ExecuteUbergraph_BP_SophiaHUD(int32 EntryPoint, int32 Temp_int_Variable, class ABP_Dungeon_C* K2Node_CustomEvent_Dungeon, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWBP_DungeonInfo_C* CallFunc_Create_ReturnValue, class FText K2Node_CustomEvent_Text, enum class ESubtitleType K2Node_CustomEvent_Speaker, bool K2Node_CustomEvent_TimedAudio, bool CallFunc_IsValid_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UWBP_Subtitles_C* CallFunc_Create_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsInViewport_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, class UWBP_GameHUD_C* K2Node_DynamicCast_AsWBP_Game_HUD, bool K2Node_DynamicCast_bSuccess, TArray<struct FSubtitleInfo>& K2Node_CustomEvent_Subtitles_1, bool CallFunc_IsInViewport_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FSubtitleInfo& Temp_struct_Variable, TArray<struct FSubtitleInfo>& K2Node_CustomEvent_Subtitles, const struct FSubtitleInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, const struct FSubtitleInfo& K2Node_MakeStruct_SubtitleInfo, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_AdvanceSubtitles_FinishedSubtitles, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}


