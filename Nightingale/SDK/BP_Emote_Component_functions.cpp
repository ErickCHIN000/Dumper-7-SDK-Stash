#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Emote_Component.BP_Emote_Component_C
// (None)

class UClass* UBP_Emote_Component_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Emote_Component_C");

	return Clss;
}


// BP_Emote_Component_C BP_Emote_Component.Default__BP_Emote_Component_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Emote_Component_C* UBP_Emote_Component_C::GetDefaultObj()
{
	static class UBP_Emote_Component_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Emote_Component_C*>(UBP_Emote_Component_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Emote_Component.BP_Emote_Component_C.TriggerYawnEmote
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_GetCurrentHealth_CurrentHealth                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::TriggerYawnEmote(double CallFunc_GetCurrentHealth_CurrentHealth, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "TriggerYawnEmote");

	Params::UBP_Emote_Component_C_TriggerYawnEmote_Params Parms{};

	Parms.CallFunc_GetCurrentHealth_CurrentHealth = CallFunc_GetCurrentHealth_CurrentHealth;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Emote_Component.BP_Emote_Component_C.UpdateVoiceSetData
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVoiceSetDataReference      Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FVoiceSetData               CallFunc_TryGetVoiceSetData_OutData                              (None)
// enum class EGetResult              CallFunc_TryGetVoiceSetData_OutBranches                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::UpdateVoiceSetData(const struct FVoiceSetDataReference& Data, const struct FVoiceSetData& CallFunc_TryGetVoiceSetData_OutData, enum class EGetResult CallFunc_TryGetVoiceSetData_OutBranches, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "UpdateVoiceSetData");

	Params::UBP_Emote_Component_C_UpdateVoiceSetData_Params Parms{};

	Parms.Data = Data;
	Parms.CallFunc_TryGetVoiceSetData_OutData = CallFunc_TryGetVoiceSetData_OutData;
	Parms.CallFunc_TryGetVoiceSetData_OutBranches = CallFunc_TryGetVoiceSetData_OutBranches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Emote_Component.BP_Emote_Component_C.InitializeAppearanceComponent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_CharacterAppearanceComponent_C*AppearanceComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVoiceSetDataReference      CallFunc_GetVoiceSetData_Data                                    (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::InitializeAppearanceComponent(class UBP_CharacterAppearanceComponent_C* AppearanceComponent, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVoiceSetDataReference& CallFunc_GetVoiceSetData_Data, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "InitializeAppearanceComponent");

	Params::UBP_Emote_Component_C_InitializeAppearanceComponent_Params Parms{};

	Parms.AppearanceComponent = AppearanceComponent;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetVoiceSetData_Data = CallFunc_GetVoiceSetData_Data;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Emote_Component.BP_Emote_Component_C.HandleEquippedItemChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Update_Stamina_Switch_Switch_Updated                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::HandleEquippedItemChanged(bool CallFunc_Update_Stamina_Switch_Switch_Updated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "HandleEquippedItemChanged");

	Params::UBP_Emote_Component_C_HandleEquippedItemChanged_Params Parms{};

	Parms.CallFunc_Update_Stamina_Switch_Switch_Updated = CallFunc_Update_Stamina_Switch_Switch_Updated;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Emote_Component.BP_Emote_Component_C.Is Unarmed
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUnarmed                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeLiteralGameplayTagContainer_ReturnValue             (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::Is_Unarmed(bool* IsUnarmed, bool Temp_bool_Variable, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "Is Unarmed");

	Params::UBP_Emote_Component_C_Is_Unarmed_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_MakeLiteralGameplayTagContainer_ReturnValue = CallFunc_MakeLiteralGameplayTagContainer_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasAnyMatchingGameplayTags_ReturnValue = CallFunc_HasAnyMatchingGameplayTags_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsUnarmed != nullptr)
		*IsUnarmed = Parms.IsUnarmed;

}


// Function BP_Emote_Component.BP_Emote_Component_C.OnStaminaChangedHandler
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CurrStamina                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_On_Stamina_Changed_Internal_Base_Max_Stamina_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_On_Stamina_Changed_Internal_Max_Stamina_ImplicitCast    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_CurrStamina_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::OnStaminaChangedHandler(float Delta, double CurrStamina, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_On_Stamina_Changed_Internal_Base_Max_Stamina_ImplicitCast, double CallFunc_On_Stamina_Changed_Internal_Max_Stamina_ImplicitCast, double K2Node_VariableSet_CurrStamina_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "OnStaminaChangedHandler");

	Params::UBP_Emote_Component_C_OnStaminaChangedHandler_Params Parms{};

	Parms.Delta = Delta;
	Parms.CurrStamina = CurrStamina;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_On_Stamina_Changed_Internal_Base_Max_Stamina_ImplicitCast = CallFunc_On_Stamina_Changed_Internal_Base_Max_Stamina_ImplicitCast;
	Parms.CallFunc_On_Stamina_Changed_Internal_Max_Stamina_ImplicitCast = CallFunc_On_Stamina_Changed_Internal_Max_Stamina_ImplicitCast;
	Parms.K2Node_VariableSet_CurrStamina_ImplicitCast = K2Node_VariableSet_CurrStamina_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Emote_Component.BP_Emote_Component_C.CalculateBreathState
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEmoteBreathingState    OutputState                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEmoteBreathingState    Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEmoteBreathingState    Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::CalculateBreathState(enum class EEmoteBreathingState* OutputState, enum class EEmoteBreathingState Temp_byte_Variable, enum class EEmoteBreathingState Temp_byte_Variable_1, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "CalculateBreathState");

	Params::UBP_Emote_Component_C_CalculateBreathState_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutputState != nullptr)
		*OutputState = Parms.OutputState;

}


