#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Laptop.BP_Laptop_C
// (Actor)

class UClass* ABP_Laptop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Laptop_C");

	return Clss;
}


// BP_Laptop_C BP_Laptop.Default__BP_Laptop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Laptop_C* ABP_Laptop_C::GetDefaultObj()
{
	static class ABP_Laptop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Laptop_C*>(ABP_Laptop_C::StaticClass()->DefaultObject);

	return Default;
}

}


