#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class TwUIFramework.TwBaseWidget
// (None)

class UClass* UTwBaseWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwBaseWidget");

	return Clss;
}


// TwBaseWidget TwUIFramework.Default__TwBaseWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwBaseWidget* UTwBaseWidget::GetDefaultObj()
{
	static class UTwBaseWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwBaseWidget*>(UTwBaseWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.TwBaseWidget.UnsubscribeFromEvents_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AHUD*                        HUD                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwBaseWidget::UnsubscribeFromEvents_BP(class AHUD* HUD)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseWidget", "UnsubscribeFromEvents_BP");

	Params::UTwBaseWidget_UnsubscribeFromEvents_BP_Params Parms{};

	Parms.HUD = HUD;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TwUIFramework.TwBaseWidget.SubscribeToEvents_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AHUD*                        HUD                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwBaseWidget::SubscribeToEvents_BP(class AHUD* HUD)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseWidget", "SubscribeToEvents_BP");

	Params::UTwBaseWidget_SubscribeToEvents_BP_Params Parms{};

	Parms.HUD = HUD;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TwUIFramework.TwBaseWidget.OnPostInitProperties
// (Event, Public, BlueprintEvent)
// Parameters:

void UTwBaseWidget::OnPostInitProperties()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseWidget", "OnPostInitProperties");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TwUIFramework.TwBaseWidget.OnMouseLeave_BP
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               InMouseEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UTwBaseWidget::OnMouseLeave_BP(struct FPointerEvent& InMouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseWidget", "OnMouseLeave_BP");

	Params::UTwBaseWidget_OnMouseLeave_BP_Params Parms{};

	Parms.InMouseEvent = InMouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TwUIFramework.TwBaseWidget.OnMouseEnter_BP
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   InGeometry                                                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               InMouseEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UTwBaseWidget::OnMouseEnter_BP(struct FGeometry& InGeometry, struct FPointerEvent& InMouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseWidget", "OnMouseEnter_BP");

	Params::UTwBaseWidget_OnMouseEnter_BP_Params Parms{};

	Parms.InGeometry = InGeometry;
	Parms.InMouseEvent = InMouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TwUIFramework.TwBaseWidget.OnMouseButtonDown_BP
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   InGeometry                                                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               InMouseEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UTwBaseWidget::OnMouseButtonDown_BP(struct FGeometry& InGeometry, struct FPointerEvent& InMouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseWidget", "OnMouseButtonDown_BP");

	Params::UTwBaseWidget_OnMouseButtonDown_BP_Params Parms{};

	Parms.InGeometry = InGeometry;
	Parms.InMouseEvent = InMouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TwUIFramework.TwBaseWidget.GetHUD
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AHUD*                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AHUD* UTwBaseWidget::GetHUD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseWidget", "GetHUD");

	Params::UTwBaseWidget_GetHUD_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TwUIFramework.BaseSlider
// (None)

class UClass* UBaseSlider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseSlider");

	return Clss;
}


// BaseSlider TwUIFramework.Default__BaseSlider
// (Public, ClassDefaultObject, ArchetypeObject)

class UBaseSlider* UBaseSlider::GetDefaultObj()
{
	static class UBaseSlider* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseSlider*>(UBaseSlider::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.BaseSlider.SetSliderValue
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              Perc                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSurpressEvent                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBaseSlider::SetSliderValue(float Perc, bool bSurpressEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseSlider", "SetSliderValue");

	Params::UBaseSlider_SetSliderValue_Params Parms{};

	Parms.Perc = Perc;
	Parms.bSurpressEvent = bSurpressEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.BaseSlider.GetSliderValue
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UBaseSlider::GetSliderValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseSlider", "GetSliderValue");

	Params::UBaseSlider_GetSliderValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TwUIFramework.TwClickableWidget
// (None)

class UClass* UTwClickableWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwClickableWidget");

	return Clss;
}


// TwClickableWidget TwUIFramework.Default__TwClickableWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwClickableWidget* UTwClickableWidget::GetDefaultObj()
{
	static class UTwClickableWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwClickableWidget*>(UTwClickableWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.TwClickableWidget.ToggleSelectedState
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bForceSetState                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNewState                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwClickableWidget::ToggleSelectedState(bool bForceSetState, bool bNewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwClickableWidget", "ToggleSelectedState");

	Params::UTwClickableWidget_ToggleSelectedState_Params Parms{};

	Parms.bForceSetState = bForceSetState;
	Parms.bNewState = bNewState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwClickableWidget.SetLabelText
// (Native, Public, BlueprintCallable)
// Parameters:
// class FText                        Label                                                            (Parm, NativeAccessSpecifierPublic)

void UTwClickableWidget::SetLabelText(class FText Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwClickableWidget", "SetLabelText");

	Params::UTwClickableWidget_SetLabelText_Params Parms{};

	Parms.Label = Label;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwClickableWidget.SetIsToggleable
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bToggle                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwClickableWidget::SetIsToggleable(bool bToggle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwClickableWidget", "SetIsToggleable");

	Params::UTwClickableWidget_SetIsToggleable_Params Parms{};

	Parms.bToggle = bToggle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwClickableWidget.SetIconTexture
// (Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*                  Texture                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwClickableWidget::SetIconTexture(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwClickableWidget", "SetIconTexture");

	Params::UTwClickableWidget_SetIconTexture_Params Parms{};

	Parms.Texture = Texture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwClickableWidget.SetIconSoftTexture
// (Native, Public, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   SoftTexture                                                      (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwClickableWidget::SetIconSoftTexture(TSoftObjectPtr<class UTexture2D> SoftTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwClickableWidget", "SetIconSoftTexture");

	Params::UTwClickableWidget_SetIconSoftTexture_Params Parms{};

	Parms.SoftTexture = SoftTexture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class TwUIFramework.TwAnimatedButton
// (None)

class UClass* UTwAnimatedButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwAnimatedButton");

	return Clss;
}


// TwAnimatedButton TwUIFramework.Default__TwAnimatedButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwAnimatedButton* UTwAnimatedButton::GetDefaultObj()
{
	static class UTwAnimatedButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwAnimatedButton*>(UTwAnimatedButton::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.TwAnimatedButton.SetSelected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bSelected                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwAnimatedButton::SetSelected(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwAnimatedButton", "SetSelected");

	Params::UTwAnimatedButton_SetSelected_Params Parms{};

	Parms.bSelected = bSelected;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwAnimatedButton.IsSelected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTwAnimatedButton::IsSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwAnimatedButton", "IsSelected");

	Params::UTwAnimatedButton_IsSelected_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwUIFramework.TwAnimatedButton.AnimateState_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EAnimButtonState        State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwAnimatedButton::AnimateState_BP(enum class EAnimButtonState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwAnimatedButton", "AnimateState_BP");

	Params::UTwAnimatedButton_AnimateState_BP_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Class TwUIFramework.TwBaseButton
// (None)

class UClass* UTwBaseButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwBaseButton");

	return Clss;
}


// TwBaseButton TwUIFramework.Default__TwBaseButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwBaseButton* UTwBaseButton::GetDefaultObj()
{
	static class UTwBaseButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwBaseButton*>(UTwBaseButton::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.TwBaseButton.StopBorderPulseTween
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UTwBaseButton::StopBorderPulseTween()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseButton", "StopBorderPulseTween");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwBaseButton.StartBorderPulseTween
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UTwBaseButton::StartBorderPulseTween()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseButton", "StartBorderPulseTween");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwBaseButton.SetForcedHighlight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bForced                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwBaseButton::SetForcedHighlight(bool bForced)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseButton", "SetForcedHighlight");

	Params::UTwBaseButton_SetForcedHighlight_Params Parms{};

	Parms.bForced = bForced;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwBaseButton.SetDisabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bDisabled                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwBaseButton::SetDisabled(bool bDisabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseButton", "SetDisabled");

	Params::UTwBaseButton_SetDisabled_Params Parms{};

	Parms.bDisabled = bDisabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwBaseButton.OnTweenStep
// (Final, Native, Protected)
// Parameters:
// class UTwTweener*                  Tweener                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwBaseButton::OnTweenStep(class UTwTweener* Tweener)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseButton", "OnTweenStep");

	Params::UTwBaseButton_OnTweenStep_Params Parms{};

	Parms.Tweener = Tweener;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwBaseButton.GetSelectedState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTwBaseButton::GetSelectedState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseButton", "GetSelectedState");

	Params::UTwBaseButton_GetSelectedState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwUIFramework.TwBaseButton.GetDisabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTwBaseButton::GetDisabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseButton", "GetDisabled");

	Params::UTwBaseButton_GetDisabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwUIFramework.TwBaseButton.GetButtonLabelText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UTwBaseButton::GetButtonLabelText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseButton", "GetButtonLabelText");

	Params::UTwBaseButton_GetButtonLabelText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwUIFramework.TwBaseButton.GetButtonFrameImage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UImage*                      ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UImage* UTwBaseButton::GetButtonFrameImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseButton", "GetButtonFrameImage");

	Params::UTwBaseButton_GetButtonFrameImage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TwUIFramework.TwBaseMenu
// (None)

class UClass* UTwBaseMenu::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwBaseMenu");

	return Clss;
}


// TwBaseMenu TwUIFramework.Default__TwBaseMenu
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwBaseMenu* UTwBaseMenu::GetDefaultObj()
{
	static class UTwBaseMenu* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwBaseMenu*>(UTwBaseMenu::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.TwBaseMenu.SetDefaultPanel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// uint8                              Panel                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwBaseMenu::SetDefaultPanel(uint8 Panel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseMenu", "SetDefaultPanel");

	Params::UTwBaseMenu_SetDefaultPanel_Params Parms{};

	Parms.Panel = Panel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwBaseMenu.OpenMenuPanelByLookup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        LookupName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwBaseMenuPanel*            ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTwBaseMenuPanel* UTwBaseMenu::OpenMenuPanelByLookup(class FName LookupName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseMenu", "OpenMenuPanelByLookup");

	Params::UTwBaseMenu_OpenMenuPanelByLookup_Params Parms{};

	Parms.LookupName = LookupName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwUIFramework.TwBaseMenu.OpenMenuPanel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwBaseMenuPanel*            ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTwBaseMenuPanel* UTwBaseMenu::OpenMenuPanel(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseMenu", "OpenMenuPanel");

	Params::UTwBaseMenu_OpenMenuPanel_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwUIFramework.TwBaseMenu.OpenMenu
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTwBaseMenu::OpenMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseMenu", "OpenMenu");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwBaseMenu.OnMenuBarItemClicked
// (Native, Protected)
// Parameters:
// class UTwBaseMenuBarItem*          MenuBarItem                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwBaseMenu::OnMenuBarItemClicked(class UTwBaseMenuBarItem* MenuBarItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseMenu", "OnMenuBarItemClicked");

	Params::UTwBaseMenu_OnMenuBarItemClicked_Params Parms{};

	Parms.MenuBarItem = MenuBarItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwBaseMenu.OnInputDeviceChanged
// (Final, Native, Protected)
// Parameters:
// enum class EUserInputDevice        Device                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwBaseMenu::OnInputDeviceChanged(enum class EUserInputDevice Device)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseMenu", "OnInputDeviceChanged");

	Params::UTwBaseMenu_OnInputDeviceChanged_Params Parms{};

	Parms.Device = Device;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwBaseMenu.MoveMenus
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   MoveVector                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwBaseMenu::MoveMenus(struct FVector2D& MoveVector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseMenu", "MoveMenus");

	Params::UTwBaseMenu_MoveMenus_Params Parms{};

	Parms.MoveVector = MoveVector;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwBaseMenu.IsOpenDefault
// (Final, Native, Public)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTwBaseMenu::IsOpenDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseMenu", "IsOpenDefault");

	Params::UTwBaseMenu_IsOpenDefault_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwUIFramework.TwBaseMenu.HandleInput
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InputName                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UTwBaseMenu::HandleInput(class FText& InputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseMenu", "HandleInput");

	Params::UTwBaseMenu_HandleInput_Params Parms{};

	Parms.InputName = InputName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TwUIFramework.TwBaseMenu.GetPanelForLookup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        LookUp                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwBaseMenuPanel*            ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTwBaseMenuPanel* UTwBaseMenu::GetPanelForLookup(class FName LookUp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseMenu", "GetPanelForLookup");

	Params::UTwBaseMenu_GetPanelForLookup_Params Parms{};

	Parms.LookUp = LookUp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwUIFramework.TwBaseMenu.GetLabelForLookup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        LookUp                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UTwBaseMenu::GetLabelForLookup(class FName LookUp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseMenu", "GetLabelForLookup");

	Params::UTwBaseMenu_GetLabelForLookup_Params Parms{};

	Parms.LookUp = LookUp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwUIFramework.TwBaseMenu.GetFocusWidgetForNavigation_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EUINavigation           NavigationDir                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UTwBaseMenu::GetFocusWidgetForNavigation_BP(enum class EUINavigation NavigationDir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseMenu", "GetFocusWidgetForNavigation_BP");

	Params::UTwBaseMenu_GetFocusWidgetForNavigation_BP_Params Parms{};

	Parms.NavigationDir = NavigationDir;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TwUIFramework.TwBaseMenu.GetFocusWidgetForNavigation
// (Native, Public)
// Parameters:
// enum class EUINavigation           NavigationDir                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UTwBaseMenu::GetFocusWidgetForNavigation(enum class EUINavigation NavigationDir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseMenu", "GetFocusWidgetForNavigation");

	Params::UTwBaseMenu_GetFocusWidgetForNavigation_Params Parms{};

	Parms.NavigationDir = NavigationDir;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwUIFramework.TwBaseMenu.GetCurrentPanel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTwBaseMenuPanel*            ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTwBaseMenuPanel* UTwBaseMenu::GetCurrentPanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseMenu", "GetCurrentPanel");

	Params::UTwBaseMenu_GetCurrentPanel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwUIFramework.TwBaseMenu.CloseMenu
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTwBaseMenu::CloseMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseMenu", "CloseMenu");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class TwUIFramework.TwBaseMenuBarHorizontal
// (None)

class UClass* UTwBaseMenuBarHorizontal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwBaseMenuBarHorizontal");

	return Clss;
}


// TwBaseMenuBarHorizontal TwUIFramework.Default__TwBaseMenuBarHorizontal
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwBaseMenuBarHorizontal* UTwBaseMenuBarHorizontal::GetDefaultObj()
{
	static class UTwBaseMenuBarHorizontal* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwBaseMenuBarHorizontal*>(UTwBaseMenuBarHorizontal::StaticClass()->DefaultObject);

	return Default;
}


// Class TwUIFramework.TwBaseMenuBarItem
// (None)

class UClass* UTwBaseMenuBarItem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwBaseMenuBarItem");

	return Clss;
}


// TwBaseMenuBarItem TwUIFramework.Default__TwBaseMenuBarItem
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwBaseMenuBarItem* UTwBaseMenuBarItem::GetDefaultObj()
{
	static class UTwBaseMenuBarItem* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwBaseMenuBarItem*>(UTwBaseMenuBarItem::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.TwBaseMenuBarItem.SetSelected_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwBaseMenuBarItem::SetSelected_BP(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseMenuBarItem", "SetSelected_BP");

	Params::UTwBaseMenuBarItem_SetSelected_BP_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TwUIFramework.TwBaseMenuBarItem.OnButtonClicked
// (Final, Native, Protected)
// Parameters:
// struct FKey                        MouseButtonClicked                                               (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*          ButtonClicked                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwBaseMenuBarItem::OnButtonClicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* ButtonClicked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseMenuBarItem", "OnButtonClicked");

	Params::UTwBaseMenuBarItem_OnButtonClicked_Params Parms{};

	Parms.MouseButtonClicked = MouseButtonClicked;
	Parms.ButtonClicked = ButtonClicked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class TwUIFramework.TwBaseMenuPanel
// (None)

class UClass* UTwBaseMenuPanel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwBaseMenuPanel");

	return Clss;
}


// TwBaseMenuPanel TwUIFramework.Default__TwBaseMenuPanel
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwBaseMenuPanel* UTwBaseMenuPanel::GetDefaultObj()
{
	static class UTwBaseMenuPanel* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwBaseMenuPanel*>(UTwBaseMenuPanel::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.TwBaseMenuPanel.OnPanelOpen_BP
// (Event, Public, BlueprintEvent)
// Parameters:

void UTwBaseMenuPanel::OnPanelOpen_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseMenuPanel", "OnPanelOpen_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TwUIFramework.TwBaseMenuPanel.OnPanelFinishedClosing
// (Native, Protected, BlueprintCallable)
// Parameters:
// struct FPanelLifetimeResponder     Responder                                                        (Parm, NativeAccessSpecifierPublic)

void UTwBaseMenuPanel::OnPanelFinishedClosing(const struct FPanelLifetimeResponder& Responder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseMenuPanel", "OnPanelFinishedClosing");

	Params::UTwBaseMenuPanel_OnPanelFinishedClosing_Params Parms{};

	Parms.Responder = Responder;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwBaseMenuPanel.OnPanelClosing_BP
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FPanelLifetimeResponder     Responder                                                        (Parm, NativeAccessSpecifierPublic)
// class UTwBaseMenuPanel*            IncomingPanel                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwBaseMenuPanel::OnPanelClosing_BP(const struct FPanelLifetimeResponder& Responder, class UTwBaseMenuPanel* IncomingPanel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseMenuPanel", "OnPanelClosing_BP");

	Params::UTwBaseMenuPanel_OnPanelClosing_BP_Params Parms{};

	Parms.Responder = Responder;
	Parms.IncomingPanel = IncomingPanel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwBaseMenuPanel.MovePanel
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   MoveVector                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwBaseMenuPanel::MovePanel(const struct FVector2D& MoveVector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseMenuPanel", "MovePanel");

	Params::UTwBaseMenuPanel_MovePanel_Params Parms{};

	Parms.MoveVector = MoveVector;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwBaseMenuPanel.GetFocusWidgetForNavigation_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EUINavigation           NavigationDir                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UTwBaseMenuPanel::GetFocusWidgetForNavigation_BP(enum class EUINavigation NavigationDir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseMenuPanel", "GetFocusWidgetForNavigation_BP");

	Params::UTwBaseMenuPanel_GetFocusWidgetForNavigation_BP_Params Parms{};

	Parms.NavigationDir = NavigationDir;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TwUIFramework.TwBaseMenuPanel.GetFocusWidgetForNavigation
// (Native, Public)
// Parameters:
// enum class EUINavigation           NavigationDir                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UTwBaseMenuPanel::GetFocusWidgetForNavigation(enum class EUINavigation NavigationDir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseMenuPanel", "GetFocusWidgetForNavigation");

	Params::UTwBaseMenuPanel_GetFocusWidgetForNavigation_Params Parms{};

	Parms.NavigationDir = NavigationDir;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwUIFramework.TwBaseMenuPanel.GetDefaultFocusWidget
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UTwBaseMenuPanel::GetDefaultFocusWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseMenuPanel", "GetDefaultFocusWidget");

	Params::UTwBaseMenuPanel_GetDefaultFocusWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TwUIFramework.TwBaseView
// (None)

class UClass* UTwBaseView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwBaseView");

	return Clss;
}


// TwBaseView TwUIFramework.Default__TwBaseView
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwBaseView* UTwBaseView::GetDefaultObj()
{
	static class UTwBaseView* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwBaseView*>(UTwBaseView::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.TwBaseView.OnViewShowing_BP
// (Event, Public, BlueprintEvent)
// Parameters:

void UTwBaseView::OnViewShowing_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseView", "OnViewShowing_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TwUIFramework.TwBaseView.OnViewShowing
// (Native, Public)
// Parameters:

void UTwBaseView::OnViewShowing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseView", "OnViewShowing");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwBaseView.OnViewLeavingStack_BP
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FViewPoppingResponder       Responder                                                        (Parm, NativeAccessSpecifierPublic)

void UTwBaseView::OnViewLeavingStack_BP(const struct FViewPoppingResponder& Responder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseView", "OnViewLeavingStack_BP");

	Params::UTwBaseView_OnViewLeavingStack_BP_Params Parms{};

	Parms.Responder = Responder;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwBaseView.OnViewHiding_BP
// (Event, Public, BlueprintEvent)
// Parameters:

void UTwBaseView::OnViewHiding_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseView", "OnViewHiding_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TwUIFramework.TwBaseView.OnViewHiding
// (Native, Public)
// Parameters:

void UTwBaseView::OnViewHiding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseView", "OnViewHiding");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwBaseView.OnViewEnteringStack_BP
// (Event, Public, BlueprintEvent)
// Parameters:

void UTwBaseView::OnViewEnteringStack_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseView", "OnViewEnteringStack_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TwUIFramework.TwBaseView.OnViewEnteringStack
// (Native, Public)
// Parameters:
// class UTwViewController*           Controller                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwBaseView::OnViewEnteringStack(class UTwViewController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseView", "OnViewEnteringStack");

	Params::UTwBaseView_OnViewEnteringStack_Params Parms{};

	Parms.Controller = Controller;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwBaseView.OnFinishLeavingStack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FViewPoppingResponder       Responder                                                        (Parm, NativeAccessSpecifierPublic)

void UTwBaseView::OnFinishLeavingStack(const struct FViewPoppingResponder& Responder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseView", "OnFinishLeavingStack");

	Params::UTwBaseView_OnFinishLeavingStack_Params Parms{};

	Parms.Responder = Responder;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwBaseView.GetDefaultFocusWidget
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UTwBaseView::GetDefaultFocusWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseView", "GetDefaultFocusWidget");

	Params::UTwBaseView_GetDefaultFocusWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwUIFramework.TwBaseView.DoesRequireInputUIMode
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTwBaseView::DoesRequireInputUIMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseView", "DoesRequireInputUIMode");

	Params::UTwBaseView_DoesRequireInputUIMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TwUIFramework.TwBaseMenuView
// (None)

class UClass* UTwBaseMenuView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwBaseMenuView");

	return Clss;
}


// TwBaseMenuView TwUIFramework.Default__TwBaseMenuView
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwBaseMenuView* UTwBaseMenuView::GetDefaultObj()
{
	static class UTwBaseMenuView* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwBaseMenuView*>(UTwBaseMenuView::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.TwBaseMenuView.OnOpenPanelRequest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        LookupName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwBaseMenuView::OnOpenPanelRequest(class FName LookupName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseMenuView", "OnOpenPanelRequest");

	Params::UTwBaseMenuView_OnOpenPanelRequest_Params Parms{};

	Parms.LookupName = LookupName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwBaseMenuView.OnMenuPanel_Changed
// (Final, Native, Protected)
// Parameters:

void UTwBaseMenuView::OnMenuPanel_Changed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseMenuView", "OnMenuPanel_Changed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwBaseMenuView.GetMenuController
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTwBaseMenu*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTwBaseMenu* UTwBaseMenuView::GetMenuController()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseMenuView", "GetMenuController");

	Params::UTwBaseMenuView_GetMenuController_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TwUIFramework.TwBaseMenuWidgetContainer
// (None)

class UClass* UTwBaseMenuWidgetContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwBaseMenuWidgetContainer");

	return Clss;
}


// TwBaseMenuWidgetContainer TwUIFramework.Default__TwBaseMenuWidgetContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwBaseMenuWidgetContainer* UTwBaseMenuWidgetContainer::GetDefaultObj()
{
	static class UTwBaseMenuWidgetContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwBaseMenuWidgetContainer*>(UTwBaseMenuWidgetContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class TwUIFramework.TwBaseModal
// (None)

class UClass* UTwBaseModal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwBaseModal");

	return Clss;
}


// TwBaseModal TwUIFramework.Default__TwBaseModal
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwBaseModal* UTwBaseModal::GetDefaultObj()
{
	static class UTwBaseModal* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwBaseModal*>(UTwBaseModal::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.TwBaseModal.OnModalShowing_BP
// (Event, Public, BlueprintEvent)
// Parameters:

void UTwBaseModal::OnModalShowing_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseModal", "OnModalShowing_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TwUIFramework.TwBaseModal.OnModalShowing
// (Native, Public)
// Parameters:

void UTwBaseModal::OnModalShowing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseModal", "OnModalShowing");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwBaseModal.OnModalLeavingStack_BP
// (Event, Public, BlueprintEvent)
// Parameters:

void UTwBaseModal::OnModalLeavingStack_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseModal", "OnModalLeavingStack_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TwUIFramework.TwBaseModal.OnModalLeavingStack
// (Native, Public)
// Parameters:

void UTwBaseModal::OnModalLeavingStack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseModal", "OnModalLeavingStack");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwBaseModal.OnModalHiding_BP
// (Event, Public, BlueprintEvent)
// Parameters:

void UTwBaseModal::OnModalHiding_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseModal", "OnModalHiding_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TwUIFramework.TwBaseModal.OnModalHiding
// (Native, Public)
// Parameters:

void UTwBaseModal::OnModalHiding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseModal", "OnModalHiding");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwBaseModal.OnModalEnteringStack_BP
// (Event, Public, BlueprintEvent)
// Parameters:

void UTwBaseModal::OnModalEnteringStack_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseModal", "OnModalEnteringStack_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TwUIFramework.TwBaseModal.OnModalEnteringStack
// (Native, Public)
// Parameters:
// class UTwViewController*           Controller                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwBaseModal::OnModalEnteringStack(class UTwViewController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseModal", "OnModalEnteringStack");

	Params::UTwBaseModal_OnModalEnteringStack_Params Parms{};

	Parms.Controller = Controller;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwBaseModal.GetDefaultFocusWidget
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UTwBaseModal::GetDefaultFocusWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseModal", "GetDefaultFocusWidget");

	Params::UTwBaseModal_GetDefaultFocusWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TwUIFramework.TwBaseSlider
// (None)

class UClass* UTwBaseSlider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwBaseSlider");

	return Clss;
}


// TwBaseSlider TwUIFramework.Default__TwBaseSlider
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwBaseSlider* UTwBaseSlider::GetDefaultObj()
{
	static class UTwBaseSlider* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwBaseSlider*>(UTwBaseSlider::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.TwBaseSlider.SetLabelText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        LabelText                                                        (Parm, NativeAccessSpecifierPublic)

void UTwBaseSlider::SetLabelText(class FText LabelText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwBaseSlider", "SetLabelText");

	Params::UTwBaseSlider_SetLabelText_Params Parms{};

	Parms.LabelText = LabelText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class TwUIFramework.TwCheckboxButton
// (None)

class UClass* UTwCheckboxButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwCheckboxButton");

	return Clss;
}


// TwCheckboxButton TwUIFramework.Default__TwCheckboxButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwCheckboxButton* UTwCheckboxButton::GetDefaultObj()
{
	static class UTwCheckboxButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwCheckboxButton*>(UTwCheckboxButton::StaticClass()->DefaultObject);

	return Default;
}


// Class TwUIFramework.TwTweener
// (None)

class UClass* UTwTweener::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwTweener");

	return Clss;
}


// TwTweener TwUIFramework.Default__TwTweener
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwTweener* UTwTweener::GetDefaultObj()
{
	static class UTwTweener* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwTweener*>(UTwTweener::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.TwTweener.Stop
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bSkipToEnd                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwTweener::Stop(bool bSkipToEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwTweener", "Stop");

	Params::UTwTweener_Stop_Params Parms{};

	Parms.bSkipToEnd = bSkipToEnd;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwTweener.Play
// (Native, Public, BlueprintCallable)
// Parameters:

void UTwTweener::Play()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwTweener", "Play");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwTweener.Pause
// (Native, Public, BlueprintCallable)
// Parameters:

void UTwTweener::Pause()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwTweener", "Pause");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class TwUIFramework.TwColorTweener
// (None)

class UClass* UTwColorTweener::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwColorTweener");

	return Clss;
}


// TwColorTweener TwUIFramework.Default__TwColorTweener
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwColorTweener* UTwColorTweener::GetDefaultObj()
{
	static class UTwColorTweener* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwColorTweener*>(UTwColorTweener::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.TwColorTweener.GetCurrentValue
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UTwColorTweener::GetCurrentValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwColorTweener", "GetCurrentValue");

	Params::UTwColorTweener_GetCurrentValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwUIFramework.TwColorTweener.CreateColorTween
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                FromValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ToValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TweenDuration                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEasingFunc             Easing                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               TweenPingPong                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnTweenStep                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               AutoStart                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwColorTweener*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTwColorTweener* UTwColorTweener::CreateColorTween(const struct FLinearColor& FromValue, const struct FLinearColor& ToValue, float TweenDuration, enum class EEasingFunc Easing, bool TweenPingPong, FDelegateProperty_& OnTweenStep, bool AutoStart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwColorTweener", "CreateColorTween");

	Params::UTwColorTweener_CreateColorTween_Params Parms{};

	Parms.FromValue = FromValue;
	Parms.ToValue = ToValue;
	Parms.TweenDuration = TweenDuration;
	Parms.Easing = Easing;
	Parms.TweenPingPong = TweenPingPong;
	Parms.OnTweenStep = OnTweenStep;
	Parms.AutoStart = AutoStart;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TwUIFramework.TwConfirmModal
// (None)

class UClass* UTwConfirmModal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwConfirmModal");

	return Clss;
}


// TwConfirmModal TwUIFramework.Default__TwConfirmModal
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwConfirmModal* UTwConfirmModal::GetDefaultObj()
{
	static class UTwConfirmModal* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwConfirmModal*>(UTwConfirmModal::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.TwConfirmModal.OnModalDecline
// (Final, Native, Protected)
// Parameters:

void UTwConfirmModal::OnModalDecline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwConfirmModal", "OnModalDecline");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwConfirmModal.OnModalConfirm
// (Final, Native, Protected)
// Parameters:

void UTwConfirmModal::OnModalConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwConfirmModal", "OnModalConfirm");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class TwUIFramework.TwControllerDisconnectedModal
// (None)

class UClass* UTwControllerDisconnectedModal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwControllerDisconnectedModal");

	return Clss;
}


// TwControllerDisconnectedModal TwUIFramework.Default__TwControllerDisconnectedModal
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwControllerDisconnectedModal* UTwControllerDisconnectedModal::GetDefaultObj()
{
	static class UTwControllerDisconnectedModal* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwControllerDisconnectedModal*>(UTwControllerDisconnectedModal::StaticClass()->DefaultObject);

	return Default;
}


// Class TwUIFramework.TwFlipbookImageWidget
// (None)

class UClass* UTwFlipbookImageWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwFlipbookImageWidget");

	return Clss;
}


// TwFlipbookImageWidget TwUIFramework.Default__TwFlipbookImageWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwFlipbookImageWidget* UTwFlipbookImageWidget::GetDefaultObj()
{
	static class UTwFlipbookImageWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwFlipbookImageWidget*>(UTwFlipbookImageWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.TwFlipbookImageWidget.SetPlayMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EFlipbookPlayMode       NewPlayMode                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwFlipbookImageWidget::SetPlayMode(enum class EFlipbookPlayMode NewPlayMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwFlipbookImageWidget", "SetPlayMode");

	Params::UTwFlipbookImageWidget_SetPlayMode_Params Parms{};

	Parms.NewPlayMode = NewPlayMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwFlipbookImageWidget.Reset
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UTwFlipbookImageWidget::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwFlipbookImageWidget", "Reset");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class TwUIFramework.TwFloatTweener
// (None)

class UClass* UTwFloatTweener::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwFloatTweener");

	return Clss;
}


// TwFloatTweener TwUIFramework.Default__TwFloatTweener
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwFloatTweener* UTwFloatTweener::GetDefaultObj()
{
	static class UTwFloatTweener* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwFloatTweener*>(UTwFloatTweener::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.TwFloatTweener.GetCurrentValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTwFloatTweener::GetCurrentValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwFloatTweener", "GetCurrentValue");

	Params::UTwFloatTweener_GetCurrentValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwUIFramework.TwFloatTweener.CreateFloatTween
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              FromValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ToValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TweenDuration                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEasingFunc             Easing                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               TweenPingPong                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnTweenStep                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnTweenFinished                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class UTwFloatTweener*             ReusableTweener                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               AutoStart                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwFloatTweener*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTwFloatTweener* UTwFloatTweener::CreateFloatTween(float FromValue, float ToValue, float TweenDuration, enum class EEasingFunc Easing, bool TweenPingPong, FDelegateProperty_& OnTweenStep, FDelegateProperty_& OnTweenFinished, class UTwFloatTweener* ReusableTweener, bool AutoStart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwFloatTweener", "CreateFloatTween");

	Params::UTwFloatTweener_CreateFloatTween_Params Parms{};

	Parms.FromValue = FromValue;
	Parms.ToValue = ToValue;
	Parms.TweenDuration = TweenDuration;
	Parms.Easing = Easing;
	Parms.TweenPingPong = TweenPingPong;
	Parms.OnTweenStep = OnTweenStep;
	Parms.OnTweenFinished = OnTweenFinished;
	Parms.ReusableTweener = ReusableTweener;
	Parms.AutoStart = AutoStart;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TwUIFramework.TwHUD
// (Actor)

class UClass* ATwHUD::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwHUD");

	return Clss;
}


// TwHUD TwUIFramework.Default__TwHUD
// (Public, ClassDefaultObject, ArchetypeObject)

class ATwHUD* ATwHUD::GetDefaultObj()
{
	static class ATwHUD* Default = nullptr;

	if (!Default)
		Default = static_cast<ATwHUD*>(ATwHUD::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.TwHUD.ShowScreenSpaceWidgetForActor
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATwHUD::ShowScreenSpaceWidgetForActor(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwHUD", "ShowScreenSpaceWidgetForActor");

	Params::ATwHUD_ShowScreenSpaceWidgetForActor_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwHUD.RemoveScreenSpaceWidgetForActor
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATwHUD::RemoveScreenSpaceWidgetForActor(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwHUD", "RemoveScreenSpaceWidgetForActor");

	Params::ATwHUD_RemoveScreenSpaceWidgetForActor_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwHUD.OnInputDeviceEvent
// (Final, Native, Private)
// Parameters:
// enum class EUserInputDevice        Device                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATwHUD::OnInputDeviceEvent(enum class EUserInputDevice Device)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwHUD", "OnInputDeviceEvent");

	Params::ATwHUD_OnInputDeviceEvent_Params Parms{};

	Parms.Device = Device;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwHUD.OnControllerDisconnectedAnyPlatform
// (Native, Public, BlueprintCallable)
// Parameters:

void ATwHUD::OnControllerDisconnectedAnyPlatform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwHUD", "OnControllerDisconnectedAnyPlatform");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwHUD.OnControllerDisconnected
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShowGenericAlertInstead                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATwHUD::OnControllerDisconnected(bool bShowGenericAlertInstead)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwHUD", "OnControllerDisconnected");

	Params::ATwHUD_OnControllerDisconnected_Params Parms{};

	Parms.bShowGenericAlertInstead = bShowGenericAlertInstead;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwHUD.GetCurrentInputDevice
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EUserInputDevice        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EUserInputDevice ATwHUD::GetCurrentInputDevice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwHUD", "GetCurrentInputDevice");

	Params::ATwHUD_GetCurrentInputDevice_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TwUIFramework.TwInputAwareRichTextBlock
// (None)

class UClass* UTwInputAwareRichTextBlock::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwInputAwareRichTextBlock");

	return Clss;
}


// TwInputAwareRichTextBlock TwUIFramework.Default__TwInputAwareRichTextBlock
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwInputAwareRichTextBlock* UTwInputAwareRichTextBlock::GetDefaultObj()
{
	static class UTwInputAwareRichTextBlock* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwInputAwareRichTextBlock*>(UTwInputAwareRichTextBlock::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.TwInputAwareRichTextBlock.SetTextAware
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UTwInputAwareRichTextBlock::SetTextAware(class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwInputAwareRichTextBlock", "SetTextAware");

	Params::UTwInputAwareRichTextBlock_SetTextAware_Params Parms{};

	Parms.InText = InText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwInputAwareRichTextBlock.OnInputDeviceChanged
// (Final, Native, Public)
// Parameters:
// enum class EUserInputDevice        Device                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwInputAwareRichTextBlock::OnInputDeviceChanged(enum class EUserInputDevice Device)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwInputAwareRichTextBlock", "OnInputDeviceChanged");

	Params::UTwInputAwareRichTextBlock_OnInputDeviceChanged_Params Parms{};

	Parms.Device = Device;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class TwUIFramework.TwInputAwareRichTextBlockWidget
// (None)

class UClass* UTwInputAwareRichTextBlockWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwInputAwareRichTextBlockWidget");

	return Clss;
}


// TwInputAwareRichTextBlockWidget TwUIFramework.Default__TwInputAwareRichTextBlockWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwInputAwareRichTextBlockWidget* UTwInputAwareRichTextBlockWidget::GetDefaultObj()
{
	static class UTwInputAwareRichTextBlockWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwInputAwareRichTextBlockWidget*>(UTwInputAwareRichTextBlockWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.TwInputAwareRichTextBlockWidget.SetTextAware
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UTwInputAwareRichTextBlockWidget::SetTextAware(class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwInputAwareRichTextBlockWidget", "SetTextAware");

	Params::UTwInputAwareRichTextBlockWidget_SetTextAware_Params Parms{};

	Parms.InText = InText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwInputAwareRichTextBlockWidget.SetKeybindText
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bGamepad                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwInputAwareRichTextBlockWidget::SetKeybindText(class FText& InText, bool bGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwInputAwareRichTextBlockWidget", "SetKeybindText");

	Params::UTwInputAwareRichTextBlockWidget_SetKeybindText_Params Parms{};

	Parms.InText = InText;
	Parms.bGamepad = bGamepad;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwInputAwareRichTextBlockWidget.OnInputDeviceChanged
// (Final, Native, Public)
// Parameters:
// enum class EUserInputDevice        Device                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwInputAwareRichTextBlockWidget::OnInputDeviceChanged(enum class EUserInputDevice Device)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwInputAwareRichTextBlockWidget", "OnInputDeviceChanged");

	Params::UTwInputAwareRichTextBlockWidget_OnInputDeviceChanged_Params Parms{};

	Parms.Device = Device;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class TwUIFramework.TwLambdaButton
// (None)

class UClass* UTwLambdaButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwLambdaButton");

	return Clss;
}


// TwLambdaButton TwUIFramework.Default__TwLambdaButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwLambdaButton* UTwLambdaButton::GetDefaultObj()
{
	static class UTwLambdaButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwLambdaButton*>(UTwLambdaButton::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.TwLambdaButton.OnWidgetClickedInternal
// (Final, Native, Protected)
// Parameters:
// struct FKey                        MouseButtonClicked                                               (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*          WidgetClicked                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwLambdaButton::OnWidgetClickedInternal(const struct FKey& MouseButtonClicked, class UTwClickableWidget* WidgetClicked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwLambdaButton", "OnWidgetClickedInternal");

	Params::UTwLambdaButton_OnWidgetClickedInternal_Params Parms{};

	Parms.MouseButtonClicked = MouseButtonClicked;
	Parms.WidgetClicked = WidgetClicked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class TwUIFramework.TwLoadingScreen
// (None)

class UClass* UTwLoadingScreen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwLoadingScreen");

	return Clss;
}


// TwLoadingScreen TwUIFramework.Default__TwLoadingScreen
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwLoadingScreen* UTwLoadingScreen::GetDefaultObj()
{
	static class UTwLoadingScreen* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwLoadingScreen*>(UTwLoadingScreen::StaticClass()->DefaultObject);

	return Default;
}


// Class TwUIFramework.TwLoadingScreenSettings
// (None)

class UClass* UTwLoadingScreenSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwLoadingScreenSettings");

	return Clss;
}


// TwLoadingScreenSettings TwUIFramework.Default__TwLoadingScreenSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwLoadingScreenSettings* UTwLoadingScreenSettings::GetDefaultObj()
{
	static class UTwLoadingScreenSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwLoadingScreenSettings*>(UTwLoadingScreenSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class TwUIFramework.TwMatFloatScalarTweener
// (None)

class UClass* UTwMatFloatScalarTweener::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwMatFloatScalarTweener");

	return Clss;
}


// TwMatFloatScalarTweener TwUIFramework.Default__TwMatFloatScalarTweener
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwMatFloatScalarTweener* UTwMatFloatScalarTweener::GetDefaultObj()
{
	static class UTwMatFloatScalarTweener* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwMatFloatScalarTweener*>(UTwMatFloatScalarTweener::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.TwMatFloatScalarTweener.GetCurrentValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTwMatFloatScalarTweener::GetCurrentValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwMatFloatScalarTweener", "GetCurrentValue");

	Params::UTwMatFloatScalarTweener_GetCurrentValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwUIFramework.TwMatFloatScalarTweener.CreateMatFloatScalarTween
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    Mat                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Param                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FromValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ToValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TweenDuration                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEasingFunc             Easing                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               TweenPingPong                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnTweenStep                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               AutoStart                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwMatFloatScalarTweener*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTwMatFloatScalarTweener* UTwMatFloatScalarTweener::CreateMatFloatScalarTween(class UMaterialInstanceDynamic* Mat, class FName Param, float FromValue, float ToValue, float TweenDuration, enum class EEasingFunc Easing, bool TweenPingPong, FDelegateProperty_& OnTweenStep, bool AutoStart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwMatFloatScalarTweener", "CreateMatFloatScalarTween");

	Params::UTwMatFloatScalarTweener_CreateMatFloatScalarTween_Params Parms{};

	Parms.Mat = Mat;
	Parms.Param = Param;
	Parms.FromValue = FromValue;
	Parms.ToValue = ToValue;
	Parms.TweenDuration = TweenDuration;
	Parms.Easing = Easing;
	Parms.TweenPingPong = TweenPingPong;
	Parms.OnTweenStep = OnTweenStep;
	Parms.AutoStart = AutoStart;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TwUIFramework.TwMoviePlayerView
// (None)

class UClass* UTwMoviePlayerView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwMoviePlayerView");

	return Clss;
}


// TwMoviePlayerView TwUIFramework.Default__TwMoviePlayerView
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwMoviePlayerView* UTwMoviePlayerView::GetDefaultObj()
{
	static class UTwMoviePlayerView* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwMoviePlayerView*>(UTwMoviePlayerView::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.TwMoviePlayerView.OnTracksChanged
// (Final, Native, Protected)
// Parameters:

void UTwMoviePlayerView::OnTracksChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwMoviePlayerView", "OnTracksChanged");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwMoviePlayerView.OnInteractReleased
// (Final, Native, Protected)
// Parameters:

void UTwMoviePlayerView::OnInteractReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwMoviePlayerView", "OnInteractReleased");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwMoviePlayerView.OnInteractPressed
// (Final, Native, Protected)
// Parameters:

void UTwMoviePlayerView::OnInteractPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwMoviePlayerView", "OnInteractPressed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwMoviePlayerView.OnEndReached
// (Final, Native, Protected)
// Parameters:

void UTwMoviePlayerView::OnEndReached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwMoviePlayerView", "OnEndReached");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwMoviePlayerView.OnAnyButtonPressed
// (Final, Native, Protected)
// Parameters:

void UTwMoviePlayerView::OnAnyButtonPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwMoviePlayerView", "OnAnyButtonPressed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class TwUIFramework.TwMultiOptionModal
// (None)

class UClass* UTwMultiOptionModal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwMultiOptionModal");

	return Clss;
}


// TwMultiOptionModal TwUIFramework.Default__TwMultiOptionModal
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwMultiOptionModal* UTwMultiOptionModal::GetDefaultObj()
{
	static class UTwMultiOptionModal* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwMultiOptionModal*>(UTwMultiOptionModal::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.TwMultiOptionModal.CreateModalWithOptions_BP
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           OwningPlayer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FText>                Options                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        TitleText                                                        (Parm, NativeAccessSpecifierPublic)
// class FText                        BodyText                                                         (Parm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bDismissable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        DismissAction                                                    (Parm, NativeAccessSpecifierPublic)

void UTwMultiOptionModal::CreateModalWithOptions_BP(class APlayerController* OwningPlayer, const TArray<class FText>& Options, class FText TitleText, class FText BodyText, FDelegateProperty_ Callback, bool bDismissable, class FText DismissAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwMultiOptionModal", "CreateModalWithOptions_BP");

	Params::UTwMultiOptionModal_CreateModalWithOptions_BP_Params Parms{};

	Parms.OwningPlayer = OwningPlayer;
	Parms.Options = Options;
	Parms.TitleText = TitleText;
	Parms.BodyText = BodyText;
	Parms.Callback = Callback;
	Parms.bDismissable = bDismissable;
	Parms.DismissAction = DismissAction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class TwUIFramework.TwWidgetQueue
// (None)

class UClass* UTwWidgetQueue::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwWidgetQueue");

	return Clss;
}


// TwWidgetQueue TwUIFramework.Default__TwWidgetQueue
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwWidgetQueue* UTwWidgetQueue::GetDefaultObj()
{
	static class UTwWidgetQueue* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwWidgetQueue*>(UTwWidgetQueue::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.TwWidgetQueue.PumpQueue
// (Final, Native, Protected)
// Parameters:

void UTwWidgetQueue::PumpQueue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwWidgetQueue", "PumpQueue");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwWidgetQueue.OnWidgetReadyForDestruction
// (Final, Native, Protected)
// Parameters:
// class UTwBaseWidget*               Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwWidgetQueue::OnWidgetReadyForDestruction(class UTwBaseWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwWidgetQueue", "OnWidgetReadyForDestruction");

	Params::UTwWidgetQueue_OnWidgetReadyForDestruction_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class TwUIFramework.TwMultiWidgetQueue
// (None)

class UClass* UTwMultiWidgetQueue::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwMultiWidgetQueue");

	return Clss;
}


// TwMultiWidgetQueue TwUIFramework.Default__TwMultiWidgetQueue
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwMultiWidgetQueue* UTwMultiWidgetQueue::GetDefaultObj()
{
	static class UTwMultiWidgetQueue* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwMultiWidgetQueue*>(UTwMultiWidgetQueue::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.TwMultiWidgetQueue.OnWidgetQueueDestruction
// (Final, Native, Public)
// Parameters:
// class UTwBaseWidget*               Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwMultiWidgetQueue::OnWidgetQueueDestruction(class UTwBaseWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwMultiWidgetQueue", "OnWidgetQueueDestruction");

	Params::UTwMultiWidgetQueue_OnWidgetQueueDestruction_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class TwUIFramework.TwRadialProgressIcon
// (None)

class UClass* UTwRadialProgressIcon::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwRadialProgressIcon");

	return Clss;
}


// TwRadialProgressIcon TwUIFramework.Default__TwRadialProgressIcon
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwRadialProgressIcon* UTwRadialProgressIcon::GetDefaultObj()
{
	static class UTwRadialProgressIcon* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwRadialProgressIcon*>(UTwRadialProgressIcon::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.TwRadialProgressIcon.SetRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewRadius                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwRadialProgressIcon::SetRadius(float NewRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwRadialProgressIcon", "SetRadius");

	Params::UTwRadialProgressIcon_SetRadius_Params Parms{};

	Parms.NewRadius = NewRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwRadialProgressIcon.SetProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Val                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwRadialProgressIcon::SetProgress(float Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwRadialProgressIcon", "SetProgress");

	Params::UTwRadialProgressIcon_SetProgress_Params Parms{};

	Parms.Val = Val;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwRadialProgressIcon.SetColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                NewColor                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwRadialProgressIcon::SetColor(const struct FLinearColor& NewColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwRadialProgressIcon", "SetColor");

	Params::UTwRadialProgressIcon_SetColor_Params Parms{};

	Parms.NewColor = NewColor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class TwUIFramework.TwRadioWidget
// (None)

class UClass* UTwRadioWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwRadioWidget");

	return Clss;
}


// TwRadioWidget TwUIFramework.Default__TwRadioWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwRadioWidget* UTwRadioWidget::GetDefaultObj()
{
	static class UTwRadioWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwRadioWidget*>(UTwRadioWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.TwRadioWidget.OnProcessButtonClick
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                        MouseButtonClicked                                               (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*          ButtonClicked                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwRadioWidget::OnProcessButtonClick(const struct FKey& MouseButtonClicked, class UTwClickableWidget* ButtonClicked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwRadioWidget", "OnProcessButtonClick");

	Params::UTwRadioWidget_OnProcessButtonClick_Params Parms{};

	Parms.MouseButtonClicked = MouseButtonClicked;
	Parms.ButtonClicked = ButtonClicked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class TwUIFramework.TwRichTextBlockPlatformIconDecorator
// (None)

class UClass* UTwRichTextBlockPlatformIconDecorator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwRichTextBlockPlatformIconDecorator");

	return Clss;
}


// TwRichTextBlockPlatformIconDecorator TwUIFramework.Default__TwRichTextBlockPlatformIconDecorator
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwRichTextBlockPlatformIconDecorator* UTwRichTextBlockPlatformIconDecorator::GetDefaultObj()
{
	static class UTwRichTextBlockPlatformIconDecorator* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwRichTextBlockPlatformIconDecorator*>(UTwRichTextBlockPlatformIconDecorator::StaticClass()->DefaultObject);

	return Default;
}


// Class TwUIFramework.TwScreenSpaceConstrainedWidget
// (None)

class UClass* UTwScreenSpaceConstrainedWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwScreenSpaceConstrainedWidget");

	return Clss;
}


// TwScreenSpaceConstrainedWidget TwUIFramework.Default__TwScreenSpaceConstrainedWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwScreenSpaceConstrainedWidget* UTwScreenSpaceConstrainedWidget::GetDefaultObj()
{
	static class UTwScreenSpaceConstrainedWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwScreenSpaceConstrainedWidget*>(UTwScreenSpaceConstrainedWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.TwScreenSpaceConstrainedWidget.SetTargetActor
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwScreenSpaceConstrainedWidget::SetTargetActor(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwScreenSpaceConstrainedWidget", "SetTargetActor");

	Params::UTwScreenSpaceConstrainedWidget_SetTargetActor_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class TwUIFramework.TwToastManagerWidget
// (None)

class UClass* UTwToastManagerWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwToastManagerWidget");

	return Clss;
}


// TwToastManagerWidget TwUIFramework.Default__TwToastManagerWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwToastManagerWidget* UTwToastManagerWidget::GetDefaultObj()
{
	static class UTwToastManagerWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwToastManagerWidget*>(UTwToastManagerWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.TwToastManagerWidget.AddNewToast
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UTwToastWidget>  ToastWidgetClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FToastData                  ToastData                                                        (Parm, NativeAccessSpecifierPublic)
// class UTwToastWidget*              ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTwToastWidget* UTwToastManagerWidget::AddNewToast(TSubclassOf<class UTwToastWidget> ToastWidgetClass, const struct FToastData& ToastData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwToastManagerWidget", "AddNewToast");

	Params::UTwToastManagerWidget_AddNewToast_Params Parms{};

	Parms.ToastWidgetClass = ToastWidgetClass;
	Parms.ToastData = ToastData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TwUIFramework.TwToastWidget
// (None)

class UClass* UTwToastWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwToastWidget");

	return Clss;
}


// TwToastWidget TwUIFramework.Default__TwToastWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwToastWidget* UTwToastWidget::GetDefaultObj()
{
	static class UTwToastWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwToastWidget*>(UTwToastWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.TwToastWidget.CreateToast
// (Final, Native, Static, Public)
// Parameters:
// TSubclassOf<class UTwToastWidget>  ToastWidgetClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*           Player                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVerticalBox*                VerticalBoxParent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FToastData                  ToastData                                                        (Parm, NativeAccessSpecifierPublic)
// class UTwToastWidget*              ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTwToastWidget* UTwToastWidget::CreateToast(TSubclassOf<class UTwToastWidget> ToastWidgetClass, class APlayerController* Player, class UVerticalBox* VerticalBoxParent, const struct FToastData& ToastData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwToastWidget", "CreateToast");

	Params::UTwToastWidget_CreateToast_Params Parms{};

	Parms.ToastWidgetClass = ToastWidgetClass;
	Parms.Player = Player;
	Parms.VerticalBoxParent = VerticalBoxParent;
	Parms.ToastData = ToastData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TwUIFramework.TwToggleButton
// (None)

class UClass* UTwToggleButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwToggleButton");

	return Clss;
}


// TwToggleButton TwUIFramework.Default__TwToggleButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwToggleButton* UTwToggleButton::GetDefaultObj()
{
	static class UTwToggleButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwToggleButton*>(UTwToggleButton::StaticClass()->DefaultObject);

	return Default;
}


// Class TwUIFramework.TwTooltipContainer
// (None)

class UClass* UTwTooltipContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwTooltipContainer");

	return Clss;
}


// TwTooltipContainer TwUIFramework.Default__TwTooltipContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwTooltipContainer* UTwTooltipContainer::GetDefaultObj()
{
	static class UTwTooltipContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwTooltipContainer*>(UTwTooltipContainer::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.TwTooltipContainer.CreateBasicTooltip
// (Final, Native, Public, HasOutParams)
// Parameters:
// class FText                        Header                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        Body                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        InputText                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwTooltipContainer::CreateBasicTooltip(class FText& Header, class FText& Body, class FText& InputText, float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwTooltipContainer", "CreateBasicTooltip");

	Params::UTwTooltipContainer_CreateBasicTooltip_Params Parms{};

	Parms.Header = Header;
	Parms.Body = Body;
	Parms.InputText = InputText;
	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class TwUIFramework.TwTooltipWidget
// (None)

class UClass* UTwTooltipWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwTooltipWidget");

	return Clss;
}


// TwTooltipWidget TwUIFramework.Default__TwTooltipWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwTooltipWidget* UTwTooltipWidget::GetDefaultObj()
{
	static class UTwTooltipWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwTooltipWidget*>(UTwTooltipWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class TwUIFramework.TwUIFunctionLibrary
// (None)

class UClass* UTwUIFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwUIFunctionLibrary");

	return Clss;
}


// TwUIFunctionLibrary TwUIFramework.Default__TwUIFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwUIFunctionLibrary* UTwUIFunctionLibrary::GetDefaultObj()
{
	static class UTwUIFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwUIFunctionLibrary*>(UTwUIFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForViewPop
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                        Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTwUIFunctionLibrary::IsKeyValidForViewPop(struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwUIFunctionLibrary", "IsKeyValidForViewPop");

	Params::UTwUIFunctionLibrary_IsKeyValidForViewPop_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForUITab
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                        Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTwUIFunctionLibrary::IsKeyValidForUITab(struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwUIFunctionLibrary", "IsKeyValidForUITab");

	Params::UTwUIFunctionLibrary_IsKeyValidForUITab_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForRightNavigation
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                        Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTwUIFunctionLibrary::IsKeyValidForRightNavigation(struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwUIFunctionLibrary", "IsKeyValidForRightNavigation");

	Params::UTwUIFunctionLibrary_IsKeyValidForRightNavigation_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForRightMenu
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                        Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTwUIFunctionLibrary::IsKeyValidForRightMenu(struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwUIFunctionLibrary", "IsKeyValidForRightMenu");

	Params::UTwUIFunctionLibrary_IsKeyValidForRightMenu_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForNavigation
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                        Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTwUIFunctionLibrary::IsKeyValidForNavigation(struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwUIFunctionLibrary", "IsKeyValidForNavigation");

	Params::UTwUIFunctionLibrary_IsKeyValidForNavigation_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForLeftNavigation
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                        Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTwUIFunctionLibrary::IsKeyValidForLeftNavigation(struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwUIFunctionLibrary", "IsKeyValidForLeftNavigation");

	Params::UTwUIFunctionLibrary_IsKeyValidForLeftNavigation_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForLeftMenu
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                        Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTwUIFunctionLibrary::IsKeyValidForLeftMenu(struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwUIFunctionLibrary", "IsKeyValidForLeftMenu");

	Params::UTwUIFunctionLibrary_IsKeyValidForLeftMenu_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForHNavigation
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                        Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTwUIFunctionLibrary::IsKeyValidForHNavigation(struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwUIFunctionLibrary", "IsKeyValidForHNavigation");

	Params::UTwUIFunctionLibrary_IsKeyValidForHNavigation_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForConfirm
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                        Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTwUIFunctionLibrary::IsKeyValidForConfirm(struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwUIFunctionLibrary", "IsKeyValidForConfirm");

	Params::UTwUIFunctionLibrary_IsKeyValidForConfirm_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwUIFramework.TwUIFunctionLibrary.IsConsoleActive
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTwUIFunctionLibrary::IsConsoleActive(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwUIFunctionLibrary", "IsConsoleActive");

	Params::UTwUIFunctionLibrary_IsConsoleActive_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TwUIFramework.TwUISettings
// (None)

class UClass* UTwUISettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwUISettings");

	return Clss;
}


// TwUISettings TwUIFramework.Default__TwUISettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwUISettings* UTwUISettings::GetDefaultObj()
{
	static class UTwUISettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwUISettings*>(UTwUISettings::StaticClass()->DefaultObject);

	return Default;
}


// Class TwUIFramework.TwUMGAngleTweener
// (None)

class UClass* UTwUMGAngleTweener::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwUMGAngleTweener");

	return Clss;
}


// TwUMGAngleTweener TwUIFramework.Default__TwUMGAngleTweener
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwUMGAngleTweener* UTwUMGAngleTweener::GetDefaultObj()
{
	static class UTwUMGAngleTweener* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwUMGAngleTweener*>(UTwUMGAngleTweener::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.TwUMGAngleTweener.GetCurrentValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTwUMGAngleTweener::GetCurrentValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwUMGAngleTweener", "GetCurrentValue");

	Params::UTwUMGAngleTweener_GetCurrentValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwUIFramework.TwUMGAngleTweener.CreateUMGAngleTween
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FromValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ToValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TweenDuration                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEasingFunc             Easing                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               TweenPingPong                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnTweenStep                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnTweenFinished                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               AutoStart                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwUMGAngleTweener*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTwUMGAngleTweener* UTwUMGAngleTweener::CreateUMGAngleTween(class UWidget* Widget, float FromValue, float ToValue, float TweenDuration, enum class EEasingFunc Easing, bool TweenPingPong, FDelegateProperty_& OnTweenStep, FDelegateProperty_& OnTweenFinished, bool AutoStart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwUMGAngleTweener", "CreateUMGAngleTween");

	Params::UTwUMGAngleTweener_CreateUMGAngleTween_Params Parms{};

	Parms.Widget = Widget;
	Parms.FromValue = FromValue;
	Parms.ToValue = ToValue;
	Parms.TweenDuration = TweenDuration;
	Parms.Easing = Easing;
	Parms.TweenPingPong = TweenPingPong;
	Parms.OnTweenStep = OnTweenStep;
	Parms.OnTweenFinished = OnTweenFinished;
	Parms.AutoStart = AutoStart;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TwUIFramework.TwUMGOpacityTweener
// (None)

class UClass* UTwUMGOpacityTweener::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwUMGOpacityTweener");

	return Clss;
}


// TwUMGOpacityTweener TwUIFramework.Default__TwUMGOpacityTweener
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwUMGOpacityTweener* UTwUMGOpacityTweener::GetDefaultObj()
{
	static class UTwUMGOpacityTweener* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwUMGOpacityTweener*>(UTwUMGOpacityTweener::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.TwUMGOpacityTweener.GetCurrentValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTwUMGOpacityTweener::GetCurrentValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwUMGOpacityTweener", "GetCurrentValue");

	Params::UTwUMGOpacityTweener_GetCurrentValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwUIFramework.TwUMGOpacityTweener.CreateUMGOpacityTween
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FromValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ToValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TweenDuration                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEasingFunc             Easing                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               TweenPingPong                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnTweenStep                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnTweenFinished                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class UTwUMGOpacityTweener*        ReusableTweener                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               AutoStart                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwUMGOpacityTweener*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTwUMGOpacityTweener* UTwUMGOpacityTweener::CreateUMGOpacityTween(class UWidget* Widget, float FromValue, float ToValue, float TweenDuration, enum class EEasingFunc Easing, bool TweenPingPong, FDelegateProperty_& OnTweenStep, FDelegateProperty_& OnTweenFinished, class UTwUMGOpacityTweener* ReusableTweener, bool AutoStart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwUMGOpacityTweener", "CreateUMGOpacityTween");

	Params::UTwUMGOpacityTweener_CreateUMGOpacityTween_Params Parms{};

	Parms.Widget = Widget;
	Parms.FromValue = FromValue;
	Parms.ToValue = ToValue;
	Parms.TweenDuration = TweenDuration;
	Parms.Easing = Easing;
	Parms.TweenPingPong = TweenPingPong;
	Parms.OnTweenStep = OnTweenStep;
	Parms.OnTweenFinished = OnTweenFinished;
	Parms.ReusableTweener = ReusableTweener;
	Parms.AutoStart = AutoStart;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TwUIFramework.TwUMGScaleTweener
// (None)

class UClass* UTwUMGScaleTweener::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwUMGScaleTweener");

	return Clss;
}


// TwUMGScaleTweener TwUIFramework.Default__TwUMGScaleTweener
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwUMGScaleTweener* UTwUMGScaleTweener::GetDefaultObj()
{
	static class UTwUMGScaleTweener* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwUMGScaleTweener*>(UTwUMGScaleTweener::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.TwUMGScaleTweener.GetCurrentValue
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UTwUMGScaleTweener::GetCurrentValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwUMGScaleTweener", "GetCurrentValue");

	Params::UTwUMGScaleTweener_GetCurrentValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwUIFramework.TwUMGScaleTweener.CreateUMGScaleTween
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   FromValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ToValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TweenDuration                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEasingFunc             Easing                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               TweenPingPong                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnTweenStep                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnTweenFinished                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               AutoStart                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwUMGScaleTweener*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTwUMGScaleTweener* UTwUMGScaleTweener::CreateUMGScaleTween(class UWidget* Widget, const struct FVector2D& FromValue, const struct FVector2D& ToValue, float TweenDuration, enum class EEasingFunc Easing, bool TweenPingPong, FDelegateProperty_& OnTweenStep, FDelegateProperty_& OnTweenFinished, bool AutoStart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwUMGScaleTweener", "CreateUMGScaleTween");

	Params::UTwUMGScaleTweener_CreateUMGScaleTween_Params Parms{};

	Parms.Widget = Widget;
	Parms.FromValue = FromValue;
	Parms.ToValue = ToValue;
	Parms.TweenDuration = TweenDuration;
	Parms.Easing = Easing;
	Parms.TweenPingPong = TweenPingPong;
	Parms.OnTweenStep = OnTweenStep;
	Parms.OnTweenFinished = OnTweenFinished;
	Parms.AutoStart = AutoStart;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TwUIFramework.TwVector2DTweener
// (None)

class UClass* UTwVector2DTweener::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwVector2DTweener");

	return Clss;
}


// TwVector2DTweener TwUIFramework.Default__TwVector2DTweener
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwVector2DTweener* UTwVector2DTweener::GetDefaultObj()
{
	static class UTwVector2DTweener* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwVector2DTweener*>(UTwVector2DTweener::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.TwVector2DTweener.GetCurrentValue
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UTwVector2DTweener::GetCurrentValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwVector2DTweener", "GetCurrentValue");

	Params::UTwVector2DTweener_GetCurrentValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwUIFramework.TwVector2DTweener.CreateVector2DTween_BP
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   FromValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ToValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TweenDuration                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEasingFunc             Easing                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               TweenPingPong                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnTweenStep                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnTweenFinished                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               AutoStart                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwVector2DTweener*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTwVector2DTweener* UTwVector2DTweener::CreateVector2DTween_BP(const struct FVector2D& FromValue, const struct FVector2D& ToValue, float TweenDuration, enum class EEasingFunc Easing, bool TweenPingPong, FDelegateProperty_& OnTweenStep, FDelegateProperty_& OnTweenFinished, bool AutoStart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwVector2DTweener", "CreateVector2DTween_BP");

	Params::UTwVector2DTweener_CreateVector2DTween_BP_Params Parms{};

	Parms.FromValue = FromValue;
	Parms.ToValue = ToValue;
	Parms.TweenDuration = TweenDuration;
	Parms.Easing = Easing;
	Parms.TweenPingPong = TweenPingPong;
	Parms.OnTweenStep = OnTweenStep;
	Parms.OnTweenFinished = OnTweenFinished;
	Parms.AutoStart = AutoStart;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TwUIFramework.TwVector3DTweener
// (None)

class UClass* UTwVector3DTweener::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwVector3DTweener");

	return Clss;
}


// TwVector3DTweener TwUIFramework.Default__TwVector3DTweener
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwVector3DTweener* UTwVector3DTweener::GetDefaultObj()
{
	static class UTwVector3DTweener* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwVector3DTweener*>(UTwVector3DTweener::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.TwVector3DTweener.GetCurrentValue
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UTwVector3DTweener::GetCurrentValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwVector3DTweener", "GetCurrentValue");

	Params::UTwVector3DTweener_GetCurrentValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwUIFramework.TwVector3DTweener.CreateVector3DTween
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     FromValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ToValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TweenDuration                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEasingFunc             Easing                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               TweenPingPong                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnTweenStep                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               AutoStart                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwVector3DTweener*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTwVector3DTweener* UTwVector3DTweener::CreateVector3DTween(const struct FVector& FromValue, const struct FVector& ToValue, float TweenDuration, enum class EEasingFunc Easing, bool TweenPingPong, FDelegateProperty_& OnTweenStep, bool AutoStart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwVector3DTweener", "CreateVector3DTween");

	Params::UTwVector3DTweener_CreateVector3DTween_Params Parms{};

	Parms.FromValue = FromValue;
	Parms.ToValue = ToValue;
	Parms.TweenDuration = TweenDuration;
	Parms.Easing = Easing;
	Parms.TweenPingPong = TweenPingPong;
	Parms.OnTweenStep = OnTweenStep;
	Parms.AutoStart = AutoStart;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TwUIFramework.TwViewController
// (None)

class UClass* UTwViewController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwViewController");

	return Clss;
}


// TwViewController TwUIFramework.Default__TwViewController
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwViewController* UTwViewController::GetDefaultObj()
{
	static class UTwViewController* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwViewController*>(UTwViewController::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.TwViewController.PushView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UTwBaseView>     ViewClass                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwBaseView*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTwBaseView* UTwViewController::PushView(TSubclassOf<class UTwBaseView> ViewClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwViewController", "PushView");

	Params::UTwViewController_PushView_Params Parms{};

	Parms.ViewClass = ViewClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwUIFramework.TwViewController.PushModalInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTwBaseModal*                NewModal                                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwBaseModal*                ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTwBaseModal* UTwViewController::PushModalInstance(class UTwBaseModal* NewModal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwViewController", "PushModalInstance");

	Params::UTwViewController_PushModalInstance_Params Parms{};

	Parms.NewModal = NewModal;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwUIFramework.TwViewController.PushModal
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UTwBaseModal>    ModalClass                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwBaseModal*                ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTwBaseModal* UTwViewController::PushModal(TSubclassOf<class UTwBaseModal> ModalClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwViewController", "PushModal");

	Params::UTwViewController_PushModal_Params Parms{};

	Parms.ModalClass = ModalClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwUIFramework.TwViewController.PopViewInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTwBaseView*                 ViewToPop                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwViewController::PopViewInstance(class UTwBaseView* ViewToPop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwViewController", "PopViewInstance");

	Params::UTwViewController_PopViewInstance_Params Parms{};

	Parms.ViewToPop = ViewToPop;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwViewController.PopViewClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UTwBaseView>     ModalClass                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwViewController::PopViewClass(TSubclassOf<class UTwBaseView> ModalClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwViewController", "PopViewClass");

	Params::UTwViewController_PopViewClass_Params Parms{};

	Parms.ModalClass = ModalClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwViewController.PopView
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UTwViewController::PopView()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwViewController", "PopView");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwViewController.PopModal
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UTwViewController::PopModal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwViewController", "PopModal");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function TwUIFramework.TwViewController.IsViewClassOnStack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UTwBaseView>     View                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTwViewController::IsViewClassOnStack(TSubclassOf<class UTwBaseView> View)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwViewController", "IsViewClassOnStack");

	Params::UTwViewController_IsViewClassOnStack_Params Parms{};

	Parms.View = View;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwUIFramework.TwViewController.IsModalClassOnStack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UTwBaseModal>    Modal                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTwViewController::IsModalClassOnStack(TSubclassOf<class UTwBaseModal> Modal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwViewController", "IsModalClassOnStack");

	Params::UTwViewController_IsModalClassOnStack_Params Parms{};

	Parms.Modal = Modal;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwUIFramework.TwViewController.GetActiveView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTwBaseView*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTwBaseView* UTwViewController::GetActiveView()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwViewController", "GetActiveView");

	Params::UTwViewController_GetActiveView_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TwUIFramework.TwViewController.GetActiveModal
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTwBaseModal*                ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTwBaseModal* UTwViewController::GetActiveModal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwViewController", "GetActiveModal");

	Params::UTwViewController_GetActiveModal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TwUIFramework.TwViewFooter
// (None)

class UClass* UTwViewFooter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwViewFooter");

	return Clss;
}


// TwViewFooter TwUIFramework.Default__TwViewFooter
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwViewFooter* UTwViewFooter::GetDefaultObj()
{
	static class UTwViewFooter* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwViewFooter*>(UTwViewFooter::StaticClass()->DefaultObject);

	return Default;
}


// Function TwUIFramework.TwViewFooter.OnUserInputDeviceChanged
// (Final, Native, Protected)
// Parameters:
// enum class EUserInputDevice        Device                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwViewFooter::OnUserInputDeviceChanged(enum class EUserInputDevice Device)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwViewFooter", "OnUserInputDeviceChanged");

	Params::UTwViewFooter_OnUserInputDeviceChanged_Params Parms{};

	Parms.Device = Device;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


