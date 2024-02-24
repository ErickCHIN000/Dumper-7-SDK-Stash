#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MasterObject.BP_MasterObject_C
// (Actor)

class UClass* ABP_MasterObject_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MasterObject_C");

	return Clss;
}


// BP_MasterObject_C BP_MasterObject.Default__BP_MasterObject_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MasterObject_C* ABP_MasterObject_C::GetDefaultObj()
{
	static class ABP_MasterObject_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MasterObject_C*>(ABP_MasterObject_C::StaticClass()->DefaultObject);

	return Default;
}

}


