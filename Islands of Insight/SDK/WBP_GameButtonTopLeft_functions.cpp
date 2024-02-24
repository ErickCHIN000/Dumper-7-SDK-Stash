#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_GameButtonTopLeft.WBP_GameButtonTopLeft_C
// (None)

class UClass* UWBP_GameButtonTopLeft_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_GameButtonTopLeft_C");

	return Clss;
}


// WBP_GameButtonTopLeft_C WBP_GameButtonTopLeft.Default__WBP_GameButtonTopLeft_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_GameButtonTopLeft_C* UWBP_GameButtonTopLeft_C::GetDefaultObj()
{
	static class UWBP_GameButtonTopLeft_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_GameButtonTopLeft_C*>(UWBP_GameButtonTopLeft_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_GameButtonTopLeft.WBP_GameButtonTopLeft_C.Get Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_GetCorrespondingText_ReturnValue                        (None)

class FText UWBP_GameButtonTopLeft_C::Get_Text(class FText CallFunc_GetCorrespondingText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameButtonTopLeft_C", "Get Text");

	Params::UWBP_GameButtonTopLeft_C_Get_Text_Params Parms{};

	Parms.CallFunc_GetCorrespondingText_ReturnValue = CallFunc_GetCorrespondingText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_GameButtonTopLeft.WBP_GameButtonTopLeft_C.Get Exit Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetCorrespondingVisibility_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UWBP_GameButtonTopLeft_C::Get_Exit_Visibility(enum class ESlateVisibility CallFunc_GetCorrespondingVisibility_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameButtonTopLeft_C", "Get Exit Visibility");

	Params::UWBP_GameButtonTopLeft_C_Get_Exit_Visibility_Params Parms{};

	Parms.CallFunc_GetCorrespondingVisibility_ReturnValue = CallFunc_GetCorrespondingVisibility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_GameButtonTopLeft.WBP_GameButtonTopLeft_C.BndEvt__WBP_GameButtonTopLeft_ExitButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameButtonTopLeft_C::BndEvt__WBP_GameButtonTopLeft_ExitButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameButtonTopLeft_C", "BndEvt__WBP_GameButtonTopLeft_ExitButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameButtonTopLeft.WBP_GameButtonTopLeft_C.BndEvt__WBP_GameButtonTopLeft_ExitButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameButtonTopLeft_C::BndEvt__WBP_GameButtonTopLeft_ExitButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameButtonTopLeft_C", "BndEvt__WBP_GameButtonTopLeft_ExitButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameButtonTopLeft.WBP_GameButtonTopLeft_C.BP_UpdateButtonDimState
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_GameButtonTopLeft_C::BP_UpdateButtonDimState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameButtonTopLeft_C", "BP_UpdateButtonDimState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameButtonTopLeft.WBP_GameButtonTopLeft_C.BndEvt__WBP_GameButtonTopLeft_ExitButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameButtonTopLeft_C::BndEvt__WBP_GameButtonTopLeft_ExitButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameButtonTopLeft_C", "BndEvt__WBP_GameButtonTopLeft_ExitButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameButtonTopLeft.WBP_GameButtonTopLeft_C.BP_PerformButtonAction
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EGenericGridButtonType  Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameButtonTopLeft_C::BP_PerformButtonAction(enum class EGenericGridButtonType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameButtonTopLeft_C", "BP_PerformButtonAction");

	Params::UWBP_GameButtonTopLeft_C_BP_PerformButtonAction_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameButtonTopLeft.WBP_GameButtonTopLeft_C.BP_PerformClickAnimation
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EGenericGridButtonType  Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameButtonTopLeft_C::BP_PerformClickAnimation(enum class EGenericGridButtonType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameButtonTopLeft_C", "BP_PerformClickAnimation");

	Params::UWBP_GameButtonTopLeft_C_BP_PerformClickAnimation_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameButtonTopLeft.WBP_GameButtonTopLeft_C.ExecuteUbergraph_WBP_GameButtonTopLeft
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASophiaCharacter*            K2Node_DynamicCast_AsSophia_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASophiaHUD*                  CallFunc_BP_GetFirstLocalPlayerHUD_hud                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BP_GetFirstLocalPlayerHUD_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_SophiaHUD_C*             K2Node_DynamicCast_AsBP_Sophia_HUD                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCorrespondingRenderOpacity_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsButtonInteractable_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGenericGridButtonType  K2Node_Event_type_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWBP_QFPTutorial_C*>  CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_QFPTutorial_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGenericGridButtonType  K2Node_Event_type                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameButtonTopLeft_C::ExecuteUbergraph_WBP_GameButtonTopLeft(int32 EntryPoint, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ASophiaCharacter* K2Node_DynamicCast_AsSophia_Character, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, class ASophiaHUD* CallFunc_BP_GetFirstLocalPlayerHUD_hud, bool CallFunc_BP_GetFirstLocalPlayerHUD_ReturnValue, class ABP_SophiaHUD_C* K2Node_DynamicCast_AsBP_Sophia_HUD, bool K2Node_DynamicCast_bSuccess_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, float CallFunc_GetCorrespondingRenderOpacity_ReturnValue, bool CallFunc_IsButtonInteractable_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, enum class EGenericGridButtonType K2Node_Event_type_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, TArray<class UWBP_QFPTutorial_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32 Temp_int_Loop_Counter_Variable, class UWBP_QFPTutorial_C* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, enum class EGenericGridButtonType K2Node_Event_type, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameButtonTopLeft_C", "ExecuteUbergraph_WBP_GameButtonTopLeft");

	Params::UWBP_GameButtonTopLeft_C_ExecuteUbergraph_WBP_GameButtonTopLeft_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsSophia_Character = K2Node_DynamicCast_AsSophia_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_BP_GetFirstLocalPlayerHUD_hud = CallFunc_BP_GetFirstLocalPlayerHUD_hud;
	Parms.CallFunc_BP_GetFirstLocalPlayerHUD_ReturnValue = CallFunc_BP_GetFirstLocalPlayerHUD_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Sophia_HUD = K2Node_DynamicCast_AsBP_Sophia_HUD;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_GetCorrespondingRenderOpacity_ReturnValue = CallFunc_GetCorrespondingRenderOpacity_ReturnValue;
	Parms.CallFunc_IsButtonInteractable_ReturnValue = CallFunc_IsButtonInteractable_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.K2Node_Event_type_1 = K2Node_Event_type_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue_1 = CallFunc_PlayAnimationReverse_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_Event_type = K2Node_Event_type;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_2 = CallFunc_PlayAnimationForward_ReturnValue_2;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_3 = CallFunc_PlayAnimationForward_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


