#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x354 - 0x348)
// WidgetBlueprintGeneratedClass WBP_ItemGrid.WBP_ItemGrid_C
class UWBP_ItemGrid_C : public UNWXCommonUserWidget
{
public:
	class UUniformGridPanel*                     ItemGrid;                                          // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        ColumnCount;                                       // 0x350(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_ItemGrid_C* GetDefaultObj();

	void InitializeDesignerPreview(int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UWBP_sw_GridEntryItem_C* CallFunc_Create_ReturnValue, class UUniformGridSlot* CallFunc_AddGridItem_ReturnValue);
	int32 GetChildrenCount(int32 CallFunc_GetChildrenCount_ReturnValue);
	class UUniformGridSlot* AddGridItem(class UWidget* Widget, int32 NewItemIndex, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue);
	void ClearGrid();
	void GetChildAt(int32 Index, bool* IsValid, class UWidget** ItemWidget, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


