#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SecretIntelLaptop.BP_SecretIntelLaptop_C
// (Actor)

class UClass* ABP_SecretIntelLaptop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SecretIntelLaptop_C");

	return Clss;
}


// BP_SecretIntelLaptop_C BP_SecretIntelLaptop.Default__BP_SecretIntelLaptop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SecretIntelLaptop_C* ABP_SecretIntelLaptop_C::GetDefaultObj()
{
	static class ABP_SecretIntelLaptop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SecretIntelLaptop_C*>(ABP_SecretIntelLaptop_C::StaticClass()->DefaultObject);

	return Default;
}

}


