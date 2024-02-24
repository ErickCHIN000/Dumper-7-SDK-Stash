#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_XM250Mag.BP_XM250Mag_C
// (Actor)

class UClass* ABP_XM250Mag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_XM250Mag_C");

	return Clss;
}


// BP_XM250Mag_C BP_XM250Mag.Default__BP_XM250Mag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_XM250Mag_C* ABP_XM250Mag_C::GetDefaultObj()
{
	static class ABP_XM250Mag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_XM250Mag_C*>(ABP_XM250Mag_C::StaticClass()->DefaultObject);

	return Default;
}

}


