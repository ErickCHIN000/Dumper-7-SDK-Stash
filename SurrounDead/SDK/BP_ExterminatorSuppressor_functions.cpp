#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ExterminatorSuppressor.BP_ExterminatorSuppressor_C
// (Actor)

class UClass* ABP_ExterminatorSuppressor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ExterminatorSuppressor_C");

	return Clss;
}


// BP_ExterminatorSuppressor_C BP_ExterminatorSuppressor.Default__BP_ExterminatorSuppressor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ExterminatorSuppressor_C* ABP_ExterminatorSuppressor_C::GetDefaultObj()
{
	static class ABP_ExterminatorSuppressor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ExterminatorSuppressor_C*>(ABP_ExterminatorSuppressor_C::StaticClass()->DefaultObject);

	return Default;
}

}


