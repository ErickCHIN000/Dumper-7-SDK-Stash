#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GbxStatusEffects.GbxStatusEffectsPrivate
// (None)

class UClass* UGbxStatusEffectsPrivate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxStatusEffectsPrivate");

	return Clss;
}


// GbxStatusEffectsPrivate GbxStatusEffects.Default__GbxStatusEffectsPrivate
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxStatusEffectsPrivate* UGbxStatusEffectsPrivate::GetDefaultObj()
{
	static class UGbxStatusEffectsPrivate* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxStatusEffectsPrivate*>(UGbxStatusEffectsPrivate::StaticClass()->DefaultObject);

	return Default;
}

}


