#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x318 - 0x30C)
// WidgetBlueprintGeneratedClass CF_AddItem.CF_AddItem_C
class UCF_AddItem_C : public UCF_BaseComboInteger_C
{
public:
	uint8                                        Pad_2B12[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_AddItem_C* GetDefaultObj();

	void OnConstruction(class UAddResourceComboRow_C* CallFunc_Create_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FItemTemplateEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FItemTemplateRowHandle& CallFunc_StructToRowHandle_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 CallFunc_NumRows_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Construct();
	void Handle_Execute(class UUserWidget* Widget, int32 Amount);
	void Handle_On_Item_Set(class UUserWidget* Widget);
	void ExecuteUbergraph_CF_AddItem(int32 EntryPoint, class UUserWidget* K2Node_Event_Widget, class UAddResourceComboRow_C* K2Node_DynamicCast_AsAdd_Resource_Combo_Row, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AIcarusPlayerController* K2Node_DynamicCast_AsIcarus_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, const struct FItemTemplateRowHandle& CallFunc_MakeItemTemplate_ReturnValue, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate, enum class EValid CallFunc_GetItemTemplateStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemableData& CallFunc_GetItemableData_ItemableData, enum class EDataValid CallFunc_GetItemableData_Paths, class UUserWidget* K2Node_Event_Widget_1, int32 K2Node_Event_Amount, bool K2Node_SwitchEnum_CmpSuccess_1, class UAddResourceComboRow_C* K2Node_DynamicCast_AsAdd_Resource_Combo_Row_1, bool K2Node_DynamicCast_bSuccess_2, const struct FItemTemplateRowHandle& CallFunc_MakeItemTemplate_ReturnValue_1, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate_1, enum class EValid CallFunc_GetItemTemplateStruct_Paths_1, const struct FItemData& CallFunc_CreateItem_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, enum class ESetDataSuccess CallFunc_SetItemPropertyValue_Paths, bool K2Node_SwitchEnum_CmpSuccess_3);
};

}


