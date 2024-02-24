#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_TalentSwitcher.UMG_TalentSwitcher_C
// (None)

class UClass* UUMG_TalentSwitcher_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_TalentSwitcher_C");

	return Clss;
}


// UMG_TalentSwitcher_C UMG_TalentSwitcher.Default__UMG_TalentSwitcher_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_TalentSwitcher_C* UUMG_TalentSwitcher_C::GetDefaultObj()
{
	static class UUMG_TalentSwitcher_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_TalentSwitcher_C*>(UUMG_TalentSwitcher_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_TalentSwitcher.UMG_TalentSwitcher_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_TalentSwitcher_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentSwitcher_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TalentSwitcher.UMG_TalentSwitcher_C.BndEvt__UMG_TalentSwitcher_PlayerTalents_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ToggleButtonBase_C*     ToggleButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TalentSwitcher_C::BndEvt__UMG_TalentSwitcher_PlayerTalents_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentSwitcher_C", "BndEvt__UMG_TalentSwitcher_PlayerTalents_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature");

	Params::UUMG_TalentSwitcher_C_BndEvt__UMG_TalentSwitcher_PlayerTalents_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature_Params Parms{};

	Parms.ToggleButton = ToggleButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentSwitcher.UMG_TalentSwitcher_C.BndEvt__UMG_TalentSwitcher_SoloTalents_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ToggleButtonBase_C*     ToggleButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TalentSwitcher_C::BndEvt__UMG_TalentSwitcher_SoloTalents_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentSwitcher_C", "BndEvt__UMG_TalentSwitcher_SoloTalents_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature");

	Params::UUMG_TalentSwitcher_C_BndEvt__UMG_TalentSwitcher_SoloTalents_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature_Params Parms{};

	Parms.ToggleButton = ToggleButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentSwitcher.UMG_TalentSwitcher_C.ExecuteUbergraph_UMG_TalentSwitcher
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ToggleButtonBase_C*     K2Node_ComponentBoundEvent_ToggleButton_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ToggleButtonBase_C*     K2Node_ComponentBoundEvent_ToggleButton                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TalentSwitcher_C::ExecuteUbergraph_UMG_TalentSwitcher(int32 EntryPoint, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton_1, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentSwitcher_C", "ExecuteUbergraph_UMG_TalentSwitcher");

	Params::UUMG_TalentSwitcher_C_ExecuteUbergraph_UMG_TalentSwitcher_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_ToggleButton_1 = K2Node_ComponentBoundEvent_ToggleButton_1;
	Parms.K2Node_ComponentBoundEvent_ToggleButton = K2Node_ComponentBoundEvent_ToggleButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentSwitcher.UMG_TalentSwitcher_C.SwitchTalents__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Solo                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_TalentSwitcher_C::SwitchTalents__DelegateSignature(bool Solo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentSwitcher_C", "SwitchTalents__DelegateSignature");

	Params::UUMG_TalentSwitcher_C_SwitchTalents__DelegateSignature_Params Parms{};

	Parms.Solo = Solo;

	UObject::ProcessEvent(Func, &Parms);

}

}