// Function BP_Emote_Component.BP_Emote_Component_C.HandleDamageBlocked
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             AmountBlocked                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Attacker                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::HandleDamageBlocked(double AmountBlocked, class AActor* Attacker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "HandleDamageBlocked");

	Params::UBP_Emote_Component_C_HandleDamageBlocked_Params Parms{};

	Parms.AmountBlocked = AmountBlocked;
	Parms.Attacker = Attacker;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Emote_Component.BP_Emote_Component_C.BindServerCallbacks
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::BindServerCallbacks(class AActor* CallFunc_GetOwner_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "BindServerCallbacks");

	Params::UBP_Emote_Component_C_BindServerCallbacks_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsBP_Character = K2Node_DynamicCast_AsBP_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Emote_Component.BP_Emote_Component_C.Set Health
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             New_Health                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MaxHealth                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MaxHealthClamp                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGlobalAudioSubsystem*       CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMaxHealth_MaxHealth                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAudioMaxHealthClamped_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Calculate_Switch_Level_Zero_Based_Level                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAudioMaxHealthClamped_MaxHealthValue_ImplicitCast    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_MaxHealthClamp_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::Set_Health(double New_Health, double MaxHealth, double MaxHealthClamp, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, double CallFunc_GetMaxHealth_MaxHealth, float CallFunc_GetAudioMaxHealthClamped_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Calculate_Switch_Level_Zero_Based_Level, float CallFunc_GetAudioMaxHealthClamped_MaxHealthValue_ImplicitCast, double K2Node_VariableSet_MaxHealthClamp_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "Set Health");

	Params::UBP_Emote_Component_C_Set_Health_Params Parms{};

	Parms.New_Health = New_Health;
	Parms.MaxHealth = MaxHealth;
	Parms.MaxHealthClamp = MaxHealthClamp;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_GetMaxHealth_MaxHealth = CallFunc_GetMaxHealth_MaxHealth;
	Parms.CallFunc_GetAudioMaxHealthClamped_ReturnValue = CallFunc_GetAudioMaxHealthClamped_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Calculate_Switch_Level_Zero_Based_Level = CallFunc_Calculate_Switch_Level_Zero_Based_Level;
	Parms.CallFunc_GetAudioMaxHealthClamped_MaxHealthValue_ImplicitCast = CallFunc_GetAudioMaxHealthClamped_MaxHealthValue_ImplicitCast;
	Parms.K2Node_VariableSet_MaxHealthClamp_ImplicitCast = K2Node_VariableSet_MaxHealthClamp_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Emote_Component.BP_Emote_Component_C.Update Health
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_GetCurrentHealth_CurrentHealth                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::Update_Health(double CallFunc_GetCurrentHealth_CurrentHealth, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "Update Health");

	Params::UBP_Emote_Component_C_Update_Health_Params Parms{};

	Parms.CallFunc_GetCurrentHealth_CurrentHealth = CallFunc_GetCurrentHealth_CurrentHealth;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Emote_Component.BP_Emote_Component_C.TriggerBlockEmote
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Has_Cooldown_Elapsed_Cooldown_Elapsed                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Update_Timestamp_Current_Time                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::TriggerBlockEmote(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Has_Cooldown_Elapsed_Cooldown_Elapsed, double CallFunc_Update_Timestamp_Current_Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "TriggerBlockEmote");

	Params::UBP_Emote_Component_C_TriggerBlockEmote_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Has_Cooldown_Elapsed_Cooldown_Elapsed = CallFunc_Has_Cooldown_Elapsed_Cooldown_Elapsed;
	Parms.CallFunc_Update_Timestamp_Current_Time = CallFunc_Update_Timestamp_Current_Time;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Emote_Component.BP_Emote_Component_C.Update Voice Set Switch
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkSwitchValue*              Voice_Set_Switch_Value                                           (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::Update_Voice_Set_Switch(class UAkSwitchValue* Voice_Set_Switch_Value, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "Update Voice Set Switch");

	Params::UBP_Emote_Component_C_Update_Voice_Set_Switch_Params Parms{};

	Parms.Voice_Set_Switch_Value = Voice_Set_Switch_Value;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Emote_Component.BP_Emote_Component_C.Update Timestamp
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Timestamp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Current_Time                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetAudioTimeSeconds_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::Update_Timestamp(double& Timestamp, double* Current_Time, double CallFunc_GetAudioTimeSeconds_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "Update Timestamp");

	Params::UBP_Emote_Component_C_Update_Timestamp_Params Parms{};

	Parms.Timestamp = Timestamp;
	Parms.CallFunc_GetAudioTimeSeconds_ReturnValue = CallFunc_GetAudioTimeSeconds_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Current_Time != nullptr)
		*Current_Time = Parms.Current_Time;

}


