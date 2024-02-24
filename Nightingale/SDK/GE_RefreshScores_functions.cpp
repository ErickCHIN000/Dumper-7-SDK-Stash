#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_RefreshScores.GE_RefreshScores_C
// (None)

class UClass* UGE_RefreshScores_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_RefreshScores_C");

	return Clss;
}


// GE_RefreshScores_C GE_RefreshScores.Default__GE_RefreshScores_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_RefreshScores_C* UGE_RefreshScores_C::GetDefaultObj()
{
	static class UGE_RefreshScores_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_RefreshScores_C*>(UGE_RefreshScores_C::StaticClass()->DefaultObject);

	return Default;
}

}


