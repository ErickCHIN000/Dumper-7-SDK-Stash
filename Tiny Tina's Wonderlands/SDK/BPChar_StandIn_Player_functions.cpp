#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPChar_StandIn_Player.BPChar_StandIn_Player_C
// (Actor, Pawn)

class UClass* ABPChar_StandIn_Player_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPChar_StandIn_Player_C");

	return Clss;
}


// BPChar_StandIn_Player_C BPChar_StandIn_Player.Default__BPChar_StandIn_Player_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPChar_StandIn_Player_C* ABPChar_StandIn_Player_C::GetDefaultObj()
{
	static class ABPChar_StandIn_Player_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPChar_StandIn_Player_C*>(ABPChar_StandIn_Player_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPChar_StandIn_Player.BPChar_StandIn_Player_C.PlayFlourishAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWwiseEvent*                 WwiseEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        SocketName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWwisePlaybackInstance      CallFunc_PostAttachedEvent_ReturnValue                           (None)

void ABPChar_StandIn_Player_C::PlayFlourishAudio(class UWwiseEvent* WwiseEvent, class FName SocketName, class APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_StandIn_Player_C", "PlayFlourishAudio");

	Params::ABPChar_StandIn_Player_C_PlayFlourishAudio_Params Parms{};

	Parms.WwiseEvent = WwiseEvent;
	Parms.SocketName = SocketName;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_PostAttachedEvent_ReturnValue = CallFunc_PostAttachedEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_StandIn_Player.BPChar_StandIn_Player_C.CheckForBAMF
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShortBAMF                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_StandIn_Player_C::CheckForBAMF(bool ShortBAMF, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Array_Find_ReturnValue1, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Find_ReturnValue2, bool CallFunc_NotEqual_IntInt_ReturnValue2, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_Array_Find_ReturnValue3, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_StandIn_Player_C", "CheckForBAMF");

	Params::ABPChar_StandIn_Player_C_CheckForBAMF_Params Parms{};

	Parms.ShortBAMF = ShortBAMF;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue1 = CallFunc_Array_Find_ReturnValue1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue1 = CallFunc_NotEqual_IntInt_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue2 = CallFunc_Array_Find_ReturnValue2;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue2 = CallFunc_NotEqual_IntInt_ReturnValue2;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue3 = CallFunc_Array_Find_ReturnValue3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_StandIn_Player.BPChar_StandIn_Player_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Setup_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)

void ABPChar_StandIn_Player_C::UserConstructionScript(bool CallFunc_Setup_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_StandIn_Player_C", "UserConstructionScript");

	Params::ABPChar_StandIn_Player_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_Setup_ReturnValue = CallFunc_Setup_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_StandIn_Player.BPChar_StandIn_Player_C.OnAnimEnd_E89E1D2E4856E630296D8B85338DF038
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_StandIn_Player_C::OnAnimEnd_E89E1D2E4856E630296D8B85338DF038()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_StandIn_Player_C", "OnAnimEnd_E89E1D2E4856E630296D8B85338DF038");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_StandIn_Player.BPChar_StandIn_Player_C.OnEnd_E89E1D2E4856E630296D8B85338DF038
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGbxActionEndState      EndState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_StandIn_Player_C::OnEnd_E89E1D2E4856E630296D8B85338DF038(enum class EGbxActionEndState EndState, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_StandIn_Player_C", "OnEnd_E89E1D2E4856E630296D8B85338DF038");

	Params::ABPChar_StandIn_Player_C_OnEnd_E89E1D2E4856E630296D8B85338DF038_Params Parms{};

	Parms.EndState = EndState;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_StandIn_Player.BPChar_StandIn_Player_C.OnAnimEnd_4CF6877F4B1AAEB39BD05EB136847DFC
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_StandIn_Player_C::OnAnimEnd_4CF6877F4B1AAEB39BD05EB136847DFC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_StandIn_Player_C", "OnAnimEnd_4CF6877F4B1AAEB39BD05EB136847DFC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_StandIn_Player.BPChar_StandIn_Player_C.OnEnd_4CF6877F4B1AAEB39BD05EB136847DFC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGbxActionEndState      EndState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_StandIn_Player_C::OnEnd_4CF6877F4B1AAEB39BD05EB136847DFC(enum class EGbxActionEndState EndState, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_StandIn_Player_C", "OnEnd_4CF6877F4B1AAEB39BD05EB136847DFC");

	Params::ABPChar_StandIn_Player_C_OnEnd_4CF6877F4B1AAEB39BD05EB136847DFC_Params Parms{};

	Parms.EndState = EndState;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_StandIn_Player.BPChar_StandIn_Player_C.OnAnimEnd_77CB4E4C4E1F86E5E8B9C69D9FC7FDFD
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_StandIn_Player_C::OnAnimEnd_77CB4E4C4E1F86E5E8B9C69D9FC7FDFD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_StandIn_Player_C", "OnAnimEnd_77CB4E4C4E1F86E5E8B9C69D9FC7FDFD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_StandIn_Player.BPChar_StandIn_Player_C.OnEnd_77CB4E4C4E1F86E5E8B9C69D9FC7FDFD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGbxActionEndState      EndState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_StandIn_Player_C::OnEnd_77CB4E4C4E1F86E5E8B9C69D9FC7FDFD(enum class EGbxActionEndState EndState, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_StandIn_Player_C", "OnEnd_77CB4E4C4E1F86E5E8B9C69D9FC7FDFD");

	Params::ABPChar_StandIn_Player_C_OnEnd_77CB4E4C4E1F86E5E8B9C69D9FC7FDFD_Params Parms{};

	Parms.EndState = EndState;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_StandIn_Player.BPChar_StandIn_Player_C.OnAnimEnd_B2099AE74F102E7CB2764196D182A01A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_StandIn_Player_C::OnAnimEnd_B2099AE74F102E7CB2764196D182A01A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_StandIn_Player_C", "OnAnimEnd_B2099AE74F102E7CB2764196D182A01A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_StandIn_Player.BPChar_StandIn_Player_C.OnEnd_B2099AE74F102E7CB2764196D182A01A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGbxActionEndState      EndState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_StandIn_Player_C::OnEnd_B2099AE74F102E7CB2764196D182A01A(enum class EGbxActionEndState EndState, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_StandIn_Player_C", "OnEnd_B2099AE74F102E7CB2764196D182A01A");

	Params::ABPChar_StandIn_Player_C_OnEnd_B2099AE74F102E7CB2764196D182A01A_Params Parms{};

	Parms.EndState = EndState;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_StandIn_Player.BPChar_StandIn_Player_C.OnAnimEnd_24DAC42E48EDDEB865F0CEB59D674138
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_StandIn_Player_C::OnAnimEnd_24DAC42E48EDDEB865F0CEB59D674138()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_StandIn_Player_C", "OnAnimEnd_24DAC42E48EDDEB865F0CEB59D674138");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_StandIn_Player.BPChar_StandIn_Player_C.OnEnd_24DAC42E48EDDEB865F0CEB59D674138
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGbxActionEndState      EndState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_StandIn_Player_C::OnEnd_24DAC42E48EDDEB865F0CEB59D674138(enum class EGbxActionEndState EndState, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_StandIn_Player_C", "OnEnd_24DAC42E48EDDEB865F0CEB59D674138");

	Params::ABPChar_StandIn_Player_C_OnEnd_24DAC42E48EDDEB865F0CEB59D674138_Params Parms{};

	Parms.EndState = EndState;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_StandIn_Player.BPChar_StandIn_Player_C.OnInventoryEquipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      InventoryActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventorySlotData*          SlotData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_StandIn_Player_C::OnInventoryEquipped(class AActor* InventoryActor, class UInventorySlotData* SlotData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_StandIn_Player_C", "OnInventoryEquipped");

	Params::ABPChar_StandIn_Player_C_OnInventoryEquipped_Params Parms{};

	Parms.InventoryActor = InventoryActor;
	Parms.SlotData = SlotData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_StandIn_Player.BPChar_StandIn_Player_C.OnInventoryUnequipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      InventoryActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventorySlotData*          SlotData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_StandIn_Player_C::OnInventoryUnequipped(class AActor* InventoryActor, class UInventorySlotData* SlotData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_StandIn_Player_C", "OnInventoryUnequipped");

	Params::ABPChar_StandIn_Player_C_OnInventoryUnequipped_Params Parms{};

	Parms.InventoryActor = InventoryActor;
	Parms.SlotData = SlotData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_StandIn_Player.BPChar_StandIn_Player_C.BAMFIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WithDelay                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              DelayDuration                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShortBAMF                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_StandIn_Player_C::BAMFIn(bool WithDelay, float DelayDuration, bool ShortBAMF)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_StandIn_Player_C", "BAMFIn");

	Params::ABPChar_StandIn_Player_C_BAMFIn_Params Parms{};

	Parms.WithDelay = WithDelay;
	Parms.DelayDuration = DelayDuration;
	Parms.ShortBAMF = ShortBAMF;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_StandIn_Player.BPChar_StandIn_Player_C.PlayStandinAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ActionToPlay                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_StandIn_Player_C::PlayStandinAction(class UClass* ActionToPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_StandIn_Player_C", "PlayStandinAction");

	Params::ABPChar_StandIn_Player_C_PlayStandinAction_Params Parms{};

	Parms.ActionToPlay = ActionToPlay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_StandIn_Player.BPChar_StandIn_Player_C.PlayStandInActionWithCooldown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ActionToPlay                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_StandIn_Player_C::PlayStandInActionWithCooldown(class UClass* ActionToPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_StandIn_Player_C", "PlayStandInActionWithCooldown");

	Params::ABPChar_StandIn_Player_C_PlayStandInActionWithCooldown_Params Parms{};

	Parms.ActionToPlay = ActionToPlay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_StandIn_Player.BPChar_StandIn_Player_C.ResetActionCooldown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_StandIn_Player_C::ResetActionCooldown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_StandIn_Player_C", "ResetActionCooldown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_StandIn_Player.BPChar_StandIn_Player_C.OnStandInConfigurationChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        NewConfig                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_StandIn_Player_C::OnStandInConfigurationChanged(class FName NewConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_StandIn_Player_C", "OnStandInConfigurationChanged");

	Params::ABPChar_StandIn_Player_C_OnStandInConfigurationChanged_Params Parms{};

	Parms.NewConfig = NewConfig;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_StandIn_Player.BPChar_StandIn_Player_C.PlayCharacterCreationFlourish
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ActionToPlay                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakPlayerClass         Class                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_StandIn_Player_C::PlayCharacterCreationFlourish(class UClass* ActionToPlay, enum class EOakPlayerClass Class)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_StandIn_Player_C", "PlayCharacterCreationFlourish");

	Params::ABPChar_StandIn_Player_C_PlayCharacterCreationFlourish_Params Parms{};

	Parms.ActionToPlay = ActionToPlay;
	Parms.Class = Class;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_StandIn_Player.BPChar_StandIn_Player_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABPChar_StandIn_Player_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_StandIn_Player_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_StandIn_Player.BPChar_StandIn_Player_C.InitCCAnimInstance
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_StandIn_Player_C::InitCCAnimInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_StandIn_Player_C", "InitCCAnimInstance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_StandIn_Player.BPChar_StandIn_Player_C.Audio_Standin_Barbarian_AxeSlam
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_StandIn_Player_C::Audio_Standin_Barbarian_AxeSlam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_StandIn_Player_C", "Audio_Standin_Barbarian_AxeSlam");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_StandIn_Player.BPChar_StandIn_Player_C.Audio_StandIn_Barbarian_Whirlwind
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_StandIn_Player_C::Audio_StandIn_Barbarian_Whirlwind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_StandIn_Player_C", "Audio_StandIn_Barbarian_Whirlwind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_StandIn_Player.BPChar_StandIn_Player_C.Audio_StandIn_GunMage_Polymorph
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_StandIn_Player_C::Audio_StandIn_GunMage_Polymorph()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_StandIn_Player_C", "Audio_StandIn_GunMage_Polymorph");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_StandIn_Player.BPChar_StandIn_Player_C.Audio_StandIn_Knight_HammerToss
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_StandIn_Player_C::Audio_StandIn_Knight_HammerToss()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_StandIn_Player_C", "Audio_StandIn_Knight_HammerToss");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_StandIn_Player.BPChar_StandIn_Player_C.Audio_StandIn_Knight_FireyRedemption
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_StandIn_Player_C::Audio_StandIn_Knight_FireyRedemption()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_StandIn_Player_C", "Audio_StandIn_Knight_FireyRedemption");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_StandIn_Player.BPChar_StandIn_Player_C.Audio_StandIn_Necromancer_Sacrifice
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_StandIn_Player_C::Audio_StandIn_Necromancer_Sacrifice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_StandIn_Player_C", "Audio_StandIn_Necromancer_Sacrifice");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_StandIn_Player.BPChar_StandIn_Player_C.Audio_StandIn_Necromancer_ReaperOfSouls
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_StandIn_Player_C::Audio_StandIn_Necromancer_ReaperOfSouls()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_StandIn_Player_C", "Audio_StandIn_Necromancer_ReaperOfSouls");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_StandIn_Player.BPChar_StandIn_Player_C.Audio_StandIn_Ranger_CalledShot
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_StandIn_Player_C::Audio_StandIn_Ranger_CalledShot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_StandIn_Player_C", "Audio_StandIn_Ranger_CalledShot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_StandIn_Player.BPChar_StandIn_Player_C.Audio_StandIn_Ranger_Cryonado
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_StandIn_Player_C::Audio_StandIn_Ranger_Cryonado()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_StandIn_Player_C", "Audio_StandIn_Ranger_Cryonado");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_StandIn_Player.BPChar_StandIn_Player_C.Audio_StandIn_Rogue_LivingBlade
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_StandIn_Player_C::Audio_StandIn_Rogue_LivingBlade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_StandIn_Player_C", "Audio_StandIn_Rogue_LivingBlade");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_StandIn_Player.BPChar_StandIn_Player_C.Audio_StandIn_Rogue_Stealth
// (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_StandIn_Player_C::Audio_StandIn_Rogue_Stealth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_StandIn_Player_C", "Audio_StandIn_Rogue_Stealth");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_StandIn_Player.BPChar_StandIn_Player_C.BAMFWithDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_StandIn_Player_C::BAMFWithDelay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_StandIn_Player_C", "BAMFWithDelay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_StandIn_Player.BPChar_StandIn_Player_C.ExecuteUbergraph_BPChar_StandIn_Player
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class EGbxActionEndState      K2Node_CustomEvent_EndState1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Actor1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class AActor*                      Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGbxActionEndState      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// enum class EGbxActionEndState      K2Node_CustomEvent_EndState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Actor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class AActor*                      Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGbxActionEndState      Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGbxActionEndState      Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBPAnim_Standin_NoWeapon_C*  K2Node_DynamicCast_AsBPAnim_Standin_No_Weapon                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBPAnim_Standin_NoWeapon_C*  K2Node_DynamicCast_AsBPAnim_Standin_No_Weapon1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGbxActionEndState      K2Node_CustomEvent_EndState2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Actor2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// enum class EGbxActionEndState      Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// class AActor*                      Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_InventoryActor1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventorySlotData*          K2Node_CustomEvent_SlotData1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakInventoryEquippableItem* K2Node_DynamicCast_AsOak_Inventory_Equippable_Item               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_InventoryActor                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventorySlotData*          K2Node_CustomEvent_SlotData                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakInventoryEquippableItem* K2Node_DynamicCast_AsOak_Inventory_Equippable_Item1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_WithDelay                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_DelayDuration                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ShortBAMF                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_ActionToPlay2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_ActionToPlay1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate6                            (ZeroConstructor, NoDestructor)
// class FName                        K2Node_Event_NewConfig                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayingClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBPAnim_Standin_NoWeapon_C*  K2Node_DynamicCast_AsBPAnim_Standin_No_Weapon2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_CustomEvent_ActionToPlay                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakPlayerClass         K2Node_CustomEvent_class                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGbxActionRegister>  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// enum class EGbxActionEndState      K2Node_CustomEvent_EndState3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Actor3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate7                            (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate8                            (ZeroConstructor, NoDestructor)
// enum class EGbxActionEndState      Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Temp_object_Variable4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGbxActionRegister>  Temp_struct_Variable1                                            (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<struct FGbxActionRegister>  Temp_struct_Variable2                                            (ConstParm, ZeroConstructor, ReferenceParm)
// class UGameplayTask_PlayGbxAction* CallFunc_PlayGbxAction_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayTask_PlayGbxAction* CallFunc_PlayGbxAction_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayingClass_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGbxActionEndState      K2Node_CustomEvent_EndState4                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Actor4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGbxActionRegister>  Temp_struct_Variable3                                            (ConstParm, ZeroConstructor, ReferenceParm)
// class UGameplayTask_PlayGbxAction* CallFunc_PlayGbxAction_ReturnValue2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayTask_PlayGbxAction* CallFunc_PlayGbxAction_ReturnValue3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate9                            (ZeroConstructor, NoDestructor)
// TArray<struct FGbxActionRegister>  Temp_struct_Variable4                                            (ConstParm, ZeroConstructor, ReferenceParm)
// class UGameplayTask_PlayGbxAction* CallFunc_PlayGbxAction_ReturnValue4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_StandIn_Player_C::ExecuteUbergraph_BPChar_StandIn_Player(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EGbxActionEndState K2Node_CustomEvent_EndState1, class AActor* K2Node_CustomEvent_Actor1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class AActor* Temp_object_Variable, enum class EGbxActionEndState Temp_byte_Variable, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable1, bool Temp_bool_Variable1, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, enum class EGbxActionEndState K2Node_CustomEvent_EndState, class AActor* K2Node_CustomEvent_Actor, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class AActor* Temp_object_Variable1, enum class EGbxActionEndState Temp_byte_Variable1, enum class EGbxActionEndState Temp_byte_Variable2, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UBPAnim_Standin_NoWeapon_C* K2Node_DynamicCast_AsBPAnim_Standin_No_Weapon, bool K2Node_DynamicCast_bSuccess, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue1, class AActor* Temp_object_Variable2, class UBPAnim_Standin_NoWeapon_C* K2Node_DynamicCast_AsBPAnim_Standin_No_Weapon1, bool K2Node_DynamicCast_bSuccess1, bool Temp_bool_IsClosed_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_Not_PreBool_ReturnValue1, enum class EGbxActionEndState K2Node_CustomEvent_EndState2, class AActor* K2Node_CustomEvent_Actor2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, enum class EGbxActionEndState Temp_byte_Variable3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class AActor* Temp_object_Variable3, class AActor* K2Node_CustomEvent_InventoryActor1, class UInventorySlotData* K2Node_CustomEvent_SlotData1, class AOakInventoryEquippableItem* K2Node_DynamicCast_AsOak_Inventory_Equippable_Item, bool K2Node_DynamicCast_bSuccess2, class AActor* K2Node_CustomEvent_InventoryActor, class UInventorySlotData* K2Node_CustomEvent_SlotData, class AOakInventoryEquippableItem* K2Node_DynamicCast_AsOak_Inventory_Equippable_Item1, bool K2Node_DynamicCast_bSuccess3, bool K2Node_CustomEvent_WithDelay, float K2Node_CustomEvent_DelayDuration, bool K2Node_CustomEvent_ShortBAMF, class UClass* K2Node_Select_Default, class UClass* K2Node_CustomEvent_ActionToPlay2, class UClass* K2Node_CustomEvent_ActionToPlay1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class FName K2Node_Event_NewConfig, bool CallFunc_IsPlayingClass_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue2, class UBPAnim_Standin_NoWeapon_C* K2Node_DynamicCast_AsBPAnim_Standin_No_Weapon2, bool K2Node_DynamicCast_bSuccess4, class UClass* K2Node_CustomEvent_ActionToPlay, enum class EOakPlayerClass K2Node_CustomEvent_class, TArray<struct FGbxActionRegister>& Temp_struct_Variable, enum class EGbxActionEndState K2Node_CustomEvent_EndState3, class AActor* K2Node_CustomEvent_Actor3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, bool Temp_bool_Has_Been_Initd_Variable1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool Temp_bool_IsClosed_Variable1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue3, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, enum class EGbxActionEndState Temp_byte_Variable4, class AActor* Temp_object_Variable4, TArray<struct FGbxActionRegister>& Temp_struct_Variable1, TArray<struct FGbxActionRegister>& Temp_struct_Variable2, class UGameplayTask_PlayGbxAction* CallFunc_PlayGbxAction_ReturnValue, class UGameplayTask_PlayGbxAction* CallFunc_PlayGbxAction_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsPlayingClass_ReturnValue1, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_EqualEqual_NameName_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue2, int32 K2Node_Select1_Default, bool CallFunc_EqualEqual_NameName_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue1, enum class EGbxActionEndState K2Node_CustomEvent_EndState4, class AActor* K2Node_CustomEvent_Actor4, TArray<struct FGbxActionRegister>& Temp_struct_Variable3, class UGameplayTask_PlayGbxAction* CallFunc_PlayGbxAction_ReturnValue2, class UGameplayTask_PlayGbxAction* CallFunc_PlayGbxAction_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_IsValid_ReturnValue5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, TArray<struct FGbxActionRegister>& Temp_struct_Variable4, class UGameplayTask_PlayGbxAction* CallFunc_PlayGbxAction_ReturnValue4, bool CallFunc_IsValid_ReturnValue6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_StandIn_Player_C", "ExecuteUbergraph_BPChar_StandIn_Player");

	Params::ABPChar_StandIn_Player_C_ExecuteUbergraph_BPChar_StandIn_Player_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_EndState1 = K2Node_CustomEvent_EndState1;
	Parms.K2Node_CustomEvent_Actor1 = K2Node_CustomEvent_Actor1;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable1 = Temp_class_Variable1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CustomEvent_EndState = K2Node_CustomEvent_EndState;
	Parms.K2Node_CustomEvent_Actor = K2Node_CustomEvent_Actor;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPAnim_Standin_No_Weapon = K2Node_DynamicCast_AsBPAnim_Standin_No_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAnimInstance_ReturnValue1 = CallFunc_GetAnimInstance_ReturnValue1;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.K2Node_DynamicCast_AsBPAnim_Standin_No_Weapon1 = K2Node_DynamicCast_AsBPAnim_Standin_No_Weapon1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.K2Node_CustomEvent_EndState2 = K2Node_CustomEvent_EndState2;
	Parms.K2Node_CustomEvent_Actor2 = K2Node_CustomEvent_Actor2;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.K2Node_CustomEvent_InventoryActor1 = K2Node_CustomEvent_InventoryActor1;
	Parms.K2Node_CustomEvent_SlotData1 = K2Node_CustomEvent_SlotData1;
	Parms.K2Node_DynamicCast_AsOak_Inventory_Equippable_Item = K2Node_DynamicCast_AsOak_Inventory_Equippable_Item;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_CustomEvent_InventoryActor = K2Node_CustomEvent_InventoryActor;
	Parms.K2Node_CustomEvent_SlotData = K2Node_CustomEvent_SlotData;
	Parms.K2Node_DynamicCast_AsOak_Inventory_Equippable_Item1 = K2Node_DynamicCast_AsOak_Inventory_Equippable_Item1;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.K2Node_CustomEvent_WithDelay = K2Node_CustomEvent_WithDelay;
	Parms.K2Node_CustomEvent_DelayDuration = K2Node_CustomEvent_DelayDuration;
	Parms.K2Node_CustomEvent_ShortBAMF = K2Node_CustomEvent_ShortBAMF;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_ActionToPlay2 = K2Node_CustomEvent_ActionToPlay2;
	Parms.K2Node_CustomEvent_ActionToPlay1 = K2Node_CustomEvent_ActionToPlay1;
	Parms.K2Node_CreateDelegate_OutputDelegate6 = K2Node_CreateDelegate_OutputDelegate6;
	Parms.K2Node_Event_NewConfig = K2Node_Event_NewConfig;
	Parms.CallFunc_IsPlayingClass_ReturnValue = CallFunc_IsPlayingClass_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue2 = CallFunc_GetAnimInstance_ReturnValue2;
	Parms.K2Node_DynamicCast_AsBPAnim_Standin_No_Weapon2 = K2Node_DynamicCast_AsBPAnim_Standin_No_Weapon2;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.K2Node_CustomEvent_ActionToPlay = K2Node_CustomEvent_ActionToPlay;
	Parms.K2Node_CustomEvent_class = K2Node_CustomEvent_class;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CustomEvent_EndState3 = K2Node_CustomEvent_EndState3;
	Parms.K2Node_CustomEvent_Actor3 = K2Node_CustomEvent_Actor3;
	Parms.K2Node_CreateDelegate_OutputDelegate7 = K2Node_CreateDelegate_OutputDelegate7;
	Parms.Temp_bool_Has_Been_Initd_Variable1 = Temp_bool_Has_Been_Initd_Variable1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.Temp_bool_IsClosed_Variable1 = Temp_bool_IsClosed_Variable1;
	Parms.CallFunc_GetAnimInstance_ReturnValue3 = CallFunc_GetAnimInstance_ReturnValue3;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate8 = K2Node_CreateDelegate_OutputDelegate8;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.CallFunc_PlayGbxAction_ReturnValue = CallFunc_PlayGbxAction_ReturnValue;
	Parms.CallFunc_PlayGbxAction_ReturnValue1 = CallFunc_PlayGbxAction_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_IsPlayingClass_ReturnValue1 = CallFunc_IsPlayingClass_ReturnValue1;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue1 = CallFunc_EqualEqual_NameName_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue2 = CallFunc_EqualEqual_NameName_ReturnValue2;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue3 = CallFunc_EqualEqual_NameName_ReturnValue3;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.K2Node_CustomEvent_EndState4 = K2Node_CustomEvent_EndState4;
	Parms.K2Node_CustomEvent_Actor4 = K2Node_CustomEvent_Actor4;
	Parms.Temp_struct_Variable3 = Temp_struct_Variable3;
	Parms.CallFunc_PlayGbxAction_ReturnValue2 = CallFunc_PlayGbxAction_ReturnValue2;
	Parms.CallFunc_PlayGbxAction_ReturnValue3 = CallFunc_PlayGbxAction_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;
	Parms.K2Node_CreateDelegate_OutputDelegate9 = K2Node_CreateDelegate_OutputDelegate9;
	Parms.Temp_struct_Variable4 = Temp_struct_Variable4;
	Parms.CallFunc_PlayGbxAction_ReturnValue4 = CallFunc_PlayGbxAction_ReturnValue4;
	Parms.CallFunc_IsValid_ReturnValue6 = CallFunc_IsValid_ReturnValue6;

	UObject::ProcessEvent(Func, &Parms);

}

}


