#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SPAS-12.BP_SPAS-12_C
// (Actor)

class UClass* ABP_SPASMinus12_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SPAS-12_C");

	return Clss;
}


// BP_SPAS-12_C BP_SPAS-12.Default__BP_SPAS-12_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SPASMinus12_C* ABP_SPASMinus12_C::GetDefaultObj()
{
	static class ABP_SPASMinus12_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SPASMinus12_C*>(ABP_SPASMinus12_C::StaticClass()->DefaultObject);

	return Default;
}

}


