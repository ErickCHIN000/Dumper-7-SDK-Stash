#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_AutoRevive.GE_AutoRevive_C
// (None)

class UClass* UGE_AutoRevive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_AutoRevive_C");

	return Clss;
}


// GE_AutoRevive_C GE_AutoRevive.Default__GE_AutoRevive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_AutoRevive_C* UGE_AutoRevive_C::GetDefaultObj()
{
	static class UGE_AutoRevive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_AutoRevive_C*>(UGE_AutoRevive_C::StaticClass()->DefaultObject);

	return Default;
}

}


