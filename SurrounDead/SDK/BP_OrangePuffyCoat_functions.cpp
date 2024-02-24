#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_OrangePuffyCoat.BP_OrangePuffyCoat_C
// (Actor)

class UClass* ABP_OrangePuffyCoat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_OrangePuffyCoat_C");

	return Clss;
}


// BP_OrangePuffyCoat_C BP_OrangePuffyCoat.Default__BP_OrangePuffyCoat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_OrangePuffyCoat_C* ABP_OrangePuffyCoat_C::GetDefaultObj()
{
	static class ABP_OrangePuffyCoat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_OrangePuffyCoat_C*>(ABP_OrangePuffyCoat_C::StaticClass()->DefaultObject);

	return Default;
}

}


