#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_RandomEridiumCount_MiniBoss.Init_RandomEridiumCount_MiniBoss_C
// (None)

class UClass* UInit_RandomEridiumCount_MiniBoss_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_RandomEridiumCount_MiniBoss_C");

	return Clss;
}


// Init_RandomEridiumCount_MiniBoss_C Init_RandomEridiumCount_MiniBoss.Default__Init_RandomEridiumCount_MiniBoss_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_RandomEridiumCount_MiniBoss_C* UInit_RandomEridiumCount_MiniBoss_C::GetDefaultObj()
{
	static class UInit_RandomEridiumCount_MiniBoss_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_RandomEridiumCount_MiniBoss_C*>(UInit_RandomEridiumCount_MiniBoss_C::StaticClass()->DefaultObject);

	return Default;
}

}


