#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPGameInstance_Default.BPGameInstance_Default_C
// (None)

class UClass* UBPGameInstance_Default_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPGameInstance_Default_C");

	return Clss;
}


// BPGameInstance_Default_C BPGameInstance_Default.Default__BPGameInstance_Default_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPGameInstance_Default_C* UBPGameInstance_Default_C::GetDefaultObj()
{
	static class UBPGameInstance_Default_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPGameInstance_Default_C*>(UBPGameInstance_Default_C::StaticClass()->DefaultObject);

	return Default;
}

}


