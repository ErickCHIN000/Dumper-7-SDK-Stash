#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IEft_Posion.IEft_Posion_C
// (None)

class UClass* UIEft_Posion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IEft_Posion_C");

	return Clss;
}


// IEft_Posion_C IEft_Posion.Default__IEft_Posion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIEft_Posion_C* UIEft_Posion_C::GetDefaultObj()
{
	static class UIEft_Posion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIEft_Posion_C*>(UIEft_Posion_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IEft_Posion.IEft_Posion_C.SetPoisonPostProcess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsPoisonedByItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIEft_Posion_C::SetPoisonPostProcess(bool bIsPoisonedByItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_Posion_C", "SetPoisonPostProcess");

	Params::UIEft_Posion_C_SetPoisonPostProcess_Params Parms{};

	Parms.bIsPoisonedByItem = bIsPoisonedByItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IEft_Posion.IEft_Posion_C.EndBrownMushroom
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UIEft_Posion_C::EndBrownMushroom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_Posion_C", "EndBrownMushroom");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IEft_Posion.IEft_Posion_C.MushroomPoisonDot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UIEft_Posion_C::MushroomPoisonDot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_Posion_C", "MushroomPoisonDot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IEft_Posion.IEft_Posion_C.OnAppliedBP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABarbarous_C*                Barbarous                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               GameplayPC                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFamiliarityUnlocked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIEft_Posion_C::OnAppliedBP(class ABarbarous_C* Barbarous, class AGameplayPC_C* GameplayPC, bool bFamiliarityUnlocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_Posion_C", "OnAppliedBP");

	Params::UIEft_Posion_C_OnAppliedBP_Params Parms{};

	Parms.Barbarous = Barbarous;
	Parms.GameplayPC = GameplayPC;
	Parms.bFamiliarityUnlocked = bFamiliarityUnlocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IEft_Posion.IEft_Posion_C.CureAllPoison_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UIEft_Posion_C::CureAllPoison_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_Posion_C", "CureAllPoison_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IEft_Posion.IEft_Posion_C.OnCutsceneStart_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UIEft_Posion_C::OnCutsceneStart_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_Posion_C", "OnCutsceneStart_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IEft_Posion.IEft_Posion_C.OnCutsceneEnd_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UIEft_Posion_C::OnCutsceneEnd_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_Posion_C", "OnCutsceneEnd_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IEft_Posion.IEft_Posion_C.OnEquipmentMenuPressed_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Close                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_EquipmentMenuType  Menu                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIEft_Posion_C::OnEquipmentMenuPressed_Set(bool Close, enum class Enum_EquipmentMenuType Menu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_Posion_C", "OnEquipmentMenuPressed_Set");

	Params::UIEft_Posion_C_OnEquipmentMenuPressed_Set_Params Parms{};

	Parms.Close = Close;
	Parms.Menu = Menu;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IEft_Posion.IEft_Posion_C.EquipmentMenuOpened_Pause
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_EquipmentMenuType  Menu                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIEft_Posion_C::EquipmentMenuOpened_Pause(enum class Enum_EquipmentMenuType Menu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_Posion_C", "EquipmentMenuOpened_Pause");

	Params::UIEft_Posion_C_EquipmentMenuOpened_Pause_Params Parms{};

	Parms.Menu = Menu;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IEft_Posion.IEft_Posion_C.EquipmentMenuClosed_Unpause
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UIEft_Posion_C::EquipmentMenuClosed_Unpause()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_Posion_C", "EquipmentMenuClosed_Unpause");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IEft_Posion.IEft_Posion_C.CureAllPoison_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UIEft_Posion_C::CureAllPoison_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_Posion_C", "CureAllPoison_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IEft_Posion.IEft_Posion_C.CureAllPoison_Unbind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UIEft_Posion_C::CureAllPoison_Unbind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_Posion_C", "CureAllPoison_Unbind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IEft_Posion.IEft_Posion_C.OnPhotoModePressed_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnterred                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIEft_Posion_C::OnPhotoModePressed_Set(bool bEnterred)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_Posion_C", "OnPhotoModePressed_Set");

	Params::UIEft_Posion_C_OnPhotoModePressed_Set_Params Parms{};

	Parms.bEnterred = bEnterred;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IEft_Posion.IEft_Posion_C.ExecuteUbergraph_IEft_Posion
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyDamage_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                K2Node_Event_Barbarous                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_Event_GameplayPC                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bFamiliarityUnlocked                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddStatusIcon_IconID                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_4                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Close                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_EquipmentMenuType  K2Node_Event_Menu                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_EquipmentMenuType  K2Node_CustomEvent_Menu                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_bEnterred                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)

void UIEft_Posion_C::ExecuteUbergraph_IEft_Posion(int32 EntryPoint, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_ApplyDamage_ReturnValue, class ABarbarous_C* K2Node_Event_Barbarous, class AGameplayPC_C* K2Node_Event_GameplayPC, bool K2Node_Event_bFamiliarityUnlocked, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, int32 CallFunc_AddStatusIcon_IconID, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_2, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_3, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_4, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool K2Node_Event_Close, enum class Enum_EquipmentMenuType K2Node_Event_Menu, enum class Enum_EquipmentMenuType K2Node_CustomEvent_Menu, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_bEnterred, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_Posion_C", "ExecuteUbergraph_IEft_Posion");

	Params::UIEft_Posion_C_ExecuteUbergraph_IEft_Posion_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue = CallFunc_K2_IsTimerActiveHandle_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_ApplyDamage_ReturnValue = CallFunc_ApplyDamage_ReturnValue;
	Parms.K2Node_Event_Barbarous = K2Node_Event_Barbarous;
	Parms.K2Node_Event_GameplayPC = K2Node_Event_GameplayPC;
	Parms.K2Node_Event_bFamiliarityUnlocked = K2Node_Event_bFamiliarityUnlocked;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.CallFunc_AddStatusIcon_IconID = CallFunc_AddStatusIcon_IconID;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1 = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_2 = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_2;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue_1 = CallFunc_K2_IsTimerActiveHandle_ReturnValue_1;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_3 = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_3;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_4 = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_4;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_Event_Close = K2Node_Event_Close;
	Parms.K2Node_Event_Menu = K2Node_Event_Menu;
	Parms.K2Node_CustomEvent_Menu = K2Node_CustomEvent_Menu;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_bEnterred = K2Node_Event_bEnterred;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue_2 = CallFunc_K2_IsTimerActiveHandle_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


