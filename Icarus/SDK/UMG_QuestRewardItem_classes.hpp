#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x2B0 - 0x260)
// WidgetBlueprintGeneratedClass UMG_QuestRewardItem.UMG_QuestRewardItem_C
class UUMG_QuestRewardItem_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            AmountText;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BonusIcon;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ItemImage;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Selectable;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FRewardItemEntry                      ItemReward;                                        // 0x288(0x24)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	float                                        Multipler;                                         // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_QuestRewardItem_C* GetDefaultObj();

	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_QuestRewardItem(int32 EntryPoint, class UUMG_BasicTooltip_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable, bool K2Node_Event_IsDesignTime, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, int32 CallFunc_FCeil_ReturnValue, int32 CallFunc_FCeil_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Conv_IntToText_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate, enum class EValid CallFunc_GetItemTemplateStruct_Paths, class FText K2Node_Select_Default, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemableData& CallFunc_GetItemableData_ItemableData, enum class EDataValid CallFunc_GetItemableData_Paths, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate_1, enum class EValid CallFunc_GetItemTemplateStruct_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, TSoftObjectPtr<class UTexture2D> CallFunc_GetItemIcon_Icon, bool CallFunc_IsValidSoftObjectReference_ReturnValue);
};

}


