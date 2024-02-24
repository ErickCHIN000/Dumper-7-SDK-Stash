#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ListenButton.WBP_ListenButton_C
// (None)

class UClass* UWBP_ListenButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ListenButton_C");

	return Clss;
}


// WBP_ListenButton_C WBP_ListenButton.Default__WBP_ListenButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ListenButton_C* UWBP_ListenButton_C::GetDefaultObj()
{
	static class UWBP_ListenButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ListenButton_C*>(UWBP_ListenButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ListenButton.WBP_ListenButton_C.BPI_GetButtons
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UButton*>             Buttons                                                          (Parm, OutParm, ContainsInstancedReference)
// TArray<class UButton*>             K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void UWBP_ListenButton_C::BPI_GetButtons(TArray<class UButton*>* Buttons, TArray<class UButton*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ListenButton_C", "BPI_GetButtons");

	Params::UWBP_ListenButton_C_BPI_GetButtons_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Buttons != nullptr)
		*Buttons = std::move(Parms.Buttons);

}


// Function WBP_ListenButton.WBP_ListenButton_C.Get Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_GetCorrespondingText_ReturnValue                        (None)

class FText UWBP_ListenButton_C::Get_Text(class FText CallFunc_GetCorrespondingText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ListenButton_C", "Get Text");

	Params::UWBP_ListenButton_C_Get_Text_Params Parms{};

	Parms.CallFunc_GetCorrespondingText_ReturnValue = CallFunc_GetCorrespondingText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_ListenButton.WBP_ListenButton_C.Get Listen Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetCorrespondingVisibility_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UWBP_ListenButton_C::Get_Listen_Visibility(enum class ESlateVisibility CallFunc_GetCorrespondingVisibility_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ListenButton_C", "Get Listen Visibility");

	Params::UWBP_ListenButton_C_Get_Listen_Visibility_Params Parms{};

	Parms.CallFunc_GetCorrespondingVisibility_ReturnValue = CallFunc_GetCorrespondingVisibility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_ListenButton.WBP_ListenButton_C.BndEvt__WBP_ListenButton_ListenButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ListenButton_C::BndEvt__WBP_ListenButton_ListenButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ListenButton_C", "BndEvt__WBP_ListenButton_ListenButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ListenButton.WBP_ListenButton_C.BP_UpdateVisualState
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ListenButton_C::BP_UpdateVisualState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ListenButton_C", "BP_UpdateVisualState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ListenButton.WBP_ListenButton_C.BndEvt__WBP_ListenButton_ListenButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ListenButton_C::BndEvt__WBP_ListenButton_ListenButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ListenButton_C", "BndEvt__WBP_ListenButton_ListenButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ListenButton.WBP_ListenButton_C.BP_UpdateButtonDimState
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ListenButton_C::BP_UpdateButtonDimState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ListenButton_C", "BP_UpdateButtonDimState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ListenButton.WBP_ListenButton_C.BndEvt__WBP_ListenButton_ListenButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ListenButton_C::BndEvt__WBP_ListenButton_ListenButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ListenButton_C", "BndEvt__WBP_ListenButton_ListenButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ListenButton.WBP_ListenButton_C.BP_PerformClickAnimation
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EGenericGridButtonType  Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ListenButton_C::BP_PerformClickAnimation(enum class EGenericGridButtonType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ListenButton_C", "BP_PerformClickAnimation");

	Params::UWBP_ListenButton_C_BP_PerformClickAnimation_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ListenButton.WBP_ListenButton_C.ExecuteUbergraph_WBP_ListenButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInBaseState_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCorrespondingRenderOpacity_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsButtonInteractable_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGenericGridButtonType  K2Node_Event_type                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ListenButton_C::ExecuteUbergraph_WBP_ListenButton(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, bool CallFunc_IsInBaseState_ReturnValue, float CallFunc_GetCorrespondingRenderOpacity_ReturnValue, bool CallFunc_IsButtonInteractable_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, enum class EGenericGridButtonType K2Node_Event_type, bool K2Node_SwitchEnum_CmpSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ListenButton_C", "ExecuteUbergraph_WBP_ListenButton");

	Params::UWBP_ListenButton_C_ExecuteUbergraph_WBP_ListenButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.CallFunc_IsInBaseState_ReturnValue = CallFunc_IsInBaseState_ReturnValue;
	Parms.CallFunc_GetCorrespondingRenderOpacity_ReturnValue = CallFunc_GetCorrespondingRenderOpacity_ReturnValue;
	Parms.CallFunc_IsButtonInteractable_ReturnValue = CallFunc_IsButtonInteractable_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_2 = CallFunc_PlayAnimationForward_ReturnValue_2;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue_1 = CallFunc_PlayAnimationReverse_ReturnValue_1;
	Parms.K2Node_Event_type = K2Node_Event_type;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_3 = CallFunc_PlayAnimationForward_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


