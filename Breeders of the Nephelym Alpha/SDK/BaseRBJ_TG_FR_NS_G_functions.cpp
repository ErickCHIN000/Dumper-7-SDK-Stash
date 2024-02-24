#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRBJ_TG_FR_NS_G.BaseRBJ_TG_FR_NS_G_C
// (None)

class UClass* UBaseRBJ_TG_FR_NS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRBJ_TG_FR_NS_G_C");

	return Clss;
}


// BaseRBJ_TG_FR_NS_G_C BaseRBJ_TG_FR_NS_G.Default__BaseRBJ_TG_FR_NS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRBJ_TG_FR_NS_G_C* UBaseRBJ_TG_FR_NS_G_C::GetDefaultObj()
{
	static class UBaseRBJ_TG_FR_NS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRBJ_TG_FR_NS_G_C*>(UBaseRBJ_TG_FR_NS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


