#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SprainedAnkle.GE_SprainedAnkle_C
// (None)

class UClass* UGE_SprainedAnkle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SprainedAnkle_C");

	return Clss;
}


// GE_SprainedAnkle_C GE_SprainedAnkle.Default__GE_SprainedAnkle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SprainedAnkle_C* UGE_SprainedAnkle_C::GetDefaultObj()
{
	static class UGE_SprainedAnkle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SprainedAnkle_C*>(UGE_SprainedAnkle_C::StaticClass()->DefaultObject);

	return Default;
}

}


