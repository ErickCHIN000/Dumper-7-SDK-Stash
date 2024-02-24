#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AxatanaShake.AxatanaShake_C
// (None)

class UClass* UAxatanaShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AxatanaShake_C");

	return Clss;
}


// AxatanaShake_C AxatanaShake.Default__AxatanaShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAxatanaShake_C* UAxatanaShake_C::GetDefaultObj()
{
	static class UAxatanaShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAxatanaShake_C*>(UAxatanaShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


