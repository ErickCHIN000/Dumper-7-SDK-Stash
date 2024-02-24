#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ShellUpgradeItem.ShellUpgradeItem_C
// (None)

class UClass* UShellUpgradeItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShellUpgradeItem_C");

	return Clss;
}


// ShellUpgradeItem_C ShellUpgradeItem.Default__ShellUpgradeItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShellUpgradeItem_C* UShellUpgradeItem_C::GetDefaultObj()
{
	static class UShellUpgradeItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShellUpgradeItem_C*>(UShellUpgradeItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShellUpgradeItem.ShellUpgradeItem_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        UpgradeID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellUpgradeItem_C::Initialize(class FName UpgradeID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradeItem_C", "Initialize");

	Params::UShellUpgradeItem_C_Initialize_Params Parms{};

	Parms.UpgradeID = UpgradeID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellUpgradeItem.ShellUpgradeItem_C.SetHighlighted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Highlighted                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShellUpgradeItem_C::SetHighlighted(bool Highlighted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradeItem_C", "SetHighlighted");

	Params::UShellUpgradeItem_C_SetHighlighted_Params Parms{};

	Parms.Highlighted = Highlighted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellUpgradeItem.ShellUpgradeItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UShellUpgradeItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradeItem_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgradeItem.ShellUpgradeItem_C.BndEvt__Background_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UShellUpgradeItem_C::BndEvt__Background_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradeItem_C", "BndEvt__Background_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgradeItem.ShellUpgradeItem_C.BndEvt__Background_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UShellUpgradeItem_C::BndEvt__Background_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradeItem_C", "BndEvt__Background_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgradeItem.ShellUpgradeItem_C.BndEvt__Background_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UShellUpgradeItem_C::BndEvt__Background_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradeItem_C", "BndEvt__Background_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgradeItem.ShellUpgradeItem_C.ExecuteUbergraph_ShellUpgradeItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_UpgradeID                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FShellUpgradeData           CallFunc_GetShellUpgradeRow_Out_Row                              (HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Highlighted                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// struct FSlateBrush                 K2Node_Select_Default                                            (None)
// enum class EArmorTypes             CallFunc_GetShell_CurrentArmor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShellBondingPoints_Points                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_Select_Default_1                                          (None)
// struct FSlateColor                 K2Node_Select_Default_2                                          (None)

void UShellUpgradeItem_C::ExecuteUbergraph_ShellUpgradeItem(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, class FName K2Node_CustomEvent_UpgradeID, const struct FShellUpgradeData& CallFunc_GetShellUpgradeRow_Out_Row, bool K2Node_CustomEvent_Highlighted, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FSlateBrush& K2Node_Select_Default, enum class EArmorTypes CallFunc_GetShell_CurrentArmor, int32 CallFunc_GetNamedPCInt_Value, int32 CallFunc_GetShellBondingPoints_Points, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, const struct FSlateColor& K2Node_Select_Default_1, const struct FSlateColor& K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradeItem_C", "ExecuteUbergraph_ShellUpgradeItem");

	Params::UShellUpgradeItem_C_ExecuteUbergraph_ShellUpgradeItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_CustomEvent_UpgradeID = K2Node_CustomEvent_UpgradeID;
	Parms.CallFunc_GetShellUpgradeRow_Out_Row = CallFunc_GetShellUpgradeRow_Out_Row;
	Parms.K2Node_CustomEvent_Highlighted = K2Node_CustomEvent_Highlighted;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetShell_CurrentArmor = CallFunc_GetShell_CurrentArmor;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_GetShellBondingPoints_Points = CallFunc_GetShellBondingPoints_Points;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellUpgradeItem.ShellUpgradeItem_C.OnBGClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UShellUpgradeItem_C*         Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellUpgradeItem_C::OnBGClicked__DelegateSignature(class UShellUpgradeItem_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradeItem_C", "OnBGClicked__DelegateSignature");

	Params::UShellUpgradeItem_C_OnBGClicked__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellUpgradeItem.ShellUpgradeItem_C.OnBGHoverEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UShellUpgradeItem_C*         Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellUpgradeItem_C::OnBGHoverEnd__DelegateSignature(class UShellUpgradeItem_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradeItem_C", "OnBGHoverEnd__DelegateSignature");

	Params::UShellUpgradeItem_C_OnBGHoverEnd__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellUpgradeItem.ShellUpgradeItem_C.OnBGHoverStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UShellUpgradeItem_C*         Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellUpgradeItem_C::OnBGHoverStart__DelegateSignature(class UShellUpgradeItem_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradeItem_C", "OnBGHoverStart__DelegateSignature");

	Params::UShellUpgradeItem_C_OnBGHoverStart__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}

}


