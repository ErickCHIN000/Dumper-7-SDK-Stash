#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_DebugMenu.wid_DebugMenu_C
// (None)

class UClass* UWid_DebugMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_DebugMenu_C");

	return Clss;
}


// wid_DebugMenu_C wid_DebugMenu.Default__wid_DebugMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_DebugMenu_C* UWid_DebugMenu_C::GetDefaultObj()
{
	static class UWid_DebugMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_DebugMenu_C*>(UWid_DebugMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_DebugMenu.wid_DebugMenu_C.MenuBack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_DebugMenu_C::MenuBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DebugMenu_C", "MenuBack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DebugMenu.wid_DebugMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_DebugMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DebugMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DebugMenu.wid_DebugMenu_C.Up
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_DebugMenu_C::Up()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DebugMenu_C", "Up");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DebugMenu.wid_DebugMenu_C.Down
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_DebugMenu_C::Down()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DebugMenu_C", "Down");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DebugMenu.wid_DebugMenu_C.Left
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_DebugMenu_C::Left()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DebugMenu_C", "Left");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DebugMenu.wid_DebugMenu_C.Right
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_DebugMenu_C::Right()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DebugMenu_C", "Right");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DebugMenu.wid_DebugMenu_C.Accept
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_DebugMenu_C::Accept()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DebugMenu_C", "Accept");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DebugMenu.wid_DebugMenu_C.Back
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_DebugMenu_C::Back()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DebugMenu_C", "Back");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DebugMenu.wid_DebugMenu_C.ExecuteUbergraph_wid_DebugMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_debug_IMenuEntry_C*     K2Node_DynamicCast_AsWid_Debug_IMenu_Entry                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetCategoryName_Name                                    (None)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_debug_IMenuEntry_C*     K2Node_DynamicCast_AsWid_Debug_IMenu_Entry_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_debug_IMenuEntry_C*     K2Node_DynamicCast_AsWid_Debug_IMenu_Entry_2                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue_2                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_debug_IMenuEntry_C*     K2Node_DynamicCast_AsWid_Debug_IMenu_Entry_3                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue_3                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_debug_IMenuEntry_C*     K2Node_DynamicCast_AsWid_Debug_IMenu_Entry_4                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue_4                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_debug_IMenuEntry_C*     K2Node_DynamicCast_AsWid_Debug_IMenu_Entry_5                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue_5                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_debug_IMenuEntry_C*     K2Node_DynamicCast_AsWid_Debug_IMenu_Entry_6                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentIndex_CurrentIndex                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_DebugMenu_C::ExecuteUbergraph_wid_DebugMenu(int32 EntryPoint, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UWid_debug_IMenuEntry_C* K2Node_DynamicCast_AsWid_Debug_IMenu_Entry, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetCategoryName_Name, class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UWid_debug_IMenuEntry_C* K2Node_DynamicCast_AsWid_Debug_IMenu_Entry_1, bool K2Node_DynamicCast_bSuccess_1, class UWidget* CallFunc_GetActiveWidget_ReturnValue_1, class UWid_debug_IMenuEntry_C* K2Node_DynamicCast_AsWid_Debug_IMenu_Entry_2, bool K2Node_DynamicCast_bSuccess_2, class UWidget* CallFunc_GetActiveWidget_ReturnValue_2, class UWid_debug_IMenuEntry_C* K2Node_DynamicCast_AsWid_Debug_IMenu_Entry_3, bool K2Node_DynamicCast_bSuccess_3, class UWidget* CallFunc_GetActiveWidget_ReturnValue_3, class UWid_debug_IMenuEntry_C* K2Node_DynamicCast_AsWid_Debug_IMenu_Entry_4, bool K2Node_DynamicCast_bSuccess_4, class UWidget* CallFunc_GetActiveWidget_ReturnValue_4, class UWid_debug_IMenuEntry_C* K2Node_DynamicCast_AsWid_Debug_IMenu_Entry_5, bool K2Node_DynamicCast_bSuccess_5, class UWidget* CallFunc_GetActiveWidget_ReturnValue_5, class UWid_debug_IMenuEntry_C* K2Node_DynamicCast_AsWid_Debug_IMenu_Entry_6, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, int32 CallFunc_GetCurrentIndex_CurrentIndex, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DebugMenu_C", "ExecuteUbergraph_wid_DebugMenu");

	Params::UWid_DebugMenu_C_ExecuteUbergraph_wid_DebugMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Debug_IMenu_Entry = K2Node_DynamicCast_AsWid_Debug_IMenu_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCategoryName_Name = CallFunc_GetCategoryName_Name;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Debug_IMenu_Entry_1 = K2Node_DynamicCast_AsWid_Debug_IMenu_Entry_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetActiveWidget_ReturnValue_1 = CallFunc_GetActiveWidget_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsWid_Debug_IMenu_Entry_2 = K2Node_DynamicCast_AsWid_Debug_IMenu_Entry_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetActiveWidget_ReturnValue_2 = CallFunc_GetActiveWidget_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsWid_Debug_IMenu_Entry_3 = K2Node_DynamicCast_AsWid_Debug_IMenu_Entry_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetActiveWidget_ReturnValue_3 = CallFunc_GetActiveWidget_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsWid_Debug_IMenu_Entry_4 = K2Node_DynamicCast_AsWid_Debug_IMenu_Entry_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetActiveWidget_ReturnValue_4 = CallFunc_GetActiveWidget_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsWid_Debug_IMenu_Entry_5 = K2Node_DynamicCast_AsWid_Debug_IMenu_Entry_5;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetActiveWidget_ReturnValue_5 = CallFunc_GetActiveWidget_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsWid_Debug_IMenu_Entry_6 = K2Node_DynamicCast_AsWid_Debug_IMenu_Entry_6;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_2 = CallFunc_EqualEqual_ObjectObject_ReturnValue_2;
	Parms.CallFunc_GetCurrentIndex_CurrentIndex = CallFunc_GetCurrentIndex_CurrentIndex;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


