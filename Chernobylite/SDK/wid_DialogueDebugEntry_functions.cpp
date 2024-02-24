#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_DialogueDebugEntry.wid_DialogueDebugEntry_C
// (None)

class UClass* UWid_DialogueDebugEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_DialogueDebugEntry_C");

	return Clss;
}


// wid_DialogueDebugEntry_C wid_DialogueDebugEntry.Default__wid_DialogueDebugEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_DialogueDebugEntry_C* UWid_DialogueDebugEntry_C::GetDefaultObj()
{
	static class UWid_DialogueDebugEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_DialogueDebugEntry_C*>(UWid_DialogueDebugEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_DialogueDebugEntry.wid_DialogueDebugEntry_C.UpdateBackgroundColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewBackgroundType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_DialogueDebugEntry_C::UpdateBackgroundColor(bool NewBackgroundType, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueDebugEntry_C", "UpdateBackgroundColor");

	Params::UWid_DialogueDebugEntry_C_UpdateBackgroundColor_Params Parms{};

	Parms.NewBackgroundType = NewBackgroundType;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueDebugEntry.wid_DialogueDebugEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_DialogueDebugEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueDebugEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialogueDebugEntry.wid_DialogueDebugEntry_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_DialogueDebugEntry_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueDebugEntry_C", "BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialogueDebugEntry.wid_DialogueDebugEntry_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_DialogueDebugEntry_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueDebugEntry_C", "BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialogueDebugEntry.wid_DialogueDebugEntry_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_DialogueDebugEntry_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueDebugEntry_C", "BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialogueDebugEntry.wid_DialogueDebugEntry_C.ExecuteUbergraph_wid_DialogueDebugEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_DialogueDebugEntry_C::ExecuteUbergraph_wid_DialogueDebugEntry(int32 EntryPoint, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueDebugEntry_C", "ExecuteUbergraph_wid_DialogueDebugEntry");

	Params::UWid_DialogueDebugEntry_C_ExecuteUbergraph_wid_DialogueDebugEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueDebugEntry.wid_DialogueDebugEntry_C.ChatterUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_DialogueDebugEntry_C::ChatterUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueDebugEntry_C", "ChatterUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialogueDebugEntry.wid_DialogueDebugEntry_C.ChatterHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_DialogueDebugEntry_C::ChatterHovered__DelegateSignature(class FName RowName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueDebugEntry_C", "ChatterHovered__DelegateSignature");

	Params::UWid_DialogueDebugEntry_C_ChatterHovered__DelegateSignature_Params Parms{};

	Parms.RowName = RowName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueDebugEntry.wid_DialogueDebugEntry_C.ChatterSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        DisplayName                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWid_DialogueDebugEntry_C*   Entry                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_DialogueDebugEntry_C::ChatterSelected__DelegateSignature(class FName RowName, class FText DisplayName, class UWid_DialogueDebugEntry_C* Entry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueDebugEntry_C", "ChatterSelected__DelegateSignature");

	Params::UWid_DialogueDebugEntry_C_ChatterSelected__DelegateSignature_Params Parms{};

	Parms.RowName = RowName;
	Parms.DisplayName = DisplayName;
	Parms.Entry = Entry;

	UObject::ProcessEvent(Func, &Parms);

}

}


