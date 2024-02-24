#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_GameButtonBottomRight.WBP_GameButtonBottomRight_C
// (None)

class UClass* UWBP_GameButtonBottomRight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_GameButtonBottomRight_C");

	return Clss;
}


// WBP_GameButtonBottomRight_C WBP_GameButtonBottomRight.Default__WBP_GameButtonBottomRight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_GameButtonBottomRight_C* UWBP_GameButtonBottomRight_C::GetDefaultObj()
{
	static class UWBP_GameButtonBottomRight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_GameButtonBottomRight_C*>(UWBP_GameButtonBottomRight_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_GameButtonBottomRight.WBP_GameButtonBottomRight_C.Get Foresight Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_GetCorrespondingText_ReturnValue                        (None)

class FText UWBP_GameButtonBottomRight_C::Get_Foresight_Text(class FText CallFunc_GetCorrespondingText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameButtonBottomRight_C", "Get Foresight Text");

	Params::UWBP_GameButtonBottomRight_C_Get_Foresight_Text_Params Parms{};

	Parms.CallFunc_GetCorrespondingText_ReturnValue = CallFunc_GetCorrespondingText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_GameButtonBottomRight.WBP_GameButtonBottomRight_C.Get FORESIGHT Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetCorrespondingVisibility_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UWBP_GameButtonBottomRight_C::Get_FORESIGHT_Visibility(enum class ESlateVisibility CallFunc_GetCorrespondingVisibility_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameButtonBottomRight_C", "Get FORESIGHT Visibility");

	Params::UWBP_GameButtonBottomRight_C_Get_FORESIGHT_Visibility_Params Parms{};

	Parms.CallFunc_GetCorrespondingVisibility_ReturnValue = CallFunc_GetCorrespondingVisibility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_GameButtonBottomRight.WBP_GameButtonBottomRight_C.BndEvt__WBP_GameButtonBottomRight_BottomRightButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameButtonBottomRight_C::BndEvt__WBP_GameButtonBottomRight_BottomRightButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameButtonBottomRight_C", "BndEvt__WBP_GameButtonBottomRight_BottomRightButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameButtonBottomRight.WBP_GameButtonBottomRight_C.BP_UpdateVisualState
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_GameButtonBottomRight_C::BP_UpdateVisualState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameButtonBottomRight_C", "BP_UpdateVisualState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameButtonBottomRight.WBP_GameButtonBottomRight_C.BndEvt__WBP_GameButtonBottomRight_BottomRightButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameButtonBottomRight_C::BndEvt__WBP_GameButtonBottomRight_BottomRightButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameButtonBottomRight_C", "BndEvt__WBP_GameButtonBottomRight_BottomRightButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameButtonBottomRight.WBP_GameButtonBottomRight_C.BP_UpdateButtonDimState
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_GameButtonBottomRight_C::BP_UpdateButtonDimState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameButtonBottomRight_C", "BP_UpdateButtonDimState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameButtonBottomRight.WBP_GameButtonBottomRight_C.BndEvt__WBP_GameButtonBottomRight_BottomRightButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameButtonBottomRight_C::BndEvt__WBP_GameButtonBottomRight_BottomRightButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameButtonBottomRight_C", "BndEvt__WBP_GameButtonBottomRight_BottomRightButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameButtonBottomRight.WBP_GameButtonBottomRight_C.BP_Activate
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_GameButtonBottomRight_C::BP_Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameButtonBottomRight_C", "BP_Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameButtonBottomRight.WBP_GameButtonBottomRight_C.BP_PerformClickAnimation
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EGenericGridButtonType  Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameButtonBottomRight_C::BP_PerformClickAnimation(enum class EGenericGridButtonType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameButtonBottomRight_C", "BP_PerformClickAnimation");

	Params::UWBP_GameButtonBottomRight_C_BP_PerformClickAnimation_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameButtonBottomRight.WBP_GameButtonBottomRight_C.ExecuteUbergraph_WBP_GameButtonBottomRight
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInBaseState_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInBaseState_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCorrespondingRenderOpacity_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsButtonInteractable_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGenericGridButtonType  K2Node_Event_type                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameButtonBottomRight_C::ExecuteUbergraph_WBP_GameButtonBottomRight(int32 EntryPoint, bool CallFunc_IsInBaseState_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_IsInBaseState_ReturnValue_1, float CallFunc_GetCorrespondingRenderOpacity_ReturnValue, bool CallFunc_IsButtonInteractable_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, enum class EGenericGridButtonType K2Node_Event_type, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameButtonBottomRight_C", "ExecuteUbergraph_WBP_GameButtonBottomRight");

	Params::UWBP_GameButtonBottomRight_C_ExecuteUbergraph_WBP_GameButtonBottomRight_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsInBaseState_ReturnValue = CallFunc_IsInBaseState_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_IsInBaseState_ReturnValue_1 = CallFunc_IsInBaseState_ReturnValue_1;
	Parms.CallFunc_GetCorrespondingRenderOpacity_ReturnValue = CallFunc_GetCorrespondingRenderOpacity_ReturnValue;
	Parms.CallFunc_IsButtonInteractable_ReturnValue = CallFunc_IsButtonInteractable_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue_1 = CallFunc_PlayAnimationReverse_ReturnValue_1;
	Parms.K2Node_Event_type = K2Node_Event_type;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_2 = CallFunc_PlayAnimationForward_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_3 = CallFunc_PlayAnimationForward_ReturnValue_3;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_4 = CallFunc_PlayAnimationForward_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


