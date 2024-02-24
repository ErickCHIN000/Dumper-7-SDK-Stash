#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MirruSnatchF.MirruSnatchF_C
// (None)

class UClass* UMirruSnatchF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MirruSnatchF_C");

	return Clss;
}


// MirruSnatchF_C MirruSnatchF.Default__MirruSnatchF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMirruSnatchF_C* UMirruSnatchF_C::GetDefaultObj()
{
	static class UMirruSnatchF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMirruSnatchF_C*>(UMirruSnatchF_C::StaticClass()->DefaultObject);

	return Default;
}

}


