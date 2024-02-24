#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SmartPhone.BP_SmartPhone_C
// (Actor)

class UClass* ABP_SmartPhone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SmartPhone_C");

	return Clss;
}


// BP_SmartPhone_C BP_SmartPhone.Default__BP_SmartPhone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SmartPhone_C* ABP_SmartPhone_C::GetDefaultObj()
{
	static class ABP_SmartPhone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SmartPhone_C*>(ABP_SmartPhone_C::StaticClass()->DefaultObject);

	return Default;
}

}


