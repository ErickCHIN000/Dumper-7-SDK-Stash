#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_AbandonProspectButton.UMG_AbandonProspectButton_C
// (None)

class UClass* UUMG_AbandonProspectButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_AbandonProspectButton_C");

	return Clss;
}


// UMG_AbandonProspectButton_C UMG_AbandonProspectButton.Default__UMG_AbandonProspectButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_AbandonProspectButton_C* UUMG_AbandonProspectButton_C::GetDefaultObj()
{
	static class UUMG_AbandonProspectButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_AbandonProspectButton_C*>(UUMG_AbandonProspectButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_AbandonProspectButton.UMG_AbandonProspectButton_C.BndEvt__UMG_AbandonProspectButton_UMG_BasicButton_2_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AbandonProspectButton_C::BndEvt__UMG_AbandonProspectButton_UMG_BasicButton_2_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AbandonProspectButton_C", "BndEvt__UMG_AbandonProspectButton_UMG_BasicButton_2_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");

	Params::UUMG_AbandonProspectButton_C_BndEvt__UMG_AbandonProspectButton_UMG_BasicButton_2_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_AbandonProspectButton.UMG_AbandonProspectButton_C.ExecuteUbergraph_UMG_AbandonProspectButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AbandonProspectButton_C::ExecuteUbergraph_UMG_AbandonProspectButton(int32 EntryPoint, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AbandonProspectButton_C", "ExecuteUbergraph_UMG_AbandonProspectButton");

	Params::UUMG_AbandonProspectButton_C_ExecuteUbergraph_UMG_AbandonProspectButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_AbandonProspectButton.UMG_AbandonProspectButton_C.AbandonButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_AbandonProspectButton_C::AbandonButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AbandonProspectButton_C", "AbandonButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


