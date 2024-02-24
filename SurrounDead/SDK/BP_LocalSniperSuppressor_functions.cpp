#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalSniperSuppressor.BP_LocalSniperSuppressor_C
// (Actor)

class UClass* ABP_LocalSniperSuppressor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalSniperSuppressor_C");

	return Clss;
}


// BP_LocalSniperSuppressor_C BP_LocalSniperSuppressor.Default__BP_LocalSniperSuppressor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalSniperSuppressor_C* ABP_LocalSniperSuppressor_C::GetDefaultObj()
{
	static class ABP_LocalSniperSuppressor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalSniperSuppressor_C*>(ABP_LocalSniperSuppressor_C::StaticClass()->DefaultObject);

	return Default;
}

}


