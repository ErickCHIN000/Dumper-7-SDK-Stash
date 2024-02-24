#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VulwargLykosF.VulwargLykosF_C
// (None)

class UClass* UVulwargLykosF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VulwargLykosF_C");

	return Clss;
}


// VulwargLykosF_C VulwargLykosF.Default__VulwargLykosF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVulwargLykosF_C* UVulwargLykosF_C::GetDefaultObj()
{
	static class UVulwargLykosF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVulwargLykosF_C*>(UVulwargLykosF_C::StaticClass()->DefaultObject);

	return Default;
}

}


