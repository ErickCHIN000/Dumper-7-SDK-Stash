#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMilkNN_R.BaseMilkNN_R_C
// (None)

class UClass* UBaseMilkNN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMilkNN_R_C");

	return Clss;
}


// BaseMilkNN_R_C BaseMilkNN_R.Default__BaseMilkNN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMilkNN_R_C* UBaseMilkNN_R_C::GetDefaultObj()
{
	static class UBaseMilkNN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMilkNN_R_C*>(UBaseMilkNN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


