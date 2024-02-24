#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0x2A1 - 0x260)
// WidgetBlueprintGeneratedClass wid_CraftingResource.wid_CraftingResource_C
class UWid_CraftingResource_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UTextBlock*                            AmountText;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               ColorMultiplier;                                   // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  IngredientCategory;                                // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Active;                                            // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F52[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Amount;                                            // 0x28C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Fill;                                              // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F57[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              DynamicMaterial;                                   // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanBeCrafted;                                      // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_CraftingResource_C* GetDefaultObj();

	class FText GetText_0(class FText CallFunc_Conv_IntToText_ReturnValue);
	struct FLinearColor GetContentColorAndOpacity_0(const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1);
	void PreConstruct(bool IsDesignTime);
	void ForceUpdate();
	void ExecuteUbergraph_wid_CraftingResource(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FItemEntry& CallFunc_GetItemData_Data, const struct FLinearColor& CallFunc_GetContentColorAndOpacity_0_ReturnValue, class FText CallFunc_GetText_0_ReturnValue);
};

}


