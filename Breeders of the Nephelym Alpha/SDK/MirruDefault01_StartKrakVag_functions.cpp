#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MirruDefault01_StartKrakVag.MirruDefault01_StartKrakVag_C
// (None)

class UClass* UMirruDefault01_StartKrakVag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MirruDefault01_StartKrakVag_C");

	return Clss;
}


// MirruDefault01_StartKrakVag_C MirruDefault01_StartKrakVag.Default__MirruDefault01_StartKrakVag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMirruDefault01_StartKrakVag_C* UMirruDefault01_StartKrakVag_C::GetDefaultObj()
{
	static class UMirruDefault01_StartKrakVag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMirruDefault01_StartKrakVag_C*>(UMirruDefault01_StartKrakVag_C::StaticClass()->DefaultObject);

	return Default;
}

}


