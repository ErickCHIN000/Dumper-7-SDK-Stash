#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MonarchHaveKeystone2.MonarchHaveKeystone2_C
// (None)

class UClass* UMonarchHaveKeystone2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MonarchHaveKeystone2_C");

	return Clss;
}


// MonarchHaveKeystone2_C MonarchHaveKeystone2.Default__MonarchHaveKeystone2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMonarchHaveKeystone2_C* UMonarchHaveKeystone2_C::GetDefaultObj()
{
	static class UMonarchHaveKeystone2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMonarchHaveKeystone2_C*>(UMonarchHaveKeystone2_C::StaticClass()->DefaultObject);

	return Default;
}

}


