#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0x294 - 0x260)
// WidgetBlueprintGeneratedClass UMG_WorkshopCostLarge.UMG_WorkshopCostLarge_C
class UUMG_WorkshopCostLarge_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Icon;                                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Number;                                            // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMetaCurrencyRowHandle                Currency;                                          // 0x278(0x18)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        Amount;                                            // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_WorkshopCostLarge_C* GetDefaultObj();

	void Construct();
	void UpdateValue(int32 Amount);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_WorkshopCostLarge(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FMetaCurrency& CallFunc_GetMetaCurrencyStruct_MetaCurrency, enum class EValid CallFunc_GetMetaCurrencyStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, int32 K2Node_CustomEvent_Amount, class FText CallFunc_Conv_IntToText_ReturnValue_1);
};

}


