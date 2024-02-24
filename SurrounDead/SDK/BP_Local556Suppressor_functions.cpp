#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Local556Suppressor.BP_Local556Suppressor_C
// (Actor)

class UClass* ABP_Local556Suppressor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Local556Suppressor_C");

	return Clss;
}


// BP_Local556Suppressor_C BP_Local556Suppressor.Default__BP_Local556Suppressor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Local556Suppressor_C* ABP_Local556Suppressor_C::GetDefaultObj()
{
	static class ABP_Local556Suppressor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Local556Suppressor_C*>(ABP_Local556Suppressor_C::StaticClass()->DefaultObject);

	return Default;
}

}


