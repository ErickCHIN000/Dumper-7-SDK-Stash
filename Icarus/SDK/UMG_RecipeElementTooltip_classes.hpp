#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x280 - 0x260)
// WidgetBlueprintGeneratedClass UMG_RecipeElementTooltip.UMG_RecipeElementTooltip_C
class UUMG_RecipeElementTooltip_C : public UUserWidget
{
public:
	class UTextBlock*                            Name;                                              // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            State;                                             // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_RecipeInput_C*                    UMG_RecipeInput;                                   // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AActor*                                LinkedActor;                                       // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_RecipeElementTooltip_C* GetDefaultObj();

	void UpdateHolographicPreview(const struct FItemData& Item, enum class EProcessorPreview PreviewState, enum class EIcarusResourceType ResourceType, int32 CurrentAmount, int32 RecipeMultiplier, bool Output, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FItemableData& CallFunc_GetItemableData_ItemableData, enum class EDataValid CallFunc_GetItemableData_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemableData& CallFunc_GetItemableData_ItemableData_1, enum class EDataValid CallFunc_GetItemableData_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_1, class FText CallFunc_GetResourceName_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, class FText Temp_wildcard_Variable, class FText CallFunc_TextToUpper_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2);
};

}


