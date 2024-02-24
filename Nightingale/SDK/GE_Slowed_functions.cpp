#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Slowed.GE_Slowed_C
// (None)

class UClass* UGE_Slowed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Slowed_C");

	return Clss;
}


// GE_Slowed_C GE_Slowed.Default__GE_Slowed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Slowed_C* UGE_Slowed_C::GetDefaultObj()
{
	static class UGE_Slowed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Slowed_C*>(UGE_Slowed_C::StaticClass()->DefaultObject);

	return Default;
}

}


