#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_Name4Map.ba_Name4Map_C
// (None)

class UClass* Uba_Name4Map_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_Name4Map_C");

	return Clss;
}


// ba_Name4Map_C ba_Name4Map.Default__ba_Name4Map_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Uba_Name4Map_C* Uba_Name4Map_C::GetDefaultObj()
{
	static class Uba_Name4Map_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Uba_Name4Map_C*>(Uba_Name4Map_C::StaticClass()->DefaultObject);

	return Default;
}

}


