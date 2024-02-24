#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_FernDefault2.CS_FernDefault2_C
// (None)

class UClass* UCS_FernDefault2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_FernDefault2_C");

	return Clss;
}


// CS_FernDefault2_C CS_FernDefault2.Default__CS_FernDefault2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_FernDefault2_C* UCS_FernDefault2_C::GetDefaultObj()
{
	static class UCS_FernDefault2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_FernDefault2_C*>(UCS_FernDefault2_C::StaticClass()->DefaultObject);

	return Default;
}

}


