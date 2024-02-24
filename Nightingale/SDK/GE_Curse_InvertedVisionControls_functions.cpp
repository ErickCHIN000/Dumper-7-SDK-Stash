#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Curse_InvertedVisionControls.GE_Curse_InvertedVisionControls_C
// (None)

class UClass* UGE_Curse_InvertedVisionControls_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Curse_InvertedVisionControls_C");

	return Clss;
}


// GE_Curse_InvertedVisionControls_C GE_Curse_InvertedVisionControls.Default__GE_Curse_InvertedVisionControls_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Curse_InvertedVisionControls_C* UGE_Curse_InvertedVisionControls_C::GetDefaultObj()
{
	static class UGE_Curse_InvertedVisionControls_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Curse_InvertedVisionControls_C*>(UGE_Curse_InvertedVisionControls_C::StaticClass()->DefaultObject);

	return Default;
}

}


