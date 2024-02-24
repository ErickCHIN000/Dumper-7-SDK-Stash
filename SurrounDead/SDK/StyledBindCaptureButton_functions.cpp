#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass StyledBindCaptureButton.StyledBindCaptureButton_C
// (None)

class UClass* UStyledBindCaptureButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StyledBindCaptureButton_C");

	return Clss;
}


// StyledBindCaptureButton_C StyledBindCaptureButton.Default__StyledBindCaptureButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStyledBindCaptureButton_C* UStyledBindCaptureButton_C::GetDefaultObj()
{
	static class UStyledBindCaptureButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStyledBindCaptureButton_C*>(UStyledBindCaptureButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StyledBindCaptureButton.StyledBindCaptureButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UStyledBindCaptureButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StyledBindCaptureButton_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StyledBindCaptureButton.StyledBindCaptureButton_C.ExecuteUbergraph_StyledBindCaptureButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBindCapturePrompt*          CallFunc_StartCapture_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UStyledBindCaptureButton_C::ExecuteUbergraph_StyledBindCaptureButton(int32 EntryPoint, class UBindCapturePrompt* CallFunc_StartCapture_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StyledBindCaptureButton_C", "ExecuteUbergraph_StyledBindCaptureButton");

	Params::UStyledBindCaptureButton_C_ExecuteUbergraph_StyledBindCaptureButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_StartCapture_ReturnValue = CallFunc_StartCapture_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


