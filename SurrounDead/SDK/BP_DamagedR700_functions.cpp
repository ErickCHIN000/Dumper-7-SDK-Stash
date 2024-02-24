#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DamagedR700.BP_DamagedR700_C
// (Actor)

class UClass* ABP_DamagedR700_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DamagedR700_C");

	return Clss;
}


// BP_DamagedR700_C BP_DamagedR700.Default__BP_DamagedR700_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DamagedR700_C* ABP_DamagedR700_C::GetDefaultObj()
{
	static class ABP_DamagedR700_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DamagedR700_C*>(ABP_DamagedR700_C::StaticClass()->DefaultObject);

	return Default;
}

}


