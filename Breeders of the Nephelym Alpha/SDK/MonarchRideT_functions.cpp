#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MonarchRideT.MonarchRideT_C
// (None)

class UClass* UMonarchRideT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MonarchRideT_C");

	return Clss;
}


// MonarchRideT_C MonarchRideT.Default__MonarchRideT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMonarchRideT_C* UMonarchRideT_C::GetDefaultObj()
{
	static class UMonarchRideT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMonarchRideT_C*>(UMonarchRideT_C::StaticClass()->DefaultObject);

	return Default;
}

}


