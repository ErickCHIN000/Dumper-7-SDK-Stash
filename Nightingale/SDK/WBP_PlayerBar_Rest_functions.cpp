#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PlayerBar_Rest.WBP_PlayerBar_Rest_C
// (None)

class UClass* UWBP_PlayerBar_Rest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PlayerBar_Rest_C");

	return Clss;
}


// WBP_PlayerBar_Rest_C WBP_PlayerBar_Rest.Default__WBP_PlayerBar_Rest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PlayerBar_Rest_C* UWBP_PlayerBar_Rest_C::GetDefaultObj()
{
	static class UWBP_PlayerBar_Rest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PlayerBar_Rest_C*>(UWBP_PlayerBar_Rest_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PlayerBar_Rest.WBP_PlayerBar_Rest_C.GetTooltipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_RestBar_Tooltip_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_PlayerBar_Rest_C::GetTooltipWidget(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_RestBar_Tooltip_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerBar_Rest_C", "GetTooltipWidget");

	Params::UWBP_PlayerBar_Rest_C_GetTooltipWidget_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PlayerBar_Rest.WBP_PlayerBar_Rest_C.OnRestChanged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             FedPercentFloat                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Tired_Threshold_Percentage_TiredThreshold           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPlayerAttributeValue_Success                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetPlayerAttributeValue_Value                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPlayerAttributeValue_Success_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetPlayerAttributeValue_Value_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SafeDivide_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerBar_Rest_C::OnRestChanged(float Delta, double FedPercentFloat, double CallFunc_Get_Tired_Threshold_Percentage_TiredThreshold, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_GetPlayerAttributeValue_Success, double CallFunc_GetPlayerAttributeValue_Value, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_GetPlayerAttributeValue_Success_1, double CallFunc_GetPlayerAttributeValue_Value_1, double CallFunc_SafeDivide_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerBar_Rest_C", "OnRestChanged");

	Params::UWBP_PlayerBar_Rest_C_OnRestChanged_Params Parms{};

	Parms.Delta = Delta;
	Parms.FedPercentFloat = FedPercentFloat;
	Parms.CallFunc_Get_Tired_Threshold_Percentage_TiredThreshold = CallFunc_Get_Tired_Threshold_Percentage_TiredThreshold;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetPlayerAttributeValue_Success = CallFunc_GetPlayerAttributeValue_Success;
	Parms.CallFunc_GetPlayerAttributeValue_Value = CallFunc_GetPlayerAttributeValue_Value;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_GetPlayerAttributeValue_Success_1 = CallFunc_GetPlayerAttributeValue_Success_1;
	Parms.CallFunc_GetPlayerAttributeValue_Value_1 = CallFunc_GetPlayerAttributeValue_Value_1;
	Parms.CallFunc_SafeDivide_ReturnValue = CallFunc_SafeDivide_ReturnValue;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerBar_Rest.WBP_PlayerBar_Rest_C.UnbindEvents
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXAttributeSet*            CallFunc_GetAttributeSet_AttributeSet                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerBar_Rest_C::UnbindEvents(class APawn* Pawn, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXAttributeSet* CallFunc_GetAttributeSet_AttributeSet, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerBar_Rest_C", "UnbindEvents");

	Params::UWBP_PlayerBar_Rest_C_UnbindEvents_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetAttributeSet_AttributeSet = CallFunc_GetAttributeSet_AttributeSet;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerBar_Rest.WBP_PlayerBar_Rest_C.GetAttributeSet
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXAttributeSet*            AttributeSet                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXCharacter*               K2Node_DynamicCast_AsNWXCharacter                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerBar_Rest_C::GetAttributeSet(class APawn* Pawn, class UNWXAttributeSet** AttributeSet, class ANWXCharacter* K2Node_DynamicCast_AsNWXCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerBar_Rest_C", "GetAttributeSet");

	Params::UWBP_PlayerBar_Rest_C_GetAttributeSet_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.K2Node_DynamicCast_AsNWXCharacter = K2Node_DynamicCast_AsNWXCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AttributeSet != nullptr)
		*AttributeSet = Parms.AttributeSet;

}


// Function WBP_PlayerBar_Rest.WBP_PlayerBar_Rest_C.OnClientReadyHandler
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXAttributeSet*            CallFunc_GetAttributeSet_AttributeSet                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerBar_Rest_C::OnClientReadyHandler(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class UNWXAttributeSet* CallFunc_GetAttributeSet_AttributeSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerBar_Rest_C", "OnClientReadyHandler");

	Params::UWBP_PlayerBar_Rest_C_OnClientReadyHandler_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.CallFunc_GetAttributeSet_AttributeSet = CallFunc_GetAttributeSet_AttributeSet;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerBar_Rest.WBP_PlayerBar_Rest_C.GetPlayerAttributeValue
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAttribute          Stat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       LOwningPlayerPawn                                                (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttribute_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_Value_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerBar_Rest_C::GetPlayerAttributeValue(const struct FGameplayAttribute& Stat, bool* Success, double* Value, class APawn* LOwningPlayerPawn, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, double K2Node_FunctionResult_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerBar_Rest_C", "GetPlayerAttributeValue");

	Params::UWBP_PlayerBar_Rest_C_GetPlayerAttributeValue_Params Parms{};

	Parms.Stat = Stat;
	Parms.LOwningPlayerPawn = LOwningPlayerPawn;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttribute_ReturnValue = CallFunc_GetFloatAttribute_ReturnValue;
	Parms.K2Node_FunctionResult_Value_ImplicitCast = K2Node_FunctionResult_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function WBP_PlayerBar_Rest.WBP_PlayerBar_Rest_C.OnPawnPossessedAndReady
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                       NewPawn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerBar_Rest_C::OnPawnPossessedAndReady(class APawn* NewPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerBar_Rest_C", "OnPawnPossessedAndReady");

	Params::UWBP_PlayerBar_Rest_C_OnPawnPossessedAndReady_Params Parms{};

	Parms.NewPawn = NewPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerBar_Rest.WBP_PlayerBar_Rest_C.OnPawnUnpossessed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                       OldPawn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerBar_Rest_C::OnPawnUnpossessed(class APawn* OldPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerBar_Rest_C", "OnPawnUnpossessed");

	Params::UWBP_PlayerBar_Rest_C_OnPawnUnpossessed_Params Parms{};

	Parms.OldPawn = OldPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerBar_Rest.WBP_PlayerBar_Rest_C.ExecuteUbergraph_WBP_PlayerBar_Rest
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_OldPawn                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_NewPawn                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerBar_Rest_C::ExecuteUbergraph_WBP_PlayerBar_Rest(int32 EntryPoint, class APawn* K2Node_Event_OldPawn, class APawn* K2Node_Event_NewPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerBar_Rest_C", "ExecuteUbergraph_WBP_PlayerBar_Rest");

	Params::UWBP_PlayerBar_Rest_C_ExecuteUbergraph_WBP_PlayerBar_Rest_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OldPawn = K2Node_Event_OldPawn;
	Parms.K2Node_Event_NewPawn = K2Node_Event_NewPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


