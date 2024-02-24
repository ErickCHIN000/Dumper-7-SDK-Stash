#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseSurprise_FG_TR_HH_R.BaseSurprise_FG_TR_HH_R_C
// (None)

class UClass* UBaseSurprise_FG_TR_HH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseSurprise_FG_TR_HH_R_C");

	return Clss;
}


// BaseSurprise_FG_TR_HH_R_C BaseSurprise_FG_TR_HH_R.Default__BaseSurprise_FG_TR_HH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseSurprise_FG_TR_HH_R_C* UBaseSurprise_FG_TR_HH_R_C::GetDefaultObj()
{
	static class UBaseSurprise_FG_TR_HH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseSurprise_FG_TR_HH_R_C*>(UBaseSurprise_FG_TR_HH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


