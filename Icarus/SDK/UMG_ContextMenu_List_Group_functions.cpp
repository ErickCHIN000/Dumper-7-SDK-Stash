#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ContextMenu_List_Group.UMG_ContextMenu_List_Group_C
// (None)

class UClass* UUMG_ContextMenu_List_Group_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ContextMenu_List_Group_C");

	return Clss;
}


// UMG_ContextMenu_List_Group_C UMG_ContextMenu_List_Group.Default__UMG_ContextMenu_List_Group_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ContextMenu_List_Group_C* UUMG_ContextMenu_List_Group_C::GetDefaultObj()
{
	static class UUMG_ContextMenu_List_Group_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ContextMenu_List_Group_C*>(UUMG_ContextMenu_List_Group_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_ContextMenu_List_Group.UMG_ContextMenu_List_Group_C.SetGroupInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FContextMenuGroupType       GroupType                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ShowDivider                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ContextMenu_List_Group_C::SetGroupInfo(const struct FContextMenuGroupType& GroupType, bool ShowDivider)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ContextMenu_List_Group_C", "SetGroupInfo");

	Params::UUMG_ContextMenu_List_Group_C_SetGroupInfo_Params Parms{};

	Parms.GroupType = GroupType;
	Parms.ShowDivider = ShowDivider;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ContextMenu_List_Group.UMG_ContextMenu_List_Group_C.AddItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 ItemWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ContextMenu_List_Group_C::AddItem(class UUserWidget* ItemWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ContextMenu_List_Group_C", "AddItem");

	Params::UUMG_ContextMenu_List_Group_C_AddItem_Params Parms{};

	Parms.ItemWidget = ItemWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ContextMenu_List_Group.UMG_ContextMenu_List_Group_C.ExecuteUbergraph_UMG_ContextMenu_List_Group
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContextMenuGroupType       K2Node_CustomEvent_GroupType                                     (None)
// bool                               K2Node_CustomEvent_ShowDivider                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 K2Node_CustomEvent_ItemWidget                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ContextMenu_List_Group_C::ExecuteUbergraph_UMG_ContextMenu_List_Group(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FContextMenuGroupType& K2Node_CustomEvent_GroupType, bool K2Node_CustomEvent_ShowDivider, class UUserWidget* K2Node_CustomEvent_ItemWidget, bool Temp_bool_Variable, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ContextMenu_List_Group_C", "ExecuteUbergraph_UMG_ContextMenu_List_Group");

	Params::UUMG_ContextMenu_List_Group_C_ExecuteUbergraph_UMG_ContextMenu_List_Group_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_CustomEvent_GroupType = K2Node_CustomEvent_GroupType;
	Parms.K2Node_CustomEvent_ShowDivider = K2Node_CustomEvent_ShowDivider;
	Parms.K2Node_CustomEvent_ItemWidget = K2Node_CustomEvent_ItemWidget;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


