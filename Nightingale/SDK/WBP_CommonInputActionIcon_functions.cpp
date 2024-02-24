#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CommonInputActionIcon.WBP_CommonInputActionIcon_C
// (None)

class UClass* UWBP_CommonInputActionIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CommonInputActionIcon_C");

	return Clss;
}


// WBP_CommonInputActionIcon_C WBP_CommonInputActionIcon.Default__WBP_CommonInputActionIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CommonInputActionIcon_C* UWBP_CommonInputActionIcon_C::GetDefaultObj()
{
	static class UWBP_CommonInputActionIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CommonInputActionIcon_C*>(UWBP_CommonInputActionIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CommonInputActionIcon.WBP_CommonInputActionIcon_C.HasValidIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsIconValid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasValidIcon_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonInputActionIcon_C::HasValidIcon(bool* IsIconValid, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_HasValidIcon_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonInputActionIcon_C", "HasValidIcon");

	Params::UWBP_CommonInputActionIcon_C_HasValidIcon_Params Parms{};

	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_HasValidIcon_ReturnValue = CallFunc_HasValidIcon_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsIconValid != nullptr)
		*IsIconValid = Parms.IsIconValid;

}


// Function WBP_CommonInputActionIcon.WBP_CommonInputActionIcon_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasValidIcon_IsIconValid                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonInputActionIcon_C::Update(bool CallFunc_HasValidIcon_IsIconValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonInputActionIcon_C", "Update");

	Params::UWBP_CommonInputActionIcon_C_Update_Params Parms{};

	Parms.CallFunc_HasValidIcon_IsIconValid = CallFunc_HasValidIcon_IsIconValid;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CommonInputActionIcon.WBP_CommonInputActionIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonInputActionIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonInputActionIcon_C", "PreConstruct");

	Params::UWBP_CommonInputActionIcon_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CommonInputActionIcon.WBP_CommonInputActionIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CommonInputActionIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonInputActionIcon_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CommonInputActionIcon.WBP_CommonInputActionIcon_C.OnInputMethodChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        CurrentInputType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonInputActionIcon_C::OnInputMethodChanged(enum class ECommonInputType CurrentInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonInputActionIcon_C", "OnInputMethodChanged");

	Params::UWBP_CommonInputActionIcon_C_OnInputMethodChanged_Params Parms{};

	Parms.CurrentInputType = CurrentInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CommonInputActionIcon.WBP_CommonInputActionIcon_C.ExecuteUbergraph_WBP_CommonInputActionIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_Event_CurrentInputType                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonInputActionIcon_C::ExecuteUbergraph_WBP_CommonInputActionIcon(int32 EntryPoint, bool K2Node_Event_IsDesignTime, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, enum class ECommonInputType K2Node_Event_CurrentInputType, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonInputActionIcon_C", "ExecuteUbergraph_WBP_CommonInputActionIcon");

	Params::UWBP_CommonInputActionIcon_C_ExecuteUbergraph_WBP_CommonInputActionIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.K2Node_Event_CurrentInputType = K2Node_Event_CurrentInputType;
	Parms.CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast = CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CommonInputActionIcon.WBP_CommonInputActionIcon_C.IconIsValid__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsValid                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonInputActionIcon_C::IconIsValid__DelegateSignature(bool IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonInputActionIcon_C", "IconIsValid__DelegateSignature");

	Params::UWBP_CommonInputActionIcon_C_IconIsValid__DelegateSignature_Params Parms{};

	Parms.IsValid = IsValid;

	UObject::ProcessEvent(Func, &Parms);

}

}


