#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RomyFinHumpT.RomyFinHumpT_C
// (None)

class UClass* URomyFinHumpT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RomyFinHumpT_C");

	return Clss;
}


// RomyFinHumpT_C RomyFinHumpT.Default__RomyFinHumpT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URomyFinHumpT_C* URomyFinHumpT_C::GetDefaultObj()
{
	static class URomyFinHumpT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URomyFinHumpT_C*>(URomyFinHumpT_C::StaticClass()->DefaultObject);

	return Default;
}

}