// Function BP_Emote_Component.BP_Emote_Component_C.Has Cooldown Elapsed
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Cooldown_Time                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Timestamp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Cooldown_Elapsed                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetAudioTimeSeconds_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::Has_Cooldown_Elapsed(double Cooldown_Time, double Timestamp, bool* Cooldown_Elapsed, double CallFunc_GetAudioTimeSeconds_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "Has Cooldown Elapsed");

	Params::UBP_Emote_Component_C_Has_Cooldown_Elapsed_Params Parms{};

	Parms.Cooldown_Time = Cooldown_Time;
	Parms.Timestamp = Timestamp;
	Parms.CallFunc_GetAudioTimeSeconds_ReturnValue = CallFunc_GetAudioTimeSeconds_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Cooldown_Elapsed != nullptr)
		*Cooldown_Elapsed = Parms.Cooldown_Elapsed;

}


// Function BP_Emote_Component.BP_Emote_Component_C.Is In Combat
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               In_Combat                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::Is_In_Combat(bool* In_Combat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "Is In Combat");

	Params::UBP_Emote_Component_C_Is_In_Combat_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (In_Combat != nullptr)
		*In_Combat = Parms.In_Combat;

}


// Function BP_Emote_Component.BP_Emote_Component_C.Get Pain Switch Value
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Pain_Magnitude                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              Pain_Switch_Value                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::Get_Pain_Switch_Value(double Pain_Magnitude, class UAkSwitchValue** Pain_Switch_Value, bool Temp_bool_Variable, class UAkSwitchValue* Temp_object_Variable, class UAkSwitchValue* Temp_object_Variable_1, bool Temp_bool_Variable_1, class UAkSwitchValue* Temp_object_Variable_2, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, class UAkSwitchValue* K2Node_Select_Default, class UAkSwitchValue* K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "Get Pain Switch Value");

	Params::UBP_Emote_Component_C_Get_Pain_Switch_Value_Params Parms{};

	Parms.Pain_Magnitude = Pain_Magnitude;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Pain_Switch_Value != nullptr)
		*Pain_Switch_Value = Parms.Pain_Switch_Value;

}


// Function BP_Emote_Component.BP_Emote_Component_C.Trigger Pain Emote
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Pain_Magnitude                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Update_Timestamp_Current_Time                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              CallFunc_Get_Pain_Switch_Value_Pain_Switch_Value                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetAudioTimeSeconds_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Has_Cooldown_Elapsed_Cooldown_Elapsed                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::Trigger_Pain_Emote(double Pain_Magnitude, double CallFunc_Update_Timestamp_Current_Time, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UAkSwitchValue* CallFunc_Get_Pain_Switch_Value_Pain_Switch_Value, double CallFunc_GetAudioTimeSeconds_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Has_Cooldown_Elapsed_Cooldown_Elapsed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "Trigger Pain Emote");

	Params::UBP_Emote_Component_C_Trigger_Pain_Emote_Params Parms{};

	Parms.Pain_Magnitude = Pain_Magnitude;
	Parms.CallFunc_Update_Timestamp_Current_Time = CallFunc_Update_Timestamp_Current_Time;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Get_Pain_Switch_Value_Pain_Switch_Value = CallFunc_Get_Pain_Switch_Value_Pain_Switch_Value;
	Parms.CallFunc_GetAudioTimeSeconds_ReturnValue = CallFunc_GetAudioTimeSeconds_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Has_Cooldown_Elapsed_Cooldown_Elapsed = CallFunc_Has_Cooldown_Elapsed_Cooldown_Elapsed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Emote_Component.BP_Emote_Component_C.BindClientCallbacks
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXCharacter*               Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::BindClientCallbacks(class ANWXCharacter* Character, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "BindClientCallbacks");

	Params::UBP_Emote_Component_C_BindClientCallbacks_Params Parms{};

	Parms.Character = Character;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_DynamicCast_AsBP_Character = K2Node_DynamicCast_AsBP_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Emote_Component.BP_Emote_Component_C.Get Breathing State Switch Value
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAkSwitchValue*              Switch_Value                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EEmoteBreathingState    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::Get_Breathing_State_Switch_Value(class UAkSwitchValue** Switch_Value, enum class EEmoteBreathingState Temp_byte_Variable, class UAkSwitchValue* Temp_object_Variable, class UAkSwitchValue* Temp_object_Variable_1, class UAkSwitchValue* Temp_object_Variable_2, class UAkSwitchValue* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "Get Breathing State Switch Value");

	Params::UBP_Emote_Component_C_Get_Breathing_State_Switch_Value_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Switch_Value != nullptr)
		*Switch_Value = Parms.Switch_Value;

}


