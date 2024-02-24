#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KybeleRideYou.KybeleRideYou_C
// (None)

class UClass* UKybeleRideYou_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KybeleRideYou_C");

	return Clss;
}


// KybeleRideYou_C KybeleRideYou.Default__KybeleRideYou_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKybeleRideYou_C* UKybeleRideYou_C::GetDefaultObj()
{
	static class UKybeleRideYou_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKybeleRideYou_C*>(UKybeleRideYou_C::StaticClass()->DefaultObject);

	return Default;
}

}


