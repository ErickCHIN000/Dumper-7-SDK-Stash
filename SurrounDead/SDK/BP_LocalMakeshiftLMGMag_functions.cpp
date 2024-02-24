#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalMakeshiftLMGMag.BP_LocalMakeshiftLMGMag_C
// (Actor)

class UClass* ABP_LocalMakeshiftLMGMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalMakeshiftLMGMag_C");

	return Clss;
}


// BP_LocalMakeshiftLMGMag_C BP_LocalMakeshiftLMGMag.Default__BP_LocalMakeshiftLMGMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalMakeshiftLMGMag_C* ABP_LocalMakeshiftLMGMag_C::GetDefaultObj()
{
	static class ABP_LocalMakeshiftLMGMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalMakeshiftLMGMag_C*>(ABP_LocalMakeshiftLMGMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


