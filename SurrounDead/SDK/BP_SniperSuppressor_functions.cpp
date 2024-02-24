#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SniperSuppressor.BP_SniperSuppressor_C
// (Actor)

class UClass* ABP_SniperSuppressor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SniperSuppressor_C");

	return Clss;
}


// BP_SniperSuppressor_C BP_SniperSuppressor.Default__BP_SniperSuppressor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SniperSuppressor_C* ABP_SniperSuppressor_C::GetDefaultObj()
{
	static class ABP_SniperSuppressor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SniperSuppressor_C*>(ABP_SniperSuppressor_C::StaticClass()->DefaultObject);

	return Default;
}

}


