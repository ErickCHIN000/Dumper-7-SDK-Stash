#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass GridRadioSelect.GridRadioSelect_C
// (None)

class UClass* UGridRadioSelect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GridRadioSelect_C");

	return Clss;
}


// GridRadioSelect_C GridRadioSelect.Default__GridRadioSelect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGridRadioSelect_C* UGridRadioSelect_C::GetDefaultObj()
{
	static class UGridRadioSelect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGridRadioSelect_C*>(UGridRadioSelect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GridRadioSelect.GridRadioSelect_C.OnButtonCreated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class URadioButton*                Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  NewSlot                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGridRadioSelect_C::OnButtonCreated(class URadioButton* Button, class UPanelSlot* NewSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridRadioSelect_C", "OnButtonCreated");

	Params::UGridRadioSelect_C_OnButtonCreated_Params Parms{};

	Parms.Button = Button;
	Parms.NewSlot = NewSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GridRadioSelect.GridRadioSelect_C.ExecuteUbergraph_GridRadioSelect
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URadioButton*                K2Node_Event_Button                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  K2Node_Event_NewSlot                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGridSlot*                   K2Node_DynamicCast_AsGrid_Slot                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGridPanel*                  K2Node_DynamicCast_AsGrid_Panel                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetChildIndex_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGridRadioSelect_C::ExecuteUbergraph_GridRadioSelect(int32 EntryPoint, class URadioButton* K2Node_Event_Button, class UPanelSlot* K2Node_Event_NewSlot, class UGridSlot* K2Node_DynamicCast_AsGrid_Slot, bool K2Node_DynamicCast_bSuccess, class UGridPanel* K2Node_DynamicCast_AsGrid_Panel, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetChildIndex_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridRadioSelect_C", "ExecuteUbergraph_GridRadioSelect");

	Params::UGridRadioSelect_C_ExecuteUbergraph_GridRadioSelect_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Button = K2Node_Event_Button;
	Parms.K2Node_Event_NewSlot = K2Node_Event_NewSlot;
	Parms.K2Node_DynamicCast_AsGrid_Slot = K2Node_DynamicCast_AsGrid_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGrid_Panel = K2Node_DynamicCast_AsGrid_Panel;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetChildIndex_ReturnValue = CallFunc_GetChildIndex_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


