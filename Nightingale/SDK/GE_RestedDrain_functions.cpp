#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_RestedDrain.GE_RestedDrain_C
// (None)

class UClass* UGE_RestedDrain_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_RestedDrain_C");

	return Clss;
}


// GE_RestedDrain_C GE_RestedDrain.Default__GE_RestedDrain_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_RestedDrain_C* UGE_RestedDrain_C::GetDefaultObj()
{
	static class UGE_RestedDrain_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_RestedDrain_C*>(UGE_RestedDrain_C::StaticClass()->DefaultObject);

	return Default;
}

}


