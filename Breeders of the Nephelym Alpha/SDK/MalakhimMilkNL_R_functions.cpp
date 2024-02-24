#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MalakhimMilkNL_R.MalakhimMilkNL_R_C
// (None)

class UClass* UMalakhimMilkNL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MalakhimMilkNL_R_C");

	return Clss;
}


// MalakhimMilkNL_R_C MalakhimMilkNL_R.Default__MalakhimMilkNL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMalakhimMilkNL_R_C* UMalakhimMilkNL_R_C::GetDefaultObj()
{
	static class UMalakhimMilkNL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMalakhimMilkNL_R_C*>(UMalakhimMilkNL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


