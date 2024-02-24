#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DMDickSukin_BreederT.DMDickSukin_BreederT_C
// (None)

class UClass* UDMDickSukin_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DMDickSukin_BreederT_C");

	return Clss;
}


// DMDickSukin_BreederT_C DMDickSukin_BreederT.Default__DMDickSukin_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDMDickSukin_BreederT_C* UDMDickSukin_BreederT_C::GetDefaultObj()
{
	static class UDMDickSukin_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDMDickSukin_BreederT_C*>(UDMDickSukin_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}


