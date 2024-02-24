#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Valkyrie.BP_Valkyrie_C
// (Actor)

class UClass* ABP_Valkyrie_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Valkyrie_C");

	return Clss;
}


// BP_Valkyrie_C BP_Valkyrie.Default__BP_Valkyrie_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Valkyrie_C* ABP_Valkyrie_C::GetDefaultObj()
{
	static class ABP_Valkyrie_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Valkyrie_C*>(ABP_Valkyrie_C::StaticClass()->DefaultObject);

	return Default;
}

}


