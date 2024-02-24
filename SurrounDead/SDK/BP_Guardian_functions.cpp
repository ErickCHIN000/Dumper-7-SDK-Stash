#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Guardian.BP_Guardian_C
// (Actor)

class UClass* ABP_Guardian_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Guardian_C");

	return Clss;
}


// BP_Guardian_C BP_Guardian.Default__BP_Guardian_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Guardian_C* ABP_Guardian_C::GetDefaultObj()
{
	static class ABP_Guardian_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Guardian_C*>(ABP_Guardian_C::StaticClass()->DefaultObject);

	return Default;
}

}


