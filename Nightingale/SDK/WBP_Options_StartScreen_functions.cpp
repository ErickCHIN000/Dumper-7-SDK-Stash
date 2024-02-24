#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Options_StartScreen.WBP_Options_StartScreen_C
// (None)

class UClass* UWBP_Options_StartScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Options_StartScreen_C");

	return Clss;
}


// WBP_Options_StartScreen_C WBP_Options_StartScreen.Default__WBP_Options_StartScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Options_StartScreen_C* UWBP_Options_StartScreen_C::GetDefaultObj()
{
	static class UWBP_Options_StartScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Options_StartScreen_C*>(UWBP_Options_StartScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Options_StartScreen.WBP_Options_StartScreen_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_Options_StartScreen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_StartScreen_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Options_StartScreen.WBP_Options_StartScreen_C.BndEvt__WBP_Options_StartScreen_CBU_Close_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_StartScreen_C::BndEvt__WBP_Options_StartScreen_CBU_Close_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_StartScreen_C", "BndEvt__WBP_Options_StartScreen_CBU_Close_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_Options_StartScreen_C_BndEvt__WBP_Options_StartScreen_CBU_Close_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_StartScreen.WBP_Options_StartScreen_C.ExecuteUbergraph_WBP_Options_StartScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_StartScreen_C::ExecuteUbergraph_WBP_Options_StartScreen(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_StartScreen_C", "ExecuteUbergraph_WBP_Options_StartScreen");

	Params::UWBP_Options_StartScreen_C_ExecuteUbergraph_WBP_Options_StartScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}


