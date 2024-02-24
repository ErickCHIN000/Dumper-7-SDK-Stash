#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MonarchToyF.MonarchToyF_C
// (None)

class UClass* UMonarchToyF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MonarchToyF_C");

	return Clss;
}


// MonarchToyF_C MonarchToyF.Default__MonarchToyF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMonarchToyF_C* UMonarchToyF_C::GetDefaultObj()
{
	static class UMonarchToyF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMonarchToyF_C*>(UMonarchToyF_C::StaticClass()->DefaultObject);

	return Default;
}

}


