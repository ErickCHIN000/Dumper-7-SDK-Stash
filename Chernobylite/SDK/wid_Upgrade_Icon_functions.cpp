#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_Upgrade_Icon.wid_Upgrade_Icon_C
// (None)

class UClass* UWid_Upgrade_Icon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Upgrade_Icon_C");

	return Clss;
}


// wid_Upgrade_Icon_C wid_Upgrade_Icon.Default__wid_Upgrade_Icon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_Upgrade_Icon_C* UWid_Upgrade_Icon_C::GetDefaultObj()
{
	static class UWid_Upgrade_Icon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_Upgrade_Icon_C*>(UWid_Upgrade_Icon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_Upgrade_Icon.wid_Upgrade_Icon_C.SetImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Upgrade_Icon_C::SetImage(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Upgrade_Icon_C", "SetImage");

	Params::UWid_Upgrade_Icon_C_SetImage_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}

}


