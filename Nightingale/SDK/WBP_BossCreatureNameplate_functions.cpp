#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_BossCreatureNameplate.WBP_BossCreatureNameplate_C
// (None)

class UClass* UWBP_BossCreatureNameplate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_BossCreatureNameplate_C");

	return Clss;
}


// WBP_BossCreatureNameplate_C WBP_BossCreatureNameplate.Default__WBP_BossCreatureNameplate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_BossCreatureNameplate_C* UWBP_BossCreatureNameplate_C::GetDefaultObj()
{
	static class UWBP_BossCreatureNameplate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_BossCreatureNameplate_C*>(UWBP_BossCreatureNameplate_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_BossCreatureNameplate.WBP_BossCreatureNameplate_C.CREATEDELEGATE_PROXYFUNCTION_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_OnBossHealthChanged_Health_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BossCreatureNameplate_C::CREATEDELEGATE_PROXYFUNCTION_1(float Delta, double CallFunc_OnBossHealthChanged_Health_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BossCreatureNameplate_C", "CREATEDELEGATE_PROXYFUNCTION_1");

	Params::UWBP_BossCreatureNameplate_C_CREATEDELEGATE_PROXYFUNCTION_1_Params Parms{};

	Parms.Delta = Delta;
	Parms.CallFunc_OnBossHealthChanged_Health_ImplicitCast = CallFunc_OnBossHealthChanged_Health_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BossCreatureNameplate.WBP_BossCreatureNameplate_C.CREATEDELEGATE_PROXYFUNCTION_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_OnBossHealthChanged_Health_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BossCreatureNameplate_C::CREATEDELEGATE_PROXYFUNCTION_0(float Delta, double CallFunc_OnBossHealthChanged_Health_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BossCreatureNameplate_C", "CREATEDELEGATE_PROXYFUNCTION_0");

	Params::UWBP_BossCreatureNameplate_C_CREATEDELEGATE_PROXYFUNCTION_0_Params Parms{};

	Parms.Delta = Delta;
	Parms.CallFunc_OnBossHealthChanged_Health_ImplicitCast = CallFunc_OnBossHealthChanged_Health_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BossCreatureNameplate.WBP_BossCreatureNameplate_C.InitializeDesignerPreview
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BossCreatureNameplate_C::InitializeDesignerPreview()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BossCreatureNameplate_C", "InitializeDesignerPreview");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BossCreatureNameplate.WBP_BossCreatureNameplate_C.BindEventsToBoss
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXAICharacter*             Boss                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BossCreatureNameplate_C::BindEventsToBoss(class ANWXAICharacter* Boss, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BossCreatureNameplate_C", "BindEventsToBoss");

	Params::UWBP_BossCreatureNameplate_C_BindEventsToBoss_Params Parms{};

	Parms.Boss = Boss;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BossCreatureNameplate.WBP_BossCreatureNameplate_C.UnbindEventsFromBoss
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXAICharacter*             Boss                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BossCreatureNameplate_C::UnbindEventsFromBoss(class ANWXAICharacter* Boss, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BossCreatureNameplate_C", "UnbindEventsFromBoss");

	Params::UWBP_BossCreatureNameplate_C_UnbindEventsFromBoss_Params Parms{};

	Parms.Boss = Boss;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BossCreatureNameplate.WBP_BossCreatureNameplate_C.GetCurrentBossHealthPercentage
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Percent                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_SafeDivide_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_SafeDivide_B_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SafeDivide_A_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BossCreatureNameplate_C::GetCurrentBossHealthPercentage(double* Percent, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_GetObjectName_ReturnValue, double CallFunc_SafeDivide_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, double CallFunc_SafeDivide_B_ImplicitCast, double CallFunc_SafeDivide_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BossCreatureNameplate_C", "GetCurrentBossHealthPercentage");

	Params::UWBP_BossCreatureNameplate_C_GetCurrentBossHealthPercentage_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.CallFunc_SafeDivide_ReturnValue = CallFunc_SafeDivide_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_SafeDivide_B_ImplicitCast = CallFunc_SafeDivide_B_ImplicitCast;
	Parms.CallFunc_SafeDivide_A_ImplicitCast = CallFunc_SafeDivide_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Percent != nullptr)
		*Percent = Parms.Percent;

}


// Function WBP_BossCreatureNameplate.WBP_BossCreatureNameplate_C.OnBossHealthChanged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Health                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetCurrentBossHealthPercentage_Percent                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BossCreatureNameplate_C::OnBossHealthChanged(double Health, double CallFunc_GetCurrentBossHealthPercentage_Percent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BossCreatureNameplate_C", "OnBossHealthChanged");

	Params::UWBP_BossCreatureNameplate_C_OnBossHealthChanged_Params Parms{};

	Parms.Health = Health;
	Parms.CallFunc_GetCurrentBossHealthPercentage_Percent = CallFunc_GetCurrentBossHealthPercentage_Percent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BossCreatureNameplate.WBP_BossCreatureNameplate_C.OnBossFightChanged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXAICharacter*             EnemyBoss                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BossCreatureNameplate_C::OnBossFightChanged(class ANWXAICharacter* EnemyBoss, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BossCreatureNameplate_C", "OnBossFightChanged");

	Params::UWBP_BossCreatureNameplate_C_OnBossFightChanged_Params Parms{};

	Parms.EnemyBoss = EnemyBoss;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BossCreatureNameplate.WBP_BossCreatureNameplate_C.OnHideHealthBar
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BossCreatureNameplate_C::OnHideHealthBar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BossCreatureNameplate_C", "OnHideHealthBar");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BossCreatureNameplate.WBP_BossCreatureNameplate_C.OnShowHealthBar
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Temp_text_Variable                                               (None)
// double                             CallFunc_GetCurrentBossHealthPercentage_Percent                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IAIUIData>  K2Node_DynamicCast_AsAIUIData                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetAIName_ReturnValue                                   (None)
// float                              K2Node_VariableSet_StartPercent_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BossCreatureNameplate_C::OnShowHealthBar(class FText Temp_text_Variable, double CallFunc_GetCurrentBossHealthPercentage_Percent, TScriptInterface<class IAIUIData> K2Node_DynamicCast_AsAIUIData, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetAIName_ReturnValue, float K2Node_VariableSet_StartPercent_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BossCreatureNameplate_C", "OnShowHealthBar");

	Params::UWBP_BossCreatureNameplate_C_OnShowHealthBar_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_GetCurrentBossHealthPercentage_Percent = CallFunc_GetCurrentBossHealthPercentage_Percent;
	Parms.K2Node_DynamicCast_AsAIUIData = K2Node_DynamicCast_AsAIUIData;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAIName_ReturnValue = CallFunc_GetAIName_ReturnValue;
	Parms.K2Node_VariableSet_StartPercent_ImplicitCast = K2Node_VariableSet_StartPercent_ImplicitCast;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BossCreatureNameplate.WBP_BossCreatureNameplate_C.HandleGreyHealth
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_StartPercent_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_StartPercent_ImplicitCast_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BossCreatureNameplate_C::HandleGreyHealth(bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, float K2Node_VariableSet_StartPercent_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, float K2Node_VariableSet_StartPercent_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BossCreatureNameplate_C", "HandleGreyHealth");

	Params::UWBP_BossCreatureNameplate_C_HandleGreyHealth_Params Parms{};

	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.K2Node_VariableSet_StartPercent_ImplicitCast = K2Node_VariableSet_StartPercent_ImplicitCast;
	Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast = CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_VariableSet_StartPercent_ImplicitCast_1 = K2Node_VariableSet_StartPercent_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BossCreatureNameplate.WBP_BossCreatureNameplate_C.UpdateHealthBar
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewPercent                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BossCreatureNameplate_C::UpdateHealthBar(double NewPercent, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BossCreatureNameplate_C", "UpdateHealthBar");

	Params::UWBP_BossCreatureNameplate_C_UpdateHealthBar_Params Parms{};

	Parms.NewPercent = NewPercent;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BossCreatureNameplate.WBP_BossCreatureNameplate_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_BossCreatureNameplate_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BossCreatureNameplate_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BossCreatureNameplate.WBP_BossCreatureNameplate_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_BossCreatureNameplate_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BossCreatureNameplate_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BossCreatureNameplate.WBP_BossCreatureNameplate_C.ExecuteUbergraph_WBP_BossCreatureNameplate
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBossCombatDetectionComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BossCreatureNameplate_C::ExecuteUbergraph_WBP_BossCreatureNameplate(int32 EntryPoint, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UBossCombatDetectionComponent* CallFunc_GetComponentByClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BossCreatureNameplate_C", "ExecuteUbergraph_WBP_BossCreatureNameplate");

	Params::UWBP_BossCreatureNameplate_C_ExecuteUbergraph_WBP_BossCreatureNameplate_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


