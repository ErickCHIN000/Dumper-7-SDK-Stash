#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavArea_Crossing_Cheap.NavArea_Crossing_Cheap_C
// (None)

class UClass* UNavArea_Crossing_Cheap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavArea_Crossing_Cheap_C");

	return Clss;
}


// NavArea_Crossing_Cheap_C NavArea_Crossing_Cheap.Default__NavArea_Crossing_Cheap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavArea_Crossing_Cheap_C* UNavArea_Crossing_Cheap_C::GetDefaultObj()
{
	static class UNavArea_Crossing_Cheap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavArea_Crossing_Cheap_C*>(UNavArea_Crossing_Cheap_C::StaticClass()->DefaultObject);

	return Default;
}

}


