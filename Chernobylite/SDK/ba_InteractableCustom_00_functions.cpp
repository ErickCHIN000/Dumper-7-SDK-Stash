#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_InteractableCustom_00.ba_InteractableCustom_00_C
// (Actor)

class UClass* Aba_InteractableCustom_00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_InteractableCustom_00_C");

	return Clss;
}


// ba_InteractableCustom_00_C ba_InteractableCustom_00.Default__ba_InteractableCustom_00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_InteractableCustom_00_C* Aba_InteractableCustom_00_C::GetDefaultObj()
{
	static class Aba_InteractableCustom_00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_InteractableCustom_00_C*>(Aba_InteractableCustom_00_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_InteractableCustom_00.ba_InteractableCustom_00_C.InteractionOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InteractableCustom_00_C::InteractionOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InteractableCustom_00_C", "InteractionOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InteractableCustom_00.ba_InteractableCustom_00_C.MaxInteractionDistance
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float Aba_InteractableCustom_00_C::MaxInteractionDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InteractableCustom_00_C", "MaxInteractionDistance");

	Params::Aba_InteractableCustom_00_C_MaxInteractionDistance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_InteractableCustom_00.ba_InteractableCustom_00_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InNewActive                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_InteractableCustom_00_C::SetActive(bool InNewActive, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InteractableCustom_00_C", "SetActive");

	Params::Aba_InteractableCustom_00_C_SetActive_Params Parms{};

	Parms.InNewActive = InNewActive;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InteractableCustom_00.ba_InteractableCustom_00_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InteractableCustom_00_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InteractableCustom_00_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InteractableCustom_00.ba_InteractableCustom_00_C.OnPlayerFocusGainedComponent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMainPawnCpp*                PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             ComponentHit                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_InteractableCustom_00_C::OnPlayerFocusGainedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InteractableCustom_00_C", "OnPlayerFocusGainedComponent");

	Params::Aba_InteractableCustom_00_C_OnPlayerFocusGainedComponent_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.ComponentHit = ComponentHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InteractableCustom_00.ba_InteractableCustom_00_C.OnPlayerFocusLostComponent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMainPawnCpp*                PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             ComponentHit                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_InteractableCustom_00_C::OnPlayerFocusLostComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InteractableCustom_00_C", "OnPlayerFocusLostComponent");

	Params::Aba_InteractableCustom_00_C_OnPlayerFocusLostComponent_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.ComponentHit = ComponentHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InteractableCustom_00.ba_InteractableCustom_00_C.OnInteractionPressedComponent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMainPawnCpp*                PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             ComponentHit                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_InteractableCustom_00_C::OnInteractionPressedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InteractableCustom_00_C", "OnInteractionPressedComponent");

	Params::Aba_InteractableCustom_00_C_OnInteractionPressedComponent_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.ComponentHit = ComponentHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InteractableCustom_00.ba_InteractableCustom_00_C.InternalOnInteractionLockedStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InteractableCustom_00_C::InternalOnInteractionLockedStateChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InteractableCustom_00_C", "InternalOnInteractionLockedStateChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_InteractableCustom_00.ba_InteractableCustom_00_C.ExecuteUbergraph_ba_InteractableCustom_00
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMainPawnCpp*                K2Node_Event_PlayerPawn_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             K2Node_Event_ComponentHit_2                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMainPawnCpp*                K2Node_Event_PlayerPawn_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             K2Node_Event_ComponentHit_1                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMainPawnCpp*                K2Node_Event_PlayerPawn                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             K2Node_Event_ComponentHit                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerAbleToInteract_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void Aba_InteractableCustom_00_C::ExecuteUbergraph_ba_InteractableCustom_00(int32 EntryPoint, class AMainPawnCpp* K2Node_Event_PlayerPawn_2, class UActorComponent* K2Node_Event_ComponentHit_2, class AMainPawnCpp* K2Node_Event_PlayerPawn_1, class UActorComponent* K2Node_Event_ComponentHit_1, class AMainPawnCpp* K2Node_Event_PlayerPawn, class UActorComponent* K2Node_Event_ComponentHit, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_IsPlayerAbleToInteract_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InteractableCustom_00_C", "ExecuteUbergraph_ba_InteractableCustom_00");

	Params::Aba_InteractableCustom_00_C_ExecuteUbergraph_ba_InteractableCustom_00_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_PlayerPawn_2 = K2Node_Event_PlayerPawn_2;
	Parms.K2Node_Event_ComponentHit_2 = K2Node_Event_ComponentHit_2;
	Parms.K2Node_Event_PlayerPawn_1 = K2Node_Event_PlayerPawn_1;
	Parms.K2Node_Event_ComponentHit_1 = K2Node_Event_ComponentHit_1;
	Parms.K2Node_Event_PlayerPawn = K2Node_Event_PlayerPawn;
	Parms.K2Node_Event_ComponentHit = K2Node_Event_ComponentHit;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_IsPlayerAbleToInteract_ReturnValue = CallFunc_IsPlayerAbleToInteract_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_InteractableCustom_00.ba_InteractableCustom_00_C.OnInteractionWith__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_InteractableCustom_00_C::OnInteractionWith__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_InteractableCustom_00_C", "OnInteractionWith__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


