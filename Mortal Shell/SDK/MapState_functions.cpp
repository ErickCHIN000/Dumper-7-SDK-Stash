#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MapState.MapState_C
// (None)

class UClass* UMapState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapState_C");

	return Clss;
}


// MapState_C MapState.Default__MapState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMapState_C* UMapState_C::GetDefaultObj()
{
	static class UMapState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMapState_C*>(UMapState_C::StaticClass()->DefaultObject);

	return Default;
}

}


