#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MegaSlimeHowLong.MegaSlimeHowLong_C
// (None)

class UClass* UMegaSlimeHowLong_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MegaSlimeHowLong_C");

	return Clss;
}


// MegaSlimeHowLong_C MegaSlimeHowLong.Default__MegaSlimeHowLong_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMegaSlimeHowLong_C* UMegaSlimeHowLong_C::GetDefaultObj()
{
	static class UMegaSlimeHowLong_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMegaSlimeHowLong_C*>(UMegaSlimeHowLong_C::StaticClass()->DefaultObject);

	return Default;
}

}


