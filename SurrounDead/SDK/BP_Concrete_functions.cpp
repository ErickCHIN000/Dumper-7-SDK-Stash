#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Concrete.BP_Concrete_C
// (Actor)

class UClass* ABP_Concrete_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Concrete_C");

	return Clss;
}


// BP_Concrete_C BP_Concrete.Default__BP_Concrete_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Concrete_C* ABP_Concrete_C::GetDefaultObj()
{
	static class ABP_Concrete_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Concrete_C*>(ABP_Concrete_C::StaticClass()->DefaultObject);

	return Default;
}

}


