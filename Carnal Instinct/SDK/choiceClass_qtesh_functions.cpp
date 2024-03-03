#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass choiceClass_qtesh.choiceClass_qtesh_C
// (Actor)

class UClass* AChoiceClass_qtesh_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("choiceClass_qtesh_C");

	return Clss;
}


// choiceClass_qtesh_C choiceClass_qtesh.Default__choiceClass_qtesh_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChoiceClass_qtesh_C* AChoiceClass_qtesh_C::GetDefaultObj()
{
	static class AChoiceClass_qtesh_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChoiceClass_qtesh_C*>(AChoiceClass_qtesh_C::StaticClass()->DefaultObject);

	return Default;
}


// Function choiceClass_qtesh.choiceClass_qtesh_C.choice_info_condition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_dlg_branch_choice_info   Choice_info                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_dlg_branch_choice_info   Return_value                                                     (Parm, OutParm, HasGetValueTypeHash)
// struct FS_ItemData                 CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemData                 CallFunc_Get_Inventory_Item_by_Data_Item                         (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Get_Inventory_Item_by_Data_Found                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_dlg_branch_choice_info   K2Node_MakeStruct_s_dlg_branch_choice_info                       (HasGetValueTypeHash)
// struct FS_dlg_branch_choice_info   CallFunc_choice_info_condition_return_value                      (HasGetValueTypeHash)

void AChoiceClass_qtesh_C::Choice_info_condition(const struct FS_dlg_branch_choice_info& Choice_info, struct FS_dlg_branch_choice_info* Return_value, const struct FS_ItemData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, const struct FS_ItemData& CallFunc_Get_Inventory_Item_by_Data_Item, bool CallFunc_Get_Inventory_Item_by_Data_Found, const struct FS_dlg_branch_choice_info& K2Node_MakeStruct_s_dlg_branch_choice_info, const struct FS_dlg_branch_choice_info& CallFunc_choice_info_condition_return_value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("choiceClass_qtesh_C", "choice_info_condition");

	Params::AChoiceClass_qtesh_C_Choice_info_condition_Params Parms{};

	Parms.Choice_info = Choice_info;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.CallFunc_Get_Inventory_Item_by_Data_Item = CallFunc_Get_Inventory_Item_by_Data_Item;
	Parms.CallFunc_Get_Inventory_Item_by_Data_Found = CallFunc_Get_Inventory_Item_by_Data_Found;
	Parms.K2Node_MakeStruct_s_dlg_branch_choice_info = K2Node_MakeStruct_s_dlg_branch_choice_info;
	Parms.CallFunc_choice_info_condition_return_value = CallFunc_choice_info_condition_return_value;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = std::move(Parms.Return_value);

}

}

