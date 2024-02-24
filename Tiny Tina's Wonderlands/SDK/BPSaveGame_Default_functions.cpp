#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPSaveGame_Default.BPSaveGame_Default_C
// (None)

class UClass* UBPSaveGame_Default_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPSaveGame_Default_C");

	return Clss;
}


// BPSaveGame_Default_C BPSaveGame_Default.Default__BPSaveGame_Default_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPSaveGame_Default_C* UBPSaveGame_Default_C::GetDefaultObj()
{
	static class UBPSaveGame_Default_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPSaveGame_Default_C*>(UBPSaveGame_Default_C::StaticClass()->DefaultObject);

	return Default;
}

}


