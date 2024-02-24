#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPClass_Spell.BPClass_Spell_C
// (Actor)

class UClass* ABPClass_Spell_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPClass_Spell_C");

	return Clss;
}


// BPClass_Spell_C BPClass_Spell.Default__BPClass_Spell_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPClass_Spell_C* ABPClass_Spell_C::GetDefaultObj()
{
	static class ABPClass_Spell_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPClass_Spell_C*>(ABPClass_Spell_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPClass_Spell.BPClass_Spell_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPClass_Spell_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPClass_Spell_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


