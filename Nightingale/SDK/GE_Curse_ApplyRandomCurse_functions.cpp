#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Curse_ApplyRandomCurse.GE_Curse_ApplyRandomCurse_C
// (None)

class UClass* UGE_Curse_ApplyRandomCurse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Curse_ApplyRandomCurse_C");

	return Clss;
}


// GE_Curse_ApplyRandomCurse_C GE_Curse_ApplyRandomCurse.Default__GE_Curse_ApplyRandomCurse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Curse_ApplyRandomCurse_C* UGE_Curse_ApplyRandomCurse_C::GetDefaultObj()
{
	static class UGE_Curse_ApplyRandomCurse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Curse_ApplyRandomCurse_C*>(UGE_Curse_ApplyRandomCurse_C::StaticClass()->DefaultObject);

	return Default;
}

}


