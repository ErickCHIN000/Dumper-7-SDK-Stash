#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VulwargLykosT.VulwargLykosT_C
// (None)

class UClass* UVulwargLykosT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VulwargLykosT_C");

	return Clss;
}


// VulwargLykosT_C VulwargLykosT.Default__VulwargLykosT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVulwargLykosT_C* UVulwargLykosT_C::GetDefaultObj()
{
	static class UVulwargLykosT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVulwargLykosT_C*>(UVulwargLykosT_C::StaticClass()->DefaultObject);

	return Default;
}

}


