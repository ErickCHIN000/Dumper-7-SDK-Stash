#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MonarchToyT.MonarchToyT_C
// (None)

class UClass* UMonarchToyT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MonarchToyT_C");

	return Clss;
}


// MonarchToyT_C MonarchToyT.Default__MonarchToyT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMonarchToyT_C* UMonarchToyT_C::GetDefaultObj()
{
	static class UMonarchToyT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMonarchToyT_C*>(UMonarchToyT_C::StaticClass()->DefaultObject);

	return Default;
}

}


