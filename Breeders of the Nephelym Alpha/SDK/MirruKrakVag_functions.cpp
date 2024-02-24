#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MirruKrakVag.MirruKrakVag_C
// (None)

class UClass* UMirruKrakVag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MirruKrakVag_C");

	return Clss;
}


// MirruKrakVag_C MirruKrakVag.Default__MirruKrakVag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMirruKrakVag_C* UMirruKrakVag_C::GetDefaultObj()
{
	static class UMirruKrakVag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMirruKrakVag_C*>(UMirruKrakVag_C::StaticClass()->DefaultObject);

	return Default;
}

}


