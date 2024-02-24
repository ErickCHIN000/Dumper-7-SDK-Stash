#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MalakhimMilkNH_R.MalakhimMilkNH_R_C
// (None)

class UClass* UMalakhimMilkNH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MalakhimMilkNH_R_C");

	return Clss;
}


// MalakhimMilkNH_R_C MalakhimMilkNH_R.Default__MalakhimMilkNH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMalakhimMilkNH_R_C* UMalakhimMilkNH_R_C::GetDefaultObj()
{
	static class UMalakhimMilkNH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMalakhimMilkNH_R_C*>(UMalakhimMilkNH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


