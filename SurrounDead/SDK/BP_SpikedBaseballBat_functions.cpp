#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SpikedBaseballBat.BP_SpikedBaseballBat_C
// (Actor)

class UClass* ABP_SpikedBaseballBat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SpikedBaseballBat_C");

	return Clss;
}


// BP_SpikedBaseballBat_C BP_SpikedBaseballBat.Default__BP_SpikedBaseballBat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SpikedBaseballBat_C* ABP_SpikedBaseballBat_C::GetDefaultObj()
{
	static class ABP_SpikedBaseballBat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SpikedBaseballBat_C*>(ABP_SpikedBaseballBat_C::StaticClass()->DefaultObject);

	return Default;
}

}


