#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_RandomEridiumCount_Boss.Init_RandomEridiumCount_Boss_C
// (None)

class UClass* UInit_RandomEridiumCount_Boss_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_RandomEridiumCount_Boss_C");

	return Clss;
}


// Init_RandomEridiumCount_Boss_C Init_RandomEridiumCount_Boss.Default__Init_RandomEridiumCount_Boss_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_RandomEridiumCount_Boss_C* UInit_RandomEridiumCount_Boss_C::GetDefaultObj()
{
	static class UInit_RandomEridiumCount_Boss_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_RandomEridiumCount_Boss_C*>(UInit_RandomEridiumCount_Boss_C::StaticClass()->DefaultObject);

	return Default;
}

}


