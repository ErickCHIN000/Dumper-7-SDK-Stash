#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x298 - 0x260)
// WidgetBlueprintGeneratedClass UMG_MetaWorkshopCost.UMG_MetaWorkshopCost_C
class UUMG_MetaWorkshopCost_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            CostText;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon;                                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              IconSizeBox;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMetaResource                         Cost;                                              // 0x280(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UUMG_MetaWorkshopCost_C* GetDefaultObj();

	void OnLoaded_88A07CE44A58269F97E6A0B898CBB13E(class UObject* Loaded);
	void Construct();
	void ExecuteUbergraph_UMG_MetaWorkshopCost(int32 EntryPoint, const struct FMetaCurrencyRowHandle& CallFunc_MakeMetaCurrency_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, const struct FMetaCurrency& CallFunc_GetMetaCurrencyStruct_MetaCurrency, enum class EValid CallFunc_GetMetaCurrencyStruct_Paths, class UObject* Temp_object_Variable, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_Select_Default, class FText CallFunc_Conv_IntToText_ReturnValue);
};

}


