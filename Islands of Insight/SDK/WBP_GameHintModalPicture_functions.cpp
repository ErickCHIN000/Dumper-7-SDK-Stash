#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_GameHintModalPicture.WBP_GameHintModalPicture_C
// (None)

class UClass* UWBP_GameHintModalPicture_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_GameHintModalPicture_C");

	return Clss;
}


// WBP_GameHintModalPicture_C WBP_GameHintModalPicture.Default__WBP_GameHintModalPicture_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_GameHintModalPicture_C* UWBP_GameHintModalPicture_C::GetDefaultObj()
{
	static class UWBP_GameHintModalPicture_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_GameHintModalPicture_C*>(UWBP_GameHintModalPicture_C::StaticClass()->DefaultObject);

	return Default;
}

}


