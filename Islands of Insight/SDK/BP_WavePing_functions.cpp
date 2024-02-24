#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WavePing.BP_WavePing_C
// (Actor)

class UClass* ABP_WavePing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WavePing_C");

	return Clss;
}


// BP_WavePing_C BP_WavePing.Default__BP_WavePing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WavePing_C* ABP_WavePing_C::GetDefaultObj()
{
	static class ABP_WavePing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WavePing_C*>(ABP_WavePing_C::StaticClass()->DefaultObject);

	return Default;
}

}


