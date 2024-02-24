#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavArea_Crossing.NavArea_Crossing_C
// (None)

class UClass* UNavArea_Crossing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavArea_Crossing_C");

	return Clss;
}


// NavArea_Crossing_C NavArea_Crossing.Default__NavArea_Crossing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavArea_Crossing_C* UNavArea_Crossing_C::GetDefaultObj()
{
	static class UNavArea_Crossing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavArea_Crossing_C*>(UNavArea_Crossing_C::StaticClass()->DefaultObject);

	return Default;
}

}


