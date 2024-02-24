#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Vulwarg.Vulwarg_C
// (None)

class UClass* UVulwarg_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vulwarg_C");

	return Clss;
}


// Vulwarg_C Vulwarg.Default__Vulwarg_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVulwarg_C* UVulwarg_C::GetDefaultObj()
{
	static class UVulwarg_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVulwarg_C*>(UVulwarg_C::StaticClass()->DefaultObject);

	return Default;
}

}