// Function BP_Emote_Component.BP_Emote_Component_C.Update Ambience Manager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAmbienceManager*            CallFunc_GetAmbienceManager_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_in_Combat_In_Combat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::Update_Ambience_Manager(class UAmbienceManager* CallFunc_GetAmbienceManager_ReturnValue, bool CallFunc_Is_in_Combat_In_Combat, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "Update Ambience Manager");

	Params::UBP_Emote_Component_C_Update_Ambience_Manager_Params Parms{};

	Parms.CallFunc_GetAmbienceManager_ReturnValue = CallFunc_GetAmbienceManager_ReturnValue;
	Parms.CallFunc_Is_in_Combat_In_Combat = CallFunc_Is_in_Combat_In_Combat;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Emote_Component.BP_Emote_Component_C.Update Combat Switch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_in_Combat_In_Combat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::Update_Combat_Switch(bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UAkSwitchValue* Temp_object_Variable, class UAkSwitchValue* Temp_object_Variable_1, bool CallFunc_Is_in_Combat_In_Combat, class UAkSwitchValue* K2Node_Select_Default, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "Update Combat Switch");

	Params::UBP_Emote_Component_C_Update_Combat_Switch_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_Is_in_Combat_In_Combat = CallFunc_Is_in_Combat_In_Combat;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Emote_Component.BP_Emote_Component_C.Sync Non Action Switches
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Update_Stamina_Switch_Switch_Updated                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::Sync_Non_Action_Switches(bool CallFunc_Update_Stamina_Switch_Switch_Updated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "Sync Non Action Switches");

	Params::UBP_Emote_Component_C_Sync_Non_Action_Switches_Params Parms{};

	Parms.CallFunc_Update_Stamina_Switch_Switch_Updated = CallFunc_Update_Stamina_Switch_Switch_Updated;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Emote_Component.BP_Emote_Component_C.Calculate Switch Level
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             New_Value                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MaxValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Threshold_Level_1                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Threshold_Level_2                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Threshold_Level_3                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             BaseMax                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Zero_Based_Level                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NormalizeToRange_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::Calculate_Switch_Level(double New_Value, double MaxValue, double Threshold_Level_1, double Threshold_Level_2, double Threshold_Level_3, double BaseMax, int32* Zero_Based_Level, int32 Temp_int_Variable, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, int32 Temp_int_Variable_1, bool Temp_bool_Variable, int32 Temp_int_Variable_2, bool Temp_bool_Variable_1, double CallFunc_FMax_ReturnValue, double CallFunc_NormalizeToRange_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, int32 K2Node_Select_Default, int32 K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "Calculate Switch Level");

	Params::UBP_Emote_Component_C_Calculate_Switch_Level_Params Parms{};

	Parms.New_Value = New_Value;
	Parms.MaxValue = MaxValue;
	Parms.Threshold_Level_1 = Threshold_Level_1;
	Parms.Threshold_Level_2 = Threshold_Level_2;
	Parms.Threshold_Level_3 = Threshold_Level_3;
	Parms.BaseMax = BaseMax;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_NormalizeToRange_ReturnValue = CallFunc_NormalizeToRange_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Zero_Based_Level != nullptr)
		*Zero_Based_Level = Parms.Zero_Based_Level;

}


