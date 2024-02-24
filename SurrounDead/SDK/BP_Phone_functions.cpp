#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Phone.BP_Phone_C
// (Actor)

class UClass* ABP_Phone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Phone_C");

	return Clss;
}


// BP_Phone_C BP_Phone.Default__BP_Phone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Phone_C* ABP_Phone_C::GetDefaultObj()
{
	static class ABP_Phone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Phone_C*>(ABP_Phone_C::StaticClass()->DefaultObject);

	return Default;
}

}


