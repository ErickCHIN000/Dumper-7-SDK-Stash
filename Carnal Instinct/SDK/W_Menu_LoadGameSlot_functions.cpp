#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Menu_LoadGameSlot.W_Menu_LoadGameSlot_C
// (None)

class UClass* UW_Menu_LoadGameSlot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Menu_LoadGameSlot_C");

	return Clss;
}


// W_Menu_LoadGameSlot_C W_Menu_LoadGameSlot.Default__W_Menu_LoadGameSlot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Menu_LoadGameSlot_C* UW_Menu_LoadGameSlot_C::GetDefaultObj()
{
	static class UW_Menu_LoadGameSlot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Menu_LoadGameSlot_C*>(UW_Menu_LoadGameSlot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Menu_LoadGameSlot.W_Menu_LoadGameSlot_C.Get_version_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_StringToFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UW_Menu_LoadGameSlot_C::Get_version_Text_0(bool CallFunc_EqualEqual_StrStr_ReturnValue, float CallFunc_Conv_StringToFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Menu_LoadGameSlot_C", "Get_version_Text_0");

	Params::UW_Menu_LoadGameSlot_C_Get_version_Text_0_Params Parms{};

	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToFloat_ReturnValue = CallFunc_Conv_StringToFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Menu_LoadGameSlot.W_Menu_LoadGameSlot_C.Get Quest Name
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UW_Menu_LoadGameSlot_C::Get_Quest_Name(class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Menu_LoadGameSlot_C", "Get Quest Name");

	Params::UW_Menu_LoadGameSlot_C_Get_Quest_Name_Params Parms{};

	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Menu_LoadGameSlot.W_Menu_LoadGameSlot_C.Set Border Color
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                InBrushColor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Menu_LoadGameSlot_C::Set_Border_Color(const struct FLinearColor& InBrushColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Menu_LoadGameSlot_C", "Set Border Color");

	Params::UW_Menu_LoadGameSlot_C_Set_Border_Color_Params Parms{};

	Parms.InBrushColor = InBrushColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Menu_LoadGameSlot.W_Menu_LoadGameSlot_C.Get Save Type
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UW_Menu_LoadGameSlot_C::Get_Save_Type(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Menu_LoadGameSlot_C", "Get Save Type");

	Params::UW_Menu_LoadGameSlot_C_Get_Save_Type_Params Parms{};

	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Menu_LoadGameSlot.W_Menu_LoadGameSlot_C.Get Date
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_AsTimeZoneDateTime_DateTime_ReturnValue                 (None)

class FText UW_Menu_LoadGameSlot_C::Get_Date(class FText CallFunc_AsTimeZoneDateTime_DateTime_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Menu_LoadGameSlot_C", "Get Date");

	Params::UW_Menu_LoadGameSlot_C_Get_Date_Params Parms{};

	Parms.CallFunc_AsTimeZoneDateTime_DateTime_ReturnValue = CallFunc_AsTimeZoneDateTime_DateTime_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Menu_LoadGameSlot.W_Menu_LoadGameSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Menu_LoadGameSlot_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Menu_LoadGameSlot_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Menu_LoadGameSlot.W_Menu_LoadGameSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Menu_LoadGameSlot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Menu_LoadGameSlot_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Menu_LoadGameSlot.W_Menu_LoadGameSlot_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UW_Menu_LoadGameSlot_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Menu_LoadGameSlot_C", "OnAddedToFocusPath");

	Params::UW_Menu_LoadGameSlot_C_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Menu_LoadGameSlot.W_Menu_LoadGameSlot_C.BndEvt__Button_92_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Menu_LoadGameSlot_C::BndEvt__Button_92_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Menu_LoadGameSlot_C", "BndEvt__Button_92_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Menu_LoadGameSlot.W_Menu_LoadGameSlot_C.BndEvt__Delete_Slot_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Menu_LoadGameSlot_C::BndEvt__Delete_Slot_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Menu_LoadGameSlot_C", "BndEvt__Delete_Slot_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Menu_LoadGameSlot.W_Menu_LoadGameSlot_C.BndEvt__Delete_Slot_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Menu_LoadGameSlot_C::BndEvt__Delete_Slot_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Menu_LoadGameSlot_C", "BndEvt__Delete_Slot_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Menu_LoadGameSlot.W_Menu_LoadGameSlot_C.ExecuteUbergraph_W_Menu_LoadGameSlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class UTexture2D*                  CallFunc_ImportFileAsTexture2D_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqualStringString_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)

void UW_Menu_LoadGameSlot_C::ExecuteUbergraph_W_Menu_LoadGameSlot(int32 EntryPoint, int32 Temp_int_Variable, bool CallFunc_Greater_IntInt_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UTexture2D* CallFunc_ImportFileAsTexture2D_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqualStringString_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Menu_LoadGameSlot_C", "ExecuteUbergraph_W_Menu_LoadGameSlot");

	Params::UW_Menu_LoadGameSlot_C_ExecuteUbergraph_W_Menu_LoadGameSlot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_ImportFileAsTexture2D_ReturnValue = CallFunc_ImportFileAsTexture2D_ReturnValue;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_LessEqualStringString_ReturnValue = CallFunc_LessEqualStringString_ReturnValue;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


