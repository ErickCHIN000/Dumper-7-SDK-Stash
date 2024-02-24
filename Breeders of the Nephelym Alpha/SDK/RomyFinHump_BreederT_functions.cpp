#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RomyFinHump_BreederT.RomyFinHump_BreederT_C
// (None)

class UClass* URomyFinHump_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RomyFinHump_BreederT_C");

	return Clss;
}


// RomyFinHump_BreederT_C RomyFinHump_BreederT.Default__RomyFinHump_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URomyFinHump_BreederT_C* URomyFinHump_BreederT_C::GetDefaultObj()
{
	static class URomyFinHump_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URomyFinHump_BreederT_C*>(URomyFinHump_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}


