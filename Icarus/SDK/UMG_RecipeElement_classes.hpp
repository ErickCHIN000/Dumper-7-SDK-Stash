#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11C (0x404 - 0x2E8)
// WidgetBlueprintGeneratedClass UMG_RecipeElement.UMG_RecipeElement_C
class UUMG_RecipeElement_C : public UUMG_ListElement_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      CompleteAnimation;                                 // 0x2F0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                ClassificationImage;                               // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CornersImage;                                      // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          CraftingProgressBar;                               // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               DarkenBorder;                                      // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          Desaturater;                                       // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              HoverCorners;                                      // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ItemIconDynamic;                                   // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            OutputAmount;                                      // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               OutputAmountBorder;                                // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_1;                                         // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RankImage;                                         // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               RecipeFrame;                                       // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                UnlockGlow;                                        // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                UnlockLines;                                       // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               OLDPressedImage;                                   // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               OLDHoveredImage;                                   // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               OLDNormalImage;                                    // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           NameColor;                                         // 0x380(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           HighlightColor;                                    // 0x3A8(0x28)(Edit, BlueprintVisible)
	class UObject*                               OLDInvalidNormalImage;                             // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               OLDInvalidHoverImage;                              // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               OLDInvalidPressedImage;                            // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentProgress;                                   // 0x3E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTagQueriesRowHandle                  Query;                                             // 0x3EC(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_RecipeElement_C* GetDefaultObj();

	void Get_Alteration_Preview(const struct FItemData& Item, bool* Custom, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, TArray<struct FAlterationsEnum>& CallFunc_GetCraftingModificationAlterations_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1);
	class UOverlay* GetOverlay();
	class UOverlay* GetHoverCornerWidget();
	void SetState(bool Valid, bool CallFunc_BooleanOR_ReturnValue);
	void InitialiseIcons(int32 Temp_int_Variable, TSoftObjectPtr<class UTexture2D> Temp_wildcard_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, const struct FItemData& Temp_wildcard_Variable_1, int32 Temp_int_Variable_1, bool CallFunc_Get_Alteration_Preview_Custom, const struct FItemRanksEnum& CallFunc_IntToStruct_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_Get_Custom_Item_Icon_Icon, TSoftObjectPtr<class UTexture2D> CallFunc_Get_Custom_Item_Icon_AlphaOverride, const struct FItemRanksRowHandle& CallFunc_StructToRowHandle_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, const struct FItemRank& CallFunc_GetItemRanksStruct_ItemRanks, enum class EValid CallFunc_GetItemRanksStruct_Paths, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_ItemMatchesQuery_ReturnValue, float CallFunc_SelectFloat_ReturnValue, class FText CallFunc_CreateOutputItem_Name, TSoftObjectPtr<class UTexture2D> CallFunc_CreateOutputItem_Icon, const struct FProcessorRecipesRowHandle& CallFunc_GetProcessorRecipe_ReturnValue, const struct FProcessorRecipe& CallFunc_GetProcessorRecipesStruct_ProcessorRecipes, enum class EValid CallFunc_GetProcessorRecipesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_ItemMatchesQuery_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, TArray<struct FItemData>& CallFunc_GetProcessorOutputs_ReturnValue, const struct FItemData& CallFunc_Array_Get_Item, int32 CallFunc_GetItemPropertyValue_IntValue, enum class EDataValid CallFunc_GetItemPropertyValue_Paths, bool CallFunc_Array_IsValidIndex_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Greater_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, int32 CallFunc_NumRows_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FResourceItem>& CallFunc_GetResourceOutputs_ReturnValue, const struct FResourceItem& CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue_1, TSoftObjectPtr<class UTexture2D> CallFunc_GetResourceImage_ReturnValue, const struct FItemData& Temp_wildcard_Variable_2, TArray<struct FItemData>& CallFunc_GetProcessorInputs_ReturnValue, const struct FItemData& CallFunc_Array_Get_Item_2, bool CallFunc_Array_IsValidIndex_ReturnValue_2, TArray<struct FItemData>& CallFunc_GetProcessorOutputs_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue_3, const struct FItemData& CallFunc_Array_Get_Item_3);
	struct FProcessorRecipesRowHandle GetProcessorRecipe();
	void ValidRecipe(bool* Valid, const struct FProcessorRecipe& CallFunc_GetProcessorRecipesStruct_ProcessorRecipes, enum class EValid CallFunc_GetProcessorRecipesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FCraftingOutput& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate, enum class EValid CallFunc_GetItemTemplateStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1);
	void SetNonInteractive(bool RecipeSelected, class UTexture2D* NewImage, bool Temp_bool_Variable, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, class UObject* K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void Clear(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	struct FSlateBrush UpdateRecipeFrame(class UObject* Image, enum class E_ButtonState Temp_byte_Variable, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, enum class E_ButtonState Temp_byte_Variable_1, bool CallFunc_BooleanOR_ReturnValue, class UObject* K2Node_Select_Default, class UObject* K2Node_Select_Default_1);
	void Finished_1A93246B4B7271E4B7205CB7080352F3();
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void SetProgress(float Percent, const struct FProcessorRecipesRowHandle& CurrentQueueRecipe, bool QueueEmpty);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnEntryReleased();
	void ExecuteUbergraph_UMG_RecipeElement(int32 EntryPoint, bool K2Node_Event_bIsSelected, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float K2Node_CustomEvent_Percent, const struct FProcessorRecipesRowHandle& K2Node_CustomEvent_CurrentQueueRecipe, bool K2Node_CustomEvent_QueueEmpty, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool K2Node_Event_bIsExpanded, const struct FProcessorRecipesRowHandle& CallFunc_GetProcessorRecipe_ReturnValue, bool CallFunc_EqualEqual_FProcessorRecipesRowHandleFProcessorRecipesRowHandle_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue);
};

}


