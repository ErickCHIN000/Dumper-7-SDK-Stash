#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HealthItem_Marshmallow.BP_HealthItem_Marshmallow_C
// (Actor)

class UClass* ABP_HealthItem_Marshmallow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HealthItem_Marshmallow_C");

	return Clss;
}


// BP_HealthItem_Marshmallow_C BP_HealthItem_Marshmallow.Default__BP_HealthItem_Marshmallow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HealthItem_Marshmallow_C* ABP_HealthItem_Marshmallow_C::GetDefaultObj()
{
	static class ABP_HealthItem_Marshmallow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HealthItem_Marshmallow_C*>(ABP_HealthItem_Marshmallow_C::StaticClass()->DefaultObject);

	return Default;
}

}


