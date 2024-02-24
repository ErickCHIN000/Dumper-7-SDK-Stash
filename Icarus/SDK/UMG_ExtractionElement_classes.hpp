#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF4 (0x3DC - 0x2E8)
// WidgetBlueprintGeneratedClass UMG_ExtractionElement.UMG_ExtractionElement_C
class UUMG_ExtractionElement_C : public UUMG_ListElement_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      CompleteAnimation;                                 // 0x2F0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                CornersImage;                                      // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          CraftingProgressBar;                               // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               DarkenBorder;                                      // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          Desaturater;                                       // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              HoverCorners;                                      // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon;                                              // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            OutputAmount;                                      // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               OutputAmountBorder;                                // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_1;                                         // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               RecipeFrame;                                       // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                UnlockGlow;                                        // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                UnlockLines;                                       // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               OLDPressedImage;                                   // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               OLDHoveredImage;                                   // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               OLDNormalImage;                                    // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           NameColor;                                         // 0x370(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           HighlightColor;                                    // 0x398(0x28)(Edit, BlueprintVisible)
	class UObject*                               OLDInvalidNormalImage;                             // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               OLDInvalidHoverImage;                              // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               OLDInvalidPressedImage;                            // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentProgress;                                   // 0x3D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_ExtractionElement_C* GetDefaultObj();

	void Update(float Progress);
	void Setup(const struct FItemData& Item, TSoftObjectPtr<class UTexture2D> CallFunc_GetItemIcon_Icon, class UUMG_ItemPopup_C* CallFunc_Create_ReturnValue, bool CallFunc_Show_for_Item_Shown);
	class UOverlay* GetOverlay();
	class UOverlay* GetHoverCornerWidget();
	void SetState(bool Valid, bool CallFunc_BooleanOR_ReturnValue);
	void InitialiseIcons();
	struct FProcessorRecipesRowHandle GetProcessorRecipe();
	void Clear();
	struct FSlateBrush UpdateRecipeFrame(class UObject* Image, enum class E_ButtonState Temp_byte_Variable, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, enum class E_ButtonState Temp_byte_Variable_1, bool CallFunc_BooleanOR_ReturnValue, class UObject* K2Node_Select_Default, class UObject* K2Node_Select_Default_1);
	void Finished_6601930D42BF20E1F59D04AF66576E42();
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void SetProgress(float Percent, const struct FProcessorRecipesRowHandle& CurrentQueueRecipe, bool QueueEmpty);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnEntryReleased();
	void ExecuteUbergraph_UMG_ExtractionElement(int32 EntryPoint, bool K2Node_Event_bIsSelected, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float K2Node_CustomEvent_Percent, const struct FProcessorRecipesRowHandle& K2Node_CustomEvent_CurrentQueueRecipe, bool K2Node_CustomEvent_QueueEmpty, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool K2Node_Event_bIsExpanded, const struct FProcessorRecipesRowHandle& CallFunc_GetProcessorRecipe_ReturnValue, bool CallFunc_EqualEqual_FProcessorRecipesRowHandleFProcessorRecipesRowHandle_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue);
};

}


