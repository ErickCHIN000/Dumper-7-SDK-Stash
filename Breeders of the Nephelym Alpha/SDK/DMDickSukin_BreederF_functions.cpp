#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DMDickSukin_BreederF.DMDickSukin_BreederF_C
// (None)

class UClass* UDMDickSukin_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DMDickSukin_BreederF_C");

	return Clss;
}


// DMDickSukin_BreederF_C DMDickSukin_BreederF.Default__DMDickSukin_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDMDickSukin_BreederF_C* UDMDickSukin_BreederF_C::GetDefaultObj()
{
	static class UDMDickSukin_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDMDickSukin_BreederF_C*>(UDMDickSukin_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}


