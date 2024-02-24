#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PlayGameButton.WBP_PlayGameButton_C
// (None)

class UClass* UWBP_PlayGameButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PlayGameButton_C");

	return Clss;
}


// WBP_PlayGameButton_C WBP_PlayGameButton.Default__WBP_PlayGameButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PlayGameButton_C* UWBP_PlayGameButton_C::GetDefaultObj()
{
	static class UWBP_PlayGameButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PlayGameButton_C*>(UWBP_PlayGameButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PlayGameButton.WBP_PlayGameButton_C.On_Button_MouseButtonDown_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_PlayGameButton_C::On_Button_MouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayGameButton_C", "On_Button_MouseButtonDown_0");

	Params::UWBP_PlayGameButton_C_On_Button_MouseButtonDown_0_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayGameButton.WBP_PlayGameButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_PlayGameButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayGameButton_C", "PreConstruct");

	Params::UWBP_PlayGameButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayGameButton.WBP_PlayGameButton_C.UpdateImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayGameButton_C::UpdateImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayGameButton_C", "UpdateImage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayGameButton.WBP_PlayGameButton_C.ExecuteUbergraph_WBP_PlayGameButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_PlayGameButton_C::ExecuteUbergraph_WBP_PlayGameButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayGameButton_C", "ExecuteUbergraph_WBP_PlayGameButton");

	Params::UWBP_PlayGameButton_C_ExecuteUbergraph_WBP_PlayGameButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


