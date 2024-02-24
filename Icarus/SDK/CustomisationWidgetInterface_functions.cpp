#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CustomisationWidgetInterface.CustomisationWidgetInterface_C
// (None)

class UClass* ICustomisationWidgetInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomisationWidgetInterface_C");

	return Clss;
}


// CustomisationWidgetInterface_C CustomisationWidgetInterface.Default__CustomisationWidgetInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ICustomisationWidgetInterface_C* ICustomisationWidgetInterface_C::GetDefaultObj()
{
	static class ICustomisationWidgetInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ICustomisationWidgetInterface_C*>(ICustomisationWidgetInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CustomisationWidgetInterface.CustomisationWidgetInterface_C.GetCameraFocus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPreviewCameraSettingsEnum  CameraFocus                                                      (Parm, OutParm, HasGetValueTypeHash)

void ICustomisationWidgetInterface_C::GetCameraFocus(struct FPreviewCameraSettingsEnum* CameraFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomisationWidgetInterface_C", "GetCameraFocus");

	Params::ICustomisationWidgetInterface_C_GetCameraFocus_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CameraFocus != nullptr)
		*CameraFocus = std::move(Parms.CameraFocus);

}


// Function CustomisationWidgetInterface.CustomisationWidgetInterface_C.GetCosmeticData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterCosmetics         CosmeticData                                                     (Parm, OutParm, NoDestructor)

void ICustomisationWidgetInterface_C::GetCosmeticData(struct FCharacterCosmetics* CosmeticData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomisationWidgetInterface_C", "GetCosmeticData");

	Params::ICustomisationWidgetInterface_C_GetCosmeticData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CosmeticData != nullptr)
		*CosmeticData = std::move(Parms.CosmeticData);

}

}


