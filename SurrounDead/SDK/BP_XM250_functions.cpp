#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_XM250.BP_XM250_C
// (Actor)

class UClass* ABP_XM250_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_XM250_C");

	return Clss;
}


// BP_XM250_C BP_XM250.Default__BP_XM250_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_XM250_C* ABP_XM250_C::GetDefaultObj()
{
	static class ABP_XM250_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_XM250_C*>(ABP_XM250_C::StaticClass()->DefaultObject);

	return Default;
}

}


