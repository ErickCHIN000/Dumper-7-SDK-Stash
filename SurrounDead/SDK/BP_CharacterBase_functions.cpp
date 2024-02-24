#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CharacterBase.BP_CharacterBase_C
// (Actor, Pawn)

class UClass* ABP_CharacterBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CharacterBase_C");

	return Clss;
}


// BP_CharacterBase_C BP_CharacterBase.Default__BP_CharacterBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CharacterBase_C* ABP_CharacterBase_C::GetDefaultObj()
{
	static class ABP_CharacterBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CharacterBase_C*>(ABP_CharacterBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


