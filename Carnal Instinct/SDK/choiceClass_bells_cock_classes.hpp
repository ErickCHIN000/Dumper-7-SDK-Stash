#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB (0x32C - 0x321)
// BlueprintGeneratedClass choiceClass_bells_cock.choiceClass_bells_cock_C
class AChoiceClass_bells_cock_C : public AObject_dlg_condition_parent_C
{
public:
	enum class Enum_dlg_choice_status            Status;                                            // 0x321(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_ADC[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Choice_Line;                                       // 0x324(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AChoiceClass_bells_cock_C* GetDefaultObj();

	void Choice_info_condition(const struct FS_dlg_branch_choice_info& Choice_info, struct FS_dlg_branch_choice_info* Return_value, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, const struct FS_dlg_branch_choice_info& K2Node_MakeStruct_s_dlg_branch_choice_info, const struct FS_dlg_branch_choice_info& CallFunc_choice_info_condition_return_value, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue);
};

}


