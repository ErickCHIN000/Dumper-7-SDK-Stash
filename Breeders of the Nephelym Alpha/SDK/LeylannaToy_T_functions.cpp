#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaToy_T.LeylannaToy_T_C
// (None)

class UClass* ULeylannaToy_T_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaToy_T_C");

	return Clss;
}


// LeylannaToy_T_C LeylannaToy_T.Default__LeylannaToy_T_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaToy_T_C* ULeylannaToy_T_C::GetDefaultObj()
{
	static class ULeylannaToy_T_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaToy_T_C*>(ULeylannaToy_T_C::StaticClass()->DefaultObject);

	return Default;
}

}


