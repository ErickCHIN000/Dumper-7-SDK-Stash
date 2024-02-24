#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DamagedMakeshiftLMG.BP_DamagedMakeshiftLMG_C
// (Actor)

class UClass* ABP_DamagedMakeshiftLMG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DamagedMakeshiftLMG_C");

	return Clss;
}


// BP_DamagedMakeshiftLMG_C BP_DamagedMakeshiftLMG.Default__BP_DamagedMakeshiftLMG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DamagedMakeshiftLMG_C* ABP_DamagedMakeshiftLMG_C::GetDefaultObj()
{
	static class ABP_DamagedMakeshiftLMG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DamagedMakeshiftLMG_C*>(ABP_DamagedMakeshiftLMG_C::StaticClass()->DefaultObject);

	return Default;
}

}


