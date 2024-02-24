#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_DialogueDebugDTChoiceEntry.wid_DialogueDebugDTChoiceEntry_C
// (None)

class UClass* UWid_DialogueDebugDTChoiceEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_DialogueDebugDTChoiceEntry_C");

	return Clss;
}


// wid_DialogueDebugDTChoiceEntry_C wid_DialogueDebugDTChoiceEntry.Default__wid_DialogueDebugDTChoiceEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_DialogueDebugDTChoiceEntry_C* UWid_DialogueDebugDTChoiceEntry_C::GetDefaultObj()
{
	static class UWid_DialogueDebugDTChoiceEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_DialogueDebugDTChoiceEntry_C*>(UWid_DialogueDebugDTChoiceEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_DialogueDebugDTChoiceEntry.wid_DialogueDebugDTChoiceEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_DialogueDebugDTChoiceEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueDebugDTChoiceEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialogueDebugDTChoiceEntry.wid_DialogueDebugDTChoiceEntry_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_DialogueDebugDTChoiceEntry_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueDebugDTChoiceEntry_C", "BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialogueDebugDTChoiceEntry.wid_DialogueDebugDTChoiceEntry_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_DialogueDebugDTChoiceEntry_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueDebugDTChoiceEntry_C", "BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialogueDebugDTChoiceEntry.wid_DialogueDebugDTChoiceEntry_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_DialogueDebugDTChoiceEntry_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueDebugDTChoiceEntry_C", "BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialogueDebugDTChoiceEntry.wid_DialogueDebugDTChoiceEntry_C.ExecuteUbergraph_wid_DialogueDebugDTChoiceEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWid_DialogueDebugDTChoiceEntry_C::ExecuteUbergraph_wid_DialogueDebugDTChoiceEntry(int32 EntryPoint, const class FString& CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueDebugDTChoiceEntry_C", "ExecuteUbergraph_wid_DialogueDebugDTChoiceEntry");

	Params::UWid_DialogueDebugDTChoiceEntry_C_ExecuteUbergraph_wid_DialogueDebugDTChoiceEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueDebugDTChoiceEntry.wid_DialogueDebugDTChoiceEntry_C.Unhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_DialogueDebugDTChoiceEntry_C::Unhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueDebugDTChoiceEntry_C", "Unhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialogueDebugDTChoiceEntry.wid_DialogueDebugDTChoiceEntry_C.Hovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_DialogueDebugDTChoiceEntry_C::Hovered__DelegateSignature(class FName RowName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueDebugDTChoiceEntry_C", "Hovered__DelegateSignature");

	Params::UWid_DialogueDebugDTChoiceEntry_C_Hovered__DelegateSignature_Params Parms{};

	Parms.RowName = RowName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueDebugDTChoiceEntry.wid_DialogueDebugDTChoiceEntry_C.Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                  DataDT                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  MetaDataDT                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_DialogueDebugDTChoiceEntry_C::Selected__DelegateSignature(class UDataTable* DataDT, class UDataTable* MetaDataDT)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueDebugDTChoiceEntry_C", "Selected__DelegateSignature");

	Params::UWid_DialogueDebugDTChoiceEntry_C_Selected__DelegateSignature_Params Parms{};

	Parms.DataDT = DataDT;
	Parms.MetaDataDT = MetaDataDT;

	UObject::ProcessEvent(Func, &Parms);

}

}


