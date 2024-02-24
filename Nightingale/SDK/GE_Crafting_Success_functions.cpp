#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Crafting_Success.GE_Crafting_Success_C
// (None)

class UClass* UGE_Crafting_Success_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Crafting_Success_C");

	return Clss;
}


// GE_Crafting_Success_C GE_Crafting_Success.Default__GE_Crafting_Success_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Crafting_Success_C* UGE_Crafting_Success_C::GetDefaultObj()
{
	static class UGE_Crafting_Success_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Crafting_Success_C*>(UGE_Crafting_Success_C::StaticClass()->DefaultObject);

	return Default;
}

}


