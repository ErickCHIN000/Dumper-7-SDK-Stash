#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MonarchHaveKeystone.MonarchHaveKeystone_C
// (None)

class UClass* UMonarchHaveKeystone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MonarchHaveKeystone_C");

	return Clss;
}


// MonarchHaveKeystone_C MonarchHaveKeystone.Default__MonarchHaveKeystone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMonarchHaveKeystone_C* UMonarchHaveKeystone_C::GetDefaultObj()
{
	static class UMonarchHaveKeystone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMonarchHaveKeystone_C*>(UMonarchHaveKeystone_C::StaticClass()->DefaultObject);

	return Default;
}

}


