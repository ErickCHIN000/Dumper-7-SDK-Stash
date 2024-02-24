#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_pda_IFullScreen.wid_pda_IFullScreen_C
// (None)

class UClass* UWid_pda_IFullScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_pda_IFullScreen_C");

	return Clss;
}


// wid_pda_IFullScreen_C wid_pda_IFullScreen.Default__wid_pda_IFullScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_pda_IFullScreen_C* UWid_pda_IFullScreen_C::GetDefaultObj()
{
	static class UWid_pda_IFullScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_pda_IFullScreen_C*>(UWid_pda_IFullScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.SetAppTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_pda_IFullScreen_C::SetAppTab(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "SetAppTab");

	Params::UWid_pda_IFullScreen_C_SetAppTab_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.GetName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AltNameID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Name                                                             (Parm, OutParm)

void UWid_pda_IFullScreen_C::GetName(int32 AltNameID, class FText* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "GetName");

	Params::UWid_pda_IFullScreen_C_GetName_Params Parms{};

	Parms.AltNameID = AltNameID;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.CanHidePhone
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanHide                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_pda_IFullScreen_C::CanHidePhone(bool* CanHide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "CanHidePhone");

	Params::UWid_pda_IFullScreen_C_CanHidePhone_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CanHide != nullptr)
		*CanHide = Parms.CanHide;

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.InputRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_IFullScreen_C::InputRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "InputRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.InputLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_IFullScreen_C::InputLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "InputLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.InputUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_IFullScreen_C::InputUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "InputUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.InputDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_IFullScreen_C::InputDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "InputDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.InputFaceDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_IFullScreen_C::InputFaceDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "InputFaceDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.InputFaceRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_IFullScreen_C::InputFaceRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "InputFaceRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.InputFaceLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_IFullScreen_C::InputFaceLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "InputFaceLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.InputFaceUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_IFullScreen_C::InputFaceUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "InputFaceUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.AppClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_IFullScreen_C::AppClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "AppClosed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.AppOpened
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_IFullScreen_C::AppOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "AppOpened");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.DPadUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_IFullScreen_C::DPadUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "DPadUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.DPadRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_IFullScreen_C::DPadRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "DPadRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.DPadDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_IFullScreen_C::DPadDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "DPadDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.DPadLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_IFullScreen_C::DPadLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "DPadLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.InputFaceDownReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_IFullScreen_C::InputFaceDownReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "InputFaceDownReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.InputFaceRightReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_IFullScreen_C::InputFaceRightReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "InputFaceRightReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.InputFaceLeftReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_IFullScreen_C::InputFaceLeftReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "InputFaceLeftReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.InputFaceUpReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_IFullScreen_C::InputFaceUpReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "InputFaceUpReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.InputLeftStick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_IFullScreen_C::InputLeftStick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "InputLeftStick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.InputRightStick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_IFullScreen_C::InputRightStick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "InputRightStick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.InputZoomUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_IFullScreen_C::InputZoomUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "InputZoomUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.InputZoomDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_IFullScreen_C::InputZoomDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "InputZoomDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.InputAxisX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Axis                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_pda_IFullScreen_C::InputAxisX(float Axis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "InputAxisX");

	Params::UWid_pda_IFullScreen_C_InputAxisX_Params Parms{};

	Parms.Axis = Axis;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.InputAxisY
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Axis                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_pda_IFullScreen_C::InputAxisY(float Axis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "InputAxisY");

	Params::UWid_pda_IFullScreen_C_InputAxisY_Params Parms{};

	Parms.Axis = Axis;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.InputL2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_IFullScreen_C::InputL2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "InputL2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.InputR2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_IFullScreen_C::InputR2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "InputR2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.QuickUse1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_IFullScreen_C::QuickUse1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "QuickUse1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.QuickUse2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_IFullScreen_C::QuickUse2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "QuickUse2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.QuickUse3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_IFullScreen_C::QuickUse3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "QuickUse3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.QuickUse4
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_IFullScreen_C::QuickUse4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "QuickUse4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.SwitchToMapApp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_MinimapTag_C*            Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_pda_IFullScreen_C::SwitchToMapApp(class Abp_MinimapTag_C* Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "SwitchToMapApp");

	Params::UWid_pda_IFullScreen_C_SwitchToMapApp_Params Parms{};

	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.InputRightReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_IFullScreen_C::InputRightReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "InputRightReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.InputLeftReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_IFullScreen_C::InputLeftReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "InputLeftReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.InputSplit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_IFullScreen_C::InputSplit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "InputSplit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.InputUIAccept
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_IFullScreen_C::InputUIAccept()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "InputUIAccept");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.QuickUse5
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_IFullScreen_C::QuickUse5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "QuickUse5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.QuickUse6
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_IFullScreen_C::QuickUse6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "QuickUse6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.QuickUse7
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_IFullScreen_C::QuickUse7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "QuickUse7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.QuickUse8
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_IFullScreen_C::QuickUse8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "QuickUse8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.InputAssign
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_IFullScreen_C::InputAssign()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "InputAssign");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.ExecuteUbergraph_wid_pda_IFullScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Axis_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Axis                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_MinimapTag_C*            K2Node_CustomEvent_Tag                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_pda_IFullScreen_C::ExecuteUbergraph_wid_pda_IFullScreen(int32 EntryPoint, float K2Node_CustomEvent_Axis_1, float K2Node_CustomEvent_Axis, class Abp_MinimapTag_C* K2Node_CustomEvent_Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "ExecuteUbergraph_wid_pda_IFullScreen");

	Params::UWid_pda_IFullScreen_C_ExecuteUbergraph_wid_pda_IFullScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Axis_1 = K2Node_CustomEvent_Axis_1;
	Parms.K2Node_CustomEvent_Axis = K2Node_CustomEvent_Axis;
	Parms.K2Node_CustomEvent_Tag = K2Node_CustomEvent_Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_pda_IFullScreen.wid_pda_IFullScreen_C.OnBackClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_IFullScreen_C::OnBackClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_IFullScreen_C", "OnBackClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


