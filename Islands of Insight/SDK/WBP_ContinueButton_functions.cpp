#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ContinueButton.WBP_ContinueButton_C
// (None)

class UClass* UWBP_ContinueButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ContinueButton_C");

	return Clss;
}


// WBP_ContinueButton_C WBP_ContinueButton.Default__WBP_ContinueButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ContinueButton_C* UWBP_ContinueButton_C::GetDefaultObj()
{
	static class UWBP_ContinueButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ContinueButton_C*>(UWBP_ContinueButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ContinueButton.WBP_ContinueButton_C.Get Continue Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetCorrespondingVisibility_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UWBP_ContinueButton_C::Get_Continue_Visibility(enum class ESlateVisibility CallFunc_GetCorrespondingVisibility_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ContinueButton_C", "Get Continue Visibility");

	Params::UWBP_ContinueButton_C_Get_Continue_Visibility_Params Parms{};

	Parms.CallFunc_GetCorrespondingVisibility_ReturnValue = CallFunc_GetCorrespondingVisibility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_ContinueButton.WBP_ContinueButton_C.Get Continue Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_GetCorrespondingText_ReturnValue                        (None)

class FText UWBP_ContinueButton_C::Get_Continue_Text(class FText CallFunc_GetCorrespondingText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ContinueButton_C", "Get Continue Text");

	Params::UWBP_ContinueButton_C_Get_Continue_Text_Params Parms{};

	Parms.CallFunc_GetCorrespondingText_ReturnValue = CallFunc_GetCorrespondingText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_ContinueButton.WBP_ContinueButton_C.BndEvt__WBP_ContinueButton_ContinueButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ContinueButton_C::BndEvt__WBP_ContinueButton_ContinueButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ContinueButton_C", "BndEvt__WBP_ContinueButton_ContinueButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ContinueButton.WBP_ContinueButton_C.BndEvt__WBP_ContinueButton_ContinueButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ContinueButton_C::BndEvt__WBP_ContinueButton_ContinueButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ContinueButton_C", "BndEvt__WBP_ContinueButton_ContinueButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ContinueButton.WBP_ContinueButton_C.BndEvt__WBP_ContinueButton_ContinueButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ContinueButton_C::BndEvt__WBP_ContinueButton_ContinueButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ContinueButton_C", "BndEvt__WBP_ContinueButton_ContinueButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ContinueButton.WBP_ContinueButton_C.BP_Activate
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ContinueButton_C::BP_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ContinueButton_C", "BP_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ContinueButton.WBP_ContinueButton_C.ExecuteUbergraph_WBP_ContinueButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsButtonInteractable_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsButtonInteractable_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ContinueButton_C::ExecuteUbergraph_WBP_ContinueButton(int32 EntryPoint, bool CallFunc_IsButtonInteractable_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_IsButtonInteractable_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ContinueButton_C", "ExecuteUbergraph_WBP_ContinueButton");

	Params::UWBP_ContinueButton_C_ExecuteUbergraph_WBP_ContinueButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsButtonInteractable_ReturnValue = CallFunc_IsButtonInteractable_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_IsButtonInteractable_ReturnValue_1 = CallFunc_IsButtonInteractable_ReturnValue_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


