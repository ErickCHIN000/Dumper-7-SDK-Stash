#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CertDialog.CertDialog_C
// (None)

class UClass* UCertDialog_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CertDialog_C");

	return Clss;
}


// CertDialog_C CertDialog.Default__CertDialog_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCertDialog_C* UCertDialog_C::GetDefaultObj()
{
	static class UCertDialog_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCertDialog_C*>(UCertDialog_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CertDialog.CertDialog_C.Get_Text_CertDialog_Title_Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class EPlatform               Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        Temp_text_Variable_7                                             (None)
// class FText                        Temp_text_Variable_8                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

class FText UCertDialog_C::Get_Text_CertDialog_Title_Text(enum class EPlatform Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CertDialog_C", "Get_Text_CertDialog_Title_Text");

	Params::UCertDialog_C_Get_Text_CertDialog_Title_Text_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CertDialog.CertDialog_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCertDialog_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CertDialog_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CertDialog.CertDialog_C.UpdateCancelAction
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// bool                               bActive                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Body                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCertDialog_C::UpdateCancelAction(bool bActive, class FText& Body)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CertDialog_C", "UpdateCancelAction");

	Params::UCertDialog_C_UpdateCancelAction_Params Parms{};

	Parms.bActive = bActive;
	Parms.Body = Body;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CertDialog.CertDialog_C.UpdateConfirmAction
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// bool                               bActive                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Body                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCertDialog_C::UpdateConfirmAction(bool bActive, class FText& Body)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CertDialog_C", "UpdateConfirmAction");

	Params::UCertDialog_C_UpdateConfirmAction_Params Parms{};

	Parms.bActive = bActive;
	Parms.Body = Body;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CertDialog.CertDialog_C.ExecuteUbergraph_CertDialog
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_1                                             (None)
// enum class EPlatform               CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bActive_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Event_body_1                                              (ConstParm)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_1                                          (None)
// bool                               K2Node_Event_bActive                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Event_body                                                (ConstParm)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_3                                          (None)

void UCertDialog_C::ExecuteUbergraph_CertDialog(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, class FText Temp_text_Variable, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_3, class FText Temp_text_Variable_1, enum class EPlatform CallFunc_GetPlatform_ReturnValue, bool K2Node_Event_bActive_1, class FText K2Node_Event_body_1, enum class ESlateVisibility K2Node_Select_Default, class FText K2Node_Select_Default_1, bool K2Node_Event_bActive, class FText K2Node_Event_body, enum class ESlateVisibility K2Node_Select_Default_2, class FText K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CertDialog_C", "ExecuteUbergraph_CertDialog");

	Params::UCertDialog_C_ExecuteUbergraph_CertDialog_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.K2Node_Event_bActive_1 = K2Node_Event_bActive_1;
	Parms.K2Node_Event_body_1 = K2Node_Event_body_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Event_bActive = K2Node_Event_bActive;
	Parms.K2Node_Event_body = K2Node_Event_body;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


