#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ApplyRestedDefault.GE_ApplyRestedDefault_C
// (None)

class UClass* UGE_ApplyRestedDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ApplyRestedDefault_C");

	return Clss;
}


// GE_ApplyRestedDefault_C GE_ApplyRestedDefault.Default__GE_ApplyRestedDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ApplyRestedDefault_C* UGE_ApplyRestedDefault_C::GetDefaultObj()
{
	static class UGE_ApplyRestedDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ApplyRestedDefault_C*>(UGE_ApplyRestedDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


