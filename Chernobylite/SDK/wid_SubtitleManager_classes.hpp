#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2A0 - 0x260)
// WidgetBlueprintGeneratedClass wid_SubtitleManager.wid_SubtitleManager_C
class UWid_SubtitleManager_C : public USubtitlesManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UCanvasPanel*                          ScreenCanvas;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UUserWidget*>                   SubtitlesList;                                     // 0x270(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                        InterpolationSpeed;                                // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E17[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWid_Whisper_C*>                WhispersList;                                      // 0x288(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                        StartingPosition;                                  // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartingPositionOffset;                            // 0x29C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_SubtitleManager_C* GetDefaultObj();

	void GetStartingPosition(float* StartingPosition, bool Temp_bool_Variable, float Temp_float_Variable, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float K2Node_Select_Default);
	class USubtitleEntry* AddAvatarSubtitle(class FText& ActorName, class FText& SubtitleText, class FName ActorId, float TimeShown, const struct FLinearColor& ActorColor, bool IsPlaceholderText, float CallFunc_GetStartingPosition_StartingPosition, const struct FAnchors& K2Node_MakeStruct_Anchors, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWid_AvatarSubtitleEntry_C* CallFunc_Create_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FMargin& CallFunc_GetCustomOffset_Offsets, float CallFunc_Subtract_FloatFloat_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	class USubtitleEntry* AddSubtitle(class FText& ActorName, class FText& SubtitleText, float TimeShown, const struct FLinearColor& ActorColor, const struct FMargin& K2Node_MakeStruct_Margin, bool CallFunc_SubtitlesAreInDebugMode_ReturnValue, float CallFunc_GetStartingPosition_StartingPosition, const struct FAnchors& K2Node_MakeStruct_Anchors, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_SubtitlesAreInDebugMode_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWid_Subtitle_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Subtract_FloatFloat_ReturnValue);
	class UUserWidget* AddWhisper(class FText& WhisperText, float TimeShown, const struct FLinearColor& TextColor, class UWid_Whisper_C* _Whisper);
	void UpdatePositions(float DeltaTime, float MarginBetweenLines, float LocationY, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, float CallFunc_GetStartingPosition_StartingPosition, class UWid_Whisper_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_GetPosition_Top, int32 CallFunc_Subtract_IntInt_ReturnValue_1, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, int32 CallFunc_Max_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FInterpTo_Constant_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class UUserWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Subtract_IntInt_ReturnValue_3, float CallFunc_GetPosition_Top_1, int32 CallFunc_Max_ReturnValue_1, float CallFunc_FInterpTo_Constant_ReturnValue_1, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue_1, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1);
	void SetPosition(class UWidget* Widget, float In_Offset_Top, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FMargin& CallFunc_GetOffsets_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin);
	void GetPosition(class UWidget* Widget, float* Top, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FMargin& CallFunc_GetOffsets_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void DestroySubtile(class UWid_Subtitle_C* Object);
	void DestroyWhisper(class UWid_Whisper_C* Object);
	void RemoveWhisperOrSubtitle(class UUserWidget* Whisper);
	void PreConstruct(bool IsDesignTime);
	void DestroyAvatarSubtitle(class UWid_AvatarSubtitleEntry_C* Object);
	void ExecuteUbergraph_wid_SubtitleManager(int32 EntryPoint, bool CallFunc_SubtitlesAreInDebugMode_ReturnValue, class UWid_Whisper_C* K2Node_CustomEvent_Object_1, bool CallFunc_Array_RemoveItem_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_SubtitlesAreInDebugMode_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UUserWidget* K2Node_Event_Whisper, class UWid_Subtitle_C* K2Node_CustomEvent_Object_2, class UWid_Whisper_C* K2Node_DynamicCast_AsWid_Whisper, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_RemoveItem_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, class UWid_Subtitle_C* K2Node_DynamicCast_AsWid_Subtitle, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Conv_TextToString_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Conv_TextToString_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, bool CallFunc_SubtitlesAreInDebugMode_ReturnValue_2, bool K2Node_Event_IsDesignTime, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UWid_AvatarSubtitleEntry_C* K2Node_CustomEvent_Object, bool CallFunc_Array_RemoveItem_ReturnValue_2, bool CallFunc_SubtitlesAreInDebugMode_ReturnValue_3);
};

}