// Function BP_Emote_Component.BP_Emote_Component_C.Update Stamina Switch
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Switch_Updated                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              NewSwitchValue                                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Unarmed_IsUnarmed                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::Update_Stamina_Switch(bool* Switch_Updated, class UAkSwitchValue* NewSwitchValue, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, class UAkSwitchValue* Temp_object_Variable, class UAkSwitchValue* Temp_object_Variable_1, bool K2Node_SwitchEnum_CmpSuccess, class UAkSwitchValue* Temp_object_Variable_2, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UAkSwitchValue* K2Node_Select_Default, bool CallFunc_Is_Unarmed_IsUnarmed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "Update Stamina Switch");

	Params::UBP_Emote_Component_C_Update_Stamina_Switch_Params Parms{};

	Parms.NewSwitchValue = NewSwitchValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Is_Unarmed_IsUnarmed = CallFunc_Is_Unarmed_IsUnarmed;

	UObject::ProcessEvent(Func, &Parms);

	if (Switch_Updated != nullptr)
		*Switch_Updated = Parms.Switch_Updated;

}


// Function BP_Emote_Component.BP_Emote_Component_C.On Stamina Changed Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             New_Stamina                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Old_Stamina                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Max_Stamina                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Base_Max_Stamina                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Printmessage                                                     (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_Update_Timestamp_Current_Time                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NormalizeToRange_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Has_Cooldown_Elapsed_Cooldown_Elapsed                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Update_Stamina_Switch_Switch_Updated                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Calculate_Switch_Level_Zero_Based_Level                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRTPCValue_Value_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::On_Stamina_Changed_Internal(double New_Stamina, double Old_Stamina, double Max_Stamina, double Base_Max_Stamina, const class FString& Printmessage, double CallFunc_Update_Timestamp_Current_Time, bool CallFunc_IsDedicatedServer_ReturnValue, double CallFunc_NormalizeToRange_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Has_Cooldown_Elapsed_Cooldown_Elapsed, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Update_Stamina_Switch_Switch_Updated, int32 CallFunc_Calculate_Switch_Level_Zero_Based_Level, float CallFunc_SetRTPCValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "On Stamina Changed Internal");

	Params::UBP_Emote_Component_C_On_Stamina_Changed_Internal_Params Parms{};

	Parms.New_Stamina = New_Stamina;
	Parms.Old_Stamina = Old_Stamina;
	Parms.Max_Stamina = Max_Stamina;
	Parms.Base_Max_Stamina = Base_Max_Stamina;
	Parms.Printmessage = Printmessage;
	Parms.CallFunc_Update_Timestamp_Current_Time = CallFunc_Update_Timestamp_Current_Time;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_NormalizeToRange_ReturnValue = CallFunc_NormalizeToRange_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Has_Cooldown_Elapsed_Cooldown_Elapsed = CallFunc_Has_Cooldown_Elapsed_Cooldown_Elapsed;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Update_Stamina_Switch_Switch_Updated = CallFunc_Update_Stamina_Switch_Switch_Updated;
	Parms.CallFunc_Calculate_Switch_Level_Zero_Based_Level = CallFunc_Calculate_Switch_Level_Zero_Based_Level;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast = CallFunc_SetRTPCValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Emote_Component.BP_Emote_Component_C.Update Health Switch
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::Update_Health_Switch(int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, class UAkSwitchValue* Temp_object_Variable, class UAkSwitchValue* Temp_object_Variable_1, bool K2Node_SwitchEnum_CmpSuccess, class UAkSwitchValue* Temp_object_Variable_2, class UAkSwitchValue* K2Node_Select_Default, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "Update Health Switch");

	Params::UBP_Emote_Component_C_Update_Health_Switch_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Emote_Component.BP_Emote_Component_C.Handle on Health Decreased
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Old_Health                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             New_Health                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Suppress_Emote                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::Handle_on_Health_Decreased(double Old_Health, double New_Health, bool Suppress_Emote, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, double CallFunc_VSize_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "Handle on Health Decreased");

	Params::UBP_Emote_Component_C_Handle_on_Health_Decreased_Params Parms{};

	Parms.Old_Health = Old_Health;
	Parms.New_Health = New_Health;
	Parms.Suppress_Emote = Suppress_Emote;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Emote_Component.BP_Emote_Component_C.Revoke Emote Switch Value
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkSwitchValue*              Switch_Value                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              CallFunc_Get_Breathing_State_Switch_Value_Switch_Value           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::Revoke_Emote_Switch_Value(class UAkSwitchValue* Switch_Value, class UAkSwitchValue* CallFunc_Get_Breathing_State_Switch_Value_Switch_Value, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "Revoke Emote Switch Value");

	Params::UBP_Emote_Component_C_Revoke_Emote_Switch_Value_Params Parms{};

	Parms.Switch_Value = Switch_Value;
	Parms.CallFunc_Get_Breathing_State_Switch_Value_Switch_Value = CallFunc_Get_Breathing_State_Switch_Value_Switch_Value;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Emote_Component.BP_Emote_Component_C.Update Playing Id
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkCallbackInfo*             Callback_Info                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkMusicSyncCallbackInfo*    K2Node_DynamicCast_AsAk_Music_Sync_Callback_Info                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::Update_Playing_Id(class UAkCallbackInfo* Callback_Info, class UAkMusicSyncCallbackInfo* K2Node_DynamicCast_AsAk_Music_Sync_Callback_Info, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "Update Playing Id");

	Params::UBP_Emote_Component_C_Update_Playing_Id_Params Parms{};

	Parms.Callback_Info = Callback_Info;
	Parms.K2Node_DynamicCast_AsAk_Music_Sync_Callback_Info = K2Node_DynamicCast_AsAk_Music_Sync_Callback_Info;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Emote_Component.BP_Emote_Component_C.Restart Event
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::Restart_Event(bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "Restart Event");

	Params::UBP_Emote_Component_C_Restart_Event_Params Parms{};

	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Emote_Component.BP_Emote_Component_C.Play Event
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*               Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// int32                              CallFunc_PostAkEvent_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::Play_Event(class UAkAudioEvent* Temp_object_Variable, class UAkAudioEvent* Temp_object_Variable_1, bool Temp_bool_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAkAudioEvent* K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostAkEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "Play Event");

	Params::UBP_Emote_Component_C_Play_Event_Params Parms{};

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_PostAkEvent_ReturnValue = CallFunc_PostAkEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Emote_Component.BP_Emote_Component_C.Set Action Switch
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkSwitchValue*              New_Switch_Value                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::Set_Action_Switch(class UAkSwitchValue* New_Switch_Value, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "Set Action Switch");

	Params::UBP_Emote_Component_C_Set_Action_Switch_Params Parms{};

	Parms.New_Switch_Value = New_Switch_Value;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Emote_Component.BP_Emote_Component_C.Enter Breathing State
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkSwitchValue*              CallFunc_Get_Breathing_State_Switch_Value_Switch_Value           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::Enter_Breathing_State(class UAkSwitchValue* CallFunc_Get_Breathing_State_Switch_Value_Switch_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "Enter Breathing State");

	Params::UBP_Emote_Component_C_Enter_Breathing_State_Params Parms{};

	Parms.CallFunc_Get_Breathing_State_Switch_Value_Switch_Value = CallFunc_Get_Breathing_State_Switch_Value_Switch_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Emote_Component.BP_Emote_Component_C.Handle Callback
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAkCallbackType         CallbackType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkCallbackInfo*             CallbackInfo                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::Handle_Callback(enum class EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "Handle Callback");

	Params::UBP_Emote_Component_C_Handle_Callback_Params Parms{};

	Parms.CallbackType = CallbackType;
	Parms.CallbackInfo = CallbackInfo;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Emote_Component.BP_Emote_Component_C.Submit Emote Switch Value
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkSwitchValue*              Switch_Value                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Has_Cooldown_Elapsed_Cooldown_Elapsed                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Update_Timestamp_Current_Time                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::Submit_Emote_Switch_Value(class UAkSwitchValue* Switch_Value, bool CallFunc_Has_Cooldown_Elapsed_Cooldown_Elapsed, double CallFunc_Update_Timestamp_Current_Time, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "Submit Emote Switch Value");

	Params::UBP_Emote_Component_C_Submit_Emote_Switch_Value_Params Parms{};

	Parms.Switch_Value = Switch_Value;
	Parms.CallFunc_Has_Cooldown_Elapsed_Cooldown_Elapsed = CallFunc_Has_Cooldown_Elapsed_Cooldown_Elapsed;
	Parms.CallFunc_Update_Timestamp_Current_Time = CallFunc_Update_Timestamp_Current_Time;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Emote_Component.BP_Emote_Component_C.Submit Emote Switch From Server
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkSwitchValue*              Switch_Value                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::Submit_Emote_Switch_From_Server(class UAkSwitchValue* Switch_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "Submit Emote Switch From Server");

	Params::UBP_Emote_Component_C_Submit_Emote_Switch_From_Server_Params Parms{};

	Parms.Switch_Value = Switch_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Emote_Component.BP_Emote_Component_C.Trigger Pain Emote From Server
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Pain_Magnitude                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::Trigger_Pain_Emote_From_Server(double Pain_Magnitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "Trigger Pain Emote From Server");

	Params::UBP_Emote_Component_C_Trigger_Pain_Emote_From_Server_Params Parms{};

	Parms.Pain_Magnitude = Pain_Magnitude;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Emote_Component.BP_Emote_Component_C.SubmitEmoteSwitchValue
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UAkSwitchValue*              SwitchValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::SubmitEmoteSwitchValue(class UAkSwitchValue* SwitchValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "SubmitEmoteSwitchValue");

	Params::UBP_Emote_Component_C_SubmitEmoteSwitchValue_Params Parms{};

	Parms.SwitchValue = SwitchValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Emote_Component.BP_Emote_Component_C.OnHealthDecreased
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              OldHealth                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewHealth                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SuppressEmote                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::OnHealthDecreased(float OldHealth, float NewHealth, bool SuppressEmote)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "OnHealthDecreased");

	Params::UBP_Emote_Component_C_OnHealthDecreased_Params Parms{};

	Parms.OldHealth = OldHealth;
	Parms.NewHealth = NewHealth;
	Parms.SuppressEmote = SuppressEmote;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Emote_Component.BP_Emote_Component_C.TriggerBlockEmoteFromServer
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Emote_Component_C::TriggerBlockEmoteFromServer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "TriggerBlockEmoteFromServer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Emote_Component.BP_Emote_Component_C.Jump
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Emote_Component_C::Jump()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "Jump");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Emote_Component.BP_Emote_Component_C.Character Ready
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Emote_Component_C::Character_Ready()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "Character Ready");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Emote_Component.BP_Emote_Component_C.Depleted
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_Emote_Component_C::Depleted(struct FInventoryEntry& InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "Depleted");

	Params::UBP_Emote_Component_C_Depleted_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Emote_Component.BP_Emote_Component_C.Set Breathing State
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEmoteBreathingState    New_State                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::Set_Breathing_State(enum class EEmoteBreathingState New_State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "Set Breathing State");

	Params::UBP_Emote_Component_C_Set_Breathing_State_Params Parms{};

	Parms.New_State = New_State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Emote_Component.BP_Emote_Component_C.Revoke Breathing State
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEmoteBreathingState    Existing_State                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::Revoke_Breathing_State(enum class EEmoteBreathingState Existing_State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "Revoke Breathing State");

	Params::UBP_Emote_Component_C_Revoke_Breathing_State_Params Parms{};

	Parms.Existing_State = Existing_State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Emote_Component.BP_Emote_Component_C.EmotesInCombat
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SetCombatSwitch                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::EmotesInCombat(bool SetCombatSwitch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "EmotesInCombat");

	Params::UBP_Emote_Component_C_EmotesInCombat_Params Parms{};

	Parms.SetCombatSwitch = SetCombatSwitch;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Emote_Component.BP_Emote_Component_C.On Combat Updated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Emote_Component_C::On_Combat_Updated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "On Combat Updated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Emote_Component.BP_Emote_Component_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Emote_Component_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Emote_Component.BP_Emote_Component_C.ExecuteUbergraph_BP_Emote_Component
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              K2Node_CustomEvent_Switch_Value                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Pain_Magnitude                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              K2Node_Event_SwitchValue                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_OldHealth                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_NewHealth                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_SuppressEmote                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             K2Node_DynamicCast_AsNWXPlayer_State                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Has_Cooldown_Elapsed_Cooldown_Elapsed                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             K2Node_CustomEvent_InventoryEntry                                (ConstParm)
// double                             CallFunc_Update_Timestamp_Current_Time                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEmoteBreathingState    K2Node_CustomEvent_New_State                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEmoteBreathingState    K2Node_CustomEvent_Existing_State                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              CallFunc_Get_Breathing_State_Switch_Value_Switch_Value           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEmoteBreathingState    CallFunc_CalculateBreathState_OutputState                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_SetCombatSwitch                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorAudioBucket*           CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Is_In_Combat_Score                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_In_Combat_Combat                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXCharacter*               K2Node_DynamicCast_AsNWXCharacter                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_Combat_Analyser_C*       CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetScopedAkHead_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Handle_on_Health_Decreased_Old_Health_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Handle_on_Health_Decreased_New_Health_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RetriggerableDelay_Duration_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RetriggerableDelay_Duration_ImplicitCast_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Emote_Component_C::ExecuteUbergraph_BP_Emote_Component(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_IsDedicatedServer_ReturnValue_1, class UAkSwitchValue* K2Node_CustomEvent_Switch_Value, double K2Node_CustomEvent_Pain_Magnitude, class UAkSwitchValue* K2Node_Event_SwitchValue, float K2Node_Event_OldHealth, float K2Node_Event_NewHealth, bool K2Node_Event_SuppressEmote, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, class ANWXPlayerState* K2Node_DynamicCast_AsNWXPlayer_State, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Has_Cooldown_Elapsed_Cooldown_Elapsed, const struct FInventoryEntry& K2Node_CustomEvent_InventoryEntry, double CallFunc_Update_Timestamp_Current_Time, enum class EEmoteBreathingState K2Node_CustomEvent_New_State, enum class EEmoteBreathingState K2Node_CustomEvent_Existing_State, class UAkSwitchValue* CallFunc_Get_Breathing_State_Switch_Value_Switch_Value, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EEmoteBreathingState CallFunc_CalculateBreathState_OutputState, bool Temp_bool_Variable_2, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UAkSwitchValue* Temp_object_Variable, bool K2Node_CustomEvent_SetCombatSwitch, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UActorAudioBucket* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Is_In_Combat_Score, bool CallFunc_Is_In_Combat_Combat, class AActor* CallFunc_GetOwner_ReturnValue_1, class ANWXCharacter* K2Node_DynamicCast_AsNWXCharacter, bool K2Node_DynamicCast_bSuccess_2, class UAbilitySystemComponent* CallFunc_GetComponentByClass_ReturnValue, class UBP_Combat_Analyser_C* CallFunc_GetComponentByClass_ReturnValue_1, class UScopedAkComponent* CallFunc_GetScopedAkHead_ReturnValue, class UAkSwitchValue* Temp_object_Variable_1, bool Temp_bool_Variable_3, class UAkSwitchValue* K2Node_Select_Default, double CallFunc_Handle_on_Health_Decreased_Old_Health_ImplicitCast, double CallFunc_Handle_on_Health_Decreased_New_Health_ImplicitCast, float CallFunc_RetriggerableDelay_Duration_ImplicitCast, float CallFunc_RetriggerableDelay_Duration_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Emote_Component_C", "ExecuteUbergraph_BP_Emote_Component");

	Params::UBP_Emote_Component_C_ExecuteUbergraph_BP_Emote_Component_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.K2Node_CustomEvent_Switch_Value = K2Node_CustomEvent_Switch_Value;
	Parms.K2Node_CustomEvent_Pain_Magnitude = K2Node_CustomEvent_Pain_Magnitude;
	Parms.K2Node_Event_SwitchValue = K2Node_Event_SwitchValue;
	Parms.K2Node_Event_OldHealth = K2Node_Event_OldHealth;
	Parms.K2Node_Event_NewHealth = K2Node_Event_NewHealth;
	Parms.K2Node_Event_SuppressEmote = K2Node_Event_SuppressEmote;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsNWXPlayer_State = K2Node_DynamicCast_AsNWXPlayer_State;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Has_Cooldown_Elapsed_Cooldown_Elapsed = CallFunc_Has_Cooldown_Elapsed_Cooldown_Elapsed;
	Parms.K2Node_CustomEvent_InventoryEntry = K2Node_CustomEvent_InventoryEntry;
	Parms.CallFunc_Update_Timestamp_Current_Time = CallFunc_Update_Timestamp_Current_Time;
	Parms.K2Node_CustomEvent_New_State = K2Node_CustomEvent_New_State;
	Parms.K2Node_CustomEvent_Existing_State = K2Node_CustomEvent_Existing_State;
	Parms.CallFunc_Get_Breathing_State_Switch_Value_Switch_Value = CallFunc_Get_Breathing_State_Switch_Value_Switch_Value;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_CalculateBreathState_OutputState = CallFunc_CalculateBreathState_OutputState;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_CustomEvent_SetCombatSwitch = K2Node_CustomEvent_SetCombatSwitch;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Is_In_Combat_Score = CallFunc_Is_In_Combat_Score;
	Parms.CallFunc_Is_In_Combat_Combat = CallFunc_Is_In_Combat_Combat;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsNWXCharacter = K2Node_DynamicCast_AsNWXCharacter;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_GetScopedAkHead_ReturnValue = CallFunc_GetScopedAkHead_ReturnValue;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Handle_on_Health_Decreased_Old_Health_ImplicitCast = CallFunc_Handle_on_Health_Decreased_Old_Health_ImplicitCast;
	Parms.CallFunc_Handle_on_Health_Decreased_New_Health_ImplicitCast = CallFunc_Handle_on_Health_Decreased_New_Health_ImplicitCast;
	Parms.CallFunc_RetriggerableDelay_Duration_ImplicitCast = CallFunc_RetriggerableDelay_Duration_ImplicitCast;
	Parms.CallFunc_RetriggerableDelay_Duration_ImplicitCast_1 = CallFunc_RetriggerableDelay_Duration_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


