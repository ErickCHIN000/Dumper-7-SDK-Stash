#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0x378 - 0x260)
// WidgetBlueprintGeneratedClass WB_ToolTip_ItemInfo.WB_ToolTip_ItemInfo_C
class UWB_ToolTip_ItemInfo_C : public UUserWidget
{
public:
	class UImage*                                Image_1;                                           // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_2;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_0;                                       // 0x270(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_1;                                       // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_3;                                       // 0x280(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAC_Inventory_C*                       Inventory_Component;                               // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_ItemData                           Item_Data;                                         // 0x290(0xE8)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_ToolTip_ItemInfo_C* GetDefaultObj();

	struct FSlateBrush Set_Image(const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	struct FSlateColor Set_Rarity_Text_Color(bool CallFunc_IsValid_ReturnValue, const struct FSlateColor& CallFunc_Set_Rarity_Color_Color);
	class FText Set_Rarity(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	class FText Set_Type(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	class FText Set_Name();
};

}


