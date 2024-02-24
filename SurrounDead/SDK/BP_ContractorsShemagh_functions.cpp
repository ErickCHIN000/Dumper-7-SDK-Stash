#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ContractorsShemagh.BP_ContractorsShemagh_C
// (Actor)

class UClass* ABP_ContractorsShemagh_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ContractorsShemagh_C");

	return Clss;
}


// BP_ContractorsShemagh_C BP_ContractorsShemagh.Default__BP_ContractorsShemagh_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ContractorsShemagh_C* ABP_ContractorsShemagh_C::GetDefaultObj()
{
	static class ABP_ContractorsShemagh_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ContractorsShemagh_C*>(ABP_ContractorsShemagh_C::StaticClass()->DefaultObject);

	return Default;
}

}


