#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MegaSlimeHadSex01.MegaSlimeHadSex01_C
// (None)

class UClass* UMegaSlimeHadSex01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MegaSlimeHadSex01_C");

	return Clss;
}


// MegaSlimeHadSex01_C MegaSlimeHadSex01.Default__MegaSlimeHadSex01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMegaSlimeHadSex01_C* UMegaSlimeHadSex01_C::GetDefaultObj()
{
	static class UMegaSlimeHadSex01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMegaSlimeHadSex01_C*>(UMegaSlimeHadSex01_C::StaticClass()->DefaultObject);

	return Default;
}

}


