#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PDA_Narrative_NPC_Base.PDA_Narrative_NPC_Base_C
// (None)

class UClass* UPDA_Narrative_NPC_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PDA_Narrative_NPC_Base_C");

	return Clss;
}


// PDA_Narrative_NPC_Base_C PDA_Narrative_NPC_Base.Default__PDA_Narrative_NPC_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPDA_Narrative_NPC_Base_C* UPDA_Narrative_NPC_Base_C::GetDefaultObj()
{
	static class UPDA_Narrative_NPC_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPDA_Narrative_NPC_Base_C*>(UPDA_Narrative_NPC_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


