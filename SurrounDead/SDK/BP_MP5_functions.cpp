#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MP5.BP_MP5_C
// (Actor)

class UClass* ABP_MP5_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MP5_C");

	return Clss;
}


// BP_MP5_C BP_MP5.Default__BP_MP5_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MP5_C* ABP_MP5_C::GetDefaultObj()
{
	static class ABP_MP5_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MP5_C*>(ABP_MP5_C::StaticClass()->DefaultObject);

	return Default;
}

}


