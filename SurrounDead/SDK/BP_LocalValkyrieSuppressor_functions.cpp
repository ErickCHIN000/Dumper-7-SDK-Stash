#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalValkyrieSuppressor.BP_LocalValkyrieSuppressor_C
// (Actor)

class UClass* ABP_LocalValkyrieSuppressor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalValkyrieSuppressor_C");

	return Clss;
}


// BP_LocalValkyrieSuppressor_C BP_LocalValkyrieSuppressor.Default__BP_LocalValkyrieSuppressor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalValkyrieSuppressor_C* ABP_LocalValkyrieSuppressor_C::GetDefaultObj()
{
	static class ABP_LocalValkyrieSuppressor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalValkyrieSuppressor_C*>(ABP_LocalValkyrieSuppressor_C::StaticClass()->DefaultObject);

	return Default;
}

}


