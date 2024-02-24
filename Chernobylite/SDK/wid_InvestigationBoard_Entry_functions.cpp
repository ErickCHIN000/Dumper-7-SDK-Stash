#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_InvestigationBoard_Entry.wid_InvestigationBoard_Entry_C
// (None)

class UClass* UWid_InvestigationBoard_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_InvestigationBoard_Entry_C");

	return Clss;
}


// wid_InvestigationBoard_Entry_C wid_InvestigationBoard_Entry.Default__wid_InvestigationBoard_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_InvestigationBoard_Entry_C* UWid_InvestigationBoard_Entry_C::GetDefaultObj()
{
	static class UWid_InvestigationBoard_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_InvestigationBoard_Entry_C*>(UWid_InvestigationBoard_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_InvestigationBoard_Entry.wid_InvestigationBoard_Entry_C.SetEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewEnabled                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_InvestigationBoard_Entry_C::SetEnabled(bool NewEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_InvestigationBoard_Entry_C", "SetEnabled");

	Params::UWid_InvestigationBoard_Entry_C_SetEnabled_Params Parms{};

	Parms.NewEnabled = NewEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_InvestigationBoard_Entry.wid_InvestigationBoard_Entry_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              SelectionGlowIntensity                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_InvestigationBoard_Entry_C::SetSelected(bool NewSelected, float SelectionGlowIntensity, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_InvestigationBoard_Entry_C", "SetSelected");

	Params::UWid_InvestigationBoard_Entry_C_SetSelected_Params Parms{};

	Parms.NewSelected = NewSelected;
	Parms.SelectionGlowIntensity = SelectionGlowIntensity;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_InvestigationBoard_Entry.wid_InvestigationBoard_Entry_C.BndEvt__Button_31_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_InvestigationBoard_Entry_C::BndEvt__Button_31_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_InvestigationBoard_Entry_C", "BndEvt__Button_31_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_InvestigationBoard_Entry.wid_InvestigationBoard_Entry_C.BndEvt__Button_31_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_InvestigationBoard_Entry_C::BndEvt__Button_31_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_InvestigationBoard_Entry_C", "BndEvt__Button_31_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_InvestigationBoard_Entry.wid_InvestigationBoard_Entry_C.BndEvt__Button_31_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_InvestigationBoard_Entry_C::BndEvt__Button_31_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_InvestigationBoard_Entry_C", "BndEvt__Button_31_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_InvestigationBoard_Entry.wid_InvestigationBoard_Entry_C.ExecuteUbergraph_wid_InvestigationBoard_Entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_InvestigationBoard_Entry_C::ExecuteUbergraph_wid_InvestigationBoard_Entry(int32 EntryPoint, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, int32 CallFunc_PostEvent_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_InvestigationBoard_Entry_C", "ExecuteUbergraph_wid_InvestigationBoard_Entry");

	Params::UWid_InvestigationBoard_Entry_C_ExecuteUbergraph_wid_InvestigationBoard_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


