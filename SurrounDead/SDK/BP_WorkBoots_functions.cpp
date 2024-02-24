#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WorkBoots.BP_WorkBoots_C
// (Actor)

class UClass* ABP_WorkBoots_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WorkBoots_C");

	return Clss;
}


// BP_WorkBoots_C BP_WorkBoots.Default__BP_WorkBoots_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WorkBoots_C* ABP_WorkBoots_C::GetDefaultObj()
{
	static class ABP_WorkBoots_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WorkBoots_C*>(ABP_WorkBoots_C::StaticClass()->DefaultObject);

	return Default;
}

}


