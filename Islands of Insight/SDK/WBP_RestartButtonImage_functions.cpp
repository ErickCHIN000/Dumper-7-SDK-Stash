#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_RestartButtonImage.WBP_RestartButtonImage_C
// (None)

class UClass* UWBP_RestartButtonImage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_RestartButtonImage_C");

	return Clss;
}


// WBP_RestartButtonImage_C WBP_RestartButtonImage.Default__WBP_RestartButtonImage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_RestartButtonImage_C* UWBP_RestartButtonImage_C::GetDefaultObj()
{
	static class UWBP_RestartButtonImage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_RestartButtonImage_C*>(UWBP_RestartButtonImage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_RestartButtonImage.WBP_RestartButtonImage_C.On_Button_MouseButtonDown_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_RestartButtonImage_C::On_Button_MouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RestartButtonImage_C", "On_Button_MouseButtonDown_0");

	Params::UWBP_RestartButtonImage_C_On_Button_MouseButtonDown_0_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}

}


