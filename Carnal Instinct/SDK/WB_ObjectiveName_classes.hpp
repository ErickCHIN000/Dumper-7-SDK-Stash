#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x298 (0x4F8 - 0x260)
// WidgetBlueprintGeneratedClass WB_ObjectiveName.WB_ObjectiveName_C
class UWB_ObjectiveName_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                Image_193;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ObjectiveName;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAC_Inventory_C*                       Inventory_Component;                               // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_ItemData                           Item_Data;                                         // 0x280(0xE8)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_quest_objective_data               Objective_Data;                                    // 0x368(0x188)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	class UWB_Quest_C*                           WB_Quest;                                          // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_ObjectiveName_C* GetDefaultObj();

	void OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	struct FSlateBrush Set_Image(const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	struct FSlateColor Set_Rarity_Text_Color(bool CallFunc_IsValid_ReturnValue, const struct FSlateColor& CallFunc_Set_Rarity_Color_Color);
	class FText Set_Rarity(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	class FText Set_Type(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	class FText Set_Name();
	void Construct();
	void ExecuteUbergraph_WB_ObjectiveName(int32 EntryPoint, class FText CallFunc_Conv_NameToText_ReturnValue);
};

}


