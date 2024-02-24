#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_InitMaxHope.GE_InitMaxHope_C
// (None)

class UClass* UGE_InitMaxHope_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_InitMaxHope_C");

	return Clss;
}


// GE_InitMaxHope_C GE_InitMaxHope.Default__GE_InitMaxHope_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_InitMaxHope_C* UGE_InitMaxHope_C::GetDefaultObj()
{
	static class UGE_InitMaxHope_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_InitMaxHope_C*>(UGE_InitMaxHope_C::StaticClass()->DefaultObject);

	return Default;
}

}


