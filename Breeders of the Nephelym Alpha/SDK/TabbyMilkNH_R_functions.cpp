#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TabbyMilkNH_R.TabbyMilkNH_R_C
// (None)

class UClass* UTabbyMilkNH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TabbyMilkNH_R_C");

	return Clss;
}


// TabbyMilkNH_R_C TabbyMilkNH_R.Default__TabbyMilkNH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTabbyMilkNH_R_C* UTabbyMilkNH_R_C::GetDefaultObj()
{
	static class UTabbyMilkNH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTabbyMilkNH_R_C*>(UTabbyMilkNH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


