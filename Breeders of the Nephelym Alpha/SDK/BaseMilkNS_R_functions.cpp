#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMilkNS_R.BaseMilkNS_R_C
// (None)

class UClass* UBaseMilkNS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMilkNS_R_C");

	return Clss;
}


// BaseMilkNS_R_C BaseMilkNS_R.Default__BaseMilkNS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMilkNS_R_C* UBaseMilkNS_R_C::GetDefaultObj()
{
	static class UBaseMilkNS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMilkNS_R_C*>(UBaseMilkNS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


