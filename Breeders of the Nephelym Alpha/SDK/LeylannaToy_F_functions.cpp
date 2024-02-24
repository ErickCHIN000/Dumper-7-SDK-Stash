#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaToy_F.LeylannaToy_F_C
// (None)

class UClass* ULeylannaToy_F_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaToy_F_C");

	return Clss;
}


// LeylannaToy_F_C LeylannaToy_F.Default__LeylannaToy_F_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaToy_F_C* ULeylannaToy_F_C::GetDefaultObj()
{
	static class ULeylannaToy_F_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaToy_F_C*>(ULeylannaToy_F_C::StaticClass()->DefaultObject);

	return Default;
}

}


