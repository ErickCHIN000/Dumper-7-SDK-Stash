#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_CompetitionPanel.UMG_CompetitionPanel_C
// (None)

class UClass* UUMG_CompetitionPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_CompetitionPanel_C");

	return Clss;
}


// UMG_CompetitionPanel_C UMG_CompetitionPanel.Default__UMG_CompetitionPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_CompetitionPanel_C* UUMG_CompetitionPanel_C::GetDefaultObj()
{
	static class UUMG_CompetitionPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_CompetitionPanel_C*>(UUMG_CompetitionPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_CompetitionPanel.UMG_CompetitionPanel_C.BndEvt__UMG_CompetitionPanel_Button_9_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_CompetitionPanel_C::BndEvt__UMG_CompetitionPanel_Button_9_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CompetitionPanel_C", "BndEvt__UMG_CompetitionPanel_Button_9_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CompetitionPanel.UMG_CompetitionPanel_C.BndEvt__UMG_CompetitionPanel_Button_9_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_CompetitionPanel_C::BndEvt__UMG_CompetitionPanel_Button_9_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CompetitionPanel_C", "BndEvt__UMG_CompetitionPanel_Button_9_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CompetitionPanel.UMG_CompetitionPanel_C.ExecuteUbergraph_UMG_CompetitionPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CompetitionPanel_C::ExecuteUbergraph_UMG_CompetitionPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CompetitionPanel_C", "ExecuteUbergraph_UMG_CompetitionPanel");

	Params::UUMG_CompetitionPanel_C_ExecuteUbergraph_UMG_CompetitionPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


