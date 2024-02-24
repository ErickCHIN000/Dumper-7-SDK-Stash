#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IEft_ModifyPlayerFloatForDuration.IEft_ModifyPlayerFloatForDuration_C
// (None)

class UClass* UIEft_ModifyPlayerFloatForDuration_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IEft_ModifyPlayerFloatForDuration_C");

	return Clss;
}


// IEft_ModifyPlayerFloatForDuration_C IEft_ModifyPlayerFloatForDuration.Default__IEft_ModifyPlayerFloatForDuration_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIEft_ModifyPlayerFloatForDuration_C* UIEft_ModifyPlayerFloatForDuration_C::GetDefaultObj()
{
	static class UIEft_ModifyPlayerFloatForDuration_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIEft_ModifyPlayerFloatForDuration_C*>(UIEft_ModifyPlayerFloatForDuration_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IEft_ModifyPlayerFloatForDuration.IEft_ModifyPlayerFloatForDuration_C.GetDuration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UIEft_ModifyPlayerFloatForDuration_C::GetDuration(bool Temp_bool_Variable, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_ModifyPlayerFloatForDuration_C", "GetDuration");

	Params::UIEft_ModifyPlayerFloatForDuration_C_GetDuration_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function IEft_ModifyPlayerFloatForDuration.IEft_ModifyPlayerFloatForDuration_C.OnAppliedBP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABarbarous_C*                Barbarous                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               GameplayPC                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFamiliarityUnlocked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIEft_ModifyPlayerFloatForDuration_C::OnAppliedBP(class ABarbarous_C* Barbarous, class AGameplayPC_C* GameplayPC, bool bFamiliarityUnlocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_ModifyPlayerFloatForDuration_C", "OnAppliedBP");

	Params::UIEft_ModifyPlayerFloatForDuration_C_OnAppliedBP_Params Parms{};

	Parms.Barbarous = Barbarous;
	Parms.GameplayPC = GameplayPC;
	Parms.bFamiliarityUnlocked = bFamiliarityUnlocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IEft_ModifyPlayerFloatForDuration.IEft_ModifyPlayerFloatForDuration_C.OnEffectOver
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UIEft_ModifyPlayerFloatForDuration_C::OnEffectOver()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_ModifyPlayerFloatForDuration_C", "OnEffectOver");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IEft_ModifyPlayerFloatForDuration.IEft_ModifyPlayerFloatForDuration_C.OnCutsceneStart_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UIEft_ModifyPlayerFloatForDuration_C::OnCutsceneStart_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_ModifyPlayerFloatForDuration_C", "OnCutsceneStart_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IEft_ModifyPlayerFloatForDuration.IEft_ModifyPlayerFloatForDuration_C.OnCutsceneEnd_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UIEft_ModifyPlayerFloatForDuration_C::OnCutsceneEnd_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_ModifyPlayerFloatForDuration_C", "OnCutsceneEnd_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IEft_ModifyPlayerFloatForDuration.IEft_ModifyPlayerFloatForDuration_C.OnEquipmentMenuPressed_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Close                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_EquipmentMenuType  Menu                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIEft_ModifyPlayerFloatForDuration_C::OnEquipmentMenuPressed_Set(bool Close, enum class Enum_EquipmentMenuType Menu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_ModifyPlayerFloatForDuration_C", "OnEquipmentMenuPressed_Set");

	Params::UIEft_ModifyPlayerFloatForDuration_C_OnEquipmentMenuPressed_Set_Params Parms{};

	Parms.Close = Close;
	Parms.Menu = Menu;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IEft_ModifyPlayerFloatForDuration.IEft_ModifyPlayerFloatForDuration_C.EquipmentMenuOpened_Pause
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UIEft_ModifyPlayerFloatForDuration_C::EquipmentMenuOpened_Pause()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_ModifyPlayerFloatForDuration_C", "EquipmentMenuOpened_Pause");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IEft_ModifyPlayerFloatForDuration.IEft_ModifyPlayerFloatForDuration_C.EquipmentMenuClosed_Unpause
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UIEft_ModifyPlayerFloatForDuration_C::EquipmentMenuClosed_Unpause()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_ModifyPlayerFloatForDuration_C", "EquipmentMenuClosed_Unpause");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IEft_ModifyPlayerFloatForDuration.IEft_ModifyPlayerFloatForDuration_C.ExecuteUbergraph_IEft_ModifyPlayerFloatForDuration
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                K2Node_Event_Barbarous                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_Event_GameplayPC                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bFamiliarityUnlocked                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetDuration_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDuration_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddStatusIcon_IconID                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Close                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_EquipmentMenuType  K2Node_Event_Menu                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIEft_ModifyPlayerFloatForDuration_C::ExecuteUbergraph_IEft_ModifyPlayerFloatForDuration(int32 EntryPoint, class ABarbarous_C* K2Node_Event_Barbarous, class AGameplayPC_C* K2Node_Event_GameplayPC, bool K2Node_Event_bFamiliarityUnlocked, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, float K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetDuration_ReturnValue, float CallFunc_GetDuration_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_AddStatusIcon_IconID, bool Temp_bool_Variable_1, float K2Node_Select_Default_1, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue_1, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_2, bool K2Node_Event_Close, enum class Enum_EquipmentMenuType K2Node_Event_Menu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_ModifyPlayerFloatForDuration_C", "ExecuteUbergraph_IEft_ModifyPlayerFloatForDuration");

	Params::UIEft_ModifyPlayerFloatForDuration_C_ExecuteUbergraph_IEft_ModifyPlayerFloatForDuration_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Barbarous = K2Node_Event_Barbarous;
	Parms.K2Node_Event_GameplayPC = K2Node_Event_GameplayPC;
	Parms.K2Node_Event_bFamiliarityUnlocked = K2Node_Event_bFamiliarityUnlocked;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue = CallFunc_K2_IsTimerActiveHandle_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetDuration_ReturnValue = CallFunc_GetDuration_ReturnValue;
	Parms.CallFunc_GetDuration_ReturnValue_1 = CallFunc_GetDuration_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_AddStatusIcon_IconID = CallFunc_AddStatusIcon_IconID;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue_1 = CallFunc_K2_IsTimerActiveHandle_ReturnValue_1;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1 = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_2 = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_2;
	Parms.K2Node_Event_Close = K2Node_Event_Close;
	Parms.K2Node_Event_Menu = K2Node_Event_Menu;

	UObject::ProcessEvent(Func, &Parms);

}

}


