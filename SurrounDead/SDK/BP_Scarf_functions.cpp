#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Scarf.BP_Scarf_C
// (Actor)

class UClass* ABP_Scarf_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Scarf_C");

	return Clss;
}


// BP_Scarf_C BP_Scarf.Default__BP_Scarf_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Scarf_C* ABP_Scarf_C::GetDefaultObj()
{
	static class ABP_Scarf_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Scarf_C*>(ABP_Scarf_C::StaticClass()->DefaultObject);

	return Default;
}

}


