#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Sheltered.GE_Sheltered_C
// (None)

class UClass* UGE_Sheltered_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Sheltered_C");

	return Clss;
}


// GE_Sheltered_C GE_Sheltered.Default__GE_Sheltered_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Sheltered_C* UGE_Sheltered_C::GetDefaultObj()
{
	static class UGE_Sheltered_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Sheltered_C*>(UGE_Sheltered_C::StaticClass()->DefaultObject);

	return Default;
}

}


