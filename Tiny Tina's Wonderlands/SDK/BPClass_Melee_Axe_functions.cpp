#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPClass_Melee_Axe.BPClass_Melee_Axe_C
// (Actor)

class UClass* ABPClass_Melee_Axe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPClass_Melee_Axe_C");

	return Clss;
}


// BPClass_Melee_Axe_C BPClass_Melee_Axe.Default__BPClass_Melee_Axe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPClass_Melee_Axe_C* ABPClass_Melee_Axe_C::GetDefaultObj()
{
	static class ABPClass_Melee_Axe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPClass_Melee_Axe_C*>(ABPClass_Melee_Axe_C::StaticClass()->DefaultObject);

	return Default;
}

}


