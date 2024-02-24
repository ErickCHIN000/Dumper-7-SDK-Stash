#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x39 (0x4B1 - 0x478)
// WidgetBlueprintGeneratedClass UMG_RecipeToolTipElement.UMG_RecipeToolTipElement_C
class UUMG_RecipeToolTipElement_C : public UUMG_RecipeElementBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x478(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_1;                                          // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Name;                                              // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               NameBorder;                                        // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Picture;                                           // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_RecipeItemAmount_C*               UMG_RecipeItemAmount;                              // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         ShowName;                                          // 0x4A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3DE0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ElementPadding;                                    // 0x4AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Output;                                            // 0x4B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UUMG_RecipeToolTipElement_C* GetDefaultObj();

	bool IsOutput();
	void CurrentAmountUpdated(bool CallFunc_IsResource_ReturnValue);
	void UpdateBackgroundImage(class UTexture2D* Texture, enum class EProcessorPreview Selected, enum class EProcessorPreview Temp_byte_Variable, const struct FSlateColor& Temp_struct_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool CallFunc_IsResource_ReturnValue, const struct FSlateColor& K2Node_Select_Default);
	void Initialise(bool CallFunc_IsResource_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetResourceImage_ReturnValue, const struct FItemsStaticRowHandle& CallFunc_MakeItemsStatic_ReturnValue, const struct FItemStaticData& CallFunc_GetItemsStaticStruct_ItemsStatic, enum class EValid CallFunc_GetItemsStaticStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemableData& CallFunc_GetItemableStruct_Itemable, enum class EValid CallFunc_GetItemableStruct_Paths, TSoftObjectPtr<class UTexture2D> CallFunc_GetItemIcon_Static_Icon, bool K2Node_SwitchEnum_CmpSuccess_1);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_UMG_RecipeToolTipElement(int32 EntryPoint, bool Temp_bool_Variable, const struct FMargin& K2Node_MakeStruct_Margin, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, enum class ESlateVisibility K2Node_Select_Default, class UBorderSlot* CallFunc_SlotAsBorderSlot_ReturnValue);
};

}


