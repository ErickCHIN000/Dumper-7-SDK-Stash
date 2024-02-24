#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MirruDefault01_BodySexToy.MirruDefault01_BodySexToy_C
// (None)

class UClass* UMirruDefault01_BodySexToy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MirruDefault01_BodySexToy_C");

	return Clss;
}


// MirruDefault01_BodySexToy_C MirruDefault01_BodySexToy.Default__MirruDefault01_BodySexToy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMirruDefault01_BodySexToy_C* UMirruDefault01_BodySexToy_C::GetDefaultObj()
{
	static class UMirruDefault01_BodySexToy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMirruDefault01_BodySexToy_C*>(UMirruDefault01_BodySexToy_C::StaticClass()->DefaultObject);

	return Default;
}

}


