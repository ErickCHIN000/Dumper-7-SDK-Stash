#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_TopLevelButton_ResumeLast.UMG_TopLevelButton_ResumeLast_C
// (None)

class UClass* UUMG_TopLevelButton_ResumeLast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_TopLevelButton_ResumeLast_C");

	return Clss;
}


// UMG_TopLevelButton_ResumeLast_C UMG_TopLevelButton_ResumeLast.Default__UMG_TopLevelButton_ResumeLast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_TopLevelButton_ResumeLast_C* UUMG_TopLevelButton_ResumeLast_C::GetDefaultObj()
{
	static class UUMG_TopLevelButton_ResumeLast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_TopLevelButton_ResumeLast_C*>(UUMG_TopLevelButton_ResumeLast_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_TopLevelButton_ResumeLast.UMG_TopLevelButton_ResumeLast_C.OrangeButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UUMG_TopLevelButton_ResumeLast_C::OrangeButton(const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TopLevelButton_ResumeLast_C", "OrangeButton");

	Params::UUMG_TopLevelButton_ResumeLast_C_OrangeButton_Params Parms{};

	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TopLevelButton_ResumeLast.UMG_TopLevelButton_ResumeLast_C.FocusUpdated
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNewFocus                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle                                    (None)
// struct FButtonStyle                K2Node_Select_Default                                            (ConstParm)

void UUMG_TopLevelButton_ResumeLast_C::FocusUpdated(bool bNewFocus, bool Temp_bool_Variable, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, const struct FButtonStyle& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TopLevelButton_ResumeLast_C", "FocusUpdated");

	Params::UUMG_TopLevelButton_ResumeLast_C_FocusUpdated_Params Parms{};

	Parms.bNewFocus = bNewFocus;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_ButtonStyle = K2Node_MakeStruct_ButtonStyle;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TopLevelButton_ResumeLast.UMG_TopLevelButton_ResumeLast_C.GetFocusWidget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bValid                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bThis                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_TopLevelButton_ResumeLast_C::GetFocusWidget(bool* bValid, class UWidget** Widget, bool* bThis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TopLevelButton_ResumeLast_C", "GetFocusWidget");

	Params::UUMG_TopLevelButton_ResumeLast_C_GetFocusWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bValid != nullptr)
		*bValid = Parms.bValid;

	if (Widget != nullptr)
		*Widget = Parms.Widget;

	if (bThis != nullptr)
		*bThis = Parms.bThis;

}


// Function UMG_TopLevelButton_ResumeLast.UMG_TopLevelButton_ResumeLast_C.GetImageButton
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UButton*                     ImageButton                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TopLevelButton_ResumeLast_C::GetImageButton(class UButton** ImageButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TopLevelButton_ResumeLast_C", "GetImageButton");

	Params::UUMG_TopLevelButton_ResumeLast_C_GetImageButton_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ImageButton != nullptr)
		*ImageButton = Parms.ImageButton;

}


// Function UMG_TopLevelButton_ResumeLast.UMG_TopLevelButton_ResumeLast_C.GetButtonText
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTextBlock*                  ButtonText                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TopLevelButton_ResumeLast_C::GetButtonText(class UTextBlock** ButtonText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TopLevelButton_ResumeLast_C", "GetButtonText");

	Params::UUMG_TopLevelButton_ResumeLast_C_GetButtonText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ButtonText != nullptr)
		*ButtonText = Parms.ButtonText;

}


// Function UMG_TopLevelButton_ResumeLast.UMG_TopLevelButton_ResumeLast_C.OnFailure_9E404D7D4F41CF9DD68EC3BCCAD3C47E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGetIcarusPlayerPersonaResultResult                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_TopLevelButton_ResumeLast_C::OnFailure_9E404D7D4F41CF9DD68EC3BCCAD3C47E(const struct FGetIcarusPlayerPersonaResult& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TopLevelButton_ResumeLast_C", "OnFailure_9E404D7D4F41CF9DD68EC3BCCAD3C47E");

	Params::UUMG_TopLevelButton_ResumeLast_C_OnFailure_9E404D7D4F41CF9DD68EC3BCCAD3C47E_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TopLevelButton_ResumeLast.UMG_TopLevelButton_ResumeLast_C.OnSuccess_9E404D7D4F41CF9DD68EC3BCCAD3C47E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGetIcarusPlayerPersonaResultResult                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_TopLevelButton_ResumeLast_C::OnSuccess_9E404D7D4F41CF9DD68EC3BCCAD3C47E(const struct FGetIcarusPlayerPersonaResult& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TopLevelButton_ResumeLast_C", "OnSuccess_9E404D7D4F41CF9DD68EC3BCCAD3C47E");

	Params::UUMG_TopLevelButton_ResumeLast_C_OnSuccess_9E404D7D4F41CF9DD68EC3BCCAD3C47E_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TopLevelButton_ResumeLast.UMG_TopLevelButton_ResumeLast_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_TopLevelButton_ResumeLast_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TopLevelButton_ResumeLast_C", "PreConstruct");

	Params::UUMG_TopLevelButton_ResumeLast_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TopLevelButton_ResumeLast.UMG_TopLevelButton_ResumeLast_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_TopLevelButton_ResumeLast_C::BndEvt__ImageButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TopLevelButton_ResumeLast_C", "BndEvt__ImageButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TopLevelButton_ResumeLast.UMG_TopLevelButton_ResumeLast_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_TopLevelButton_ResumeLast_C::BndEvt__ImageButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TopLevelButton_ResumeLast_C", "BndEvt__ImageButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TopLevelButton_ResumeLast.UMG_TopLevelButton_ResumeLast_C.SetLastProspectInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAssociatedProspectInfo     AssociatedProspect                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_TopLevelButton_ResumeLast_C::SetLastProspectInfo(const struct FAssociatedProspectInfo& AssociatedProspect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TopLevelButton_ResumeLast_C", "SetLastProspectInfo");

	Params::UUMG_TopLevelButton_ResumeLast_C_SetLastProspectInfo_Params Parms{};

	Parms.AssociatedProspect = AssociatedProspect;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TopLevelButton_ResumeLast.UMG_TopLevelButton_ResumeLast_C.ExecuteUbergraph_UMG_TopLevelButton_ResumeLast
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FGetIcarusPlayerPersonaResultK2Node_CustomEvent_Result                                        (None)
// struct FGetIcarusPlayerPersonaResultTemp_struct_Variable                                             (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAssociatedProspectInfo     K2Node_CustomEvent_AssociatedProspect                            (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FProspectListRowHandle      CallFunc_MakeProspectList_ReturnValue                            (NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FIcarusProspect             CallFunc_GetProspectListStruct_ProspectList                      (None)
// enum class EValid                  CallFunc_GetProspectListStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URequestPlayerPersona*       CallFunc_IcarusRequestPlayerPersona_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        K2Node_Select_Default                                            (None)
// struct FGetIcarusPlayerPersonaResultK2Node_CustomEvent_Result_1                                      (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)

void UUMG_TopLevelButton_ResumeLast_C::ExecuteUbergraph_UMG_TopLevelButton_ResumeLast(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGetIcarusPlayerPersonaResult& K2Node_CustomEvent_Result, const struct FGetIcarusPlayerPersonaResult& Temp_struct_Variable, bool Temp_bool_Variable, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, const struct FAssociatedProspectInfo& K2Node_CustomEvent_AssociatedProspect, class FText CallFunc_Conv_StringToText_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FProspectListRowHandle& CallFunc_MakeProspectList_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FIcarusProspect& CallFunc_GetProspectListStruct_ProspectList, enum class EValid CallFunc_GetProspectListStruct_Paths, class URequestPlayerPersona* CallFunc_IcarusRequestPlayerPersona_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool K2Node_SwitchEnum_CmpSuccess_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default, const struct FGetIcarusPlayerPersonaResult& K2Node_CustomEvent_Result_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TopLevelButton_ResumeLast_C", "ExecuteUbergraph_UMG_TopLevelButton_ResumeLast");

	Params::UUMG_TopLevelButton_ResumeLast_C_ExecuteUbergraph_UMG_TopLevelButton_ResumeLast_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CustomEvent_AssociatedProspect = K2Node_CustomEvent_AssociatedProspect;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_MakeProspectList_ReturnValue = CallFunc_MakeProspectList_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetProspectListStruct_ProspectList = CallFunc_GetProspectListStruct_ProspectList;
	Parms.CallFunc_GetProspectListStruct_Paths = CallFunc_GetProspectListStruct_Paths;
	Parms.CallFunc_IcarusRequestPlayerPersona_ReturnValue = CallFunc_IcarusRequestPlayerPersona_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_Result_1 = K2Node_CustomEvent_Result_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


