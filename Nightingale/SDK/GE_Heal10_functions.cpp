#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Heal10.GE_Heal10_C
// (None)

class UClass* UGE_Heal10_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Heal10_C");

	return Clss;
}


// GE_Heal10_C GE_Heal10.Default__GE_Heal10_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Heal10_C* UGE_Heal10_C::GetDefaultObj()
{
	static class UGE_Heal10_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Heal10_C*>(UGE_Heal10_C::StaticClass()->DefaultObject);

	return Default;
}

}


