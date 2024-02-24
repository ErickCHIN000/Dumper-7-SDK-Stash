#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MalakhimMilkNL_G.MalakhimMilkNL_G_C
// (None)

class UClass* UMalakhimMilkNL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MalakhimMilkNL_G_C");

	return Clss;
}


// MalakhimMilkNL_G_C MalakhimMilkNL_G.Default__MalakhimMilkNL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMalakhimMilkNL_G_C* UMalakhimMilkNL_G_C::GetDefaultObj()
{
	static class UMalakhimMilkNL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMalakhimMilkNL_G_C*>(UMalakhimMilkNL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


