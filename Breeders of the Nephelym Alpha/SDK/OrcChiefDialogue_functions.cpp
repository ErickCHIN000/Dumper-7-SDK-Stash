#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OrcChiefDialogue.OrcChiefDialogue_C
// (None)

class UClass* UOrcChiefDialogue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OrcChiefDialogue_C");

	return Clss;
}


// OrcChiefDialogue_C OrcChiefDialogue.Default__OrcChiefDialogue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOrcChiefDialogue_C* UOrcChiefDialogue_C::GetDefaultObj()
{
	static class UOrcChiefDialogue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOrcChiefDialogue_C*>(UOrcChiefDialogue_C::StaticClass()->DefaultObject);

	return Default;
}

}


