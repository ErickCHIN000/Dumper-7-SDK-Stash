#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MilitaryBackpack.BP_MilitaryBackpack_C
// (Actor)

class UClass* ABP_MilitaryBackpack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MilitaryBackpack_C");

	return Clss;
}


// BP_MilitaryBackpack_C BP_MilitaryBackpack.Default__BP_MilitaryBackpack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MilitaryBackpack_C* ABP_MilitaryBackpack_C::GetDefaultObj()
{
	static class ABP_MilitaryBackpack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MilitaryBackpack_C*>(ABP_MilitaryBackpack_C::StaticClass()->DefaultObject);

	return Default;
}

}


