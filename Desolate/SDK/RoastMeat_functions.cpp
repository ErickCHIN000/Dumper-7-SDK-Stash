#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RoastMeat.RoastMeat_C
// (Actor)

class UClass* ARoastMeat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RoastMeat_C");

	return Clss;
}


// RoastMeat_C RoastMeat.Default__RoastMeat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARoastMeat_C* ARoastMeat_C::GetDefaultObj()
{
	static class ARoastMeat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARoastMeat_C*>(ARoastMeat_C::StaticClass()->DefaultObject);

	return Default;
}

}


