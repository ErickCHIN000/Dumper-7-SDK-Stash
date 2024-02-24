#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CallHelpButtonImage.WBP_CallHelpButtonImage_C
// (None)

class UClass* UWBP_CallHelpButtonImage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CallHelpButtonImage_C");

	return Clss;
}


// WBP_CallHelpButtonImage_C WBP_CallHelpButtonImage.Default__WBP_CallHelpButtonImage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CallHelpButtonImage_C* UWBP_CallHelpButtonImage_C::GetDefaultObj()
{
	static class UWBP_CallHelpButtonImage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CallHelpButtonImage_C*>(UWBP_CallHelpButtonImage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CallHelpButtonImage.WBP_CallHelpButtonImage_C.On_Button_MouseButtonDown_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_CallHelpButtonImage_C::On_Button_MouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CallHelpButtonImage_C", "On_Button_MouseButtonDown_0");

	Params::UWBP_CallHelpButtonImage_C_On_Button_MouseButtonDown_0_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}

}


