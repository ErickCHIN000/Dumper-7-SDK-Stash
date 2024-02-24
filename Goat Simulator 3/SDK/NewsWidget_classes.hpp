#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x6E0 - 0x628)
// WidgetBlueprintGeneratedClass NewsWidget.NewsWidget_C
class UNewsWidget_C : public UGGButtonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x628(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Hover;                                             // 0x630(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeIn;                                            // 0x638(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      NextNews;                                          // 0x640(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_0;                                     // 0x648(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Frame;                                             // 0x650(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              HeadlineOverlay;                                   // 0x658(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_218;                                         // 0x660(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGGRichTextBlock*                      NavHint;                                           // 0x668(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                NewsImage_1;                                       // 0x670(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          NewsPanel;                                         // 0x678(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Pages;                                             // 0x680(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PreviewText;                                       // 0x688(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PrevNewsImage;                                     // 0x690(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AGGNewsFeed*                           News_Feed_Actor;                                   // 0x698(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFakeNews>                     Received_Fake_News;                                // 0x6A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        NewsIndex;                                         // 0x6B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          UpdateTimer;                                       // 0x6B8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        PrevNewsIndex;                                     // 0x6C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewsCycleDelay;                                    // 0x6C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowingHovered;                                    // 0x6C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bUseDebugFakeNews;                                 // 0x6C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2AA[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumNews;                                           // 0x6CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPreviewImagesLoaded;                              // 0x6D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2AE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            PlaceholderImage;                                  // 0x6D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UNewsWidget_C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTNewsWidget_0();
	void UpdateFromAnimationProgress(float AnimationProgress, float CallFunc_Conv_IntToFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, float CallFunc_Lerp_ReturnValue);
	void Show_Preview(int32 NewsIndex, int32 PrevNewsIndex, class UTexture* TmpTexture, bool CallFunc_GetNewsPreviewDataByIndex_bOutSuccess, const struct FNewsPreviewEntry& CallFunc_GetNewsPreviewDataByIndex_ReturnValue, bool CallFunc_GetNewsPreviewDataByIndex_bOutSuccess_1, const struct FNewsPreviewEntry& CallFunc_GetNewsPreviewDataByIndex_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1);
	void OnNewsReceived(struct FParsedNews& ParsedNews, bool bWasSuccessful, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Multiply_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Min_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GatherNews(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class AGGNewsFeed* CallFunc_GetNewsFeedActor_ReturnValue, bool CallFunc_HasReceivedNewsResponse_ReturnValue);
	class UWidget* GetInitialWidgetFocus();
	void UpdateNewsHeadline();
	void Construct();
	void ShowNextPreview();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void WidgetAnimationEvt_NextNews_K2Node_WidgetAnimationEvent_0();
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void BndEvt__NewsWidget_ButtonWidget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__NewsWidget_ButtonWidget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_NewsWidget(int32 EntryPoint, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetNewsPreviewDataByIndex_bOutSuccess, const struct FNewsPreviewEntry& CallFunc_GetNewsPreviewDataByIndex_ReturnValue, const class FString& CallFunc_GetNewsPreviewText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_IsAnimationPlaying_ReturnValue, float CallFunc_GetEndTime_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_WrapInt_ReturnValue);
};

}


