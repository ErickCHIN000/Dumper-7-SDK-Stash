#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WanogahTissueSample.WanogahTissueSample_C
// (Actor)

class UClass* AWanogahTissueSample_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WanogahTissueSample_C");

	return Clss;
}


// WanogahTissueSample_C WanogahTissueSample.Default__WanogahTissueSample_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWanogahTissueSample_C* AWanogahTissueSample_C::GetDefaultObj()
{
	static class AWanogahTissueSample_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWanogahTissueSample_C*>(AWanogahTissueSample_C::StaticClass()->DefaultObject);

	return Default;
}

}


