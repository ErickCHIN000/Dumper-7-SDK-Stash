#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MirruDefault01_StartSnatchF.MirruDefault01_StartSnatchF_C
// (None)

class UClass* UMirruDefault01_StartSnatchF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MirruDefault01_StartSnatchF_C");

	return Clss;
}


// MirruDefault01_StartSnatchF_C MirruDefault01_StartSnatchF.Default__MirruDefault01_StartSnatchF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMirruDefault01_StartSnatchF_C* UMirruDefault01_StartSnatchF_C::GetDefaultObj()
{
	static class UMirruDefault01_StartSnatchF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMirruDefault01_StartSnatchF_C*>(UMirruDefault01_StartSnatchF_C::StaticClass()->DefaultObject);

	return Default;
}

}


