#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ServerButton.WBP_ServerButton_C
// (None)

class UClass* UWBP_ServerButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ServerButton_C");

	return Clss;
}


// WBP_ServerButton_C WBP_ServerButton.Default__WBP_ServerButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ServerButton_C* UWBP_ServerButton_C::GetDefaultObj()
{
	static class UWBP_ServerButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ServerButton_C*>(UWBP_ServerButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ServerButton.WBP_ServerButton_C.BndEvt__WBP_ServerButton_WBP_StyledButton_K2Node_ComponentBoundEvent_0_Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ServerButton_C::BndEvt__WBP_ServerButton_WBP_StyledButton_K2Node_ComponentBoundEvent_0_Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ServerButton_C", "BndEvt__WBP_ServerButton_WBP_StyledButton_K2Node_ComponentBoundEvent_0_Pressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ServerButton.WBP_ServerButton_C.ExecuteUbergraph_WBP_ServerButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ServerButton_C::ExecuteUbergraph_WBP_ServerButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ServerButton_C", "ExecuteUbergraph_WBP_ServerButton");

	Params::UWBP_ServerButton_C_ExecuteUbergraph_WBP_ServerButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ServerButton.WBP_ServerButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ServerButton_C::OnClicked__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ServerButton_C", "OnClicked__DelegateSignature");

	Params::UWBP_ServerButton_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}

}


