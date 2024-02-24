#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Proj_Spell_Buffmeister.Proj_Spell_Buffmeister_C
// (Actor)

class UClass* AProj_Spell_Buffmeister_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Proj_Spell_Buffmeister_C");

	return Clss;
}


// Proj_Spell_Buffmeister_C Proj_Spell_Buffmeister.Default__Proj_Spell_Buffmeister_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProj_Spell_Buffmeister_C* AProj_Spell_Buffmeister_C::GetDefaultObj()
{
	static class AProj_Spell_Buffmeister_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProj_Spell_Buffmeister_C*>(AProj_Spell_Buffmeister_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Proj_Spell_Buffmeister.Proj_Spell_Buffmeister_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AProj_Spell_Buffmeister_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_Spell_Buffmeister_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Proj_Spell_Buffmeister.Proj_Spell_Buffmeister_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AProj_Spell_Buffmeister_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_Spell_Buffmeister_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Proj_Spell_Buffmeister.Proj_Spell_Buffmeister_C.SetupSpawnedActor
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGrenadeMod*                 OwningSpell                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProj_Spell_Buffmeister_C::SetupSpawnedActor(class AGrenadeMod* OwningSpell)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_Spell_Buffmeister_C", "SetupSpawnedActor");

	Params::AProj_Spell_Buffmeister_C_SetupSpawnedActor_Params Parms{};

	Parms.OwningSpell = OwningSpell;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Proj_Spell_Buffmeister.Proj_Spell_Buffmeister_C.ExecuteUbergraph_Proj_Spell_Buffmeister
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGrenadeMod*                 K2Node_Event_OwningSpell                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxAbility*                 CallFunc_FindAbility_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbility_Buffmeister_C*      K2Node_DynamicCast_AsAbility_Buffmeister                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AProj_Spell_Buffmeister_C::ExecuteUbergraph_Proj_Spell_Buffmeister(int32 EntryPoint, class AGrenadeMod* K2Node_Event_OwningSpell, class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue, class UAbility_Buffmeister_C* K2Node_DynamicCast_AsAbility_Buffmeister, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_Spell_Buffmeister_C", "ExecuteUbergraph_Proj_Spell_Buffmeister");

	Params::AProj_Spell_Buffmeister_C_ExecuteUbergraph_Proj_Spell_Buffmeister_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwningSpell = K2Node_Event_OwningSpell;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_FindAbility_ReturnValue = CallFunc_FindAbility_ReturnValue;
	Parms.K2Node_DynamicCast_AsAbility_Buffmeister = K2Node_DynamicCast_AsAbility_Buffmeister;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


