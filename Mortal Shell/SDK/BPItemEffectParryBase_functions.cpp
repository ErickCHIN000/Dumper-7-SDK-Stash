#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPItemEffectParryBase.BPItemEffectParryBase_C
// (None)

class UClass* UBPItemEffectParryBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPItemEffectParryBase_C");

	return Clss;
}


// BPItemEffectParryBase_C BPItemEffectParryBase.Default__BPItemEffectParryBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPItemEffectParryBase_C* UBPItemEffectParryBase_C::GetDefaultObj()
{
	static class UBPItemEffectParryBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPItemEffectParryBase_C*>(UBPItemEffectParryBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPItemEffectParryBase.BPItemEffectParryBase_C.AddIconGlow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Remove                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPItemEffectParryBase_C::AddIconGlow(bool Remove, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPItemEffectParryBase_C", "AddIconGlow");

	Params::UBPItemEffectParryBase_C_AddIconGlow_Params Parms{};

	Parms.Remove = Remove;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPItemEffectParryBase.BPItemEffectParryBase_C.RemoveIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPItemEffectParryBase_C::RemoveIcon(class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPItemEffectParryBase_C", "RemoveIcon");

	Params::UBPItemEffectParryBase_C_RemoveIcon_Params Parms{};

	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPItemEffectParryBase.BPItemEffectParryBase_C.OnParryOver
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPItemEffectParryBase_C::OnParryOver()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPItemEffectParryBase_C", "OnParryOver");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPItemEffectParryBase.BPItemEffectParryBase_C.OnParry
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseCharacter_C*            ParriedEnemy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPItemEffectParryBase_C::OnParry(class ABaseCharacter_C* ParriedEnemy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPItemEffectParryBase_C", "OnParry");

	Params::UBPItemEffectParryBase_C_OnParry_Params Parms{};

	Parms.ParriedEnemy = ParriedEnemy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPItemEffectParryBase.BPItemEffectParryBase_C.OnSuccessfulParry
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseCharacter_C*            ParriedEnemy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPItemEffectParryBase_C::OnSuccessfulParry(class ABaseCharacter_C* ParriedEnemy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPItemEffectParryBase_C", "OnSuccessfulParry");

	Params::UBPItemEffectParryBase_C_OnSuccessfulParry_Params Parms{};

	Parms.ParriedEnemy = ParriedEnemy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPItemEffectParryBase.BPItemEffectParryBase_C.OnRipostePossible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle                RiposteWindowExpirationTimer                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            ParriedEnemy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPItemEffectParryBase_C::OnRipostePossible(const struct FTimerHandle& RiposteWindowExpirationTimer, class ABaseCharacter_C* ParriedEnemy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPItemEffectParryBase_C", "OnRipostePossible");

	Params::UBPItemEffectParryBase_C_OnRipostePossible_Params Parms{};

	Parms.RiposteWindowExpirationTimer = RiposteWindowExpirationTimer;
	Parms.ParriedEnemy = ParriedEnemy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPItemEffectParryBase.BPItemEffectParryBase_C.OnAppliedBP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABarbarous_C*                Barbarous                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               GameplayPC                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFamiliarityUnlocked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPItemEffectParryBase_C::OnAppliedBP(class ABarbarous_C* Barbarous, class AGameplayPC_C* GameplayPC, bool bFamiliarityUnlocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPItemEffectParryBase_C", "OnAppliedBP");

	Params::UBPItemEffectParryBase_C_OnAppliedBP_Params Parms{};

	Parms.Barbarous = Barbarous;
	Parms.GameplayPC = GameplayPC;
	Parms.bFamiliarityUnlocked = bFamiliarityUnlocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPItemEffectParryBase.BPItemEffectParryBase_C.ExecuteUbergraph_BPItemEffectParryBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                K2Node_Event_Barbarous                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_Event_GameplayPC                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bFamiliarityUnlocked                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseCharacter_C*            K2Node_CustomEvent_ParriedEnemy_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddStatusIcon_IconID                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_CustomEvent_ParriedEnemy_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                K2Node_CustomEvent_RiposteWindowExpirationTimer                  (NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_CustomEvent_ParriedEnemy                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)

void UBPItemEffectParryBase_C::ExecuteUbergraph_BPItemEffectParryBase(int32 EntryPoint, class ABarbarous_C* K2Node_Event_Barbarous, class AGameplayPC_C* K2Node_Event_GameplayPC, bool K2Node_Event_bFamiliarityUnlocked, class ABaseCharacter_C* K2Node_CustomEvent_ParriedEnemy_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, int32 CallFunc_AddStatusIcon_IconID, class ABaseCharacter_C* K2Node_CustomEvent_ParriedEnemy_1, const struct FTimerHandle& K2Node_CustomEvent_RiposteWindowExpirationTimer, class ABaseCharacter_C* K2Node_CustomEvent_ParriedEnemy, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPItemEffectParryBase_C", "ExecuteUbergraph_BPItemEffectParryBase");

	Params::UBPItemEffectParryBase_C_ExecuteUbergraph_BPItemEffectParryBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Barbarous = K2Node_Event_Barbarous;
	Parms.K2Node_Event_GameplayPC = K2Node_Event_GameplayPC;
	Parms.K2Node_Event_bFamiliarityUnlocked = K2Node_Event_bFamiliarityUnlocked;
	Parms.K2Node_CustomEvent_ParriedEnemy_2 = K2Node_CustomEvent_ParriedEnemy_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.CallFunc_AddStatusIcon_IconID = CallFunc_AddStatusIcon_IconID;
	Parms.K2Node_CustomEvent_ParriedEnemy_1 = K2Node_CustomEvent_ParriedEnemy_1;
	Parms.K2Node_CustomEvent_RiposteWindowExpirationTimer = K2Node_CustomEvent_RiposteWindowExpirationTimer;
	Parms.K2Node_CustomEvent_ParriedEnemy = K2Node_CustomEvent_ParriedEnemy;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


