#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SetEstateScore.GE_SetEstateScore_C
// (None)

class UClass* UGE_SetEstateScore_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SetEstateScore_C");

	return Clss;
}


// GE_SetEstateScore_C GE_SetEstateScore.Default__GE_SetEstateScore_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SetEstateScore_C* UGE_SetEstateScore_C::GetDefaultObj()
{
	static class UGE_SetEstateScore_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SetEstateScore_C*>(UGE_SetEstateScore_C::StaticClass()->DefaultObject);

	return Default;
}

}


