#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPItemEffectDmgBlockedBase.BPItemEffectDmgBlockedBase_C
// (None)

class UClass* UBPItemEffectDmgBlockedBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPItemEffectDmgBlockedBase_C");

	return Clss;
}


// BPItemEffectDmgBlockedBase_C BPItemEffectDmgBlockedBase.Default__BPItemEffectDmgBlockedBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPItemEffectDmgBlockedBase_C* UBPItemEffectDmgBlockedBase_C::GetDefaultObj()
{
	static class UBPItemEffectDmgBlockedBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPItemEffectDmgBlockedBase_C*>(UBPItemEffectDmgBlockedBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPItemEffectDmgBlockedBase.BPItemEffectDmgBlockedBase_C.OnDamageBlocked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      SourceActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPItemEffectDmgBlockedBase_C::OnDamageBlocked(class AActor* SourceActor, float Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPItemEffectDmgBlockedBase_C", "OnDamageBlocked");

	Params::UBPItemEffectDmgBlockedBase_C_OnDamageBlocked_Params Parms{};

	Parms.SourceActor = SourceActor;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPItemEffectDmgBlockedBase.BPItemEffectDmgBlockedBase_C.OnAppliedBP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABarbarous_C*                Barbarous                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               GameplayPC                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFamiliarityUnlocked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPItemEffectDmgBlockedBase_C::OnAppliedBP(class ABarbarous_C* Barbarous, class AGameplayPC_C* GameplayPC, bool bFamiliarityUnlocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPItemEffectDmgBlockedBase_C", "OnAppliedBP");

	Params::UBPItemEffectDmgBlockedBase_C_OnAppliedBP_Params Parms{};

	Parms.Barbarous = Barbarous;
	Parms.GameplayPC = GameplayPC;
	Parms.bFamiliarityUnlocked = bFamiliarityUnlocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPItemEffectDmgBlockedBase.BPItemEffectDmgBlockedBase_C.DmgBlock
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      SourceActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPItemEffectDmgBlockedBase_C::DmgBlock(class AActor* SourceActor, float Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPItemEffectDmgBlockedBase_C", "DmgBlock");

	Params::UBPItemEffectDmgBlockedBase_C_DmgBlock_Params Parms{};

	Parms.SourceActor = SourceActor;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPItemEffectDmgBlockedBase.BPItemEffectDmgBlockedBase_C.ExecuteUbergraph_BPItemEffectDmgBlockedBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_SourceActor_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Amount_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                K2Node_Event_Barbarous                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_Event_GameplayPC                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bFamiliarityUnlocked                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddStatusIcon_IconID                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_SourceActor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Amount                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPItemEffectDmgBlockedBase_C::ExecuteUbergraph_BPItemEffectDmgBlockedBase(int32 EntryPoint, class AActor* K2Node_CustomEvent_SourceActor_1, float K2Node_CustomEvent_Amount_1, class ABarbarous_C* K2Node_Event_Barbarous, class AGameplayPC_C* K2Node_Event_GameplayPC, bool K2Node_Event_bFamiliarityUnlocked, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1, int32 CallFunc_AddStatusIcon_IconID, class AActor* K2Node_CustomEvent_SourceActor, float K2Node_CustomEvent_Amount, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPItemEffectDmgBlockedBase_C", "ExecuteUbergraph_BPItemEffectDmgBlockedBase");

	Params::UBPItemEffectDmgBlockedBase_C_ExecuteUbergraph_BPItemEffectDmgBlockedBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_SourceActor_1 = K2Node_CustomEvent_SourceActor_1;
	Parms.K2Node_CustomEvent_Amount_1 = K2Node_CustomEvent_Amount_1;
	Parms.K2Node_Event_Barbarous = K2Node_Event_Barbarous;
	Parms.K2Node_Event_GameplayPC = K2Node_Event_GameplayPC;
	Parms.K2Node_Event_bFamiliarityUnlocked = K2Node_Event_bFamiliarityUnlocked;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1 = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1;
	Parms.CallFunc_AddStatusIcon_IconID = CallFunc_AddStatusIcon_IconID;
	Parms.K2Node_CustomEvent_SourceActor = K2Node_CustomEvent_SourceActor;
	Parms.K2Node_CustomEvent_Amount = K2Node_CustomEvent_Amount;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


