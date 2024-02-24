#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_sw_Debug_InstancedtemTemplateEntry.WBP_sw_Debug_InstancedtemTemplateEntry_C
// (None)

class UClass* UWBP_sw_Debug_InstancedtemTemplateEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_sw_Debug_InstancedtemTemplateEntry_C");

	return Clss;
}


// WBP_sw_Debug_InstancedtemTemplateEntry_C WBP_sw_Debug_InstancedtemTemplateEntry.Default__WBP_sw_Debug_InstancedtemTemplateEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_sw_Debug_InstancedtemTemplateEntry_C* UWBP_sw_Debug_InstancedtemTemplateEntry_C::GetDefaultObj()
{
	static class UWBP_sw_Debug_InstancedtemTemplateEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_sw_Debug_InstancedtemTemplateEntry_C*>(UWBP_sw_Debug_InstancedtemTemplateEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_sw_Debug_InstancedtemTemplateEntry.WBP_sw_Debug_InstancedtemTemplateEntry_C.GetTooltipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_ItemTooltip_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_sw_Debug_InstancedtemTemplateEntry_C::GetTooltipWidget_0(class UWBP_ItemTooltip_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_Debug_InstancedtemTemplateEntry_C", "GetTooltipWidget_0");

	Params::UWBP_sw_Debug_InstancedtemTemplateEntry_C_GetTooltipWidget_0_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_sw_Debug_InstancedtemTemplateEntry.WBP_sw_Debug_InstancedtemTemplateEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_sw_Debug_InstancedtemTemplateEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_Debug_InstancedtemTemplateEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_sw_Debug_InstancedtemTemplateEntry.WBP_sw_Debug_InstancedtemTemplateEntry_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_sw_Debug_InstancedtemTemplateEntry_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_Debug_InstancedtemTemplateEntry_C", "BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_sw_Debug_InstancedtemTemplateEntry.WBP_sw_Debug_InstancedtemTemplateEntry_C.BndEvt__Button_Network_160_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_sw_Debug_InstancedtemTemplateEntry_C::BndEvt__Button_Network_160_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_Debug_InstancedtemTemplateEntry_C", "BndEvt__Button_Network_160_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_sw_Debug_InstancedtemTemplateEntry.WBP_sw_Debug_InstancedtemTemplateEntry_C.ExecuteUbergraph_WBP_sw_Debug_InstancedtemTemplateEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)

void UWBP_sw_Debug_InstancedtemTemplateEntry_C::ExecuteUbergraph_WBP_sw_Debug_InstancedtemTemplateEntry(int32 EntryPoint, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_Debug_InstancedtemTemplateEntry_C", "ExecuteUbergraph_WBP_sw_Debug_InstancedtemTemplateEntry");

	Params::UWBP_sw_Debug_InstancedtemTemplateEntry_C_ExecuteUbergraph_WBP_sw_Debug_InstancedtemTemplateEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_Debug_InstancedtemTemplateEntry.WBP_sw_Debug_InstancedtemTemplateEntry_C.ItemClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         ItemDataRowHandle                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_Debug_InstancedtemTemplateEntry_C::ItemClicked__DelegateSignature(const struct FDataTableRowHandle& ItemDataRowHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_Debug_InstancedtemTemplateEntry_C", "ItemClicked__DelegateSignature");

	Params::UWBP_sw_Debug_InstancedtemTemplateEntry_C_ItemClicked__DelegateSignature_Params Parms{};

	Parms.ItemDataRowHandle = ItemDataRowHandle;

	UObject::ProcessEvent(Func, &Parms);

}

}


