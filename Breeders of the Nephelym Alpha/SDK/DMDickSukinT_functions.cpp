#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DMDickSukinT.DMDickSukinT_C
// (None)

class UClass* UDMDickSukinT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DMDickSukinT_C");

	return Clss;
}


// DMDickSukinT_C DMDickSukinT.Default__DMDickSukinT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDMDickSukinT_C* UDMDickSukinT_C::GetDefaultObj()
{
	static class UDMDickSukinT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDMDickSukinT_C*>(UDMDickSukinT_C::StaticClass()->DefaultObject);

	return Default;
}

}


