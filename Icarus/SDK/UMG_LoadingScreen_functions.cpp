#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_LoadingScreen.UMG_LoadingScreen_C
// (None)

class UClass* UUMG_LoadingScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_LoadingScreen_C");

	return Clss;
}


// UMG_LoadingScreen_C UMG_LoadingScreen.Default__UMG_LoadingScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_LoadingScreen_C* UUMG_LoadingScreen_C::GetDefaultObj()
{
	static class UUMG_LoadingScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_LoadingScreen_C*>(UUMG_LoadingScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_LoadingScreen.UMG_LoadingScreen_C.SetDescription
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Description                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_LoadingScreen_C::SetDescription(class FText Description)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_LoadingScreen_C", "SetDescription");

	Params::UUMG_LoadingScreen_C_SetDescription_Params Parms{};

	Parms.Description = Description;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_LoadingScreen.UMG_LoadingScreen_C.SetContentWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LoadingScreen_C::SetContentWidget(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_LoadingScreen_C", "SetContentWidget");

	Params::UUMG_LoadingScreen_C_SetContentWidget_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_LoadingScreen.UMG_LoadingScreen_C.SetContentSwitcher
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ContentShown                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_LoadingScreen_C::SetContentSwitcher(bool ContentShown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_LoadingScreen_C", "SetContentSwitcher");

	Params::UUMG_LoadingScreen_C_SetContentSwitcher_Params Parms{};

	Parms.ContentShown = ContentShown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_LoadingScreen.UMG_LoadingScreen_C.ExecuteUbergraph_UMG_LoadingScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Description                                   (None)
// class UWidget*                     K2Node_CustomEvent_Widget                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ContentShown                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LoadingScreen_C::ExecuteUbergraph_UMG_LoadingScreen(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class FText K2Node_CustomEvent_Description, class UWidget* K2Node_CustomEvent_Widget, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool K2Node_CustomEvent_ContentShown, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_LoadingScreen_C", "ExecuteUbergraph_UMG_LoadingScreen");

	Params::UUMG_LoadingScreen_C_ExecuteUbergraph_UMG_LoadingScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_CustomEvent_Description = K2Node_CustomEvent_Description;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_CustomEvent_ContentShown = K2Node_CustomEvent_ContentShown;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


