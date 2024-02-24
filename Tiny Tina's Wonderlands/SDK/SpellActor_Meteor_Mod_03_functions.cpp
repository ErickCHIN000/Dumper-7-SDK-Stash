#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SpellActor_Meteor_Mod_03.SpellActor_Meteor_Mod_03_C
// (Actor)

class UClass* ASpellActor_Meteor_Mod_03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpellActor_Meteor_Mod_03_C");

	return Clss;
}


// SpellActor_Meteor_Mod_03_C SpellActor_Meteor_Mod_03.Default__SpellActor_Meteor_Mod_03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASpellActor_Meteor_Mod_03_C* ASpellActor_Meteor_Mod_03_C::GetDefaultObj()
{
	static class ASpellActor_Meteor_Mod_03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASpellActor_Meteor_Mod_03_C*>(ASpellActor_Meteor_Mod_03_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpellActor_Meteor_Mod_03.SpellActor_Meteor_Mod_03_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_Meteor_Mod_03_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Meteor_Mod_03_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_Meteor_Mod_03.SpellActor_Meteor_Mod_03_C.TrySpawnMeteor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_Meteor_Mod_03_C::TrySpawnMeteor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Meteor_Mod_03_C", "TrySpawnMeteor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_Meteor_Mod_03.SpellActor_Meteor_Mod_03_C.ExecuteUbergraph_SpellActor_Meteor_Mod_03
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASpellActor_Meteor_Mod_03_C::ExecuteUbergraph_SpellActor_Meteor_Mod_03(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Meteor_Mod_03_C", "ExecuteUbergraph_SpellActor_Meteor_Mod_03");

	Params::ASpellActor_Meteor_Mod_03_C_ExecuteUbergraph_SpellActor_Meteor_Mod_03_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


