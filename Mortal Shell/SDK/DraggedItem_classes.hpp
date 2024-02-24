#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x278 - 0x230)
// WidgetBlueprintGeneratedClass DraggedItem.DraggedItem_C
class UDraggedItem_C : public UUserWidget
{
public:
	class UTextBlock*                            Amount;                                            // 0x230(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border;                                            // 0x238(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon;                                              // 0x240(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FItemInformation                      DraggedItemInformation;                            // 0x248(0x30)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UDraggedItem_C* GetDefaultObj();

	class FText Get_Amount_Text(bool CallFunc_LessEqual_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	struct FLinearColor Get_Border_Color(const struct FQualityColors& LocalQualityColors, const struct FLinearColor& LocalColor, bool K2Node_SwitchEnum_CmpSuccess);
};

}


