#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseSurprise_FG_TR_NM_G.BaseSurprise_FG_TR_NM_G_C
// (None)

class UClass* UBaseSurprise_FG_TR_NM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseSurprise_FG_TR_NM_G_C");

	return Clss;
}


// BaseSurprise_FG_TR_NM_G_C BaseSurprise_FG_TR_NM_G.Default__BaseSurprise_FG_TR_NM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseSurprise_FG_TR_NM_G_C* UBaseSurprise_FG_TR_NM_G_C::GetDefaultObj()
{
	static class UBaseSurprise_FG_TR_NM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseSurprise_FG_TR_NM_G_C*>(UBaseSurprise_FG_TR_NM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


