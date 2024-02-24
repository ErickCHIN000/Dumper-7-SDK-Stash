#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MirruDefault01_StartSnatchT.MirruDefault01_StartSnatchT_C
// (None)

class UClass* UMirruDefault01_StartSnatchT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MirruDefault01_StartSnatchT_C");

	return Clss;
}


// MirruDefault01_StartSnatchT_C MirruDefault01_StartSnatchT.Default__MirruDefault01_StartSnatchT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMirruDefault01_StartSnatchT_C* UMirruDefault01_StartSnatchT_C::GetDefaultObj()
{
	static class UMirruDefault01_StartSnatchT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMirruDefault01_StartSnatchT_C*>(UMirruDefault01_StartSnatchT_C::StaticClass()->DefaultObject);

	return Default;
}

}


