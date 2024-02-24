#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WidowKeystone.WidowKeystone_C
// (None)

class UClass* UWidowKeystone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidowKeystone_C");

	return Clss;
}


// WidowKeystone_C WidowKeystone.Default__WidowKeystone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWidowKeystone_C* UWidowKeystone_C::GetDefaultObj()
{
	static class UWidowKeystone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidowKeystone_C*>(UWidowKeystone_C::StaticClass()->DefaultObject);

	return Default;
}

}


