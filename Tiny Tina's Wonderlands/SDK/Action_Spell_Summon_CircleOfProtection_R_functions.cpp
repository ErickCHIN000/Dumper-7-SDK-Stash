#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_Spell_Summon_CircleOfProtection_R.Action_Spell_Summon_CircleOfProtection_R_C
// (None)

class UClass* UAction_Spell_Summon_CircleOfProtection_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_Spell_Summon_CircleOfProtection_R_C");

	return Clss;
}


// Action_Spell_Summon_CircleOfProtection_R_C Action_Spell_Summon_CircleOfProtection_R.Default__Action_Spell_Summon_CircleOfProtection_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_Spell_Summon_CircleOfProtection_R_C* UAction_Spell_Summon_CircleOfProtection_R_C::GetDefaultObj()
{
	static class UAction_Spell_Summon_CircleOfProtection_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_Spell_Summon_CircleOfProtection_R_C*>(UAction_Spell_Summon_CircleOfProtection_R_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_Spell_Summon_CircleOfProtection_R.Action_Spell_Summon_CircleOfProtection_R_C.Notify_SpellWarmup_R
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_Spell_Summon_CircleOfProtection_R_C::Notify_SpellWarmup_R()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Summon_CircleOfProtection_R_C", "Notify_SpellWarmup_R");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_Spell_Summon_CircleOfProtection_R.Action_Spell_Summon_CircleOfProtection_R_C.Notify_SpellStart_R
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_Spell_Summon_CircleOfProtection_R_C::Notify_SpellStart_R()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Summon_CircleOfProtection_R_C", "Notify_SpellStart_R");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_Spell_Summon_CircleOfProtection_R.Action_Spell_Summon_CircleOfProtection_R_C.Notify_SpellCast_R
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_Spell_Summon_CircleOfProtection_R_C::Notify_SpellCast_R()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Summon_CircleOfProtection_R_C", "Notify_SpellCast_R");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_Spell_Summon_CircleOfProtection_R.Action_Spell_Summon_CircleOfProtection_R_C.ExecuteUbergraph_Action_Spell_Summon_CircleOfProtection_R
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             CallFunc_GetCollectionFX_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_PlayFX_1stFXComponent                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_PlayFX_3rdFXComponent                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_PlayFX_Socket                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             CallFunc_GetCollectionFX_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             CallFunc_GetCollectionFX_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_PlayFX_1stFXComponent1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_PlayFX_3rdFXComponent1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_PlayFX_Socket1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_PlayFX_1stFXComponent2                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_PlayFX_3rdFXComponent2                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_PlayFX_Socket2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Spell_Summon_CircleOfProtection_R_C::ExecuteUbergraph_Action_Spell_Summon_CircleOfProtection_R(int32 EntryPoint, class UParticleSystem* CallFunc_GetCollectionFX_ReturnValue, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent, class FName CallFunc_PlayFX_Socket, class UParticleSystem* CallFunc_GetCollectionFX_ReturnValue1, class UParticleSystem* CallFunc_GetCollectionFX_ReturnValue2, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent1, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent1, class FName CallFunc_PlayFX_Socket1, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent2, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent2, class FName CallFunc_PlayFX_Socket2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Summon_CircleOfProtection_R_C", "ExecuteUbergraph_Action_Spell_Summon_CircleOfProtection_R");

	Params::UAction_Spell_Summon_CircleOfProtection_R_C_ExecuteUbergraph_Action_Spell_Summon_CircleOfProtection_R_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCollectionFX_ReturnValue = CallFunc_GetCollectionFX_ReturnValue;
	Parms.CallFunc_PlayFX_1stFXComponent = CallFunc_PlayFX_1stFXComponent;
	Parms.CallFunc_PlayFX_3rdFXComponent = CallFunc_PlayFX_3rdFXComponent;
	Parms.CallFunc_PlayFX_Socket = CallFunc_PlayFX_Socket;
	Parms.CallFunc_GetCollectionFX_ReturnValue1 = CallFunc_GetCollectionFX_ReturnValue1;
	Parms.CallFunc_GetCollectionFX_ReturnValue2 = CallFunc_GetCollectionFX_ReturnValue2;
	Parms.CallFunc_PlayFX_1stFXComponent1 = CallFunc_PlayFX_1stFXComponent1;
	Parms.CallFunc_PlayFX_3rdFXComponent1 = CallFunc_PlayFX_3rdFXComponent1;
	Parms.CallFunc_PlayFX_Socket1 = CallFunc_PlayFX_Socket1;
	Parms.CallFunc_PlayFX_1stFXComponent2 = CallFunc_PlayFX_1stFXComponent2;
	Parms.CallFunc_PlayFX_3rdFXComponent2 = CallFunc_PlayFX_3rdFXComponent2;
	Parms.CallFunc_PlayFX_Socket2 = CallFunc_PlayFX_Socket2;

	UObject::ProcessEvent(Func, &Parms);

}

}


