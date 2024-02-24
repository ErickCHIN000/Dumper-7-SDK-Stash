#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_InteractableCustom_01_NoSave.ba_InteractableCustom_01_NoSave_C
// (Actor)

class UClass* Aba_InteractableCustom_01_NoSave_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_InteractableCustom_01_NoSave_C");

	return Clss;
}


// ba_InteractableCustom_01_NoSave_C ba_InteractableCustom_01_NoSave.Default__ba_InteractableCustom_01_NoSave_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_InteractableCustom_01_NoSave_C* Aba_InteractableCustom_01_NoSave_C::GetDefaultObj()
{
	static class Aba_InteractableCustom_01_NoSave_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_InteractableCustom_01_NoSave_C*>(Aba_InteractableCustom_01_NoSave_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_InteractableCustom_01_NoSave.ba_InteractableCustom_01_NoSave_C.PowerOn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InteractableCustom_01_NoSave_C::PowerOn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InteractableCustom_01_NoSave_C", "PowerOn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InteractableCustom_01_NoSave.ba_InteractableCustom_01_NoSave_C.PowerOff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InteractableCustom_01_NoSave_C::PowerOff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InteractableCustom_01_NoSave_C", "PowerOff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InteractableCustom_01_NoSave.ba_InteractableCustom_01_NoSave_C.InteractionOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InteractableCustom_01_NoSave_C::InteractionOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InteractableCustom_01_NoSave_C", "InteractionOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InteractableCustom_01_NoSave.ba_InteractableCustom_01_NoSave_C.MaxInteractionDistance
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float Aba_InteractableCustom_01_NoSave_C::MaxInteractionDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InteractableCustom_01_NoSave_C", "MaxInteractionDistance");

	Params::Aba_InteractableCustom_01_NoSave_C_MaxInteractionDistance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_InteractableCustom_01_NoSave.ba_InteractableCustom_01_NoSave_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InNewActive                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_InteractableCustom_01_NoSave_C::SetActive(bool InNewActive, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InteractableCustom_01_NoSave_C", "SetActive");

	Params::Aba_InteractableCustom_01_NoSave_C_SetActive_Params Parms{};

	Parms.InNewActive = InNewActive;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InteractableCustom_01_NoSave.ba_InteractableCustom_01_NoSave_C.OnInteractionPressedComponent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMainPawnCpp*                PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             ComponentHit                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_InteractableCustom_01_NoSave_C::OnInteractionPressedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InteractableCustom_01_NoSave_C", "OnInteractionPressedComponent");

	Params::Aba_InteractableCustom_01_NoSave_C_OnInteractionPressedComponent_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.ComponentHit = ComponentHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InteractableCustom_01_NoSave.ba_InteractableCustom_01_NoSave_C.InternalOnInteractionLockedStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InteractableCustom_01_NoSave_C::InternalOnInteractionLockedStateChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InteractableCustom_01_NoSave_C", "InternalOnInteractionLockedStateChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InteractableCustom_01_NoSave.ba_InteractableCustom_01_NoSave_C.OnPlayerFocusLostComponent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMainPawnCpp*                PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             ComponentHit                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_InteractableCustom_01_NoSave_C::OnPlayerFocusLostComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InteractableCustom_01_NoSave_C", "OnPlayerFocusLostComponent");

	Params::Aba_InteractableCustom_01_NoSave_C_OnPlayerFocusLostComponent_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.ComponentHit = ComponentHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InteractableCustom_01_NoSave.ba_InteractableCustom_01_NoSave_C.OnPlayerFocusGainedComponent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMainPawnCpp*                PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             ComponentHit                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_InteractableCustom_01_NoSave_C::OnPlayerFocusGainedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InteractableCustom_01_NoSave_C", "OnPlayerFocusGainedComponent");

	Params::Aba_InteractableCustom_01_NoSave_C_OnPlayerFocusGainedComponent_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.ComponentHit = ComponentHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InteractableCustom_01_NoSave.ba_InteractableCustom_01_NoSave_C.OnPlayerNearFocusGainedComponent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMainPawnCpp*                PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             ComponentHit                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_InteractableCustom_01_NoSave_C::OnPlayerNearFocusGainedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InteractableCustom_01_NoSave_C", "OnPlayerNearFocusGainedComponent");

	Params::Aba_InteractableCustom_01_NoSave_C_OnPlayerNearFocusGainedComponent_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.ComponentHit = ComponentHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InteractableCustom_01_NoSave.ba_InteractableCustom_01_NoSave_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void Aba_InteractableCustom_01_NoSave_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InteractableCustom_01_NoSave_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InteractableCustom_01_NoSave.ba_InteractableCustom_01_NoSave_C.ExecuteUbergraph_ba_InteractableCustom_01_NoSave
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMainPawnCpp*                K2Node_Event_PlayerPawn_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             K2Node_Event_ComponentHit_3                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerAbleToInteract_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AMainPawnCpp*                K2Node_Event_PlayerPawn_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             K2Node_Event_ComponentHit_2                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMainPawnCpp*                K2Node_Event_PlayerPawn_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             K2Node_Event_ComponentHit_1                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CallFunctionOnLevelActor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AMainPawnCpp*                K2Node_Event_PlayerPawn                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             K2Node_Event_ComponentHit                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInteractionUnlocked_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentPersistantLevel_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)

void Aba_InteractableCustom_01_NoSave_C::ExecuteUbergraph_ba_InteractableCustom_01_NoSave(int32 EntryPoint, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class AMainPawnCpp* K2Node_Event_PlayerPawn_3, class UActorComponent* K2Node_Event_ComponentHit_3, bool CallFunc_IsPlayerAbleToInteract_ReturnValue, class AMainPawnCpp* K2Node_Event_PlayerPawn_2, class UActorComponent* K2Node_Event_ComponentHit_2, class AMainPawnCpp* K2Node_Event_PlayerPawn_1, class UActorComponent* K2Node_Event_ComponentHit_1, bool CallFunc_CallFunctionOnLevelActor_ReturnValue, class AMainPawnCpp* K2Node_Event_PlayerPawn, class UActorComponent* K2Node_Event_ComponentHit, bool CallFunc_IsInteractionUnlocked_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class FName CallFunc_GetCurrentPersistantLevel_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InteractableCustom_01_NoSave_C", "ExecuteUbergraph_ba_InteractableCustom_01_NoSave");

	Params::Aba_InteractableCustom_01_NoSave_C_ExecuteUbergraph_ba_InteractableCustom_01_NoSave_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.K2Node_Event_PlayerPawn_3 = K2Node_Event_PlayerPawn_3;
	Parms.K2Node_Event_ComponentHit_3 = K2Node_Event_ComponentHit_3;
	Parms.CallFunc_IsPlayerAbleToInteract_ReturnValue = CallFunc_IsPlayerAbleToInteract_ReturnValue;
	Parms.K2Node_Event_PlayerPawn_2 = K2Node_Event_PlayerPawn_2;
	Parms.K2Node_Event_ComponentHit_2 = K2Node_Event_ComponentHit_2;
	Parms.K2Node_Event_PlayerPawn_1 = K2Node_Event_PlayerPawn_1;
	Parms.K2Node_Event_ComponentHit_1 = K2Node_Event_ComponentHit_1;
	Parms.CallFunc_CallFunctionOnLevelActor_ReturnValue = CallFunc_CallFunctionOnLevelActor_ReturnValue;
	Parms.K2Node_Event_PlayerPawn = K2Node_Event_PlayerPawn;
	Parms.K2Node_Event_ComponentHit = K2Node_Event_ComponentHit;
	Parms.CallFunc_IsInteractionUnlocked_ReturnValue = CallFunc_IsInteractionUnlocked_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCurrentPersistantLevel_ReturnValue = CallFunc_GetCurrentPersistantLevel_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InteractableCustom_01_NoSave.ba_InteractableCustom_01_NoSave_C.OnFocusLost__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InteractableCustom_01_NoSave_C::OnFocusLost__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InteractableCustom_01_NoSave_C", "OnFocusLost__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InteractableCustom_01_NoSave.ba_InteractableCustom_01_NoSave_C.OnFocusGain__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InteractableCustom_01_NoSave_C::OnFocusGain__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InteractableCustom_01_NoSave_C", "OnFocusGain__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InteractableCustom_01_NoSave.ba_InteractableCustom_01_NoSave_C.InteractionHasHappend__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InteractableCustom_01_NoSave_C::InteractionHasHappend__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InteractableCustom_01_NoSave_C", "InteractionHasHappend__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InteractableCustom_01_NoSave.ba_InteractableCustom_01_NoSave_C.OnInteractionWith__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InteractableCustom_01_NoSave_C::OnInteractionWith__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InteractableCustom_01_NoSave_C", "OnInteractionWith__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


