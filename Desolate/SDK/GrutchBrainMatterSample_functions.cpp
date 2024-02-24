#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GrutchBrainMatterSample.GrutchBrainMatterSample_C
// (Actor)

class UClass* AGrutchBrainMatterSample_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GrutchBrainMatterSample_C");

	return Clss;
}


// GrutchBrainMatterSample_C GrutchBrainMatterSample.Default__GrutchBrainMatterSample_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGrutchBrainMatterSample_C* AGrutchBrainMatterSample_C::GetDefaultObj()
{
	static class AGrutchBrainMatterSample_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGrutchBrainMatterSample_C*>(AGrutchBrainMatterSample_C::StaticClass()->DefaultObject);

	return Default;
}

}


