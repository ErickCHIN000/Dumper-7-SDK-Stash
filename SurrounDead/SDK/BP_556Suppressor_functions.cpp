#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_556Suppressor.BP_556Suppressor_C
// (Actor)

class UClass* ABP_556Suppressor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_556Suppressor_C");

	return Clss;
}


// BP_556Suppressor_C BP_556Suppressor.Default__BP_556Suppressor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_556Suppressor_C* ABP_556Suppressor_C::GetDefaultObj()
{
	static class ABP_556Suppressor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_556Suppressor_C*>(ABP_556Suppressor_C::StaticClass()->DefaultObject);

	return Default;
}

}


