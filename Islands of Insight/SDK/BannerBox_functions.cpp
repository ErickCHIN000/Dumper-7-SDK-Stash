#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BannerBox.BannerBox_C
// (None)

class UClass* UBannerBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BannerBox_C");

	return Clss;
}


// BannerBox_C BannerBox.Default__BannerBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBannerBox_C* UBannerBox_C::GetDefaultObj()
{
	static class UBannerBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBannerBox_C*>(UBannerBox_C::StaticClass()->DefaultObject);

	return Default;
}

}


