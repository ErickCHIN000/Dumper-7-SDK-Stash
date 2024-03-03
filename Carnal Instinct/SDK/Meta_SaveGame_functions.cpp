#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Meta_SaveGame.Meta_SaveGame_C
// (None)

class UClass* UMeta_SaveGame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Meta_SaveGame_C");

	return Clss;
}


// Meta_SaveGame_C Meta_SaveGame.Default__Meta_SaveGame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMeta_SaveGame_C* UMeta_SaveGame_C::GetDefaultObj()
{
	static class UMeta_SaveGame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeta_SaveGame_C*>(UMeta_SaveGame_C::StaticClass()->DefaultObject);

	return Default;
}

}


