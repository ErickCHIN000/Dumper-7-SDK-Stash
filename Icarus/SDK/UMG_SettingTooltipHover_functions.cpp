#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_SettingTooltipHover.UMG_SettingTooltipHover_C
// (None)

class UClass* UUMG_SettingTooltipHover_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_SettingTooltipHover_C");

	return Clss;
}


// UMG_SettingTooltipHover_C UMG_SettingTooltipHover.Default__UMG_SettingTooltipHover_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_SettingTooltipHover_C* UUMG_SettingTooltipHover_C::GetDefaultObj()
{
	static class UUMG_SettingTooltipHover_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_SettingTooltipHover_C*>(UUMG_SettingTooltipHover_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_SettingTooltipHover.UMG_SettingTooltipHover_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_SettingTooltipHover_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SettingTooltipHover_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_SettingTooltipHover.UMG_SettingTooltipHover_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_SettingTooltipHover_C::BndEvt__HoverButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SettingTooltipHover_C", "BndEvt__HoverButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_SettingTooltipHover.UMG_SettingTooltipHover_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_SettingTooltipHover_C::BndEvt__HoverButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SettingTooltipHover_C", "BndEvt__HoverButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_SettingTooltipHover.UMG_SettingTooltipHover_C.Set Requirements
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                Descriptions                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<bool>                       States                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_SettingTooltipHover_C::Set_Requirements(TArray<class FText>& Descriptions, TArray<bool>& States)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SettingTooltipHover_C", "Set Requirements");

	Params::UUMG_SettingTooltipHover_C_Set_Requirements_Params Parms{};

	Parms.Descriptions = Descriptions;
	Parms.States = States;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_SettingTooltipHover.UMG_SettingTooltipHover_C.ExecuteUbergraph_UMG_SettingTooltipHover
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                K2Node_CustomEvent_Descriptions                                  (ConstParm, ReferenceParm)
// TArray<bool>                       K2Node_CustomEvent_States                                        (ConstParm, ReferenceParm)
// class UUMG_SettingTooltipText_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_SettingTooltipHover_C::ExecuteUbergraph_UMG_SettingTooltipHover(int32 EntryPoint, TArray<class FText>& K2Node_CustomEvent_Descriptions, TArray<bool>& K2Node_CustomEvent_States, class UUMG_SettingTooltipText_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SettingTooltipHover_C", "ExecuteUbergraph_UMG_SettingTooltipHover");

	Params::UUMG_SettingTooltipHover_C_ExecuteUbergraph_UMG_SettingTooltipHover_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Descriptions = K2Node_CustomEvent_Descriptions;
	Parms.K2Node_CustomEvent_States = K2Node_CustomEvent_States;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


