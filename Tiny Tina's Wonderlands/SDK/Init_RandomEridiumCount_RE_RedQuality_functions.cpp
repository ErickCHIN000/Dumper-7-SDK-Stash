#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_RandomEridiumCount_RE_RedQuality.Init_RandomEridiumCount_RE_RedQuality_C
// (None)

class UClass* UInit_RandomEridiumCount_RE_RedQuality_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_RandomEridiumCount_RE_RedQuality_C");

	return Clss;
}


// Init_RandomEridiumCount_RE_RedQuality_C Init_RandomEridiumCount_RE_RedQuality.Default__Init_RandomEridiumCount_RE_RedQuality_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_RandomEridiumCount_RE_RedQuality_C* UInit_RandomEridiumCount_RE_RedQuality_C::GetDefaultObj()
{
	static class UInit_RandomEridiumCount_RE_RedQuality_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_RandomEridiumCount_RE_RedQuality_C*>(UInit_RandomEridiumCount_RE_RedQuality_C::StaticClass()->DefaultObject);

	return Default;
}

}


