#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CreatureSpawner_NPCGroup_Realm.BP_CreatureSpawner_NPCGroup_Realm_C
// (Actor, Pawn)

class UClass* ABP_CreatureSpawner_NPCGroup_Realm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CreatureSpawner_NPCGroup_Realm_C");

	return Clss;
}


// BP_CreatureSpawner_NPCGroup_Realm_C BP_CreatureSpawner_NPCGroup_Realm.Default__BP_CreatureSpawner_NPCGroup_Realm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CreatureSpawner_NPCGroup_Realm_C* ABP_CreatureSpawner_NPCGroup_Realm_C::GetDefaultObj()
{
	static class ABP_CreatureSpawner_NPCGroup_Realm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CreatureSpawner_NPCGroup_Realm_C*>(ABP_CreatureSpawner_NPCGroup_Realm_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CreatureSpawner_NPCGroup_Realm.BP_CreatureSpawner_NPCGroup_Realm_C.AddToCreatures
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXAICharacter*             Creature                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddToCreatures_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)

bool ABP_CreatureSpawner_NPCGroup_Realm_C::AddToCreatures(class ANWXAICharacter* Creature, bool CallFunc_AddToCreatures_ReturnValue, const struct FGameplayTag& Temp_struct_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureSpawner_NPCGroup_Realm_C", "AddToCreatures");

	Params::ABP_CreatureSpawner_NPCGroup_Realm_C_AddToCreatures_Params Parms{};

	Parms.Creature = Creature;
	Parms.CallFunc_AddToCreatures_ReturnValue = CallFunc_AddToCreatures_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


