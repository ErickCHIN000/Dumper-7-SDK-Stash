#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_PropertyLinkDebug.wid_PropertyLinkDebug_C
// (None)

class UClass* UWid_PropertyLinkDebug_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_PropertyLinkDebug_C");

	return Clss;
}


// wid_PropertyLinkDebug_C wid_PropertyLinkDebug.Default__wid_PropertyLinkDebug_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_PropertyLinkDebug_C* UWid_PropertyLinkDebug_C::GetDefaultObj()
{
	static class UWid_PropertyLinkDebug_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_PropertyLinkDebug_C*>(UWid_PropertyLinkDebug_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_PropertyLinkDebug.wid_PropertyLinkDebug_C.BndEvt__PasswordEdit_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWid_PropertyLinkDebug_C::BndEvt__PasswordEdit_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_PropertyLinkDebug_C", "BndEvt__PasswordEdit_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature");

	Params::UWid_PropertyLinkDebug_C_BndEvt__PasswordEdit_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_PropertyLinkDebug.wid_PropertyLinkDebug_C.BndEvt__CompareBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_PropertyLinkDebug_C::BndEvt__CompareBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_PropertyLinkDebug_C", "BndEvt__CompareBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_PropertyLinkDebug.wid_PropertyLinkDebug_C.BndEvt__BackBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_PropertyLinkDebug_C::BndEvt__BackBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_PropertyLinkDebug_C", "BndEvt__BackBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_PropertyLinkDebug.wid_PropertyLinkDebug_C.BndEvt__GatherBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_PropertyLinkDebug_C::BndEvt__GatherBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_PropertyLinkDebug_C", "BndEvt__GatherBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_PropertyLinkDebug.wid_PropertyLinkDebug_C.ExecuteUbergraph_wid_PropertyLinkDebug
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPropertyLinkResult     Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// bool                               CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FText                        CallFunc_GetText_ReturnValue_1                                   (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class ACGGameModeBase*             CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPropertyLinkResult     CallFunc_ComparePropertyLinkData_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)

void UWid_PropertyLinkDebug_C::ExecuteUbergraph_wid_PropertyLinkDebug(int32 EntryPoint, enum class EPropertyLinkResult Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class FText K2Node_ComponentBoundEvent_Text, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue, class FText CallFunc_GetText_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class ACGGameModeBase* CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode, enum class EPropertyLinkResult CallFunc_ComparePropertyLinkData_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_PropertyLinkDebug_C", "ExecuteUbergraph_wid_PropertyLinkDebug");

	Params::UWid_PropertyLinkDebug_C_ExecuteUbergraph_wid_PropertyLinkDebug_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue = CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue_1 = CallFunc_GetText_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode = CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode;
	Parms.CallFunc_ComparePropertyLinkData_ReturnValue = CallFunc_ComparePropertyLinkData_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


