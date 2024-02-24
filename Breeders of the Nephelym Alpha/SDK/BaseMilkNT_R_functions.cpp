#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMilkNT_R.BaseMilkNT_R_C
// (None)

class UClass* UBaseMilkNT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMilkNT_R_C");

	return Clss;
}


// BaseMilkNT_R_C BaseMilkNT_R.Default__BaseMilkNT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMilkNT_R_C* UBaseMilkNT_R_C::GetDefaultObj()
{
	static class UBaseMilkNT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMilkNT_R_C*>(UBaseMilkNT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


