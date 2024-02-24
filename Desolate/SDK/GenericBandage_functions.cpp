#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericBandage.GenericBandage_C
// (Actor)

class UClass* AGenericBandage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericBandage_C");

	return Clss;
}


// GenericBandage_C GenericBandage.Default__GenericBandage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericBandage_C* AGenericBandage_C::GetDefaultObj()
{
	static class AGenericBandage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericBandage_C*>(AGenericBandage_C::StaticClass()->DefaultObject);

	return Default;
}

}


