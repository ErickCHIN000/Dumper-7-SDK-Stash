#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Polymer.BP_Polymer_C
// (Actor)

class UClass* ABP_Polymer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Polymer_C");

	return Clss;
}


// BP_Polymer_C BP_Polymer.Default__BP_Polymer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Polymer_C* ABP_Polymer_C::GetDefaultObj()
{
	static class ABP_Polymer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Polymer_C*>(ABP_Polymer_C::StaticClass()->DefaultObject);

	return Default;
}

}


