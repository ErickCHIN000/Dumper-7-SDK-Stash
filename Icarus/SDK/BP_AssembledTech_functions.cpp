#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AssembledTech.BP_AssembledTech_C
// (Actor)

class UClass* ABP_AssembledTech_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AssembledTech_C");

	return Clss;
}


// BP_AssembledTech_C BP_AssembledTech.Default__BP_AssembledTech_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AssembledTech_C* ABP_AssembledTech_C::GetDefaultObj()
{
	static class ABP_AssembledTech_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AssembledTech_C*>(ABP_AssembledTech_C::StaticClass()->DefaultObject);

	return Default;
}

}


