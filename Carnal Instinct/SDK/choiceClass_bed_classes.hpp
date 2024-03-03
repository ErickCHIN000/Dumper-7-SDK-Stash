#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA7 (0x3C8 - 0x321)
// BlueprintGeneratedClass choiceClass_bed.choiceClass_bed_C
class AChoiceClass_bed_C : public AObject_dlg_condition_parent_C
{
public:
	enum class Enum_dlg_choice_status            Status;                                            // 0x321(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FBE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_dlg_branch_reply                   Reply_info;                                        // 0x328(0xA0)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AChoiceClass_bed_C* GetDefaultObj();

	void Choice_info_condition(const struct FS_dlg_branch_choice_info& Choice_info, struct FS_dlg_branch_choice_info* Return_value, class Abp_inq_cagebed_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FS_dlg_branch_choice_info& K2Node_MakeStruct_s_dlg_branch_choice_info, const struct FS_dlg_branch_choice_info& CallFunc_choice_info_condition_return_value);
};

}


