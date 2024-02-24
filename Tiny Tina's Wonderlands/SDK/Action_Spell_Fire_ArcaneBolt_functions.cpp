#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_Spell_Fire_ArcaneBolt.Action_Spell_Fire_ArcaneBolt_C
// (None)

class UClass* UAction_Spell_Fire_ArcaneBolt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_Spell_Fire_ArcaneBolt_C");

	return Clss;
}


// Action_Spell_Fire_ArcaneBolt_C Action_Spell_Fire_ArcaneBolt.Default__Action_Spell_Fire_ArcaneBolt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_Spell_Fire_ArcaneBolt_C* UAction_Spell_Fire_ArcaneBolt_C::GetDefaultObj()
{
	static class UAction_Spell_Fire_ArcaneBolt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_Spell_Fire_ArcaneBolt_C*>(UAction_Spell_Fire_ArcaneBolt_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_Spell_Fire_ArcaneBolt.Action_Spell_Fire_ArcaneBolt_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Spell_Fire_ArcaneBolt_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Fire_ArcaneBolt_C", "OnBegin");

	Params::UAction_Spell_Fire_ArcaneBolt_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_Spell_Fire_ArcaneBolt.Action_Spell_Fire_ArcaneBolt_C.Notify_SpellCast
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_Spell_Fire_ArcaneBolt_C::Notify_SpellCast()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Fire_ArcaneBolt_C", "Notify_SpellCast");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_Spell_Fire_ArcaneBolt.Action_Spell_Fire_ArcaneBolt_C.Notify_SpellWarmup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_Spell_Fire_ArcaneBolt_C::Notify_SpellWarmup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Fire_ArcaneBolt_C", "Notify_SpellWarmup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_Spell_Fire_ArcaneBolt.Action_Spell_Fire_ArcaneBolt_C.Notify_AudioCast
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_Spell_Fire_ArcaneBolt_C::Notify_AudioCast()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Fire_ArcaneBolt_C", "Notify_AudioCast");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_Spell_Fire_ArcaneBolt.Action_Spell_Fire_ArcaneBolt_C.Notify_SpellWarmup3rd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_Spell_Fire_ArcaneBolt_C::Notify_SpellWarmup3rd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Fire_ArcaneBolt_C", "Notify_SpellWarmup3rd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_Spell_Fire_ArcaneBolt.Action_Spell_Fire_ArcaneBolt_C.Notify_SpellCast3rd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_Spell_Fire_ArcaneBolt_C::Notify_SpellCast3rd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Fire_ArcaneBolt_C", "Notify_SpellCast3rd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_Spell_Fire_ArcaneBolt.Action_Spell_Fire_ArcaneBolt_C.ExecuteUbergraph_Action_Spell_Fire_ArcaneBolt
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             CallFunc_GetCollectionFX_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_PlayFX_1stFXComponent                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_PlayFX_3rdFXComponent                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_PlayFX_Socket                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             CallFunc_GetCollectionFX_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_PlayFX_1stFXComponent1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_PlayFX_3rdFXComponent1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_PlayFX_Socket1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       CallFunc_GetSpellElement_ReturnedElement                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseEvent*                 CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       CallFunc_GetSpellElement_ReturnedElement1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseEvent*                 CallFunc_Map_Find_Value1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             CallFunc_GetCollectionFX_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_PlayFX_1stFXComponent2                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_PlayFX_3rdFXComponent2                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_PlayFX_Socket2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             CallFunc_GetCollectionFX_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_PlayFX_1stFXComponent3                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_PlayFX_3rdFXComponent3                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_PlayFX_Socket3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Spell_Fire_ArcaneBolt_C::ExecuteUbergraph_Action_Spell_Fire_ArcaneBolt(int32 EntryPoint, class AActor* CallFunc_K2_GetActor_ReturnValue, class AActor* K2Node_Event_Actor, class AActor* CallFunc_K2_GetActor_ReturnValue1, class UParticleSystem* CallFunc_GetCollectionFX_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue2, class AActor* CallFunc_K2_GetActor_ReturnValue3, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent, class FName CallFunc_PlayFX_Socket, class UParticleSystem* CallFunc_GetCollectionFX_ReturnValue1, class AActor* CallFunc_K2_GetActor_ReturnValue4, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent1, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent1, class FName CallFunc_PlayFX_Socket1, class AActor* CallFunc_K2_GetActor_ReturnValue5, enum class EOakElementalType CallFunc_GetSpellElement_ReturnedElement, class UWwiseEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue6, enum class EOakElementalType CallFunc_GetSpellElement_ReturnedElement1, class UWwiseEvent* CallFunc_Map_Find_Value1, bool CallFunc_Map_Find_ReturnValue1, class AActor* CallFunc_K2_GetActor_ReturnValue7, class AActor* CallFunc_K2_GetActor_ReturnValue8, class UParticleSystem* CallFunc_GetCollectionFX_ReturnValue2, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent2, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent2, class FName CallFunc_PlayFX_Socket2, class AActor* CallFunc_K2_GetActor_ReturnValue9, class UParticleSystem* CallFunc_GetCollectionFX_ReturnValue3, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent3, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent3, class FName CallFunc_PlayFX_Socket3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Fire_ArcaneBolt_C", "ExecuteUbergraph_Action_Spell_Fire_ArcaneBolt");

	Params::UAction_Spell_Fire_ArcaneBolt_C_ExecuteUbergraph_Action_Spell_Fire_ArcaneBolt_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActor_ReturnValue = CallFunc_K2_GetActor_ReturnValue;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.CallFunc_K2_GetActor_ReturnValue1 = CallFunc_K2_GetActor_ReturnValue1;
	Parms.CallFunc_GetCollectionFX_ReturnValue = CallFunc_GetCollectionFX_ReturnValue;
	Parms.CallFunc_K2_GetActor_ReturnValue2 = CallFunc_K2_GetActor_ReturnValue2;
	Parms.CallFunc_K2_GetActor_ReturnValue3 = CallFunc_K2_GetActor_ReturnValue3;
	Parms.CallFunc_PlayFX_1stFXComponent = CallFunc_PlayFX_1stFXComponent;
	Parms.CallFunc_PlayFX_3rdFXComponent = CallFunc_PlayFX_3rdFXComponent;
	Parms.CallFunc_PlayFX_Socket = CallFunc_PlayFX_Socket;
	Parms.CallFunc_GetCollectionFX_ReturnValue1 = CallFunc_GetCollectionFX_ReturnValue1;
	Parms.CallFunc_K2_GetActor_ReturnValue4 = CallFunc_K2_GetActor_ReturnValue4;
	Parms.CallFunc_PlayFX_1stFXComponent1 = CallFunc_PlayFX_1stFXComponent1;
	Parms.CallFunc_PlayFX_3rdFXComponent1 = CallFunc_PlayFX_3rdFXComponent1;
	Parms.CallFunc_PlayFX_Socket1 = CallFunc_PlayFX_Socket1;
	Parms.CallFunc_K2_GetActor_ReturnValue5 = CallFunc_K2_GetActor_ReturnValue5;
	Parms.CallFunc_GetSpellElement_ReturnedElement = CallFunc_GetSpellElement_ReturnedElement;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_K2_GetActor_ReturnValue6 = CallFunc_K2_GetActor_ReturnValue6;
	Parms.CallFunc_GetSpellElement_ReturnedElement1 = CallFunc_GetSpellElement_ReturnedElement1;
	Parms.CallFunc_Map_Find_Value1 = CallFunc_Map_Find_Value1;
	Parms.CallFunc_Map_Find_ReturnValue1 = CallFunc_Map_Find_ReturnValue1;
	Parms.CallFunc_K2_GetActor_ReturnValue7 = CallFunc_K2_GetActor_ReturnValue7;
	Parms.CallFunc_K2_GetActor_ReturnValue8 = CallFunc_K2_GetActor_ReturnValue8;
	Parms.CallFunc_GetCollectionFX_ReturnValue2 = CallFunc_GetCollectionFX_ReturnValue2;
	Parms.CallFunc_PlayFX_1stFXComponent2 = CallFunc_PlayFX_1stFXComponent2;
	Parms.CallFunc_PlayFX_3rdFXComponent2 = CallFunc_PlayFX_3rdFXComponent2;
	Parms.CallFunc_PlayFX_Socket2 = CallFunc_PlayFX_Socket2;
	Parms.CallFunc_K2_GetActor_ReturnValue9 = CallFunc_K2_GetActor_ReturnValue9;
	Parms.CallFunc_GetCollectionFX_ReturnValue3 = CallFunc_GetCollectionFX_ReturnValue3;
	Parms.CallFunc_PlayFX_1stFXComponent3 = CallFunc_PlayFX_1stFXComponent3;
	Parms.CallFunc_PlayFX_3rdFXComponent3 = CallFunc_PlayFX_3rdFXComponent3;
	Parms.CallFunc_PlayFX_Socket3 = CallFunc_PlayFX_Socket3;

	UObject::ProcessEvent(Func, &Parms);

}

}


