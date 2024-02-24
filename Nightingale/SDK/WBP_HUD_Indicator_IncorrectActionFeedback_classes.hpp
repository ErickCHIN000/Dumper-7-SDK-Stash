#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE0 (0x420 - 0x340)
// WidgetBlueprintGeneratedClass WBP_HUD_Indicator_IncorrectActionFeedback.WBP_HUD_Indicator_IncorrectActionFeedback_C
class UWBP_HUD_Indicator_IncorrectActionFeedback_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_appear;                                       // 0x348(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Img_indicatorIcon;                                 // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_message;                                       // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsShown;                                           // 0x360(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4951[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructurePlacementFeedback           FeedbackData;                                      // 0x368(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UWBP_HUD_Indicator_IncorrectActionFeedback_C* GetDefaultObj();

	void OnAnimationFinished(class UWidgetAnimation* Animation);
	void UpdateIndicatorAndText(const struct FStructurePlacementFeedback& FeedbackData);
	void Appear();
	void ExecuteUbergraph_WBP_HUD_Indicator_IncorrectActionFeedback(int32 EntryPoint, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_1, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_2, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_3, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_4, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_5, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_6, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_7, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_8, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_9, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_10, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_11, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_12, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_13, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_14, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, class UWidgetAnimation* K2Node_Event_Animation, enum class EPlacementFeedbackType Temp_byte_Variable, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FStructurePlacementFeedback& K2Node_CustomEvent_FeedbackData, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class EPlacementFeedbackType CallFunc_GetPlacementFeedbackType_ReturnValue, class FText CallFunc_GetPlacementFeedbackText_OutFeedbackText, bool CallFunc_GetPlacementFeedbackText_ReturnValue, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}


