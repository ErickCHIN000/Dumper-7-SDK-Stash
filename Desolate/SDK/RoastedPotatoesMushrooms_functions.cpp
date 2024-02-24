#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RoastedPotatoesMushrooms.RoastedPotatoesMushrooms_C
// (Actor)

class UClass* ARoastedPotatoesMushrooms_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RoastedPotatoesMushrooms_C");

	return Clss;
}


// RoastedPotatoesMushrooms_C RoastedPotatoesMushrooms.Default__RoastedPotatoesMushrooms_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARoastedPotatoesMushrooms_C* ARoastedPotatoesMushrooms_C::GetDefaultObj()
{
	static class ARoastedPotatoesMushrooms_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARoastedPotatoesMushrooms_C*>(ARoastedPotatoesMushrooms_C::StaticClass()->DefaultObject);

	return Default;
}

}


