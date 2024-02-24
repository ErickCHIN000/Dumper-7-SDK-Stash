#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MegaSlimeHadSex01T.MegaSlimeHadSex01T_C
// (None)

class UClass* UMegaSlimeHadSex01T_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MegaSlimeHadSex01T_C");

	return Clss;
}


// MegaSlimeHadSex01T_C MegaSlimeHadSex01T.Default__MegaSlimeHadSex01T_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMegaSlimeHadSex01T_C* UMegaSlimeHadSex01T_C::GetDefaultObj()
{
	static class UMegaSlimeHadSex01T_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMegaSlimeHadSex01T_C*>(UMegaSlimeHadSex01T_C::StaticClass()->DefaultObject);

	return Default;
}

}


