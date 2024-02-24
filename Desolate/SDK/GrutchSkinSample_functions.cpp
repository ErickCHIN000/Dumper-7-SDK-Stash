#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GrutchSkinSample.GrutchSkinSample_C
// (Actor)

class UClass* AGrutchSkinSample_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GrutchSkinSample_C");

	return Clss;
}


// GrutchSkinSample_C GrutchSkinSample.Default__GrutchSkinSample_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGrutchSkinSample_C* AGrutchSkinSample_C::GetDefaultObj()
{
	static class AGrutchSkinSample_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGrutchSkinSample_C*>(AGrutchSkinSample_C::StaticClass()->DefaultObject);

	return Default;
}

}


