#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_NWXAIPOI_Component.BP_NWXAIPOI_Component_C
// (None)

class UClass* UBP_NWXAIPOI_Component_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_NWXAIPOI_Component_C");

	return Clss;
}


// BP_NWXAIPOI_Component_C BP_NWXAIPOI_Component.Default__BP_NWXAIPOI_Component_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_NWXAIPOI_Component_C* UBP_NWXAIPOI_Component_C::GetDefaultObj()
{
	static class UBP_NWXAIPOI_Component_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_NWXAIPOI_Component_C*>(UBP_NWXAIPOI_Component_C::StaticClass()->DefaultObject);

	return Default;
}

}


