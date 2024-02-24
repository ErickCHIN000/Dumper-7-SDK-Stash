#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MirruKrakVag_BreederT.MirruKrakVag_BreederT_C
// (None)

class UClass* UMirruKrakVag_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MirruKrakVag_BreederT_C");

	return Clss;
}


// MirruKrakVag_BreederT_C MirruKrakVag_BreederT.Default__MirruKrakVag_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMirruKrakVag_BreederT_C* UMirruKrakVag_BreederT_C::GetDefaultObj()
{
	static class UMirruKrakVag_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMirruKrakVag_BreederT_C*>(UMirruKrakVag_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}


