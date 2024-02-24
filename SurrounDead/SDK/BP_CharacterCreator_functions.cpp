#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CharacterCreator.BP_CharacterCreator_C
// (Actor)

class UClass* ABP_CharacterCreator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CharacterCreator_C");

	return Clss;
}


// BP_CharacterCreator_C BP_CharacterCreator.Default__BP_CharacterCreator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CharacterCreator_C* ABP_CharacterCreator_C::GetDefaultObj()
{
	static class ABP_CharacterCreator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CharacterCreator_C*>(ABP_CharacterCreator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CharacterCreator.BP_CharacterCreator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CharacterCreator_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterCreator_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


