#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MonarchPrettyButterfly.MonarchPrettyButterfly_C
// (None)

class UClass* UMonarchPrettyButterfly_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MonarchPrettyButterfly_C");

	return Clss;
}


// MonarchPrettyButterfly_C MonarchPrettyButterfly.Default__MonarchPrettyButterfly_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMonarchPrettyButterfly_C* UMonarchPrettyButterfly_C::GetDefaultObj()
{
	static class UMonarchPrettyButterfly_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMonarchPrettyButterfly_C*>(UMonarchPrettyButterfly_C::StaticClass()->DefaultObject);

	return Default;
}

}


