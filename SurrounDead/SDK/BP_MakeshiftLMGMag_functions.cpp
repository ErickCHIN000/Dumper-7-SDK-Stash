#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MakeshiftLMGMag.BP_MakeshiftLMGMag_C
// (Actor)

class UClass* ABP_MakeshiftLMGMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MakeshiftLMGMag_C");

	return Clss;
}


// BP_MakeshiftLMGMag_C BP_MakeshiftLMGMag.Default__BP_MakeshiftLMGMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MakeshiftLMGMag_C* ABP_MakeshiftLMGMag_C::GetDefaultObj()
{
	static class ABP_MakeshiftLMGMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MakeshiftLMGMag_C*>(ABP_MakeshiftLMGMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


