#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass POI_Campfire.POI_Campfire_C
// (Actor)

class UClass* APOI_Campfire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("POI_Campfire_C");

	return Clss;
}


// POI_Campfire_C POI_Campfire.Default__POI_Campfire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APOI_Campfire_C* APOI_Campfire_C::GetDefaultObj()
{
	static class APOI_Campfire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APOI_Campfire_C*>(APOI_Campfire_C::StaticClass()->DefaultObject);

	return Default;
}

}


