#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IEft_AddHealthOverTime.IEft_AddHealthOverTime_C
// (None)

class UClass* UIEft_AddHealthOverTime_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IEft_AddHealthOverTime_C");

	return Clss;
}


// IEft_AddHealthOverTime_C IEft_AddHealthOverTime.Default__IEft_AddHealthOverTime_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIEft_AddHealthOverTime_C* UIEft_AddHealthOverTime_C::GetDefaultObj()
{
	static class UIEft_AddHealthOverTime_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIEft_AddHealthOverTime_C*>(UIEft_AddHealthOverTime_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IEft_AddHealthOverTime.IEft_AddHealthOverTime_C.OnHPRegApplied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UObject*                     CallFunc_GetUnsafeWorldContext_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIEft_AddHealthOverTime_C::OnHPRegApplied(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* CallFunc_GetUnsafeWorldContext_ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_AddHealthOverTime_C", "OnHPRegApplied");

	Params::UIEft_AddHealthOverTime_C_OnHPRegApplied_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetUnsafeWorldContext_ReturnValue = CallFunc_GetUnsafeWorldContext_ReturnValue;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IEft_AddHealthOverTime.IEft_AddHealthOverTime_C.OnAppliedBPMightFail
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABarbarous_C*                Barbarous                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               GameplayPC                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFamiliarityUnlocked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_AddStatusIcon_IconID                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ServerSetHealth_Success                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UIEft_AddHealthOverTime_C::OnAppliedBPMightFail(class ABarbarous_C* Barbarous, class AGameplayPC_C* GameplayPC, bool bFamiliarityUnlocked, bool* bSuccess, bool Temp_bool_Variable, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_AddStatusIcon_IconID, int32 K2Node_Select_Default, bool CallFunc_ServerSetHealth_Success, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_AddHealthOverTime_C", "OnAppliedBPMightFail");

	Params::UIEft_AddHealthOverTime_C_OnAppliedBPMightFail_Params Parms{};

	Parms.Barbarous = Barbarous;
	Parms.GameplayPC = GameplayPC;
	Parms.bFamiliarityUnlocked = bFamiliarityUnlocked;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_AddStatusIcon_IconID = CallFunc_AddStatusIcon_IconID;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_ServerSetHealth_Success = CallFunc_ServerSetHealth_Success;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function IEft_AddHealthOverTime.IEft_AddHealthOverTime_C.OnUpdateOverBP
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     WorldContext                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIEft_AddHealthOverTime_C::OnUpdateOverBP(class UObject* WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_AddHealthOverTime_C", "OnUpdateOverBP");

	Params::UIEft_AddHealthOverTime_C_OnUpdateOverBP_Params Parms{};

	Parms.WorldContext = WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IEft_AddHealthOverTime.IEft_AddHealthOverTime_C.OnCutsceneStart_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UIEft_AddHealthOverTime_C::OnCutsceneStart_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_AddHealthOverTime_C", "OnCutsceneStart_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IEft_AddHealthOverTime.IEft_AddHealthOverTime_C.OnCutsceneEnd_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UIEft_AddHealthOverTime_C::OnCutsceneEnd_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_AddHealthOverTime_C", "OnCutsceneEnd_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IEft_AddHealthOverTime.IEft_AddHealthOverTime_C.OnEquipmentMenuPressed_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Close                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_EquipmentMenuType  Menu                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIEft_AddHealthOverTime_C::OnEquipmentMenuPressed_Set(bool Close, enum class Enum_EquipmentMenuType Menu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_AddHealthOverTime_C", "OnEquipmentMenuPressed_Set");

	Params::UIEft_AddHealthOverTime_C_OnEquipmentMenuPressed_Set_Params Parms{};

	Parms.Close = Close;
	Parms.Menu = Menu;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IEft_AddHealthOverTime.IEft_AddHealthOverTime_C.EquipmentMenuOpened_Pause
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UIEft_AddHealthOverTime_C::EquipmentMenuOpened_Pause()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_AddHealthOverTime_C", "EquipmentMenuOpened_Pause");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IEft_AddHealthOverTime.IEft_AddHealthOverTime_C.EquipmentMenuClosed_Unpause
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UIEft_AddHealthOverTime_C::EquipmentMenuClosed_Unpause()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_AddHealthOverTime_C", "EquipmentMenuClosed_Unpause");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IEft_AddHealthOverTime.IEft_AddHealthOverTime_C.ExecuteUbergraph_IEft_AddHealthOverTime
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_WorldContext                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Close                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_EquipmentMenuType  K2Node_Event_Menu                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIEft_AddHealthOverTime_C::ExecuteUbergraph_IEft_AddHealthOverTime(int32 EntryPoint, class UObject* K2Node_Event_WorldContext, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, bool K2Node_Event_Close, enum class Enum_EquipmentMenuType K2Node_Event_Menu, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_AddHealthOverTime_C", "ExecuteUbergraph_IEft_AddHealthOverTime");

	Params::UIEft_AddHealthOverTime_C_ExecuteUbergraph_IEft_AddHealthOverTime_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_WorldContext = K2Node_Event_WorldContext;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.K2Node_Event_Close = K2Node_Event_Close;
	Parms.K2Node_Event_Menu = K2Node_Event_Menu;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue = CallFunc_K2_IsTimerActiveHandle_ReturnValue;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1 = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


