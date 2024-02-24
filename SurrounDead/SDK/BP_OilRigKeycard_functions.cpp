#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_OilRigKeycard.BP_OilRigKeycard_C
// (Actor)

class UClass* ABP_OilRigKeycard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_OilRigKeycard_C");

	return Clss;
}


// BP_OilRigKeycard_C BP_OilRigKeycard.Default__BP_OilRigKeycard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_OilRigKeycard_C* ABP_OilRigKeycard_C::GetDefaultObj()
{
	static class ABP_OilRigKeycard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_OilRigKeycard_C*>(ABP_OilRigKeycard_C::StaticClass()->DefaultObject);

	return Default;
}

}


