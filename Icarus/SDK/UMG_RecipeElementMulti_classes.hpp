#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x368 - 0x2E8)
// WidgetBlueprintGeneratedClass UMG_RecipeElementMulti.UMG_RecipeElementMulti_C
class UUMG_RecipeElementMulti_C : public UUMG_ListElement_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               BackFill;                                          // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CornersImage;                                      // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               DarkenBorder;                                      // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              HoverCorners;                                      // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               LeftFill;                                          // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        LeftSide;                                          // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                MidImage;                                          // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_2;                                         // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        RightSide;                                         // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               OLDNormalImage;                                    // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               OLDHoveredImage;                                   // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               OLDPressedImage;                                   // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               OLDInvalidNormalImage;                             // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               OLDInvalidHoverImage;                              // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               OLDInvalidPressedImage;                            // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_RecipeElementMulti_C* GetDefaultObj();

	class UOverlay* GetOverlay();
	class UOverlay* GetHoverCornerWidget();
	void SetState(bool Valid, bool CallFunc_BooleanOR_ReturnValue);
	void InitialiseIcons(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UUMG_RecipeElementImageMulti_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Array_Index_Variable_3, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, TArray<struct FItemData>& CallFunc_GetProcessorOutputs_ReturnValue, class UUMG_RecipeElementImage_C* CallFunc_Create_ReturnValue_1, const struct FProcessorRecipesRowHandle& CallFunc_GetProcessorRecipe_ReturnValue, TArray<struct FResourceItem>& CallFunc_GetResourceInputs_ReturnValue, const struct FProcessorRecipe& CallFunc_GetProcessorRecipesStruct_ProcessorRecipes, enum class EValid CallFunc_GetProcessorRecipesStruct_Paths, const struct FResourceItem& CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess, class UUMG_RecipeElementImage_C* CallFunc_CreateResourceWidget_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FItemData>& CallFunc_GetProcessorInputs_ReturnValue, const struct FItemData& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class FText CallFunc_CreateInputItem_Name, TSoftObjectPtr<class UTexture2D> CallFunc_CreateInputItem_Icon, bool CallFunc_Less_IntInt_ReturnValue_1, class UUMG_RecipeElementImage_C* CallFunc_Create_ReturnValue_2, TArray<struct FResourceItem>& CallFunc_GetResourceOutputs_ReturnValue, TArray<struct FItemData>& CallFunc_GetProcessorOutputs_ReturnValue_1, const struct FResourceItem& CallFunc_Array_Get_Item_2, const struct FItemData& CallFunc_Array_Get_Item_3, class UUMG_RecipeElementImage_C* CallFunc_CreateResourceWidget_ReturnValue_1, class FText CallFunc_CreateOutputItem_Name, TSoftObjectPtr<class UTexture2D> CallFunc_CreateOutputItem_Icon, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_2);
	struct FProcessorRecipesRowHandle GetProcessorRecipe();
	void GetResourceIcon(enum class EIcarusResourceType Type, class UTexture2D** Icon, class UTexture2D* RecipeIcon, bool K2Node_SwitchEnum_CmpSuccess);
	struct FSlateBrush UpdateRecipeFrame(class UObject* Image, enum class E_ButtonState Temp_byte_Variable, bool CallFunc_BooleanOR_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, enum class E_ButtonState Temp_byte_Variable_1, class UObject* K2Node_Select_Default, class UObject* K2Node_Select_Default_1);
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void ExecuteUbergraph_UMG_RecipeElementMulti(int32 EntryPoint, bool K2Node_Event_bIsSelected, bool K2Node_Event_bIsExpanded);
};

}


