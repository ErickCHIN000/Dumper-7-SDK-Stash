#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MirruSnatchT.MirruSnatchT_C
// (None)

class UClass* UMirruSnatchT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MirruSnatchT_C");

	return Clss;
}


// MirruSnatchT_C MirruSnatchT.Default__MirruSnatchT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMirruSnatchT_C* UMirruSnatchT_C::GetDefaultObj()
{
	static class UMirruSnatchT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMirruSnatchT_C*>(UMirruSnatchT_C::StaticClass()->DefaultObject);

	return Default;
}

}


