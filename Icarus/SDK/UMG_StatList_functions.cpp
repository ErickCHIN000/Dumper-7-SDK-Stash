#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_StatList.UMG_StatList_C
// (None)

class UClass* UUMG_StatList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_StatList_C");

	return Clss;
}


// UMG_StatList_C UMG_StatList.Default__UMG_StatList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_StatList_C* UUMG_StatList_C::GetDefaultObj()
{
	static class UUMG_StatList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_StatList_C*>(UUMG_StatList_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_StatList.UMG_StatList_C.AddElement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 UserWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_StatList_C::AddElement(class UUserWidget* UserWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_StatList_C", "AddElement");

	Params::UUMG_StatList_C_AddElement_Params Parms{};

	Parms.UserWidget = UserWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_StatList.UMG_StatList_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_StatList_C::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_StatList_C", "Update");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_StatList.UMG_StatList_C.ExecuteUbergraph_UMG_StatList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUMG_StatTitle_C*>    CallFunc_GetChildWidgetsOfClass_ChildWidgets                     (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_StatTitle_C*            CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_CustomEvent_UserWidget                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_StatList_C::ExecuteUbergraph_UMG_StatList(int32 EntryPoint, TArray<class UUMG_StatTitle_C*>& CallFunc_GetChildWidgetsOfClass_ChildWidgets, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UUMG_StatTitle_C* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UUserWidget* K2Node_CustomEvent_UserWidget, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_StatList_C", "ExecuteUbergraph_UMG_StatList");

	Params::UUMG_StatList_C_ExecuteUbergraph_UMG_StatList_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetChildWidgetsOfClass_ChildWidgets = CallFunc_GetChildWidgetsOfClass_ChildWidgets;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_UserWidget = K2Node_CustomEvent_UserWidget;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


