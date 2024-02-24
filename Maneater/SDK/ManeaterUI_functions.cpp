#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ManeaterUI.AbilityTierWidget
// (None)

class UClass* UAbilityTierWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTierWidget");

	return Clss;
}


// AbilityTierWidget ManeaterUI.Default__AbilityTierWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UAbilityTierWidget* UAbilityTierWidget::GetDefaultObj()
{
	static class UAbilityTierWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTierWidget*>(UAbilityTierWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.AgeTierDiamond
// (None)

class UClass* UAgeTierDiamond::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AgeTierDiamond");

	return Clss;
}


// AgeTierDiamond ManeaterUI.Default__AgeTierDiamond
// (Public, ClassDefaultObject, ArchetypeObject)

class UAgeTierDiamond* UAgeTierDiamond::GetDefaultObj()
{
	static class UAgeTierDiamond* Default = nullptr;

	if (!Default)
		Default = static_cast<UAgeTierDiamond*>(UAgeTierDiamond::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.AgeTierInfographicWidget
// (None)

class UClass* UAgeTierInfographicWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AgeTierInfographicWidget");

	return Clss;
}


// AgeTierInfographicWidget ManeaterUI.Default__AgeTierInfographicWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UAgeTierInfographicWidget* UAgeTierInfographicWidget::GetDefaultObj()
{
	static class UAgeTierInfographicWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UAgeTierInfographicWidget*>(UAgeTierInfographicWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.AgeTierInfographicWidget.OnEvolutionUpgradeButton_BP_Clicked
// (Final, Native, Public)
// Parameters:
// struct FKey                        MouseButtonClicked                                               (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*          OnWidgetClicked                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAgeTierInfographicWidget::OnEvolutionUpgradeButton_BP_Clicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* OnWidgetClicked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AgeTierInfographicWidget", "OnEvolutionUpgradeButton_BP_Clicked");

	Params::UAgeTierInfographicWidget_OnEvolutionUpgradeButton_BP_Clicked_Params Parms{};

	Parms.MouseButtonClicked = MouseButtonClicked;
	Parms.OnWidgetClicked = OnWidgetClicked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.AttributesWidget
// (None)

class UClass* UAttributesWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AttributesWidget");

	return Clss;
}


// AttributesWidget ManeaterUI.Default__AttributesWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UAttributesWidget* UAttributesWidget::GetDefaultObj()
{
	static class UAttributesWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttributesWidget*>(UAttributesWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.AttributesWidget.UpdateAttributes
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAttributesWidget::UpdateAttributes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AttributesWidget", "UpdateAttributes");



	UObject::ProcessEvent(Func, nullptr);

}


// Class ManeaterUI.AwarenessWidget
// (None)

class UClass* UAwarenessWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AwarenessWidget");

	return Clss;
}


// AwarenessWidget ManeaterUI.Default__AwarenessWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UAwarenessWidget* UAwarenessWidget::GetDefaultObj()
{
	static class UAwarenessWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UAwarenessWidget*>(UAwarenessWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.AwarenessWidget.SetLocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bLocked                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAwarenessWidget::SetLocked(bool bLocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AwarenessWidget", "SetLocked");

	Params::UAwarenessWidget_SetLocked_Params Parms{};

	Parms.bLocked = bLocked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.AwarenessWidget.SetDLCType
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDLCType                DLCType                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAwarenessWidget::SetDLCType(enum class EDLCType DLCType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AwarenessWidget", "SetDLCType");

	Params::UAwarenessWidget_SetDLCType_Params Parms{};

	Parms.DLCType = DLCType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ManeaterUI.AwarenessWidget.SetAwareness
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Awareness                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAwarenessWidget::SetAwareness(float Awareness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AwarenessWidget", "SetAwareness");

	Params::UAwarenessWidget_SetAwareness_Params Parms{};

	Parms.Awareness = Awareness;

	UObject::ProcessEvent(Func, &Parms);

}


// Class ManeaterUI.BaseObjectiveDecorator
// (None)

class UClass* UBaseObjectiveDecorator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseObjectiveDecorator");

	return Clss;
}


// BaseObjectiveDecorator ManeaterUI.Default__BaseObjectiveDecorator
// (Public, ClassDefaultObject, ArchetypeObject)

class UBaseObjectiveDecorator* UBaseObjectiveDecorator::GetDefaultObj()
{
	static class UBaseObjectiveDecorator* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseObjectiveDecorator*>(UBaseObjectiveDecorator::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.BaseObjectiveDecorator.DelayedOutAnimation
// (Final, Native, Public)
// Parameters:

void UBaseObjectiveDecorator::DelayedOutAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseObjectiveDecorator", "DelayedOutAnimation");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.MapMarkerWidget
// (None)

class UClass* UMapMarkerWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapMarkerWidget");

	return Clss;
}


// MapMarkerWidget ManeaterUI.Default__MapMarkerWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UMapMarkerWidget* UMapMarkerWidget::GetDefaultObj()
{
	static class UMapMarkerWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UMapMarkerWidget*>(UMapMarkerWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.MapMarkerWidget.OnInteractButtonUp
// (Native, Public, BlueprintCallable)
// Parameters:

void UMapMarkerWidget::OnInteractButtonUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapMarkerWidget", "OnInteractButtonUp");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.MapMarkerWidget.OnInteractButtonDown
// (Native, Public, BlueprintCallable)
// Parameters:

void UMapMarkerWidget::OnInteractButtonDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapMarkerWidget", "OnInteractButtonDown");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.MapMarkerWidget.OnActiveFilterChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EMarkerType             NewMarkerTypeFilter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapMarkerWidget::OnActiveFilterChanged(enum class EMarkerType NewMarkerTypeFilter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapMarkerWidget", "OnActiveFilterChanged");

	Params::UMapMarkerWidget_OnActiveFilterChanged_Params Parms{};

	Parms.NewMarkerTypeFilter = NewMarkerTypeFilter;

	UObject::ProcessEvent(Func, &Parms);

}


// Class ManeaterUI.BountyBoatMapMarkerWidget
// (None)

class UClass* UBountyBoatMapMarkerWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BountyBoatMapMarkerWidget");

	return Clss;
}


// BountyBoatMapMarkerWidget ManeaterUI.Default__BountyBoatMapMarkerWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UBountyBoatMapMarkerWidget* UBountyBoatMapMarkerWidget::GetDefaultObj()
{
	static class UBountyBoatMapMarkerWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UBountyBoatMapMarkerWidget*>(UBountyBoatMapMarkerWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.BountyPanel
// (None)

class UClass* UBountyPanel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BountyPanel");

	return Clss;
}


// BountyPanel ManeaterUI.Default__BountyPanel
// (Public, ClassDefaultObject, ArchetypeObject)

class UBountyPanel* UBountyPanel::GetDefaultObj()
{
	static class UBountyPanel* Default = nullptr;

	if (!Default)
		Default = static_cast<UBountyPanel*>(UBountyPanel::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.BountyPanel.OnHunterButton_Focused
// (Final, Native, Protected)
// Parameters:
// class UHunterButtonWidget*         HunterButtonWidget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBountyPanel::OnHunterButton_Focused(class UHunterButtonWidget* HunterButtonWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BountyPanel", "OnHunterButton_Focused");

	Params::UBountyPanel_OnHunterButton_Focused_Params Parms{};

	Parms.HunterButtonWidget = HunterButtonWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.BountyPanel.OnControllerDisconnectedModalDismissed
// (Final, Native, Protected)
// Parameters:

void UBountyPanel::OnControllerDisconnectedModalDismissed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BountyPanel", "OnControllerDisconnectedModalDismissed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.BountyPanel.GetBountyDataForRank
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// uint8                              Rank                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UME_BountyTier*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UME_BountyTier* UBountyPanel::GetBountyDataForRank(uint8 Rank)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BountyPanel", "GetBountyDataForRank");

	Params::UBountyPanel_GetBountyDataForRank_Params Parms{};

	Parms.Rank = Rank;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ManeaterUI.BountyTimer
// (None)

class UClass* UBountyTimer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BountyTimer");

	return Clss;
}


// BountyTimer ManeaterUI.Default__BountyTimer
// (Public, ClassDefaultObject, ArchetypeObject)

class UBountyTimer* UBountyTimer::GetDefaultObj()
{
	static class UBountyTimer* Default = nullptr;

	if (!Default)
		Default = static_cast<UBountyTimer*>(UBountyTimer::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.CompassMarkerWidget
// (None)

class UClass* UCompassMarkerWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompassMarkerWidget");

	return Clss;
}


// CompassMarkerWidget ManeaterUI.Default__CompassMarkerWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UCompassMarkerWidget* UCompassMarkerWidget::GetDefaultObj()
{
	static class UCompassMarkerWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UCompassMarkerWidget*>(UCompassMarkerWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.CompassWidget
// (None)

class UClass* UCompassWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompassWidget");

	return Clss;
}


// CompassWidget ManeaterUI.Default__CompassWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UCompassWidget* UCompassWidget::GetDefaultObj()
{
	static class UCompassWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UCompassWidget*>(UCompassWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.CompassWidget.RemoveTrackedActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCompassWidget::RemoveTrackedActor(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompassWidget", "RemoveTrackedActor");

	Params::UCompassWidget_RemoveTrackedActor_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.CompassWidget.OnAICombatStatusChanged
// (Final, Native, Protected)
// Parameters:
// bool                               bInCombat                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AME_AIController*            AIActor                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCompassWidget::OnAICombatStatusChanged(bool bInCombat, class AME_AIController* AIActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompassWidget", "OnAICombatStatusChanged");

	Params::UCompassWidget_OnAICombatStatusChanged_Params Parms{};

	Parms.bInCombat = bInCombat;
	Parms.AIActor = AIActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.CompassWidget.OnActorRequestingWidget
// (Final, Native, Protected)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCompassWidget::OnActorRequestingWidget(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompassWidget", "OnActorRequestingWidget");

	Params::UCompassWidget_OnActorRequestingWidget_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.CompassWidget.OnActorRequestingRemoval
// (Final, Native, Protected)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCompassWidget::OnActorRequestingRemoval(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompassWidget", "OnActorRequestingRemoval");

	Params::UCompassWidget_OnActorRequestingRemoval_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.CompassWidget.AddTrackedActor
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTrackedCompassActor        Actor                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UCompassWidget::AddTrackedActor(struct FTrackedCompassActor& Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompassWidget", "AddTrackedActor");

	Params::UCompassWidget_AddTrackedActor_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.ContextualControlWidget
// (None)

class UClass* UContextualControlWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContextualControlWidget");

	return Clss;
}


// ContextualControlWidget ManeaterUI.Default__ContextualControlWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UContextualControlWidget* UContextualControlWidget::GetDefaultObj()
{
	static class UContextualControlWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UContextualControlWidget*>(UContextualControlWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.ContextualControlWidget.RemoveControlWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ControlName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UContextualControlWidget::RemoveControlWidget(class FName ControlName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualControlWidget", "RemoveControlWidget");

	Params::UContextualControlWidget_RemoveControlWidget_Params Parms{};

	Parms.ControlName = ControlName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ContextualControlWidget.AddControlWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ControlName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ControlText                                                      (Parm, NativeAccessSpecifierPublic)
// class FName                        InputActionName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UContextualControlWidget::AddControlWidget(class FName ControlName, class FText ControlText, class FName InputActionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContextualControlWidget", "AddControlWidget");

	Params::UContextualControlWidget_AddControlWidget_Params Parms{};

	Parms.ControlName = ControlName;
	Parms.ControlText = ControlText;
	Parms.InputActionName = InputActionName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.ContextualControlWidgetEntry
// (None)

class UClass* UContextualControlWidgetEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContextualControlWidgetEntry");

	return Clss;
}


// ContextualControlWidgetEntry ManeaterUI.Default__ContextualControlWidgetEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class UContextualControlWidgetEntry* UContextualControlWidgetEntry::GetDefaultObj()
{
	static class UContextualControlWidgetEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<UContextualControlWidgetEntry*>(UContextualControlWidgetEntry::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.ControlsSettingsWidget
// (None)

class UClass* UControlsSettingsWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlsSettingsWidget");

	return Clss;
}


// ControlsSettingsWidget ManeaterUI.Default__ControlsSettingsWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlsSettingsWidget* UControlsSettingsWidget::GetDefaultObj()
{
	static class UControlsSettingsWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlsSettingsWidget*>(UControlsSettingsWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.ControlsSettingsWidget.OnLayoutChanged
// (Final, Native, Public)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlsSettingsWidget::OnLayoutChanged(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlsSettingsWidget", "OnLayoutChanged");

	Params::UControlsSettingsWidget_OnLayoutChanged_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.CreditsScreenView
// (None)

class UClass* UCreditsScreenView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreditsScreenView");

	return Clss;
}


// CreditsScreenView ManeaterUI.Default__CreditsScreenView
// (Public, ClassDefaultObject, ArchetypeObject)

class UCreditsScreenView* UCreditsScreenView::GetDefaultObj()
{
	static class UCreditsScreenView* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreditsScreenView*>(UCreditsScreenView::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.CrosshairNavigationWidget
// (None)

class UClass* UCrosshairNavigationWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrosshairNavigationWidget");

	return Clss;
}


// CrosshairNavigationWidget ManeaterUI.Default__CrosshairNavigationWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrosshairNavigationWidget* UCrosshairNavigationWidget::GetDefaultObj()
{
	static class UCrosshairNavigationWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrosshairNavigationWidget*>(UCrosshairNavigationWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.CrosshairNavigationWidget.SetFocusedMarker
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMapMarkerWidget*            _MapMarkerWidget                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrosshairNavigationWidget::SetFocusedMarker(class UMapMarkerWidget* _MapMarkerWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrosshairNavigationWidget", "SetFocusedMarker");

	Params::UCrosshairNavigationWidget_SetFocusedMarker_Params Parms{};

	Parms._MapMarkerWidget = _MapMarkerWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.CrosshairNavigationWidget.OnFocusedMarkerChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCrosshairNavigationWidget::OnFocusedMarkerChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrosshairNavigationWidget", "OnFocusedMarkerChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Class ManeaterUI.DamageTextController
// (None)

class UClass* UDamageTextController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageTextController");

	return Clss;
}


// DamageTextController ManeaterUI.Default__DamageTextController
// (Public, ClassDefaultObject, ArchetypeObject)

class UDamageTextController* UDamageTextController::GetDefaultObj()
{
	static class UDamageTextController* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageTextController*>(UDamageTextController::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.DamageTextController.SpawnHealingText
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     SpawnPos                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDamageTextController::SpawnHealingText(const struct FVector& SpawnPos, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DamageTextController", "SpawnHealingText");

	Params::UDamageTextController_SpawnHealingText_Params Parms{};

	Parms.SpawnPos = SpawnPos;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.DamageTextController.SpawnEvadeText
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     SpawnPos                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDamageTextController::SpawnEvadeText(const struct FVector& SpawnPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DamageTextController", "SpawnEvadeText");

	Params::UDamageTextController_SpawnEvadeText_Params Parms{};

	Parms.SpawnPos = SpawnPos;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.DamageTextController.SpawnDamageText
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     SpawnPos                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bVulnerableVictim                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       AttackGameplayTags                                               (Parm, NativeAccessSpecifierPublic)

void UDamageTextController::SpawnDamageText(const struct FVector& SpawnPos, float Value, bool bVulnerableVictim, const struct FGameplayTagContainer& AttackGameplayTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DamageTextController", "SpawnDamageText");

	Params::UDamageTextController_SpawnDamageText_Params Parms{};

	Parms.SpawnPos = SpawnPos;
	Parms.Value = Value;
	Parms.bVulnerableVictim = bVulnerableVictim;
	Parms.AttackGameplayTags = AttackGameplayTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.DamageTextController.OnPlayerCausedCombatEvent
// (Final, Native, Protected, HasOutParams, HasDefaults)
// Parameters:
// enum class ECombatEventType        CombatEventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     WorldPos                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Amount                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bVulnerableVictim                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       AttackGameplayTags                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UDamageTextController::OnPlayerCausedCombatEvent(enum class ECombatEventType CombatEventType, struct FVector& WorldPos, float Amount, bool bVulnerableVictim, struct FGameplayTagContainer& AttackGameplayTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DamageTextController", "OnPlayerCausedCombatEvent");

	Params::UDamageTextController_OnPlayerCausedCombatEvent_Params Parms{};

	Parms.CombatEventType = CombatEventType;
	Parms.WorldPos = WorldPos;
	Parms.Amount = Amount;
	Parms.bVulnerableVictim = bVulnerableVictim;
	Parms.AttackGameplayTags = AttackGameplayTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.DamageTextWidget
// (None)

class UClass* UDamageTextWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageTextWidget");

	return Clss;
}


// DamageTextWidget ManeaterUI.Default__DamageTextWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UDamageTextWidget* UDamageTextWidget::GetDefaultObj()
{
	static class UDamageTextWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageTextWidget*>(UDamageTextWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.DeathView
// (None)

class UClass* UDeathView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DeathView");

	return Clss;
}


// DeathView ManeaterUI.Default__DeathView
// (Public, ClassDefaultObject, ArchetypeObject)

class UDeathView* UDeathView::GetDefaultObj()
{
	static class UDeathView* Default = nullptr;

	if (!Default)
		Default = static_cast<UDeathView*>(UDeathView::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.DeathView.OnButtonMouseOver
// (Final, Native, Protected)
// Parameters:
// class UTwBaseButton*               MouseOverWidget                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDeathView::OnButtonMouseOver(class UTwBaseButton* MouseOverWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeathView", "OnButtonMouseOver");

	Params::UDeathView_OnButtonMouseOver_Params Parms{};

	Parms.MouseOverWidget = MouseOverWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.DeathView.OnButtonGainFoucus
// (Final, Native, Protected)
// Parameters:
// class UTwClickableWidget*          OnWidgetFocused                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDeathView::OnButtonGainFoucus(class UTwClickableWidget* OnWidgetFocused)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeathView", "OnButtonGainFoucus");

	Params::UDeathView_OnButtonGainFoucus_Params Parms{};

	Parms.OnWidgetFocused = OnWidgetFocused;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.EnemyHealthWidget
// (None)

class UClass* UEnemyHealthWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyHealthWidget");

	return Clss;
}


// EnemyHealthWidget ManeaterUI.Default__EnemyHealthWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnemyHealthWidget* UEnemyHealthWidget::GetDefaultObj()
{
	static class UEnemyHealthWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnemyHealthWidget*>(UEnemyHealthWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.EnemyOverheadWidgetComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UEnemyOverheadWidgetComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyOverheadWidgetComponent");

	return Clss;
}


// EnemyOverheadWidgetComponent ManeaterUI.Default__EnemyOverheadWidgetComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnemyOverheadWidgetComponent* UEnemyOverheadWidgetComponent::GetDefaultObj()
{
	static class UEnemyOverheadWidgetComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnemyOverheadWidgetComponent*>(UEnemyOverheadWidgetComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.EnemyOverheadWidgetComponent.GetContainer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEnemyOverheadWidgetContainer*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UEnemyOverheadWidgetContainer* UEnemyOverheadWidgetComponent::GetContainer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyOverheadWidgetComponent", "GetContainer");

	Params::UEnemyOverheadWidgetComponent_GetContainer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ManeaterUI.EnemyOverheadWidgetContainer
// (None)

class UClass* UEnemyOverheadWidgetContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyOverheadWidgetContainer");

	return Clss;
}


// EnemyOverheadWidgetContainer ManeaterUI.Default__EnemyOverheadWidgetContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnemyOverheadWidgetContainer* UEnemyOverheadWidgetContainer::GetDefaultObj()
{
	static class UEnemyOverheadWidgetContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnemyOverheadWidgetContainer*>(UEnemyOverheadWidgetContainer::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.EnemyOverheadWidgetContainer.OnViewControllerVisibilityChanged
// (Final, Native, Protected)
// Parameters:
// enum class ESlateVisibility        ControllerVisibility                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnemyOverheadWidgetContainer::OnViewControllerVisibilityChanged(enum class ESlateVisibility ControllerVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyOverheadWidgetContainer", "OnViewControllerVisibilityChanged");

	Params::UEnemyOverheadWidgetContainer_OnViewControllerVisibilityChanged_Params Parms{};

	Parms.ControllerVisibility = ControllerVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.EnemyOverheadWidgetContainer.OnThreatStateChanged
// (Final, Native, Protected)
// Parameters:
// enum class EAIThreatAlertState     NewAlertState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      InstigatingActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnemyOverheadWidgetContainer::OnThreatStateChanged(enum class EAIThreatAlertState NewAlertState, class AActor* InstigatingActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyOverheadWidgetContainer", "OnThreatStateChanged");

	Params::UEnemyOverheadWidgetContainer_OnThreatStateChanged_Params Parms{};

	Parms.NewAlertState = NewAlertState;
	Parms.InstigatingActor = InstigatingActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.EnemyOverheadWidgetContainer.OnRelatedObjectiveChanged
// (Final, Native, Protected)
// Parameters:
// enum class EObjectiveType          ObjectiveType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnemyOverheadWidgetContainer::OnRelatedObjectiveChanged(enum class EObjectiveType ObjectiveType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyOverheadWidgetContainer", "OnRelatedObjectiveChanged");

	Params::UEnemyOverheadWidgetContainer_OnRelatedObjectiveChanged_Params Parms{};

	Parms.ObjectiveType = ObjectiveType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.EnemyOverheadWidgetContainer.OnPawnTakeDamage
// (Final, Native, Protected)
// Parameters:
// class AActor*                      DamagedActor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDamageType*                 DamageType                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*                 InstigatedBy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      DamageCauser                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnemyOverheadWidgetContainer::OnPawnTakeDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyOverheadWidgetContainer", "OnPawnTakeDamage");

	Params::UEnemyOverheadWidgetContainer_OnPawnTakeDamage_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.EnemyOverheadWidgetContainer.OnPawnKilled
// (Final, Native, Protected)
// Parameters:
// class AME_Character*               Victim                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Killer                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnemyOverheadWidgetContainer::OnPawnKilled(class AME_Character* Victim, class AActor* Killer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyOverheadWidgetContainer", "OnPawnKilled");

	Params::UEnemyOverheadWidgetContainer_OnPawnKilled_Params Parms{};

	Parms.Victim = Victim;
	Parms.Killer = Killer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.EnemyOverheadWidgetContainer.OnHUDVisiblityChanged
// (Final, Native, Protected)
// Parameters:
// bool                               bVisible                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnemyOverheadWidgetContainer::OnHUDVisiblityChanged(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyOverheadWidgetContainer", "OnHUDVisiblityChanged");

	Params::UEnemyOverheadWidgetContainer_OnHUDVisiblityChanged_Params Parms{};

	Parms.bVisible = bVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.EnemyOverheadWidgetContainer.OnGamePauseStateChanged
// (Final, Native, Protected)
// Parameters:
// bool                               bPaused                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnemyOverheadWidgetContainer::OnGamePauseStateChanged(bool bPaused)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyOverheadWidgetContainer", "OnGamePauseStateChanged");

	Params::UEnemyOverheadWidgetContainer_OnGamePauseStateChanged_Params Parms{};

	Parms.bPaused = bPaused;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.EnemyOverheadWidgetContainer.OnCinematicModeChanged
// (Final, Native, Protected)
// Parameters:
// bool                               bCinematicMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnemyOverheadWidgetContainer::OnCinematicModeChanged(bool bCinematicMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyOverheadWidgetContainer", "OnCinematicModeChanged");

	Params::UEnemyOverheadWidgetContainer_OnCinematicModeChanged_Params Parms{};

	Parms.bCinematicMode = bCinematicMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.EnemyOverheadWidgetContainer.OnBoatKilled
// (Final, Native, Protected)
// Parameters:
// class AME_VehiclePawn*             Victim                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnemyOverheadWidgetContainer::OnBoatKilled(class AME_VehiclePawn* Victim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyOverheadWidgetContainer", "OnBoatKilled");

	Params::UEnemyOverheadWidgetContainer_OnBoatKilled_Params Parms{};

	Parms.Victim = Victim;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.EnemyScreenSpaceWidgetContainer
// (None)

class UClass* UEnemyScreenSpaceWidgetContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyScreenSpaceWidgetContainer");

	return Clss;
}


// EnemyScreenSpaceWidgetContainer ManeaterUI.Default__EnemyScreenSpaceWidgetContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnemyScreenSpaceWidgetContainer* UEnemyScreenSpaceWidgetContainer::GetDefaultObj()
{
	static class UEnemyScreenSpaceWidgetContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnemyScreenSpaceWidgetContainer*>(UEnemyScreenSpaceWidgetContainer::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.EnemyScreenSpaceWidgetContainer.UpdateWidgetDangerSense
// (Final, Native, Protected)
// Parameters:
// class AActor*                      DangerousActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bActive                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnemyScreenSpaceWidgetContainer::UpdateWidgetDangerSense(class AActor* DangerousActor, bool bActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyScreenSpaceWidgetContainer", "UpdateWidgetDangerSense");

	Params::UEnemyScreenSpaceWidgetContainer_UpdateWidgetDangerSense_Params Parms{};

	Parms.DangerousActor = DangerousActor;
	Parms.bActive = bActive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.EnemyScreenSpaceWidgetContainer.OnScreenSpaceWidgetRequested
// (Final, Native, Protected)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnemyScreenSpaceWidgetContainer::OnScreenSpaceWidgetRequested(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyScreenSpaceWidgetContainer", "OnScreenSpaceWidgetRequested");

	Params::UEnemyScreenSpaceWidgetContainer_OnScreenSpaceWidgetRequested_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.EnemyScreenSpaceWidgetContainer.OnRemoveScreenSpaceWidgetRequested
// (Final, Native, Protected)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnemyScreenSpaceWidgetContainer::OnRemoveScreenSpaceWidgetRequested(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyScreenSpaceWidgetContainer", "OnRemoveScreenSpaceWidgetRequested");

	Params::UEnemyScreenSpaceWidgetContainer_OnRemoveScreenSpaceWidgetRequested_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.EnemySuspicionWidget
// (None)

class UClass* UEnemySuspicionWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemySuspicionWidget");

	return Clss;
}


// EnemySuspicionWidget ManeaterUI.Default__EnemySuspicionWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnemySuspicionWidget* UEnemySuspicionWidget::GetDefaultObj()
{
	static class UEnemySuspicionWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnemySuspicionWidget*>(UEnemySuspicionWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.EpisodeItemListWidget
// (None)

class UClass* UEpisodeItemListWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EpisodeItemListWidget");

	return Clss;
}


// EpisodeItemListWidget ManeaterUI.Default__EpisodeItemListWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UEpisodeItemListWidget* UEpisodeItemListWidget::GetDefaultObj()
{
	static class UEpisodeItemListWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UEpisodeItemListWidget*>(UEpisodeItemListWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.EvolutionAbilityWidget
// (None)

class UClass* UEvolutionAbilityWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EvolutionAbilityWidget");

	return Clss;
}


// EvolutionAbilityWidget ManeaterUI.Default__EvolutionAbilityWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UEvolutionAbilityWidget* UEvolutionAbilityWidget::GetDefaultObj()
{
	static class UEvolutionAbilityWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UEvolutionAbilityWidget*>(UEvolutionAbilityWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.EvolutionAbilityWidget.OnSonarAbilityActivated
// (Final, Native, Protected, HasOutParams)
// Parameters:
// float                              Duration                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEvolutionAbilityWidget::OnSonarAbilityActivated(float& Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EvolutionAbilityWidget", "OnSonarAbilityActivated");

	Params::UEvolutionAbilityWidget_OnSonarAbilityActivated_Params Parms{};

	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.EvolutionAbilityWidget.OnSlottedEvolutionChanged
// (Final, Native, Protected)
// Parameters:
// enum class EEvolutionSlot          EvolutionSlot                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UME_PlayerEvolution*         Evolution                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEvolutionAbilityWidget::OnSlottedEvolutionChanged(enum class EEvolutionSlot EvolutionSlot, class UME_PlayerEvolution* Evolution)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EvolutionAbilityWidget", "OnSlottedEvolutionChanged");

	Params::UEvolutionAbilityWidget_OnSlottedEvolutionChanged_Params Parms{};

	Parms.EvolutionSlot = EvolutionSlot;
	Parms.Evolution = Evolution;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.EvolutionAbilityWidget.OnEvolutionAbilityActivated
// (Final, Native, Protected, HasOutParams)
// Parameters:
// float                              Duration                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEvolutionAbilityWidget::OnEvolutionAbilityActivated(float& Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EvolutionAbilityWidget", "OnEvolutionAbilityActivated");

	Params::UEvolutionAbilityWidget_OnEvolutionAbilityActivated_Params Parms{};

	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.EvolutionAbilityWidget.OnCinematicModeChanged
// (Final, Native, Protected)
// Parameters:
// bool                               bCinematicMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEvolutionAbilityWidget::OnCinematicModeChanged(bool bCinematicMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EvolutionAbilityWidget", "OnCinematicModeChanged");

	Params::UEvolutionAbilityWidget_OnCinematicModeChanged_Params Parms{};

	Parms.bCinematicMode = bCinematicMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.EvolutionAbilityWidget.OnCharacterAttributesChanged
// (Final, Native, Protected)
// Parameters:

void UEvolutionAbilityWidget::OnCharacterAttributesChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EvolutionAbilityWidget", "OnCharacterAttributesChanged");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.EvolutionIconButtonWidget
// (None)

class UClass* UEvolutionIconButtonWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EvolutionIconButtonWidget");

	return Clss;
}


// EvolutionIconButtonWidget ManeaterUI.Default__EvolutionIconButtonWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UEvolutionIconButtonWidget* UEvolutionIconButtonWidget::GetDefaultObj()
{
	static class UEvolutionIconButtonWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UEvolutionIconButtonWidget*>(UEvolutionIconButtonWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.EvolutionIconButtonWidget.PlayUpgradeFX
// (Event, Public, BlueprintEvent)
// Parameters:

void UEvolutionIconButtonWidget::PlayUpgradeFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EvolutionIconButtonWidget", "PlayUpgradeFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ManeaterUI.EvolutionIconButtonWidget.GetSlotType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EEvolutionSlot          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EEvolutionSlot UEvolutionIconButtonWidget::GetSlotType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EvolutionIconButtonWidget", "GetSlotType");

	Params::UEvolutionIconButtonWidget_GetSlotType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ManeaterUI.EvolutionIconButtonWidget.GetSlotName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UEvolutionIconButtonWidget::GetSlotName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EvolutionIconButtonWidget", "GetSlotName");

	Params::UEvolutionIconButtonWidget_GetSlotName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ManeaterUI.EvolutionIconButtonWidget.GetRarity
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EEvolutionRarity        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EEvolutionRarity UEvolutionIconButtonWidget::GetRarity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EvolutionIconButtonWidget", "GetRarity");

	Params::UEvolutionIconButtonWidget_GetRarity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ManeaterUI.EvolutionIconButtonWidget.GetLocked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEvolutionIconButtonWidget::GetLocked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EvolutionIconButtonWidget", "GetLocked");

	Params::UEvolutionIconButtonWidget_GetLocked_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ManeaterUI.EvolutionIconButtonWidget.GetIsEquipped
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEvolutionIconButtonWidget::GetIsEquipped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EvolutionIconButtonWidget", "GetIsEquipped");

	Params::UEvolutionIconButtonWidget_GetIsEquipped_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ManeaterUI.EvolutionIconButtonWidget.GetFocusWidgetForNavigation
// (Final, Native, Protected)
// Parameters:
// enum class EUINavigation           NavigationDir                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UEvolutionIconButtonWidget::GetFocusWidgetForNavigation(enum class EUINavigation NavigationDir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EvolutionIconButtonWidget", "GetFocusWidgetForNavigation");

	Params::UEvolutionIconButtonWidget_GetFocusWidgetForNavigation_Params Parms{};

	Parms.NavigationDir = NavigationDir;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ManeaterUI.EvolutionIconButtonWidget.GetDLCErrorText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UEvolutionIconButtonWidget::GetDLCErrorText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EvolutionIconButtonWidget", "GetDLCErrorText");

	Params::UEvolutionIconButtonWidget_GetDLCErrorText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ManeaterUI.EvolutionListWidget
// (None)

class UClass* UEvolutionListWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EvolutionListWidget");

	return Clss;
}


// EvolutionListWidget ManeaterUI.Default__EvolutionListWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UEvolutionListWidget* UEvolutionListWidget::GetDefaultObj()
{
	static class UEvolutionListWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UEvolutionListWidget*>(UEvolutionListWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.EvolutionListWidget.OnInventoryEvolutionUpgrade_Pressed
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerEvolution*         Evolution                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEvolutionListWidget::OnInventoryEvolutionUpgrade_Pressed(class UME_PlayerEvolution* Evolution)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EvolutionListWidget", "OnInventoryEvolutionUpgrade_Pressed");

	Params::UEvolutionListWidget_OnInventoryEvolutionUpgrade_Pressed_Params Parms{};

	Parms.Evolution = Evolution;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.EvolutionListWidget.OnInventoryEvolution_MouseLeave
// (Final, Native, Protected)
// Parameters:
// class UTwBaseButton*               Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEvolutionListWidget::OnInventoryEvolution_MouseLeave(class UTwBaseButton* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EvolutionListWidget", "OnInventoryEvolution_MouseLeave");

	Params::UEvolutionListWidget_OnInventoryEvolution_MouseLeave_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.EvolutionListWidget.OnInventoryEvolution_Focused
// (Final, Native, Protected)
// Parameters:
// class UEvolutionIconButtonWidget*  IconWidget                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEvolutionListWidget::OnInventoryEvolution_Focused(class UEvolutionIconButtonWidget* IconWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EvolutionListWidget", "OnInventoryEvolution_Focused");

	Params::UEvolutionListWidget_OnInventoryEvolution_Focused_Params Parms{};

	Parms.IconWidget = IconWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.EvolutionListWidget.OnInventoryEvolution_Clicked
// (Final, Native, Protected)
// Parameters:
// struct FKey                        Button                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*          Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEvolutionListWidget::OnInventoryEvolution_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EvolutionListWidget", "OnInventoryEvolution_Clicked");

	Params::UEvolutionListWidget_OnInventoryEvolution_Clicked_Params Parms{};

	Parms.Button = Button;
	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.EvolutionListWidget.OnInputDeviceChanged
// (Final, Native, Protected)
// Parameters:
// enum class EUserInputDevice        Device                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEvolutionListWidget::OnInputDeviceChanged(enum class EUserInputDevice Device)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EvolutionListWidget", "OnInputDeviceChanged");

	Params::UEvolutionListWidget_OnInputDeviceChanged_Params Parms{};

	Parms.Device = Device;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.EvolutionListWidget.OnBackButton_Clicked
// (Final, Native, Protected)
// Parameters:
// struct FKey                        Button                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*          Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEvolutionListWidget::OnBackButton_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EvolutionListWidget", "OnBackButton_Clicked");

	Params::UEvolutionListWidget_OnBackButton_Clicked_Params Parms{};

	Parms.Button = Button;
	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.EvolutionsPanel
// (None)

class UClass* UEvolutionsPanel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EvolutionsPanel");

	return Clss;
}


// EvolutionsPanel ManeaterUI.Default__EvolutionsPanel
// (Public, ClassDefaultObject, ArchetypeObject)

class UEvolutionsPanel* UEvolutionsPanel::GetDefaultObj()
{
	static class UEvolutionsPanel* Default = nullptr;

	if (!Default)
		Default = static_cast<UEvolutionsPanel*>(UEvolutionsPanel::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.EvolutionsPanel.ShowTutorialPopupWidget
// (Final, Native, Protected)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEvolutionsPanel::ShowTutorialPopupWidget(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EvolutionsPanel", "ShowTutorialPopupWidget");

	Params::UEvolutionsPanel_ShowTutorialPopupWidget_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.EvolutionsPanel.PlayTransitionToUpgrade
// (Final, Native, Protected)
// Parameters:

void UEvolutionsPanel::PlayTransitionToUpgrade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EvolutionsPanel", "PlayTransitionToUpgrade");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.EvolutionsPanel.PlayTransitionToSlots
// (Final, Native, Protected)
// Parameters:

void UEvolutionsPanel::PlayTransitionToSlots()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EvolutionsPanel", "PlayTransitionToSlots");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.EvolutionsPanel.PlayTransitionToList
// (Final, Native, Protected)
// Parameters:

void UEvolutionsPanel::PlayTransitionToList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EvolutionsPanel", "PlayTransitionToList");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.EvolutionsPanel.PlayTransitionOutOfUpgrade
// (Final, Native, Protected)
// Parameters:

void UEvolutionsPanel::PlayTransitionOutOfUpgrade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EvolutionsPanel", "PlayTransitionOutOfUpgrade");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.EvolutionsPanel.PlayGrowthAnimation
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEvolutionsPanel::PlayGrowthAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EvolutionsPanel", "PlayGrowthAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ManeaterUI.EvolutionsPanel.OnSlottedEvolutionChanged
// (Final, Native, Protected)
// Parameters:
// enum class EEvolutionSlot          EvolutionSlot                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UME_PlayerEvolution*         Evolution                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEvolutionsPanel::OnSlottedEvolutionChanged(enum class EEvolutionSlot EvolutionSlot, class UME_PlayerEvolution* Evolution)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EvolutionsPanel", "OnSlottedEvolutionChanged");

	Params::UEvolutionsPanel_OnSlottedEvolutionChanged_Params Parms{};

	Parms.EvolutionSlot = EvolutionSlot;
	Parms.Evolution = Evolution;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.EvolutionsPanel.OnSlotButtonWidget_Focused
// (Final, Native, Protected)
// Parameters:
// class UEvolutionIconButtonWidget*  IconWidge                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEvolutionsPanel::OnSlotButtonWidget_Focused(class UEvolutionIconButtonWidget* IconWidge)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EvolutionsPanel", "OnSlotButtonWidget_Focused");

	Params::UEvolutionsPanel_OnSlotButtonWidget_Focused_Params Parms{};

	Parms.IconWidge = IconWidge;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.EvolutionsPanel.OnSlotButtonWidget_Clicked
// (Final, Native, Protected)
// Parameters:
// struct FKey                        Button                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*          Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEvolutionsPanel::OnSlotButtonWidget_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EvolutionsPanel", "OnSlotButtonWidget_Clicked");

	Params::UEvolutionsPanel_OnSlotButtonWidget_Clicked_Params Parms{};

	Parms.Button = Button;
	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.EvolutionsPanel.OnShark_GrowthStageChanged
// (Final, Native, Protected, HasOutParams)
// Parameters:
// enum class EPlayerGrowthStage      OldGrowthStage                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EPlayerGrowthStage      NewGrowthStage                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bReinitPose                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEvolutionsPanel::OnShark_GrowthStageChanged(enum class EPlayerGrowthStage& OldGrowthStage, enum class EPlayerGrowthStage& NewGrowthStage, bool bReinitPose)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EvolutionsPanel", "OnShark_GrowthStageChanged");

	Params::UEvolutionsPanel_OnShark_GrowthStageChanged_Params Parms{};

	Parms.OldGrowthStage = OldGrowthStage;
	Parms.NewGrowthStage = NewGrowthStage;
	Parms.bReinitPose = bReinitPose;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.EvolutionsPanel.OnInventoryEvolutionChanged
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerEvolution*         Evolution                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsUpgrade                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEvolutionsPanel::OnInventoryEvolutionChanged(class UME_PlayerEvolution* Evolution, bool IsUpgrade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EvolutionsPanel", "OnInventoryEvolutionChanged");

	Params::UEvolutionsPanel_OnInventoryEvolutionChanged_Params Parms{};

	Parms.Evolution = Evolution;
	Parms.IsUpgrade = IsUpgrade;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.EvolutionsPanel.OnControllerDisconnectedModalDismissed
// (Final, Native, Protected)
// Parameters:

void UEvolutionsPanel::OnControllerDisconnectedModalDismissed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EvolutionsPanel", "OnControllerDisconnectedModalDismissed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.EvolutionsPanel.OnAgeTierWidgetDismissed
// (Final, Native, Protected)
// Parameters:

void UEvolutionsPanel::OnAgeTierWidgetDismissed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EvolutionsPanel", "OnAgeTierWidgetDismissed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.EvolutionsPanel.HandleUpgradeButton_Pressed
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerEvolution*         Evolution                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEvolutionsPanel::HandleUpgradeButton_Pressed(class UME_PlayerEvolution* Evolution)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EvolutionsPanel", "HandleUpgradeButton_Pressed");

	Params::UEvolutionsPanel_HandleUpgradeButton_Pressed_Params Parms{};

	Parms.Evolution = Evolution;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.EvolutionsPanel.HandleEvolutionListItem_Focused
// (Final, Native, Protected)
// Parameters:
// class UEvolutionIconButtonWidget*  IconWidget                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEvolutionSlot          SlotType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEvolutionsPanel::HandleEvolutionListItem_Focused(class UEvolutionIconButtonWidget* IconWidget, enum class EEvolutionSlot SlotType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EvolutionsPanel", "HandleEvolutionListItem_Focused");

	Params::UEvolutionsPanel_HandleEvolutionListItem_Focused_Params Parms{};

	Parms.IconWidget = IconWidget;
	Parms.SlotType = SlotType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.EvolutionsPanel.ConstructTooltip
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UME_PlayerEvolution*         Evolution                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEvolutionData              EvolutionData                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               HideCost                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               HideUpgrade                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEvolutionsPanel::ConstructTooltip(class UME_PlayerEvolution* Evolution, const struct FEvolutionData& EvolutionData, bool HideCost, bool HideUpgrade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EvolutionsPanel", "ConstructTooltip");

	Params::UEvolutionsPanel_ConstructTooltip_Params Parms{};

	Parms.Evolution = Evolution;
	Parms.EvolutionData = EvolutionData;
	Parms.HideCost = HideCost;
	Parms.HideUpgrade = HideUpgrade;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ManeaterUI.EvolutionsPanel.CantUseUntilGrottoPopup
// (Final, Native, Protected)
// Parameters:

void UEvolutionsPanel::CantUseUntilGrottoPopup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EvolutionsPanel", "CantUseUntilGrottoPopup");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.EvolutionUpgradeWidget
// (None)

class UClass* UEvolutionUpgradeWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EvolutionUpgradeWidget");

	return Clss;
}


// EvolutionUpgradeWidget ManeaterUI.Default__EvolutionUpgradeWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UEvolutionUpgradeWidget* UEvolutionUpgradeWidget::GetDefaultObj()
{
	static class UEvolutionUpgradeWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UEvolutionUpgradeWidget*>(UEvolutionUpgradeWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.EvolutionUpgradeWidget.OnUpgradeButton_Clicked
// (Final, Native, Protected)
// Parameters:
// struct FKey                        Button                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*          Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEvolutionUpgradeWidget::OnUpgradeButton_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EvolutionUpgradeWidget", "OnUpgradeButton_Clicked");

	Params::UEvolutionUpgradeWidget_OnUpgradeButton_Clicked_Params Parms{};

	Parms.Button = Button;
	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.EvolutionUpgradeWidget.OnCancelButton_Clicked
// (Final, Native, Protected)
// Parameters:
// struct FKey                        Button                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*          Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEvolutionUpgradeWidget::OnCancelButton_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EvolutionUpgradeWidget", "OnCancelButton_Clicked");

	Params::UEvolutionUpgradeWidget_OnCancelButton_Clicked_Params Parms{};

	Parms.Button = Button;
	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.EvolutionUpgradeWidget.ConstructTooltip
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UME_PlayerEvolution*         Evolution                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEvolutionData              EvolutionData                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FEvolutionData              UpgradedEvolutionData                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UEvolutionUpgradeWidget::ConstructTooltip(class UME_PlayerEvolution* Evolution, const struct FEvolutionData& EvolutionData, const struct FEvolutionData& UpgradedEvolutionData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EvolutionUpgradeWidget", "ConstructTooltip");

	Params::UEvolutionUpgradeWidget_ConstructTooltip_Params Parms{};

	Parms.Evolution = Evolution;
	Parms.EvolutionData = EvolutionData;
	Parms.UpgradedEvolutionData = UpgradedEvolutionData;

	UObject::ProcessEvent(Func, &Parms);

}


// Class ManeaterUI.ExplosiveIndicatorScreenSpaceWidget
// (None)

class UClass* UExplosiveIndicatorScreenSpaceWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExplosiveIndicatorScreenSpaceWidget");

	return Clss;
}


// ExplosiveIndicatorScreenSpaceWidget ManeaterUI.Default__ExplosiveIndicatorScreenSpaceWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UExplosiveIndicatorScreenSpaceWidget* UExplosiveIndicatorScreenSpaceWidget::GetDefaultObj()
{
	static class UExplosiveIndicatorScreenSpaceWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UExplosiveIndicatorScreenSpaceWidget*>(UExplosiveIndicatorScreenSpaceWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.ExplosiveIndicatorScreenSpaceWidget.OnViewControllerVisibilityChanged
// (Final, Native, Protected)
// Parameters:
// enum class ESlateVisibility        ControllerVisibility                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UExplosiveIndicatorScreenSpaceWidget::OnViewControllerVisibilityChanged(enum class ESlateVisibility ControllerVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExplosiveIndicatorScreenSpaceWidget", "OnViewControllerVisibilityChanged");

	Params::UExplosiveIndicatorScreenSpaceWidget_OnViewControllerVisibilityChanged_Params Parms{};

	Parms.ControllerVisibility = ControllerVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ExplosiveIndicatorScreenSpaceWidget.OnHUDVisiblityChanged
// (Final, Native, Protected)
// Parameters:
// bool                               bVisible                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UExplosiveIndicatorScreenSpaceWidget::OnHUDVisiblityChanged(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExplosiveIndicatorScreenSpaceWidget", "OnHUDVisiblityChanged");

	Params::UExplosiveIndicatorScreenSpaceWidget_OnHUDVisiblityChanged_Params Parms{};

	Parms.bVisible = bVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ExplosiveIndicatorScreenSpaceWidget.OnGamePauseStateChanged
// (Final, Native, Protected)
// Parameters:
// bool                               bPaused                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UExplosiveIndicatorScreenSpaceWidget::OnGamePauseStateChanged(bool bPaused)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExplosiveIndicatorScreenSpaceWidget", "OnGamePauseStateChanged");

	Params::UExplosiveIndicatorScreenSpaceWidget_OnGamePauseStateChanged_Params Parms{};

	Parms.bPaused = bPaused;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ExplosiveIndicatorScreenSpaceWidget.OnCinematicModeChanged
// (Final, Native, Protected)
// Parameters:
// bool                               bCinematicMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UExplosiveIndicatorScreenSpaceWidget::OnCinematicModeChanged(bool bCinematicMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExplosiveIndicatorScreenSpaceWidget", "OnCinematicModeChanged");

	Params::UExplosiveIndicatorScreenSpaceWidget_OnCinematicModeChanged_Params Parms{};

	Parms.bCinematicMode = bCinematicMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.FastTravelConfirmationWidget
// (None)

class UClass* UFastTravelConfirmationWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FastTravelConfirmationWidget");

	return Clss;
}


// FastTravelConfirmationWidget ManeaterUI.Default__FastTravelConfirmationWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFastTravelConfirmationWidget* UFastTravelConfirmationWidget::GetDefaultObj()
{
	static class UFastTravelConfirmationWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFastTravelConfirmationWidget*>(UFastTravelConfirmationWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.GameplaySettingsWidget
// (None)

class UClass* UGameplaySettingsWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplaySettingsWidget");

	return Clss;
}


// GameplaySettingsWidget ManeaterUI.Default__GameplaySettingsWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplaySettingsWidget* UGameplaySettingsWidget::GetDefaultObj()
{
	static class UGameplaySettingsWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplaySettingsWidget*>(UGameplaySettingsWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.GameplaySettingsWidget.OnVibrationChanged
// (Final, Native, Public)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplaySettingsWidget::OnVibrationChanged(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplaySettingsWidget", "OnVibrationChanged");

	Params::UGameplaySettingsWidget_OnVibrationChanged_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.GameplaySettingsWidget.OnTutorialPopupChanged
// (Final, Native, Public)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplaySettingsWidget::OnTutorialPopupChanged(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplaySettingsWidget", "OnTutorialPopupChanged");

	Params::UGameplaySettingsWidget_OnTutorialPopupChanged_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.GameplaySettingsWidget.OnSubtitlesChanged
// (Final, Native, Public)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplaySettingsWidget::OnSubtitlesChanged(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplaySettingsWidget", "OnSubtitlesChanged");

	Params::UGameplaySettingsWidget_OnSubtitlesChanged_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.GameplaySettingsWidget.OnSprintChanged
// (Final, Native, Public)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplaySettingsWidget::OnSprintChanged(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplaySettingsWidget", "OnSprintChanged");

	Params::UGameplaySettingsWidget_OnSprintChanged_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.GameplaySettingsWidget.OnRightStickSensitivityChanged
// (Final, Native, Public)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplaySettingsWidget::OnRightStickSensitivityChanged(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplaySettingsWidget", "OnRightStickSensitivityChanged");

	Params::UGameplaySettingsWidget_OnRightStickSensitivityChanged_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.GameplaySettingsWidget.OnRaytracingChanged
// (Final, Native, Public)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplaySettingsWidget::OnRaytracingChanged(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplaySettingsWidget", "OnRaytracingChanged");

	Params::UGameplaySettingsWidget_OnRaytracingChanged_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.GameplaySettingsWidget.OnMouseSensitivityChanged
// (Final, Native, Public)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplaySettingsWidget::OnMouseSensitivityChanged(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplaySettingsWidget", "OnMouseSensitivityChanged");

	Params::UGameplaySettingsWidget_OnMouseSensitivityChanged_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.GameplaySettingsWidget.OnInvertMouseYChanged
// (Final, Native, Public)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplaySettingsWidget::OnInvertMouseYChanged(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplaySettingsWidget", "OnInvertMouseYChanged");

	Params::UGameplaySettingsWidget_OnInvertMouseYChanged_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.GameplaySettingsWidget.OnInvertGamepadYChanged
// (Final, Native, Public)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplaySettingsWidget::OnInvertGamepadYChanged(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplaySettingsWidget", "OnInvertGamepadYChanged");

	Params::UGameplaySettingsWidget_OnInvertGamepadYChanged_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.GrottoMapMarkerWidget
// (None)

class UClass* UGrottoMapMarkerWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GrottoMapMarkerWidget");

	return Clss;
}


// GrottoMapMarkerWidget ManeaterUI.Default__GrottoMapMarkerWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UGrottoMapMarkerWidget* UGrottoMapMarkerWidget::GetDefaultObj()
{
	static class UGrottoMapMarkerWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UGrottoMapMarkerWidget*>(UGrottoMapMarkerWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.GrottoMapMarkerWidget.OnMarkerUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGrottoMapMarkerWidget::OnMarkerUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GrottoMapMarkerWidget", "OnMarkerUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ManeaterUI.GrottoMapMarkerWidget.FastTravel
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGrottoMapMarkerWidget::FastTravel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GrottoMapMarkerWidget", "FastTravel");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.HUDErrorMessageWidget
// (None)

class UClass* UHUDErrorMessageWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUDErrorMessageWidget");

	return Clss;
}


// HUDErrorMessageWidget ManeaterUI.Default__HUDErrorMessageWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UHUDErrorMessageWidget* UHUDErrorMessageWidget::GetDefaultObj()
{
	static class UHUDErrorMessageWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUDErrorMessageWidget*>(UHUDErrorMessageWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.HUDRewardQueueWidget
// (None)

class UClass* UHUDRewardQueueWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUDRewardQueueWidget");

	return Clss;
}


// HUDRewardQueueWidget ManeaterUI.Default__HUDRewardQueueWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UHUDRewardQueueWidget* UHUDRewardQueueWidget::GetDefaultObj()
{
	static class UHUDRewardQueueWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUDRewardQueueWidget*>(UHUDRewardQueueWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.HUDRewardQueueWidget.OnWidgetQueueDestruction
// (Final, Native, Public)
// Parameters:
// class UTwBaseWidget*               Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHUDRewardQueueWidget::OnWidgetQueueDestruction(class UTwBaseWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDRewardQueueWidget", "OnWidgetQueueDestruction");

	Params::UHUDRewardQueueWidget_OnWidgetQueueDestruction_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.HUDRewardQueueWidget.OnInventoryEvolutionChanged
// (Final, Native, Public)
// Parameters:
// class UME_PlayerEvolution*         Evolution                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsUpgrade                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHUDRewardQueueWidget::OnInventoryEvolutionChanged(class UME_PlayerEvolution* Evolution, bool IsUpgrade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDRewardQueueWidget", "OnInventoryEvolutionChanged");

	Params::UHUDRewardQueueWidget_OnInventoryEvolutionChanged_Params Parms{};

	Parms.Evolution = Evolution;
	Parms.IsUpgrade = IsUpgrade;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.HUDRewardWidget
// (None)

class UClass* UHUDRewardWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUDRewardWidget");

	return Clss;
}


// HUDRewardWidget ManeaterUI.Default__HUDRewardWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UHUDRewardWidget* UHUDRewardWidget::GetDefaultObj()
{
	static class UHUDRewardWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUDRewardWidget*>(UHUDRewardWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.HUDTipInfo
// (None)

class UClass* UHUDTipInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUDTipInfo");

	return Clss;
}


// HUDTipInfo ManeaterUI.Default__HUDTipInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UHUDTipInfo* UHUDTipInfo::GetDefaultObj()
{
	static class UHUDTipInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUDTipInfo*>(UHUDTipInfo::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.HUDTipInfo.Disable
// (Final, Native, Protected)
// Parameters:

void UHUDTipInfo::Disable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDTipInfo", "Disable");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.HunterButtonWidget
// (None)

class UClass* UHunterButtonWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HunterButtonWidget");

	return Clss;
}


// HunterButtonWidget ManeaterUI.Default__HunterButtonWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UHunterButtonWidget* UHunterButtonWidget::GetDefaultObj()
{
	static class UHunterButtonWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UHunterButtonWidget*>(UHunterButtonWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.HunterSupportIcon
// (None)

class UClass* UHunterSupportIcon::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HunterSupportIcon");

	return Clss;
}


// HunterSupportIcon ManeaterUI.Default__HunterSupportIcon
// (Public, ClassDefaultObject, ArchetypeObject)

class UHunterSupportIcon* UHunterSupportIcon::GetDefaultObj()
{
	static class UHunterSupportIcon* Default = nullptr;

	if (!Default)
		Default = static_cast<UHunterSupportIcon*>(UHunterSupportIcon::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.InfamyRankUpWidget
// (None)

class UClass* UInfamyRankUpWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InfamyRankUpWidget");

	return Clss;
}


// InfamyRankUpWidget ManeaterUI.Default__InfamyRankUpWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UInfamyRankUpWidget* UInfamyRankUpWidget::GetDefaultObj()
{
	static class UInfamyRankUpWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UInfamyRankUpWidget*>(UInfamyRankUpWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.InfamyRankUpWidget.OnAnimStart_BP
// (Event, Public, BlueprintEvent)
// Parameters:

void UInfamyRankUpWidget::OnAnimStart_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InfamyRankUpWidget", "OnAnimStart_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ManeaterUI.InfamyRankUpWidget.OnAnimEnd_BP
// (Event, Public, BlueprintEvent)
// Parameters:

void UInfamyRankUpWidget::OnAnimEnd_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InfamyRankUpWidget", "OnAnimEnd_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Class ManeaterUI.InfamyRewardWidget
// (None)

class UClass* UInfamyRewardWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InfamyRewardWidget");

	return Clss;
}


// InfamyRewardWidget ManeaterUI.Default__InfamyRewardWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UInfamyRewardWidget* UInfamyRewardWidget::GetDefaultObj()
{
	static class UInfamyRewardWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UInfamyRewardWidget*>(UInfamyRewardWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.InfamyTierIcon
// (None)

class UClass* UInfamyTierIcon::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InfamyTierIcon");

	return Clss;
}


// InfamyTierIcon ManeaterUI.Default__InfamyTierIcon
// (Public, ClassDefaultObject, ArchetypeObject)

class UInfamyTierIcon* UInfamyTierIcon::GetDefaultObj()
{
	static class UInfamyTierIcon* Default = nullptr;

	if (!Default)
		Default = static_cast<UInfamyTierIcon*>(UInfamyTierIcon::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.InGameMenuButton
// (None)

class UClass* UInGameMenuButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InGameMenuButton");

	return Clss;
}


// InGameMenuButton ManeaterUI.Default__InGameMenuButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UInGameMenuButton* UInGameMenuButton::GetDefaultObj()
{
	static class UInGameMenuButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UInGameMenuButton*>(UInGameMenuButton::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.InGameMenuController
// (None)

class UClass* UInGameMenuController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InGameMenuController");

	return Clss;
}


// InGameMenuController ManeaterUI.Default__InGameMenuController
// (Public, ClassDefaultObject, ArchetypeObject)

class UInGameMenuController* UInGameMenuController::GetDefaultObj()
{
	static class UInGameMenuController* Default = nullptr;

	if (!Default)
		Default = static_cast<UInGameMenuController*>(UInGameMenuController::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.InGameMenuView
// (None)

class UClass* UInGameMenuView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InGameMenuView");

	return Clss;
}


// InGameMenuView ManeaterUI.Default__InGameMenuView
// (Public, ClassDefaultObject, ArchetypeObject)

class UInGameMenuView* UInGameMenuView::GetDefaultObj()
{
	static class UInGameMenuView* Default = nullptr;

	if (!Default)
		Default = static_cast<UInGameMenuView*>(UInGameMenuView::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.InGameMenuView.OpenEvolutionPanel_BP
// (Event, Public, BlueprintEvent)
// Parameters:

void UInGameMenuView::OpenEvolutionPanel_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InGameMenuView", "OpenEvolutionPanel_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ManeaterUI.InGameMenuView.OnInputDeviceChanged
// (Final, Native, Protected)
// Parameters:
// enum class EUserInputDevice        Device                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInGameMenuView::OnInputDeviceChanged(enum class EUserInputDevice Device)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InGameMenuView", "OnInputDeviceChanged");

	Params::UInGameMenuView_OnInputDeviceChanged_Params Parms{};

	Parms.Device = Device;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.InvertedControlsWidget
// (None)

class UClass* UInvertedControlsWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InvertedControlsWidget");

	return Clss;
}


// InvertedControlsWidget ManeaterUI.Default__InvertedControlsWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UInvertedControlsWidget* UInvertedControlsWidget::GetDefaultObj()
{
	static class UInvertedControlsWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UInvertedControlsWidget*>(UInvertedControlsWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.InvertedControlsWidget.OnAnyButtonClicked
// (Final, Native, Protected)
// Parameters:
// struct FKey                        MouseButtonClicked                                               (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*          WidgetClicked                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInvertedControlsWidget::OnAnyButtonClicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* WidgetClicked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InvertedControlsWidget", "OnAnyButtonClicked");

	Params::UInvertedControlsWidget_OnAnyButtonClicked_Params Parms{};

	Parms.MouseButtonClicked = MouseButtonClicked;
	Parms.WidgetClicked = WidgetClicked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.KeyMappingMultiOptionModal
// (None)

class UClass* UKeyMappingMultiOptionModal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KeyMappingMultiOptionModal");

	return Clss;
}


// KeyMappingMultiOptionModal ManeaterUI.Default__KeyMappingMultiOptionModal
// (Public, ClassDefaultObject, ArchetypeObject)

class UKeyMappingMultiOptionModal* UKeyMappingMultiOptionModal::GetDefaultObj()
{
	static class UKeyMappingMultiOptionModal* Default = nullptr;

	if (!Default)
		Default = static_cast<UKeyMappingMultiOptionModal*>(UKeyMappingMultiOptionModal::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.KeyMappingSettingsWidget
// (None)

class UClass* UKeyMappingSettingsWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KeyMappingSettingsWidget");

	return Clss;
}


// KeyMappingSettingsWidget ManeaterUI.Default__KeyMappingSettingsWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UKeyMappingSettingsWidget* UKeyMappingSettingsWidget::GetDefaultObj()
{
	static class UKeyMappingSettingsWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UKeyMappingSettingsWidget*>(UKeyMappingSettingsWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.KeyMappingSettingsWidget.RedrawKeybinds
// (Final, Native, Public)
// Parameters:

void UKeyMappingSettingsWidget::RedrawKeybinds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyMappingSettingsWidget", "RedrawKeybinds");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.KeyMappingWidget
// (None)

class UClass* UKeyMappingWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KeyMappingWidget");

	return Clss;
}


// KeyMappingWidget ManeaterUI.Default__KeyMappingWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UKeyMappingWidget* UKeyMappingWidget::GetDefaultObj()
{
	static class UKeyMappingWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UKeyMappingWidget*>(UKeyMappingWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.LandmarkMapMarkerWidget
// (None)

class UClass* ULandmarkMapMarkerWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandmarkMapMarkerWidget");

	return Clss;
}


// LandmarkMapMarkerWidget ManeaterUI.Default__LandmarkMapMarkerWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandmarkMapMarkerWidget* ULandmarkMapMarkerWidget::GetDefaultObj()
{
	static class ULandmarkMapMarkerWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandmarkMapMarkerWidget*>(ULandmarkMapMarkerWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.LandmarkMapMarkerWidget.OnMarkerUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void ULandmarkMapMarkerWidget::OnMarkerUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandmarkMapMarkerWidget", "OnMarkerUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Class ManeaterUI.LevelProgressWidget
// (None)

class UClass* ULevelProgressWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelProgressWidget");

	return Clss;
}


// LevelProgressWidget ManeaterUI.Default__LevelProgressWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class ULevelProgressWidget* ULevelProgressWidget::GetDefaultObj()
{
	static class ULevelProgressWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelProgressWidget*>(ULevelProgressWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.LevelProgressWidget.UpdateProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ULevelProgressWidget::UpdateProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelProgressWidget", "UpdateProgress");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.LevelProgressWidget.OnTweenStep
// (Final, Native, Protected)
// Parameters:
// class UTwTweener*                  Tweener                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelProgressWidget::OnTweenStep(class UTwTweener* Tweener)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelProgressWidget", "OnTweenStep");

	Params::ULevelProgressWidget_OnTweenStep_Params Parms{};

	Parms.Tweener = Tweener;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.LevelProgressWidget.OnShark_LevelChanged
// (Final, Native, Protected)
// Parameters:
// int32                              NewLevel                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bChangeFromTheoretical                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelProgressWidget::OnShark_LevelChanged(int32 NewLevel, bool bChangeFromTheoretical)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelProgressWidget", "OnShark_LevelChanged");

	Params::ULevelProgressWidget_OnShark_LevelChanged_Params Parms{};

	Parms.NewLevel = NewLevel;
	Parms.bChangeFromTheoretical = bChangeFromTheoretical;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.LevelProgressWidget.OnShark_GrowthStageAvailable
// (Final, Native, Protected, HasOutParams)
// Parameters:
// enum class EPlayerGrowthStage      OldGrowthStage                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EPlayerGrowthStage      NewGrowthStage                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bReinitPose                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelProgressWidget::OnShark_GrowthStageAvailable(enum class EPlayerGrowthStage& OldGrowthStage, enum class EPlayerGrowthStage& NewGrowthStage, bool bReinitPose)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelProgressWidget", "OnShark_GrowthStageAvailable");

	Params::ULevelProgressWidget_OnShark_GrowthStageAvailable_Params Parms{};

	Parms.OldGrowthStage = OldGrowthStage;
	Parms.NewGrowthStage = NewGrowthStage;
	Parms.bReinitPose = bReinitPose;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.LevelProgressWidget.OnShark_GrowthLevelChanged
// (Final, Native, Protected, HasOutParams)
// Parameters:
// enum class EPlayerGrowthStage      OldGrowthStage                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EPlayerGrowthStage      NewGrowthStage                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bReinitPose                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelProgressWidget::OnShark_GrowthLevelChanged(enum class EPlayerGrowthStage& OldGrowthStage, enum class EPlayerGrowthStage& NewGrowthStage, bool bReinitPose)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelProgressWidget", "OnShark_GrowthLevelChanged");

	Params::ULevelProgressWidget_OnShark_GrowthLevelChanged_Params Parms{};

	Parms.OldGrowthStage = OldGrowthStage;
	Parms.NewGrowthStage = NewGrowthStage;
	Parms.bReinitPose = bReinitPose;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.LevelProgressWidget.OnShark_ExperienceGained
// (Final, Native, Protected)
// Parameters:
// int32                              ExperienceGained                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelProgressWidget::OnShark_ExperienceGained(int32 ExperienceGained)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelProgressWidget", "OnShark_ExperienceGained");

	Params::ULevelProgressWidget_OnShark_ExperienceGained_Params Parms{};

	Parms.ExperienceGained = ExperienceGained;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.LevelProgressWidget.OnOpacityTweenStep
// (Final, Native, Protected)
// Parameters:
// class UTwTweener*                  Tweener                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelProgressWidget::OnOpacityTweenStep(class UTwTweener* Tweener)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelProgressWidget", "OnOpacityTweenStep");

	Params::ULevelProgressWidget_OnOpacityTweenStep_Params Parms{};

	Parms.Tweener = Tweener;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.LevelProgressWidget.OnOpacityOutFinished
// (Final, Native, Protected)
// Parameters:
// class UTwTweener*                  Tweener                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelProgressWidget::OnOpacityOutFinished(class UTwTweener* Tweener)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelProgressWidget", "OnOpacityOutFinished");

	Params::ULevelProgressWidget_OnOpacityOutFinished_Params Parms{};

	Parms.Tweener = Tweener;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.LevelProgressWidget.OnOpacityInFinished
// (Final, Native, Protected)
// Parameters:
// class UTwTweener*                  Tweener                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelProgressWidget::OnOpacityInFinished(class UTwTweener* Tweener)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelProgressWidget", "OnOpacityInFinished");

	Params::ULevelProgressWidget_OnOpacityInFinished_Params Parms{};

	Parms.Tweener = Tweener;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.LevelProgressWidget.OnLifetimeEnded
// (Final, Native, Protected)
// Parameters:

void ULevelProgressWidget::OnLifetimeEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelProgressWidget", "OnLifetimeEnded");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.LoadGameButtonWidget
// (None)

class UClass* ULoadGameButtonWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoadGameButtonWidget");

	return Clss;
}


// LoadGameButtonWidget ManeaterUI.Default__LoadGameButtonWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class ULoadGameButtonWidget* ULoadGameButtonWidget::GetDefaultObj()
{
	static class ULoadGameButtonWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoadGameButtonWidget*>(ULoadGameButtonWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.LoadGameButtonWidget.SetProfileData
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FText                        SlotName                                                         (Parm, NativeAccessSpecifierPublic)
// struct FDateTime                   SaveTime                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        CurrentRegion                                                    (Parm, NativeAccessSpecifierPublic)
// class FText                        PlayerLevel                                                      (Parm, NativeAccessSpecifierPublic)
// class FText                        TimePlayed                                                       (Parm, NativeAccessSpecifierPublic)
// class UTexture2D*                  SaveImage                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULoadGameButtonWidget::SetProfileData(class FText SlotName, const struct FDateTime& SaveTime, class FText CurrentRegion, class FText PlayerLevel, class FText TimePlayed, class UTexture2D* SaveImage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadGameButtonWidget", "SetProfileData");

	Params::ULoadGameButtonWidget_SetProfileData_Params Parms{};

	Parms.SlotName = SlotName;
	Parms.SaveTime = SaveTime;
	Parms.CurrentRegion = CurrentRegion;
	Parms.PlayerLevel = PlayerLevel;
	Parms.TimePlayed = TimePlayed;
	Parms.SaveImage = SaveImage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.LoadGameButtonWidget.SetIsEmpty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Empty                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULoadGameButtonWidget::SetIsEmpty(bool Empty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadGameButtonWidget", "SetIsEmpty");

	Params::ULoadGameButtonWidget_SetIsEmpty_Params Parms{};

	Parms.Empty = Empty;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.LoadGameButtonWidget.LoadGame
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ULoadGameButtonWidget::LoadGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadGameButtonWidget", "LoadGame");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.MacroObjectiveMeterWidget
// (None)

class UClass* UMacroObjectiveMeterWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MacroObjectiveMeterWidget");

	return Clss;
}


// MacroObjectiveMeterWidget ManeaterUI.Default__MacroObjectiveMeterWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UMacroObjectiveMeterWidget* UMacroObjectiveMeterWidget::GetDefaultObj()
{
	static class UMacroObjectiveMeterWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UMacroObjectiveMeterWidget*>(UMacroObjectiveMeterWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.MacroObjectiveMeterWidget.UpdateMeters
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        RegionName                                                       (Parm, NativeAccessSpecifierPublic)
// class UTexture2D*                  RegionIcon                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsRegionPoisoned                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OldRegionPerc                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewRegionPerc                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OldGamePerc                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewGamePerc                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMacroObjectiveMeterWidget::UpdateMeters(class FText RegionName, class UTexture2D* RegionIcon, bool bIsRegionPoisoned, float OldRegionPerc, float NewRegionPerc, float OldGamePerc, float NewGamePerc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MacroObjectiveMeterWidget", "UpdateMeters");

	Params::UMacroObjectiveMeterWidget_UpdateMeters_Params Parms{};

	Parms.RegionName = RegionName;
	Parms.RegionIcon = RegionIcon;
	Parms.bIsRegionPoisoned = bIsRegionPoisoned;
	Parms.OldRegionPerc = OldRegionPerc;
	Parms.NewRegionPerc = NewRegionPerc;
	Parms.OldGamePerc = OldGamePerc;
	Parms.NewGamePerc = NewGamePerc;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.MacroObjectiveMeterWidget.PostCompleteDelay
// (Final, Native, Protected)
// Parameters:

void UMacroObjectiveMeterWidget::PostCompleteDelay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MacroObjectiveMeterWidget", "PostCompleteDelay");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.MacroObjectiveMeterWidget.OnRegionStepEvent
// (Final, Native, Protected)
// Parameters:
// class UTwTweener*                  Tweener                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMacroObjectiveMeterWidget::OnRegionStepEvent(class UTwTweener* Tweener)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MacroObjectiveMeterWidget", "OnRegionStepEvent");

	Params::UMacroObjectiveMeterWidget_OnRegionStepEvent_Params Parms{};

	Parms.Tweener = Tweener;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.MacroObjectiveMeterWidget.OnRegionCompleteEvent
// (Final, Native, Protected)
// Parameters:
// class UTwTweener*                  Tweener                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMacroObjectiveMeterWidget::OnRegionCompleteEvent(class UTwTweener* Tweener)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MacroObjectiveMeterWidget", "OnRegionCompleteEvent");

	Params::UMacroObjectiveMeterWidget_OnRegionCompleteEvent_Params Parms{};

	Parms.Tweener = Tweener;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.MacroObjectiveMeterWidget.OnOpacityFadeOutComplete
// (Final, Native, Protected)
// Parameters:
// class UTwTweener*                  Tweener                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMacroObjectiveMeterWidget::OnOpacityFadeOutComplete(class UTwTweener* Tweener)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MacroObjectiveMeterWidget", "OnOpacityFadeOutComplete");

	Params::UMacroObjectiveMeterWidget_OnOpacityFadeOutComplete_Params Parms{};

	Parms.Tweener = Tweener;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.MacroObjectiveMeterWidget.OnOpacityFadeInComplete
// (Final, Native, Protected)
// Parameters:
// class UTwTweener*                  Tweener                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMacroObjectiveMeterWidget::OnOpacityFadeInComplete(class UTwTweener* Tweener)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MacroObjectiveMeterWidget", "OnOpacityFadeInComplete");

	Params::UMacroObjectiveMeterWidget_OnOpacityFadeInComplete_Params Parms{};

	Parms.Tweener = Tweener;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.MacroObjectiveMeterWidget.OnGameStepEvent
// (Final, Native, Protected)
// Parameters:
// class UTwTweener*                  Tweener                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMacroObjectiveMeterWidget::OnGameStepEvent(class UTwTweener* Tweener)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MacroObjectiveMeterWidget", "OnGameStepEvent");

	Params::UMacroObjectiveMeterWidget_OnGameStepEvent_Params Parms{};

	Parms.Tweener = Tweener;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.ManeaterBaseHUD
// (Actor)

class UClass* AManeaterBaseHUD::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ManeaterBaseHUD");

	return Clss;
}


// ManeaterBaseHUD ManeaterUI.Default__ManeaterBaseHUD
// (Public, ClassDefaultObject, ArchetypeObject)

class AManeaterBaseHUD* AManeaterBaseHUD::GetDefaultObj()
{
	static class AManeaterBaseHUD* Default = nullptr;

	if (!Default)
		Default = static_cast<AManeaterBaseHUD*>(AManeaterBaseHUD::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.ManeaterBaseViewController
// (None)

class UClass* UManeaterBaseViewController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ManeaterBaseViewController");

	return Clss;
}


// ManeaterBaseViewController ManeaterUI.Default__ManeaterBaseViewController
// (Public, ClassDefaultObject, ArchetypeObject)

class UManeaterBaseViewController* UManeaterBaseViewController::GetDefaultObj()
{
	static class UManeaterBaseViewController* Default = nullptr;

	if (!Default)
		Default = static_cast<UManeaterBaseViewController*>(UManeaterBaseViewController::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.ManeaterBaseViewController.OnInputDeviceChanged
// (Final, Native, Protected)
// Parameters:
// enum class EUserInputDevice        Device                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManeaterBaseViewController::OnInputDeviceChanged(enum class EUserInputDevice Device)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterBaseViewController", "OnInputDeviceChanged");

	Params::UManeaterBaseViewController_OnInputDeviceChanged_Params Parms{};

	Parms.Device = Device;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.ManeaterCinematicView
// (None)

class UClass* UManeaterCinematicView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ManeaterCinematicView");

	return Clss;
}


// ManeaterCinematicView ManeaterUI.Default__ManeaterCinematicView
// (Public, ClassDefaultObject, ArchetypeObject)

class UManeaterCinematicView* UManeaterCinematicView::GetDefaultObj()
{
	static class UManeaterCinematicView* Default = nullptr;

	if (!Default)
		Default = static_cast<UManeaterCinematicView*>(UManeaterCinematicView::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.ManeaterCinematicView.StopCredits
// (Event, Public, BlueprintEvent)
// Parameters:

void UManeaterCinematicView::StopCredits()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterCinematicView", "StopCredits");



	UObject::ProcessEvent(Func, nullptr);

}


// Class ManeaterUI.ManeaterCinematicViewController
// (None)

class UClass* UManeaterCinematicViewController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ManeaterCinematicViewController");

	return Clss;
}


// ManeaterCinematicViewController ManeaterUI.Default__ManeaterCinematicViewController
// (Public, ClassDefaultObject, ArchetypeObject)

class UManeaterCinematicViewController* UManeaterCinematicViewController::GetDefaultObj()
{
	static class UManeaterCinematicViewController* Default = nullptr;

	if (!Default)
		Default = static_cast<UManeaterCinematicViewController*>(UManeaterCinematicViewController::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.ManeaterHUD
// (Actor)

class UClass* AManeaterHUD::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ManeaterHUD");

	return Clss;
}


// ManeaterHUD ManeaterUI.Default__ManeaterHUD
// (Public, ClassDefaultObject, ArchetypeObject)

class AManeaterHUD* AManeaterHUD::GetDefaultObj()
{
	static class AManeaterHUD* Default = nullptr;

	if (!Default)
		Default = static_cast<AManeaterHUD*>(AManeaterHUD::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.ManeaterHUD.TutorialPopupDismissed
// (Final, Native, Public)
// Parameters:

void AManeaterHUD::TutorialPopupDismissed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "TutorialPopupDismissed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.ToggleSpeedometer
// (Final, Exec, Native, Public)
// Parameters:

void AManeaterHUD::ToggleSpeedometer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "ToggleSpeedometer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.TimeTrialTick
// (Final, Native, Public)
// Parameters:
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AManeaterHUD::TimeTrialTick(float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "TimeTrialTick");

	Params::AManeaterHUD_TimeTrialTick_Params Parms{};

	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.TimeTrialProgress
// (Final, Native, Public)
// Parameters:
// int32                              RingProgress                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RingTotal                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AManeaterHUD::TimeTrialProgress(int32 RingProgress, int32 RingTotal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "TimeTrialProgress");

	Params::AManeaterHUD_TimeTrialProgress_Params Parms{};

	Parms.RingProgress = RingProgress;
	Parms.RingTotal = RingTotal;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.TimeTrialEnd
// (Final, Native, Public)
// Parameters:

void AManeaterHUD::TimeTrialEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "TimeTrialEnd");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.TimeTrialBegin
// (Final, Native, Public)
// Parameters:

void AManeaterHUD::TimeTrialBegin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "TimeTrialBegin");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.ThreatAdded
// (Final, Native, Protected)
// Parameters:

void AManeaterHUD::ThreatAdded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "ThreatAdded");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.StoryCompleteWidgetDismissed
// (Final, Native, Public)
// Parameters:

void AManeaterHUD::StoryCompleteWidgetDismissed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "StoryCompleteWidgetDismissed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.ShowTutorialSinglePopupWidget
// (Final, Native, Public)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PageCount                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AManeaterHUD::ShowTutorialSinglePopupWidget(int32 Index, int32 PageCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "ShowTutorialSinglePopupWidget");

	Params::AManeaterHUD_ShowTutorialSinglePopupWidget_Params Parms{};

	Parms.Index = Index;
	Parms.PageCount = PageCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.ShowStoryCompletePopup
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AManeaterHUD::ShowStoryCompletePopup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "ShowStoryCompletePopup");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.ShowRegionToast
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRegionToastData            Data                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AManeaterHUD::ShowRegionToast(struct FRegionToastData& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "ShowRegionToast");

	Params::AManeaterHUD_ShowRegionToast_Params Parms{};

	Parms.Data = Data;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.ShowInvertedControlsPopup
// (Final, Native, Public)
// Parameters:

void AManeaterHUD::ShowInvertedControlsPopup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "ShowInvertedControlsPopup");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.ShowDevSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AManeaterHUD::ShowDevSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "ShowDevSettings");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.ShowBasicTooltip
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        Header                                                           (Parm, NativeAccessSpecifierPublic)
// class FText                        Body                                                             (Parm, NativeAccessSpecifierPublic)
// class FText                        InputText                                                        (Parm, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AManeaterHUD::ShowBasicTooltip(class FText Header, class FText Body, class FText InputText, float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "ShowBasicTooltip");

	Params::AManeaterHUD_ShowBasicTooltip_Params Parms{};

	Parms.Header = Header;
	Parms.Body = Body;
	Parms.InputText = InputText;
	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.SetPlayerWaypoint
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector2D                   Pos                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AManeaterHUD::SetPlayerWaypoint(const struct FVector2D& Pos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "SetPlayerWaypoint");

	Params::AManeaterHUD_SetPlayerWaypoint_Params Parms{};

	Parms.Pos = Pos;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.SetDeathScreenEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AManeaterHUD::SetDeathScreenEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "SetDeathScreenEnabled");

	Params::AManeaterHUD_SetDeathScreenEnabled_Params Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.RemoveContextualControlPrompt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ControlName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AManeaterHUD::RemoveContextualControlPrompt(class FName ControlName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "RemoveContextualControlPrompt");

	Params::AManeaterHUD_RemoveContextualControlPrompt_Params Parms{};

	Parms.ControlName = ControlName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.PushDeathView
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AManeaterHUD::PushDeathView()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "PushDeathView");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.PushDeathScreen
// (Final, Native, Protected)
// Parameters:
// class AActor*                      DamageCauser                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AManeaterHUD::PushDeathScreen(class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "PushDeathScreen");

	Params::AManeaterHUD_PushDeathScreen_Params Parms{};

	Parms.DamageCauser = DamageCauser;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.PushCreditsScreen
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AManeaterHUD::PushCreditsScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "PushCreditsScreen");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.PushCinematicView
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AManeaterHUD::PushCinematicView()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "PushCinematicView");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.PopCinematicView
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AManeaterHUD::PopCinematicView()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "PopCinematicView");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.PlayerKnifingStateChanged
// (Final, Native, Protected)
// Parameters:
// bool                               bIsKnifing                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECharacterActionMode    ChangeContext                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AManeaterHUD::PlayerKnifingStateChanged(bool bIsKnifing, enum class ECharacterActionMode ChangeContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "PlayerKnifingStateChanged");

	Params::AManeaterHUD_PlayerKnifingStateChanged_Params Parms{};

	Parms.bIsKnifing = bIsKnifing;
	Parms.ChangeContext = ChangeContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.PlayerInfamyRankUp
// (Final, Native, Protected)
// Parameters:
// int32                              Rank                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AManeaterHUD::PlayerInfamyRankUp(int32 Rank)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "PlayerInfamyRankUp");

	Params::AManeaterHUD_PlayerInfamyRankUp_Params Parms{};

	Parms.Rank = Rank;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.PauseGame
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AManeaterHUD::PauseGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "PauseGame");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.OnZeroOutStats
// (Final, Native, Protected)
// Parameters:

void AManeaterHUD::OnZeroOutStats()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "OnZeroOutStats");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.OnTimeDilationEvent
// (Final, Native, Protected)
// Parameters:
// bool                               bStarted                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECharacterActionMode    ActionMode                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AManeaterHUD::OnTimeDilationEvent(bool bStarted, enum class ECharacterActionMode ActionMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "OnTimeDilationEvent");

	Params::AManeaterHUD_OnTimeDilationEvent_Params Parms{};

	Parms.bStarted = bStarted;
	Parms.ActionMode = ActionMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.OnThrashUIChanged
// (Final, Native, Protected)
// Parameters:
// bool                               bShow                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPlayerSharkThrashed                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AManeaterHUD::OnThrashUIChanged(bool bShow, bool bPlayerSharkThrashed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "OnThrashUIChanged");

	Params::AManeaterHUD_OnThrashUIChanged_Params Parms{};

	Parms.bShow = bShow;
	Parms.bPlayerSharkThrashed = bPlayerSharkThrashed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.OnStoryEventProgress
// (Final, Native, Protected)
// Parameters:
// int32                              CurrentStoryIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ConditionText                                                    (Parm, NativeAccessSpecifierPublic)
// float                              StoryProgress                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AManeaterHUD::OnStoryEventProgress(int32 CurrentStoryIndex, class FText ConditionText, float StoryProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "OnStoryEventProgress");

	Params::AManeaterHUD_OnStoryEventProgress_Params Parms{};

	Parms.CurrentStoryIndex = CurrentStoryIndex;
	Parms.ConditionText = ConditionText;
	Parms.StoryProgress = StoryProgress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.OnSonarUntarget
// (Final, Native, Protected)
// Parameters:
// class AActor*                      NewTarget                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AManeaterHUD::OnSonarUntarget(class AActor* NewTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "OnSonarUntarget");

	Params::AManeaterHUD_OnSonarUntarget_Params Parms{};

	Parms.NewTarget = NewTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.OnSonarTarget
// (Final, Native, Protected)
// Parameters:
// class AActor*                      NewTarget                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AManeaterHUD::OnSonarTarget(class AActor* NewTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "OnSonarTarget");

	Params::AManeaterHUD_OnSonarTarget_Params Parms{};

	Parms.NewTarget = NewTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.OnSonarRefreshTarget
// (Final, Native, Protected)
// Parameters:
// class AActor*                      NewTarget                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AManeaterHUD::OnSonarRefreshTarget(class AActor* NewTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "OnSonarRefreshTarget");

	Params::AManeaterHUD_OnSonarRefreshTarget_Params Parms{};

	Parms.NewTarget = NewTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.OnSonarAbilityActivated
// (Final, Native, Protected, HasOutParams)
// Parameters:
// float                              Duration                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AManeaterHUD::OnSonarAbilityActivated(float& Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "OnSonarAbilityActivated");

	Params::AManeaterHUD_OnSonarAbilityActivated_Params Parms{};

	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.OnPlayerTookDamage
// (Final, Native, Protected)
// Parameters:
// class AActor*                      DamagedActor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDamageType*                 DamageType                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*                 InstigatedBy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      DamageCauser                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AManeaterHUD::OnPlayerTookDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "OnPlayerTookDamage");

	Params::AManeaterHUD_OnPlayerTookDamage_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.OnPlayerThrash
// (Final, Native, Protected)
// Parameters:

void AManeaterHUD::OnPlayerThrash()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "OnPlayerThrash");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.OnPlayerStruggle
// (Final, Native, Protected)
// Parameters:

void AManeaterHUD::OnPlayerStruggle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "OnPlayerStruggle");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.OnPlayerRegionChanged
// (Final, Native, Protected)
// Parameters:
// enum class EWorldRegion            Region                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                  RegionIcon                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AManeaterHUD::OnPlayerRegionChanged(enum class EWorldRegion Region, class UTexture2D* RegionIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "OnPlayerRegionChanged");

	Params::AManeaterHUD_OnPlayerRegionChanged_Params Parms{};

	Parms.Region = Region;
	Parms.RegionIcon = RegionIcon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.OnPlayerNutrientGained
// (Final, Native, Protected)
// Parameters:
// enum class ENutrientType           NutrientType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NutrientGain                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFromObjective                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AManeaterHUD::OnPlayerNutrientGained(enum class ENutrientType NutrientType, int32 NutrientGain, bool bFromObjective)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "OnPlayerNutrientGained");

	Params::AManeaterHUD_OnPlayerNutrientGained_Params Parms{};

	Parms.NutrientType = NutrientType;
	Parms.NutrientGain = NutrientGain;
	Parms.bFromObjective = bFromObjective;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.OnPlayerMovementModeChanged
// (Final, Native, Protected)
// Parameters:
// class AME_PlayerSharkCharacter*    PlayerShark                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           OldMovementMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           NewMovementMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AManeaterHUD::OnPlayerMovementModeChanged(class AME_PlayerSharkCharacter* PlayerShark, enum class EMovementMode OldMovementMode, enum class EMovementMode NewMovementMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "OnPlayerMovementModeChanged");

	Params::AManeaterHUD_OnPlayerMovementModeChanged_Params Parms{};

	Parms.PlayerShark = PlayerShark;
	Parms.OldMovementMode = OldMovementMode;
	Parms.NewMovementMode = NewMovementMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.OnObjectiveUpdated
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerObjective*         PlayerObjective                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AManeaterHUD::OnObjectiveUpdated(class UME_PlayerObjective* PlayerObjective)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "OnObjectiveUpdated");

	Params::AManeaterHUD_OnObjectiveUpdated_Params Parms{};

	Parms.PlayerObjective = PlayerObjective;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.OnObjectiveTrack
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerObjective*         PlayerObjective                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldTrack                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNoTrackerUpdate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AManeaterHUD::OnObjectiveTrack(class UME_PlayerObjective* PlayerObjective, bool bShouldTrack, bool bNoTrackerUpdate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "OnObjectiveTrack");

	Params::AManeaterHUD_OnObjectiveTrack_Params Parms{};

	Parms.PlayerObjective = PlayerObjective;
	Parms.bShouldTrack = bShouldTrack;
	Parms.bNoTrackerUpdate = bNoTrackerUpdate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.OnObjectiveStateChanged
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerObjective*         Objective                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EObjectiveState         NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AManeaterHUD::OnObjectiveStateChanged(class UME_PlayerObjective* Objective, enum class EObjectiveState NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "OnObjectiveStateChanged");

	Params::AManeaterHUD_OnObjectiveStateChanged_Params Parms{};

	Parms.Objective = Objective;
	Parms.NewState = NewState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.OnObjectiveStarted
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerObjective*         PlayerObjective                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AManeaterHUD::OnObjectiveStarted(class UME_PlayerObjective* PlayerObjective)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "OnObjectiveStarted");

	Params::AManeaterHUD_OnObjectiveStarted_Params Parms{};

	Parms.PlayerObjective = PlayerObjective;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.OnObjectiveDiscovered
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerObjective*         PlayerObjective                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AManeaterHUD::OnObjectiveDiscovered(class UME_PlayerObjective* PlayerObjective)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "OnObjectiveDiscovered");

	Params::AManeaterHUD_OnObjectiveDiscovered_Params Parms{};

	Parms.PlayerObjective = PlayerObjective;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.OnObjectiveComplete
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerObjective*         PlayerObjective                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AManeaterHUD::OnObjectiveComplete(class UME_PlayerObjective* PlayerObjective)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "OnObjectiveComplete");

	Params::AManeaterHUD_OnObjectiveComplete_Params Parms{};

	Parms.PlayerObjective = PlayerObjective;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.OnNewSoftTarget
// (Final, Native, Protected)
// Parameters:
// class AActor*                      NewTarget                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AManeaterHUD::OnNewSoftTarget(class AActor* NewTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "OnNewSoftTarget");

	Params::AManeaterHUD_OnNewSoftTarget_Params Parms{};

	Parms.NewTarget = NewTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.OnNewRelevantTarget
// (Final, Native, Protected)
// Parameters:
// class AActor*                      NewTarget                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AManeaterHUD::OnNewRelevantTarget(class AActor* NewTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "OnNewRelevantTarget");

	Params::AManeaterHUD_OnNewRelevantTarget_Params Parms{};

	Parms.NewTarget = NewTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.OnNewQuestAvailableChanged
// (Final, Native, Protected)
// Parameters:

void AManeaterHUD::OnNewQuestAvailableChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "OnNewQuestAvailableChanged");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.OnLevelChanged
// (Final, Native, Protected)
// Parameters:
// int32                              GrowthLevel                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bChangeFromTheoretical                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AManeaterHUD::OnLevelChanged(int32 GrowthLevel, bool bChangeFromTheoretical)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "OnLevelChanged");

	Params::AManeaterHUD_OnLevelChanged_Params Parms{};

	Parms.GrowthLevel = GrowthLevel;
	Parms.bChangeFromTheoretical = bChangeFromTheoretical;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.OnLandmarkObjectFound
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerObjective*         PlayerObjective                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        LandmarkDescription                                              (Parm, NativeAccessSpecifierPublic)

void AManeaterHUD::OnLandmarkObjectFound(class UME_PlayerObjective* PlayerObjective, class FText LandmarkDescription)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "OnLandmarkObjectFound");

	Params::AManeaterHUD_OnLandmarkObjectFound_Params Parms{};

	Parms.PlayerObjective = PlayerObjective;
	Parms.LandmarkDescription = LandmarkDescription;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.OnHudTipRequested
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FME_TutorialTipEvent        ME_TutorialEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AManeaterHUD::OnHudTipRequested(struct FME_TutorialTipEvent& ME_TutorialEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "OnHudTipRequested");

	Params::AManeaterHUD_OnHudTipRequested_Params Parms{};

	Parms.ME_TutorialEvent = ME_TutorialEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.OnHUDErrorMessage
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class FText                        ErrorMessage                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AManeaterHUD::OnHUDErrorMessage(class FText& ErrorMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "OnHUDErrorMessage");

	Params::AManeaterHUD_OnHUDErrorMessage_Params Parms{};

	Parms.ErrorMessage = ErrorMessage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.OnGameplayTagRemoved
// (Final, Native, Protected)
// Parameters:
// struct FGameplayTagContainer       TagsRemoved                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)

void AManeaterHUD::OnGameplayTagRemoved(const struct FGameplayTagContainer& TagsRemoved)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "OnGameplayTagRemoved");

	Params::AManeaterHUD_OnGameplayTagRemoved_Params Parms{};

	Parms.TagsRemoved = TagsRemoved;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.OnGameplayTagAdded
// (Final, Native, Protected)
// Parameters:
// struct FGameplayTagContainer       TagsAdded                                                        (ConstParm, Parm, NativeAccessSpecifierPublic)
// float                              TagDuration                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AManeaterHUD::OnGameplayTagAdded(const struct FGameplayTagContainer& TagsAdded, float TagDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "OnGameplayTagAdded");

	Params::AManeaterHUD_OnGameplayTagAdded_Params Parms{};

	Parms.TagsAdded = TagsAdded;
	Parms.TagDuration = TagDuration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.OnEvolutionAbilityActivated
// (Final, Native, Protected, HasOutParams)
// Parameters:
// float                              Duration                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AManeaterHUD::OnEvolutionAbilityActivated(float& Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "OnEvolutionAbilityActivated");

	Params::AManeaterHUD_OnEvolutionAbilityActivated_Params Parms{};

	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.OnDangerSenseUpdated
// (Final, Native, Protected)
// Parameters:
// class AActor*                      DangerousActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bActive                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AManeaterHUD::OnDangerSenseUpdated(class AActor* DangerousActor, bool bActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "OnDangerSenseUpdated");

	Params::AManeaterHUD_OnDangerSenseUpdated_Params Parms{};

	Parms.DangerousActor = DangerousActor;
	Parms.bActive = bActive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.OnCharacterAttributesChanged
// (Final, Native, Protected)
// Parameters:

void AManeaterHUD::OnCharacterAttributesChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "OnCharacterAttributesChanged");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.OnBountyPlacedOnHold
// (Final, Native, Protected)
// Parameters:

void AManeaterHUD::OnBountyPlacedOnHold()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "OnBountyPlacedOnHold");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.OnBountyBossSpawned
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FBountyViewData             BountyData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AManeaterHUD::OnBountyBossSpawned(struct FBountyViewData& BountyData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "OnBountyBossSpawned");

	Params::AManeaterHUD_OnBountyBossSpawned_Params Parms{};

	Parms.BountyData = BountyData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.OnBossFightAvailable
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerObjectiveBoss*     BossObjective                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AManeaterHUD::OnBossFightAvailable(class UME_PlayerObjectiveBoss* BossObjective)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "OnBossFightAvailable");

	Params::AManeaterHUD_OnBossFightAvailable_Params Parms{};

	Parms.BossObjective = BossObjective;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.OnAICombatStatusChanged
// (Final, Native, Protected)
// Parameters:
// bool                               bInCombat                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AME_AIController*            AIActor                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AManeaterHUD::OnAICombatStatusChanged(bool bInCombat, class AME_AIController* AIActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "OnAICombatStatusChanged");

	Params::AManeaterHUD_OnAICombatStatusChanged_Params Parms{};

	Parms.bInCombat = bInCombat;
	Parms.AIActor = AIActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.OnAdvancedToNextEpisode
// (Final, Native, Protected)
// Parameters:
// int32                              CurrentStoryEventIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CurrentEpisodeNumber                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AManeaterHUD::OnAdvancedToNextEpisode(int32 CurrentStoryEventIndex, int32 CurrentEpisodeNumber)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "OnAdvancedToNextEpisode");

	Params::AManeaterHUD_OnAdvancedToNextEpisode_Params Parms{};

	Parms.CurrentStoryEventIndex = CurrentStoryEventIndex;
	Parms.CurrentEpisodeNumber = CurrentEpisodeNumber;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.OnAbilityTriggered
// (Final, Native, Protected)
// Parameters:
// enum class EME_CharacterAbility    CharacterAbilityEnum                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                AbilityTag                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AManeaterHUD::OnAbilityTriggered(enum class EME_CharacterAbility CharacterAbilityEnum, const struct FGameplayTag& AbilityTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "OnAbilityTriggered");

	Params::AManeaterHUD_OnAbilityTriggered_Params Parms{};

	Parms.CharacterAbilityEnum = CharacterAbilityEnum;
	Parms.AbilityTag = AbilityTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.InvertedControlsPopupDismissed
// (Final, Native, Public)
// Parameters:

void AManeaterHUD::InvertedControlsPopupDismissed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "InvertedControlsPopupDismissed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.GetTutorialModal
// (Final, Native, Public)
// Parameters:
// class UTwBaseWidget*               ReturnValue                                                      (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTwBaseWidget* AManeaterHUD::GetTutorialModal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "GetTutorialModal");

	Params::AManeaterHUD_GetTutorialModal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ManeaterUI.ManeaterHUD.GetHUDViewController
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UManeaterHUDViewController*  ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UManeaterHUDViewController* AManeaterHUD::GetHUDViewController()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "GetHUDViewController");

	Params::AManeaterHUD_GetHUDViewController_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ManeaterUI.ManeaterHUD.EnableCinematicMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AManeaterHUD::EnableCinematicMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "EnableCinematicMode");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.DisableCinematicMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AManeaterHUD::DisableCinematicMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "DisableCinematicMode");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.ClearPlayerWaypoint
// (Final, Native, Public)
// Parameters:

void AManeaterHUD::ClearPlayerWaypoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "ClearPlayerWaypoint");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.BountyEnding
// (Final, Native, Protected)
// Parameters:

void AManeaterHUD::BountyEnding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "BountyEnding");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.BountyBeginning
// (Final, Native, Protected)
// Parameters:

void AManeaterHUD::BountyBeginning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "BountyBeginning");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUD.AddContextualControlPrompt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ControlName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ButtonText                                                       (Parm, NativeAccessSpecifierPublic)
// class FName                        InputActionName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AManeaterHUD::AddContextualControlPrompt(class FName ControlName, class FText ButtonText, class FName InputActionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUD", "AddContextualControlPrompt");

	Params::AManeaterHUD_AddContextualControlPrompt_Params Parms{};

	Parms.ControlName = ControlName;
	Parms.ButtonText = ButtonText;
	Parms.InputActionName = InputActionName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.ManeaterHUDPauseMenuView
// (None)

class UClass* UManeaterHUDPauseMenuView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ManeaterHUDPauseMenuView");

	return Clss;
}


// ManeaterHUDPauseMenuView ManeaterUI.Default__ManeaterHUDPauseMenuView
// (Public, ClassDefaultObject, ArchetypeObject)

class UManeaterHUDPauseMenuView* UManeaterHUDPauseMenuView::GetDefaultObj()
{
	static class UManeaterHUDPauseMenuView* Default = nullptr;

	if (!Default)
		Default = static_cast<UManeaterHUDPauseMenuView*>(UManeaterHUDPauseMenuView::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.ManeaterHUDPauseMenuView.OnQuit_Clicked
// (Final, Native, Protected)
// Parameters:
// struct FKey                        Button                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*          Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManeaterHUDPauseMenuView::OnQuit_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUDPauseMenuView", "OnQuit_Clicked");

	Params::UManeaterHUDPauseMenuView_OnQuit_Clicked_Params Parms{};

	Parms.Button = Button;
	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUDPauseMenuView.OnButtonMouseOver
// (Final, Native, Protected)
// Parameters:
// class UTwBaseButton*               MouseOverWidget                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManeaterHUDPauseMenuView::OnButtonMouseOver(class UTwBaseButton* MouseOverWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUDPauseMenuView", "OnButtonMouseOver");

	Params::UManeaterHUDPauseMenuView_OnButtonMouseOver_Params Parms{};

	Parms.MouseOverWidget = MouseOverWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUDPauseMenuView.OnButtonGainFoucus
// (Final, Native, Protected)
// Parameters:
// class UTwClickableWidget*          OnWidgetFocused                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManeaterHUDPauseMenuView::OnButtonGainFoucus(class UTwClickableWidget* OnWidgetFocused)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUDPauseMenuView", "OnButtonGainFoucus");

	Params::UManeaterHUDPauseMenuView_OnButtonGainFoucus_Params Parms{};

	Parms.OnWidgetFocused = OnWidgetFocused;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.ManeaterHUDView
// (None)

class UClass* UManeaterHUDView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ManeaterHUDView");

	return Clss;
}


// ManeaterHUDView ManeaterUI.Default__ManeaterHUDView
// (Public, ClassDefaultObject, ArchetypeObject)

class UManeaterHUDView* UManeaterHUDView::GetDefaultObj()
{
	static class UManeaterHUDView* Default = nullptr;

	if (!Default)
		Default = static_cast<UManeaterHUDView*>(UManeaterHUDView::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.ManeaterHUDView.TutorialSinglePopupDismissed
// (Final, Native, Public)
// Parameters:

void UManeaterHUDView::TutorialSinglePopupDismissed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUDView", "TutorialSinglePopupDismissed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUDView.StoryCompleteWidgetDismissed
// (Final, Native, Public)
// Parameters:

void UManeaterHUDView::StoryCompleteWidgetDismissed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUDView", "StoryCompleteWidgetDismissed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUDView.ShowTutorialSinglePopupWidget
// (Final, Native, Public)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PageCount                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwBaseWidget*               ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTwBaseWidget* UManeaterHUDView::ShowTutorialSinglePopupWidget(int32 Index, int32 PageCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUDView", "ShowTutorialSinglePopupWidget");

	Params::UManeaterHUDView_ShowTutorialSinglePopupWidget_Params Parms{};

	Parms.Index = Index;
	Parms.PageCount = PageCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ManeaterUI.ManeaterHUDView.ShowStoryCompleteWidget
// (Final, Native, Public)
// Parameters:
// class UStoryCompleteWidget*        ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UStoryCompleteWidget* UManeaterHUDView::ShowStoryCompleteWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUDView", "ShowStoryCompleteWidget");

	Params::UManeaterHUDView_ShowStoryCompleteWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ManeaterUI.ManeaterHUDView.ShowSavingIcon
// (Final, Native, Public)
// Parameters:

void UManeaterHUDView::ShowSavingIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUDView", "ShowSavingIcon");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUDView.ShowInvertedControlsWidget
// (Final, Native, Public)
// Parameters:
// class UInvertedControlsWidget*     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UInvertedControlsWidget* UManeaterHUDView::ShowInvertedControlsWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUDView", "ShowInvertedControlsWidget");

	Params::UManeaterHUDView_ShowInvertedControlsWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ManeaterUI.ManeaterHUDView.InvertedControlsPopupDismissed
// (Final, Native, Public)
// Parameters:

void UManeaterHUDView::InvertedControlsPopupDismissed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUDView", "InvertedControlsPopupDismissed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterHUDView.HideSavingIcon
// (Final, Native, Private)
// Parameters:

void UManeaterHUDView::HideSavingIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterHUDView", "HideSavingIcon");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.ManeaterHUDViewController
// (None)

class UClass* UManeaterHUDViewController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ManeaterHUDViewController");

	return Clss;
}


// ManeaterHUDViewController ManeaterUI.Default__ManeaterHUDViewController
// (Public, ClassDefaultObject, ArchetypeObject)

class UManeaterHUDViewController* UManeaterHUDViewController::GetDefaultObj()
{
	static class UManeaterHUDViewController* Default = nullptr;

	if (!Default)
		Default = static_cast<UManeaterHUDViewController*>(UManeaterHUDViewController::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.ManeaterMapPanel
// (None)

class UClass* UManeaterMapPanel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ManeaterMapPanel");

	return Clss;
}


// ManeaterMapPanel ManeaterUI.Default__ManeaterMapPanel
// (Public, ClassDefaultObject, ArchetypeObject)

class UManeaterMapPanel* UManeaterMapPanel::GetDefaultObj()
{
	static class UManeaterMapPanel* Default = nullptr;

	if (!Default)
		Default = static_cast<UManeaterMapPanel*>(UManeaterMapPanel::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.ManeaterMapPanel.OnTutorialPopupWidgetDismissed
// (Final, Native, Protected)
// Parameters:

void UManeaterMapPanel::OnTutorialPopupWidgetDismissed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterMapPanel", "OnTutorialPopupWidgetDismissed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterMapPanel.OnRegionDataLoaded
// (Final, Native, Protected)
// Parameters:

void UManeaterMapPanel::OnRegionDataLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterMapPanel", "OnRegionDataLoaded");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterMapPanel.OnObjectiveTrack
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerObjective*         PlayerObjective                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldTrack                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNoTrackerUpdate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManeaterMapPanel::OnObjectiveTrack(class UME_PlayerObjective* PlayerObjective, bool bShouldTrack, bool bNoTrackerUpdate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterMapPanel", "OnObjectiveTrack");

	Params::UManeaterMapPanel_OnObjectiveTrack_Params Parms{};

	Parms.PlayerObjective = PlayerObjective;
	Parms.bShouldTrack = bShouldTrack;
	Parms.bNoTrackerUpdate = bNoTrackerUpdate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterMapPanel.OnNewPlayerWaypointSet
// (Final, Native, Protected, HasDefaults)
// Parameters:
// struct FVector2D                   Pos                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManeaterMapPanel::OnNewPlayerWaypointSet(const struct FVector2D& Pos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterMapPanel", "OnNewPlayerWaypointSet");

	Params::UManeaterMapPanel_OnNewPlayerWaypointSet_Params Parms{};

	Parms.Pos = Pos;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterMapPanel.OnControllerDisconnectedModalDismissed
// (Final, Native, Protected)
// Parameters:

void UManeaterMapPanel::OnControllerDisconnectedModalDismissed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterMapPanel", "OnControllerDisconnectedModalDismissed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.ManeaterModalViewController
// (None)

class UClass* UManeaterModalViewController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ManeaterModalViewController");

	return Clss;
}


// ManeaterModalViewController ManeaterUI.Default__ManeaterModalViewController
// (Public, ClassDefaultObject, ArchetypeObject)

class UManeaterModalViewController* UManeaterModalViewController::GetDefaultObj()
{
	static class UManeaterModalViewController* Default = nullptr;

	if (!Default)
		Default = static_cast<UManeaterModalViewController*>(UManeaterModalViewController::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.ManeaterSaveTransferView
// (None)

class UClass* UManeaterSaveTransferView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ManeaterSaveTransferView");

	return Clss;
}


// ManeaterSaveTransferView ManeaterUI.Default__ManeaterSaveTransferView
// (Public, ClassDefaultObject, ArchetypeObject)

class UManeaterSaveTransferView* UManeaterSaveTransferView::GetDefaultObj()
{
	static class UManeaterSaveTransferView* Default = nullptr;

	if (!Default)
		Default = static_cast<UManeaterSaveTransferView*>(UManeaterSaveTransferView::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.ManeaterSaveTransferView.SetUpEvents
// (Event, Public, BlueprintEvent)
// Parameters:
// class UManeaterTitleMenuView*      View                                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManeaterSaveTransferView::SetUpEvents(class UManeaterTitleMenuView* View)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterSaveTransferView", "SetUpEvents");

	Params::UManeaterSaveTransferView_SetUpEvents_Params Parms{};

	Parms.View = View;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ManeaterUI.ManeaterSaveTransferView.SaveDataMounted
// (Final, Native, Public)
// Parameters:
// TArray<uint8>                      SaveDataSlot0                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      SaveDataSlot1                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      SaveDataSlot2                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManeaterSaveTransferView::SaveDataMounted(const TArray<uint8>& SaveDataSlot0, const TArray<uint8>& SaveDataSlot1, const TArray<uint8>& SaveDataSlot2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterSaveTransferView", "SaveDataMounted");

	Params::UManeaterSaveTransferView_SaveDataMounted_Params Parms{};

	Parms.SaveDataSlot0 = SaveDataSlot0;
	Parms.SaveDataSlot1 = SaveDataSlot1;
	Parms.SaveDataSlot2 = SaveDataSlot2;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterSaveTransferView.OnContinue_Clicked
// (Final, Native, Public)
// Parameters:
// struct FKey                        Button                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*          Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManeaterSaveTransferView::OnContinue_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterSaveTransferView", "OnContinue_Clicked");

	Params::UManeaterSaveTransferView_OnContinue_Clicked_Params Parms{};

	Parms.Button = Button;
	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterSaveTransferView.OnCancel_Clicked
// (Final, Native, Public)
// Parameters:
// struct FKey                        Button                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*          Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManeaterSaveTransferView::OnCancel_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterSaveTransferView", "OnCancel_Clicked");

	Params::UManeaterSaveTransferView_OnCancel_Clicked_Params Parms{};

	Parms.Button = Button;
	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.ManeaterSettingsMenuView
// (None)

class UClass* UManeaterSettingsMenuView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ManeaterSettingsMenuView");

	return Clss;
}


// ManeaterSettingsMenuView ManeaterUI.Default__ManeaterSettingsMenuView
// (Public, ClassDefaultObject, ArchetypeObject)

class UManeaterSettingsMenuView* UManeaterSettingsMenuView::GetDefaultObj()
{
	static class UManeaterSettingsMenuView* Default = nullptr;

	if (!Default)
		Default = static_cast<UManeaterSettingsMenuView*>(UManeaterSettingsMenuView::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.ManeaterSettingsMenuView.ShowSavingIcon
// (Final, Native, Public)
// Parameters:

void UManeaterSettingsMenuView::ShowSavingIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterSettingsMenuView", "ShowSavingIcon");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterSettingsMenuView.HideSavingIcon
// (Final, Native, Public)
// Parameters:

void UManeaterSettingsMenuView::HideSavingIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterSettingsMenuView", "HideSavingIcon");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.ManeaterTitleMenuHUD
// (Actor)

class UClass* AManeaterTitleMenuHUD::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ManeaterTitleMenuHUD");

	return Clss;
}


// ManeaterTitleMenuHUD ManeaterUI.Default__ManeaterTitleMenuHUD
// (Public, ClassDefaultObject, ArchetypeObject)

class AManeaterTitleMenuHUD* AManeaterTitleMenuHUD::GetDefaultObj()
{
	static class AManeaterTitleMenuHUD* Default = nullptr;

	if (!Default)
		Default = static_cast<AManeaterTitleMenuHUD*>(AManeaterTitleMenuHUD::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.ManeaterTitleMenuView
// (None)

class UClass* UManeaterTitleMenuView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ManeaterTitleMenuView");

	return Clss;
}


// ManeaterTitleMenuView ManeaterUI.Default__ManeaterTitleMenuView
// (Public, ClassDefaultObject, ArchetypeObject)

class UManeaterTitleMenuView* UManeaterTitleMenuView::GetDefaultObj()
{
	static class UManeaterTitleMenuView* Default = nullptr;

	if (!Default)
		Default = static_cast<UManeaterTitleMenuView*>(UManeaterTitleMenuView::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.ManeaterTitleMenuView.ShowSavingIcon
// (Final, Native, Public)
// Parameters:

void UManeaterTitleMenuView::ShowSavingIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterTitleMenuView", "ShowSavingIcon");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterTitleMenuView.RecacheSaveGames
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UManeaterTitleMenuView::RecacheSaveGames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterTitleMenuView", "RecacheSaveGames");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterTitleMenuView.PeekSaveGameDLC01
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SlotIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMED_SaveData_DLC01*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMED_SaveData_DLC01* UManeaterTitleMenuView::PeekSaveGameDLC01(int32 SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterTitleMenuView", "PeekSaveGameDLC01");

	Params::UManeaterTitleMenuView_PeekSaveGameDLC01_Params Parms{};

	Parms.SlotIndex = SlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ManeaterUI.ManeaterTitleMenuView.PeekSaveGame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SlotIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UME_SaveGameObject*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UME_SaveGameObject* UManeaterTitleMenuView::PeekSaveGame(int32 SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterTitleMenuView", "PeekSaveGame");

	Params::UManeaterTitleMenuView_PeekSaveGame_Params Parms{};

	Parms.SlotIndex = SlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ManeaterUI.ManeaterTitleMenuView.OnSettings_MouseEnter
// (Final, Native, Public)
// Parameters:
// class UTwBaseButton*               Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManeaterTitleMenuView::OnSettings_MouseEnter(class UTwBaseButton* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterTitleMenuView", "OnSettings_MouseEnter");

	Params::UManeaterTitleMenuView_OnSettings_MouseEnter_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterTitleMenuView.OnSettings_Clicked
// (Final, Native, Public)
// Parameters:
// struct FKey                        Button                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*          Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManeaterTitleMenuView::OnSettings_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterTitleMenuView", "OnSettings_Clicked");

	Params::UManeaterTitleMenuView_OnSettings_Clicked_Params Parms{};

	Parms.Button = Button;
	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterTitleMenuView.OnPlayGame_Focused
// (Final, Native, Public)
// Parameters:
// class UTwClickableWidget*          Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManeaterTitleMenuView::OnPlayGame_Focused(class UTwClickableWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterTitleMenuView", "OnPlayGame_Focused");

	Params::UManeaterTitleMenuView_OnPlayGame_Focused_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterTitleMenuView.OnPlayGame_Clicked
// (Final, Native, Public)
// Parameters:
// struct FKey                        Button                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*          Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManeaterTitleMenuView::OnPlayGame_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterTitleMenuView", "OnPlayGame_Clicked");

	Params::UManeaterTitleMenuView_OnPlayGame_Clicked_Params Parms{};

	Parms.Button = Button;
	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterTitleMenuView.OnMenuButton_FocusLost
// (Final, Native, Public)
// Parameters:
// class UTwClickableWidget*          Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManeaterTitleMenuView::OnMenuButton_FocusLost(class UTwClickableWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterTitleMenuView", "OnMenuButton_FocusLost");

	Params::UManeaterTitleMenuView_OnMenuButton_FocusLost_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterTitleMenuView.OnInputDeviceChanged
// (Final, Native, Protected)
// Parameters:
// enum class EUserInputDevice        Device                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManeaterTitleMenuView::OnInputDeviceChanged(enum class EUserInputDevice Device)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterTitleMenuView", "OnInputDeviceChanged");

	Params::UManeaterTitleMenuView_OnInputDeviceChanged_Params Parms{};

	Parms.Device = Device;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterTitleMenuView.OnExit_MouseEnter
// (Final, Native, Public)
// Parameters:
// class UTwBaseButton*               Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManeaterTitleMenuView::OnExit_MouseEnter(class UTwBaseButton* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterTitleMenuView", "OnExit_MouseEnter");

	Params::UManeaterTitleMenuView_OnExit_MouseEnter_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterTitleMenuView.OnExit_Clicked
// (Final, Native, Public)
// Parameters:
// struct FKey                        Button                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*          Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManeaterTitleMenuView::OnExit_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterTitleMenuView", "OnExit_Clicked");

	Params::UManeaterTitleMenuView_OnExit_Clicked_Params Parms{};

	Parms.Button = Button;
	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterTitleMenuView.OnDLCStatusChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsDLCOwned                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManeaterTitleMenuView::OnDLCStatusChanged(bool bIsDLCOwned)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterTitleMenuView", "OnDLCStatusChanged");

	Params::UManeaterTitleMenuView_OnDLCStatusChanged_Params Parms{};

	Parms.bIsDLCOwned = bIsDLCOwned;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ManeaterUI.ManeaterTitleMenuView.OnDLCButton_Clicked
// (Final, Native, Protected)
// Parameters:
// struct FKey                        Button                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*          Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManeaterTitleMenuView::OnDLCButton_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterTitleMenuView", "OnDLCButton_Clicked");

	Params::UManeaterTitleMenuView_OnDLCButton_Clicked_Params Parms{};

	Parms.Button = Button;
	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterTitleMenuView.OnContinueGame_Focused
// (Final, Native, Public)
// Parameters:
// class UTwClickableWidget*          Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManeaterTitleMenuView::OnContinueGame_Focused(class UTwClickableWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterTitleMenuView", "OnContinueGame_Focused");

	Params::UManeaterTitleMenuView_OnContinueGame_Focused_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterTitleMenuView.OnContinueGame_Clicked
// (Final, Native, Public)
// Parameters:
// struct FKey                        Button                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*          Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManeaterTitleMenuView::OnContinueGame_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterTitleMenuView", "OnContinueGame_Clicked");

	Params::UManeaterTitleMenuView_OnContinueGame_Clicked_Params Parms{};

	Parms.Button = Button;
	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterTitleMenuView.OnContinueButton_MouseLeave
// (Final, Native, Public)
// Parameters:
// class UTwBaseButton*               Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManeaterTitleMenuView::OnContinueButton_MouseLeave(class UTwBaseButton* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterTitleMenuView", "OnContinueButton_MouseLeave");

	Params::UManeaterTitleMenuView_OnContinueButton_MouseLeave_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterTitleMenuView.OnContinueButton_MouseEnter
// (Final, Native, Public)
// Parameters:
// class UTwBaseButton*               Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManeaterTitleMenuView::OnContinueButton_MouseEnter(class UTwBaseButton* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterTitleMenuView", "OnContinueButton_MouseEnter");

	Params::UManeaterTitleMenuView_OnContinueButton_MouseEnter_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterTitleMenuView.OnBackButton_Clicked
// (Final, Native, Protected)
// Parameters:
// struct FKey                        Button                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*          Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManeaterTitleMenuView::OnBackButton_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterTitleMenuView", "OnBackButton_Clicked");

	Params::UManeaterTitleMenuView_OnBackButton_Clicked_Params Parms{};

	Parms.Button = Button;
	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterTitleMenuView.HideSavingIcon
// (Final, Native, Public)
// Parameters:

void UManeaterTitleMenuView::HideSavingIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterTitleMenuView", "HideSavingIcon");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterTitleMenuView.HandleDLCEntitlementInitialized
// (Final, Native, Protected)
// Parameters:
// enum class EDLCType                DLCType                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnabled                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManeaterTitleMenuView::HandleDLCEntitlementInitialized(enum class EDLCType DLCType, bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterTitleMenuView", "HandleDLCEntitlementInitialized");

	Params::UManeaterTitleMenuView_HandleDLCEntitlementInitialized_Params Parms{};

	Parms.DLCType = DLCType;
	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterTitleMenuView.HandleDLCEntitlementChanged
// (Final, Native, Protected)
// Parameters:
// enum class EDLCType                DLCType                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnabled                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManeaterTitleMenuView::HandleDLCEntitlementChanged(enum class EDLCType DLCType, bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterTitleMenuView", "HandleDLCEntitlementChanged");

	Params::UManeaterTitleMenuView_HandleDLCEntitlementChanged_Params Parms{};

	Parms.DLCType = DLCType;
	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ManeaterTitleMenuView.GetStoryProgressInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SlotIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FME_StoryInfo               ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FME_StoryInfo UManeaterTitleMenuView::GetStoryProgressInfo(int32 SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterTitleMenuView", "GetStoryProgressInfo");

	Params::UManeaterTitleMenuView_GetStoryProgressInfo_Params Parms{};

	Parms.SlotIndex = SlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ManeaterUI.ManeaterTitleMenuView.DoesSaveGameExist
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SlotIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManeaterTitleMenuView::DoesSaveGameExist(int32 SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterTitleMenuView", "DoesSaveGameExist");

	Params::UManeaterTitleMenuView_DoesSaveGameExist_Params Parms{};

	Parms.SlotIndex = SlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ManeaterUI.ManeaterTitleMenuView.ContinueGame_BP
// (Event, Public, BlueprintEvent)
// Parameters:

void UManeaterTitleMenuView::ContinueGame_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterTitleMenuView", "ContinueGame_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Class ManeaterUI.ManeaterTitleMenuViewController
// (None)

class UClass* UManeaterTitleMenuViewController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ManeaterTitleMenuViewController");

	return Clss;
}


// ManeaterTitleMenuViewController ManeaterUI.Default__ManeaterTitleMenuViewController
// (Public, ClassDefaultObject, ArchetypeObject)

class UManeaterTitleMenuViewController* UManeaterTitleMenuViewController::GetDefaultObj()
{
	static class UManeaterTitleMenuViewController* Default = nullptr;

	if (!Default)
		Default = static_cast<UManeaterTitleMenuViewController*>(UManeaterTitleMenuViewController::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.ManeaterTitleSplashView
// (None)

class UClass* UManeaterTitleSplashView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ManeaterTitleSplashView");

	return Clss;
}


// ManeaterTitleSplashView ManeaterUI.Default__ManeaterTitleSplashView
// (Public, ClassDefaultObject, ArchetypeObject)

class UManeaterTitleSplashView* UManeaterTitleSplashView::GetDefaultObj()
{
	static class UManeaterTitleSplashView* Default = nullptr;

	if (!Default)
		Default = static_cast<UManeaterTitleSplashView*>(UManeaterTitleSplashView::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.ManeaterTitleSplashView.OnStartButtonClicked
// (Final, Native, Protected)
// Parameters:
// struct FKey                        MouseButtonClicked                                               (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*          OnWidgetClicked                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManeaterTitleSplashView::OnStartButtonClicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* OnWidgetClicked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterTitleSplashView", "OnStartButtonClicked");

	Params::UManeaterTitleSplashView_OnStartButtonClicked_Params Parms{};

	Parms.MouseButtonClicked = MouseButtonClicked;
	Parms.OnWidgetClicked = OnWidgetClicked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.ManeaterUIFunctionLibrary
// (None)

class UClass* UManeaterUIFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ManeaterUIFunctionLibrary");

	return Clss;
}


// ManeaterUIFunctionLibrary ManeaterUI.Default__ManeaterUIFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UManeaterUIFunctionLibrary* UManeaterUIFunctionLibrary::GetDefaultObj()
{
	static class UManeaterUIFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UManeaterUIFunctionLibrary*>(UManeaterUIFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.ManeaterUIFunctionLibrary.IsKeyValidForUpgrade
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                        Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManeaterUIFunctionLibrary::IsKeyValidForUpgrade(struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterUIFunctionLibrary", "IsKeyValidForUpgrade");

	Params::UManeaterUIFunctionLibrary_IsKeyValidForUpgrade_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ManeaterUI.ManeaterUIFunctionLibrary.GetTextForKeybind
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ActionName                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bGamepad                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              IconSize                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              IconOffset                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AxisScale                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UManeaterUIFunctionLibrary::GetTextForKeybind(class FName& ActionName, bool bGamepad, int32 IconSize, int32 IconOffset, float AxisScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterUIFunctionLibrary", "GetTextForKeybind");

	Params::UManeaterUIFunctionLibrary_GetTextForKeybind_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.bGamepad = bGamepad;
	Parms.IconSize = IconSize;
	Parms.IconOffset = IconOffset;
	Parms.AxisScale = AxisScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ManeaterUI.ManeaterUIFunctionLibrary.GetShouldDisplayAttributeAsPercentage
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      AttributeName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManeaterUIFunctionLibrary::GetShouldDisplayAttributeAsPercentage(const class FString& AttributeName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterUIFunctionLibrary", "GetShouldDisplayAttributeAsPercentage");

	Params::UManeaterUIFunctionLibrary_GetShouldDisplayAttributeAsPercentage_Params Parms{};

	Parms.AttributeName = AttributeName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ManeaterUI.ManeaterUIFunctionLibrary.GetReadableNameForAttribute
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      AttributeName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UManeaterUIFunctionLibrary::GetReadableNameForAttribute(const class FString& AttributeName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterUIFunctionLibrary", "GetReadableNameForAttribute");

	Params::UManeaterUIFunctionLibrary_GetReadableNameForAttribute_Params Parms{};

	Parms.AttributeName = AttributeName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ManeaterUI.ManeaterUIFunctionLibrary.GetNutrientColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class ENutrientType           Nutrient                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UManeaterUIFunctionLibrary::GetNutrientColor(enum class ENutrientType Nutrient)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterUIFunctionLibrary", "GetNutrientColor");

	Params::UManeaterUIFunctionLibrary_GetNutrientColor_Params Parms{};

	Parms.Nutrient = Nutrient;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ManeaterUI.ManeaterUIFunctionLibrary.GetManeaterHUD
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AManeaterHUD*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AManeaterHUD* UManeaterUIFunctionLibrary::GetManeaterHUD(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterUIFunctionLibrary", "GetManeaterHUD");

	Params::UManeaterUIFunctionLibrary_GetManeaterHUD_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ManeaterUI.ManeaterUIFunctionLibrary.GetLocalizedSlotName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EEvolutionSlot          Slot                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UManeaterUIFunctionLibrary::GetLocalizedSlotName(enum class EEvolutionSlot Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterUIFunctionLibrary", "GetLocalizedSlotName");

	Params::UManeaterUIFunctionLibrary_GetLocalizedSlotName_Params Parms{};

	Parms.Slot = Slot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ManeaterUI.ManeaterUIFunctionLibrary.GetLocalizedRarityName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EEvolutionRarity        Rarity                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UManeaterUIFunctionLibrary::GetLocalizedRarityName(enum class EEvolutionRarity Rarity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterUIFunctionLibrary", "GetLocalizedRarityName");

	Params::UManeaterUIFunctionLibrary_GetLocalizedRarityName_Params Parms{};

	Parms.Rarity = Rarity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ManeaterUI.ManeaterUIFunctionLibrary.GetLocalizedGrowthName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EPlayerGrowthStage      GrowthStage                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UManeaterUIFunctionLibrary::GetLocalizedGrowthName(enum class EPlayerGrowthStage GrowthStage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterUIFunctionLibrary", "GetLocalizedGrowthName");

	Params::UManeaterUIFunctionLibrary_GetLocalizedGrowthName_Params Parms{};

	Parms.GrowthStage = GrowthStage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ManeaterUI.ManeaterUIFunctionLibrary.GetLocalizedEvolutionProcName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EEvolutionProcType      ProcType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UManeaterUIFunctionLibrary::GetLocalizedEvolutionProcName(enum class EEvolutionProcType ProcType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterUIFunctionLibrary", "GetLocalizedEvolutionProcName");

	Params::UManeaterUIFunctionLibrary_GetLocalizedEvolutionProcName_Params Parms{};

	Parms.ProcType = ProcType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ManeaterUI.ManeaterUIFunctionLibrary.GetLocalizedDLCName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EDLCType                DLCType                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UManeaterUIFunctionLibrary::GetLocalizedDLCName(enum class EDLCType DLCType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterUIFunctionLibrary", "GetLocalizedDLCName");

	Params::UManeaterUIFunctionLibrary_GetLocalizedDLCName_Params Parms{};

	Parms.DLCType = DLCType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ManeaterUI.ManeaterUIFunctionLibrary.GetIsDisplayAttributeMultiplier
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      AttributeName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManeaterUIFunctionLibrary::GetIsDisplayAttributeMultiplier(const class FString& AttributeName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterUIFunctionLibrary", "GetIsDisplayAttributeMultiplier");

	Params::UManeaterUIFunctionLibrary_GetIsDisplayAttributeMultiplier_Params Parms{};

	Parms.AttributeName = AttributeName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ManeaterUI.ManeaterUIFunctionLibrary.GetIconForObjectiveType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EObjectiveType          ObjectiveType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bStoryObjective                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCompleted                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* UManeaterUIFunctionLibrary::GetIconForObjectiveType(enum class EObjectiveType ObjectiveType, bool bStoryObjective, bool bCompleted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterUIFunctionLibrary", "GetIconForObjectiveType");

	Params::UManeaterUIFunctionLibrary_GetIconForObjectiveType_Params Parms{};

	Parms.ObjectiveType = ObjectiveType;
	Parms.bStoryObjective = bStoryObjective;
	Parms.bCompleted = bCompleted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ManeaterUI.ManeaterUIFunctionLibrary.GetIconForMarkerType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EMarkerType             MarkerType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* UManeaterUIFunctionLibrary::GetIconForMarkerType(enum class EMarkerType MarkerType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterUIFunctionLibrary", "GetIconForMarkerType");

	Params::UManeaterUIFunctionLibrary_GetIconForMarkerType_Params Parms{};

	Parms.MarkerType = MarkerType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ManeaterUI.ManeaterUIFunctionLibrary.GetEvolutionColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EEvolutionRarity        Rarity                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UManeaterUIFunctionLibrary::GetEvolutionColor(enum class EEvolutionRarity Rarity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterUIFunctionLibrary", "GetEvolutionColor");

	Params::UManeaterUIFunctionLibrary_GetEvolutionColor_Params Parms{};

	Parms.Rarity = Rarity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ManeaterUI.ManeaterUIFunctionLibrary.GetEpisodeImage
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              StoryIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* UManeaterUIFunctionLibrary::GetEpisodeImage(int32 StoryIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManeaterUIFunctionLibrary", "GetEpisodeImage");

	Params::UManeaterUIFunctionLibrary_GetEpisodeImage_Params Parms{};

	Parms.StoryIndex = StoryIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ManeaterUI.ManeaterUISettings
// (None)

class UClass* UManeaterUISettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ManeaterUISettings");

	return Clss;
}


// ManeaterUISettings ManeaterUI.Default__ManeaterUISettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UManeaterUISettings* UManeaterUISettings::GetDefaultObj()
{
	static class UManeaterUISettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UManeaterUISettings*>(UManeaterUISettings::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.MapMarkerPopupWidget
// (None)

class UClass* UMapMarkerPopupWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapMarkerPopupWidget");

	return Clss;
}


// MapMarkerPopupWidget ManeaterUI.Default__MapMarkerPopupWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UMapMarkerPopupWidget* UMapMarkerPopupWidget::GetDefaultObj()
{
	static class UMapMarkerPopupWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UMapMarkerPopupWidget*>(UMapMarkerPopupWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.MapMarkerPopupWidget.SetObjectiveData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UME_PlayerObjective*         Objective                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapMarkerPopupWidget::SetObjectiveData(class UME_PlayerObjective* Objective)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapMarkerPopupWidget", "SetObjectiveData");

	Params::UMapMarkerPopupWidget_SetObjectiveData_Params Parms{};

	Parms.Objective = Objective;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.MapMarkerPopupWidget.OnHoveredMapMarkerWidgetUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMapMarkerPopupWidget::OnHoveredMapMarkerWidgetUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapMarkerPopupWidget", "OnHoveredMapMarkerWidgetUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ManeaterUI.MapMarkerPopupWidget.HandleInput
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapMarkerPopupWidget::HandleInput(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapMarkerPopupWidget", "HandleInput");

	Params::UMapMarkerPopupWidget_HandleInput_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Class ManeaterUI.MapProgressButtonWidget
// (None)

class UClass* UMapProgressButtonWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapProgressButtonWidget");

	return Clss;
}


// MapProgressButtonWidget ManeaterUI.Default__MapProgressButtonWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UMapProgressButtonWidget* UMapProgressButtonWidget::GetDefaultObj()
{
	static class UMapProgressButtonWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UMapProgressButtonWidget*>(UMapProgressButtonWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.MapProgressButtonWidget.ToggleFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMapProgressButtonWidget::ToggleFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapProgressButtonWidget", "ToggleFocus");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.MapProgressButtonWidget.SetWidgetSwitcherIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapProgressButtonWidget::SetWidgetSwitcherIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapProgressButtonWidget", "SetWidgetSwitcherIndex");

	Params::UMapProgressButtonWidget_SetWidgetSwitcherIndex_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.MapProgressButtonWidget.SetShowProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Show                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapProgressButtonWidget::SetShowProgress(bool Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapProgressButtonWidget", "SetShowProgress");

	Params::UMapProgressButtonWidget_SetShowProgress_Params Parms{};

	Parms.Show = Show;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.MapProgressButtonWidget.SetSectionTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*                  Texture                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapProgressButtonWidget::SetSectionTexture(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapProgressButtonWidget", "SetSectionTexture");

	Params::UMapProgressButtonWidget_SetSectionTexture_Params Parms{};

	Parms.Texture = Texture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.MapProgressButtonWidget.SetSectionName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        Name                                                             (Parm, NativeAccessSpecifierPublic)

void UMapProgressButtonWidget::SetSectionName(class FText Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapProgressButtonWidget", "SetSectionName");

	Params::UMapProgressButtonWidget_SetSectionName_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.MapProgressButtonWidget.SetProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Progress                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapProgressButtonWidget::SetProgress(float Progress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapProgressButtonWidget", "SetProgress");

	Params::UMapProgressButtonWidget_SetProgress_Params Parms{};

	Parms.Progress = Progress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.MapProgressButtonWidget.SetActionContainerDisabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Disable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapProgressButtonWidget::SetActionContainerDisabled(bool Disable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapProgressButtonWidget", "SetActionContainerDisabled");

	Params::UMapProgressButtonWidget_SetActionContainerDisabled_Params Parms{};

	Parms.Disable = Disable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.MapProgressButtonWidget.IsFocused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMapProgressButtonWidget::IsFocused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapProgressButtonWidget", "IsFocused");

	Params::UMapProgressButtonWidget_IsFocused_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ManeaterUI.MapProgressButtonWidget.GetWidgetSwitcherIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMapProgressButtonWidget::GetWidgetSwitcherIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapProgressButtonWidget", "GetWidgetSwitcherIndex");

	Params::UMapProgressButtonWidget_GetWidgetSwitcherIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ManeaterUI.MapProgressWidget
// (None)

class UClass* UMapProgressWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapProgressWidget");

	return Clss;
}


// MapProgressWidget ManeaterUI.Default__MapProgressWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UMapProgressWidget* UMapProgressWidget::GetDefaultObj()
{
	static class UMapProgressWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UMapProgressWidget*>(UMapProgressWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.MapProgressWidget.SetTinFoilHatProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        Progress                                                         (Parm, NativeAccessSpecifierPublic)

void UMapProgressWidget::SetTinFoilHatProgress(class FText Progress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapProgressWidget", "SetTinFoilHatProgress");

	Params::UMapProgressWidget_SetTinFoilHatProgress_Params Parms{};

	Parms.Progress = Progress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.MapProgressWidget.SetSectionTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*                  Texture                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapProgressWidget::SetSectionTexture(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapProgressWidget", "SetSectionTexture");

	Params::UMapProgressWidget_SetSectionTexture_Params Parms{};

	Parms.Texture = Texture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.MapProgressWidget.SetSectionName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        Name                                                             (Parm, NativeAccessSpecifierPublic)

void UMapProgressWidget::SetSectionName(class FText Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapProgressWidget", "SetSectionName");

	Params::UMapProgressWidget_SetSectionName_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.MapProgressWidget.SetProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Progress                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapProgressWidget::SetProgress(float Progress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapProgressWidget", "SetProgress");

	Params::UMapProgressWidget_SetProgress_Params Parms{};

	Parms.Progress = Progress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.MapProgressWidget.SetNutrientCacheProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        Progress                                                         (Parm, NativeAccessSpecifierPublic)

void UMapProgressWidget::SetNutrientCacheProgress(class FText Progress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapProgressWidget", "SetNutrientCacheProgress");

	Params::UMapProgressWidget_SetNutrientCacheProgress_Params Parms{};

	Parms.Progress = Progress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.MapProgressWidget.SetLandmarkProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        Progress                                                         (Parm, NativeAccessSpecifierPublic)

void UMapProgressWidget::SetLandmarkProgress(class FText Progress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapProgressWidget", "SetLandmarkProgress");

	Params::UMapProgressWidget_SetLandmarkProgress_Params Parms{};

	Parms.Progress = Progress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.MapProgressWidget.SetCollectibleProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        Progress                                                         (Parm, NativeAccessSpecifierPublic)

void UMapProgressWidget::SetCollectibleProgress(class FText Progress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapProgressWidget", "SetCollectibleProgress");

	Params::UMapProgressWidget_SetCollectibleProgress_Params Parms{};

	Parms.Progress = Progress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.MapWidget
// (None)

class UClass* UMapWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapWidget");

	return Clss;
}


// MapWidget ManeaterUI.Default__MapWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UMapWidget* UMapWidget::GetDefaultObj()
{
	static class UMapWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UMapWidget*>(UMapWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.ME_CinematicMovieWidget
// (None)

class UClass* UME_CinematicMovieWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ME_CinematicMovieWidget");

	return Clss;
}


// ME_CinematicMovieWidget ManeaterUI.Default__ME_CinematicMovieWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UME_CinematicMovieWidget* UME_CinematicMovieWidget::GetDefaultObj()
{
	static class UME_CinematicMovieWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UME_CinematicMovieWidget*>(UME_CinematicMovieWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.ME_CinematicMovieWidget.SetMediaSource
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UMediaSource*                InMovie                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UME_CinematicMovieWidget::SetMediaSource(class UMediaSource* InMovie)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ME_CinematicMovieWidget", "SetMediaSource");

	Params::UME_CinematicMovieWidget_SetMediaSource_Params Parms{};

	Parms.InMovie = InMovie;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ME_CinematicMovieWidget.OnMediaSourceSet
// (Event, Public, BlueprintEvent)
// Parameters:

void UME_CinematicMovieWidget::OnMediaSourceSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ME_CinematicMovieWidget", "OnMediaSourceSet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ManeaterUI.ME_CinematicMovieWidget.GetMediaSourceForPlatform
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UMediaSource*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMediaSource* UME_CinematicMovieWidget::GetMediaSourceForPlatform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ME_CinematicMovieWidget", "GetMediaSourceForPlatform");

	Params::UME_CinematicMovieWidget_GetMediaSourceForPlatform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ManeaterUI.ME_RadialProgressWidget
// (None)

class UClass* UME_RadialProgressWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ME_RadialProgressWidget");

	return Clss;
}


// ME_RadialProgressWidget ManeaterUI.Default__ME_RadialProgressWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UME_RadialProgressWidget* UME_RadialProgressWidget::GetDefaultObj()
{
	static class UME_RadialProgressWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UME_RadialProgressWidget*>(UME_RadialProgressWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.METoastWidget
// (None)

class UClass* UMEToastWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("METoastWidget");

	return Clss;
}


// METoastWidget ManeaterUI.Default__METoastWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UMEToastWidget* UMEToastWidget::GetDefaultObj()
{
	static class UMEToastWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UMEToastWidget*>(UMEToastWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.METoastWidget.RemoveToast
// (Native, Protected, BlueprintCallable)
// Parameters:

void UMEToastWidget::RemoveToast()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("METoastWidget", "RemoveToast");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.METoastWidget.OnToastShowing
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMEToastWidget::OnToastShowing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("METoastWidget", "OnToastShowing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ManeaterUI.METoastWidget.OnToastReadyForRemove
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UMEToastWidget::OnToastReadyForRemove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("METoastWidget", "OnToastReadyForRemove");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.MEApexSpawnToast
// (None)

class UClass* UMEApexSpawnToast::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MEApexSpawnToast");

	return Clss;
}


// MEApexSpawnToast ManeaterUI.Default__MEApexSpawnToast
// (Public, ClassDefaultObject, ArchetypeObject)

class UMEApexSpawnToast* UMEApexSpawnToast::GetDefaultObj()
{
	static class UMEApexSpawnToast* Default = nullptr;

	if (!Default)
		Default = static_cast<UMEApexSpawnToast*>(UMEApexSpawnToast::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.MEControllerDisconnectedModal
// (None)

class UClass* UMEControllerDisconnectedModal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MEControllerDisconnectedModal");

	return Clss;
}


// MEControllerDisconnectedModal ManeaterUI.Default__MEControllerDisconnectedModal
// (Public, ClassDefaultObject, ArchetypeObject)

class UMEControllerDisconnectedModal* UMEControllerDisconnectedModal::GetDefaultObj()
{
	static class UMEControllerDisconnectedModal* Default = nullptr;

	if (!Default)
		Default = static_cast<UMEControllerDisconnectedModal*>(UMEControllerDisconnectedModal::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.MED_ObjectiveIndicatorScreenSpaceWidget
// (None)

class UClass* UMED_ObjectiveIndicatorScreenSpaceWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MED_ObjectiveIndicatorScreenSpaceWidget");

	return Clss;
}


// MED_ObjectiveIndicatorScreenSpaceWidget ManeaterUI.Default__MED_ObjectiveIndicatorScreenSpaceWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UMED_ObjectiveIndicatorScreenSpaceWidget* UMED_ObjectiveIndicatorScreenSpaceWidget::GetDefaultObj()
{
	static class UMED_ObjectiveIndicatorScreenSpaceWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UMED_ObjectiveIndicatorScreenSpaceWidget*>(UMED_ObjectiveIndicatorScreenSpaceWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.MED_ObjectiveIndicatorScreenSpaceWidget.OnHUDVisiblityChanged
// (Final, Native, Protected)
// Parameters:
// bool                               bVisible                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMED_ObjectiveIndicatorScreenSpaceWidget::OnHUDVisiblityChanged(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MED_ObjectiveIndicatorScreenSpaceWidget", "OnHUDVisiblityChanged");

	Params::UMED_ObjectiveIndicatorScreenSpaceWidget_OnHUDVisiblityChanged_Params Parms{};

	Parms.bVisible = bVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.MED_ObjectiveIndicatorScreenSpaceWidget.OnGamePauseStateChanged
// (Final, Native, Protected)
// Parameters:
// bool                               bPaused                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMED_ObjectiveIndicatorScreenSpaceWidget::OnGamePauseStateChanged(bool bPaused)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MED_ObjectiveIndicatorScreenSpaceWidget", "OnGamePauseStateChanged");

	Params::UMED_ObjectiveIndicatorScreenSpaceWidget_OnGamePauseStateChanged_Params Parms{};

	Parms.bPaused = bPaused;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.MED_ObjectiveIndicatorScreenSpaceWidget.OnCinematicModeChanged
// (Final, Native, Protected)
// Parameters:
// bool                               bCinematicMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMED_ObjectiveIndicatorScreenSpaceWidget::OnCinematicModeChanged(bool bCinematicMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MED_ObjectiveIndicatorScreenSpaceWidget", "OnCinematicModeChanged");

	Params::UMED_ObjectiveIndicatorScreenSpaceWidget_OnCinematicModeChanged_Params Parms{};

	Parms.bCinematicMode = bCinematicMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.MELevelUpToast
// (None)

class UClass* UMELevelUpToast::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MELevelUpToast");

	return Clss;
}


// MELevelUpToast ManeaterUI.Default__MELevelUpToast
// (Public, ClassDefaultObject, ArchetypeObject)

class UMELevelUpToast* UMELevelUpToast::GetDefaultObj()
{
	static class UMELevelUpToast* Default = nullptr;

	if (!Default)
		Default = static_cast<UMELevelUpToast*>(UMELevelUpToast::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.MENewEpisodeToast
// (None)

class UClass* UMENewEpisodeToast::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MENewEpisodeToast");

	return Clss;
}


// MENewEpisodeToast ManeaterUI.Default__MENewEpisodeToast
// (Public, ClassDefaultObject, ArchetypeObject)

class UMENewEpisodeToast* UMENewEpisodeToast::GetDefaultObj()
{
	static class UMENewEpisodeToast* Default = nullptr;

	if (!Default)
		Default = static_cast<UMENewEpisodeToast*>(UMENewEpisodeToast::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.MERegionToast
// (None)

class UClass* UMERegionToast::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MERegionToast");

	return Clss;
}


// MERegionToast ManeaterUI.Default__MERegionToast
// (Public, ClassDefaultObject, ArchetypeObject)

class UMERegionToast* UMERegionToast::GetDefaultObj()
{
	static class UMERegionToast* Default = nullptr;

	if (!Default)
		Default = static_cast<UMERegionToast*>(UMERegionToast::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.MESettingsStepper
// (None)

class UClass* UMESettingsStepper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MESettingsStepper");

	return Clss;
}


// MESettingsStepper ManeaterUI.Default__MESettingsStepper
// (Public, ClassDefaultObject, ArchetypeObject)

class UMESettingsStepper* UMESettingsStepper::GetDefaultObj()
{
	static class UMESettingsStepper* Default = nullptr;

	if (!Default)
		Default = static_cast<UMESettingsStepper*>(UMESettingsStepper::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.MESettingsStepper.SetSelectedOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Idx                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTriggerBroadcast                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMESettingsStepper::SetSelectedOption(int32 Idx, bool bTriggerBroadcast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MESettingsStepper", "SetSelectedOption");

	Params::UMESettingsStepper_SetSelectedOption_Params Parms{};

	Parms.Idx = Idx;
	Parms.bTriggerBroadcast = bTriggerBroadcast;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.MESettingsStepper.SetOptions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class FText>                Options                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMESettingsStepper::SetOptions(const TArray<class FText>& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MESettingsStepper", "SetOptions");

	Params::UMESettingsStepper_SetOptions_Params Parms{};

	Parms.Options = Options;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.MESettingsStepper.PreviousOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMESettingsStepper::PreviousOption()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MESettingsStepper", "PreviousOption");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.MESettingsStepper.OnPrevClicked
// (Final, Native, Protected)
// Parameters:
// struct FKey                        MouseButtonClicked                                               (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*          WidgetClicked                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMESettingsStepper::OnPrevClicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* WidgetClicked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MESettingsStepper", "OnPrevClicked");

	Params::UMESettingsStepper_OnPrevClicked_Params Parms{};

	Parms.MouseButtonClicked = MouseButtonClicked;
	Parms.WidgetClicked = WidgetClicked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.MESettingsStepper.OnNextClicked
// (Final, Native, Protected)
// Parameters:
// struct FKey                        MouseButtonClicked                                               (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*          WidgetClicked                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMESettingsStepper::OnNextClicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* WidgetClicked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MESettingsStepper", "OnNextClicked");

	Params::UMESettingsStepper_OnNextClicked_Params Parms{};

	Parms.MouseButtonClicked = MouseButtonClicked;
	Parms.WidgetClicked = WidgetClicked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.MESettingsStepper.NextOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMESettingsStepper::NextOption()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MESettingsStepper", "NextOption");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.MESettingsStepper.GetSelectedOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMESettingsStepper::GetSelectedOption()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MESettingsStepper", "GetSelectedOption");

	Params::UMESettingsStepper_GetSelectedOption_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ManeaterUI.MESettingsStepper.GetOptions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class FText>                ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<class FText> UMESettingsStepper::GetOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MESettingsStepper", "GetOptions");

	Params::UMESettingsStepper_GetOptions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ManeaterUI.MEStoryProgressToast
// (None)

class UClass* UMEStoryProgressToast::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MEStoryProgressToast");

	return Clss;
}


// MEStoryProgressToast ManeaterUI.Default__MEStoryProgressToast
// (Public, ClassDefaultObject, ArchetypeObject)

class UMEStoryProgressToast* UMEStoryProgressToast::GetDefaultObj()
{
	static class UMEStoryProgressToast* Default = nullptr;

	if (!Default)
		Default = static_cast<UMEStoryProgressToast*>(UMEStoryProgressToast::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.METooltipContainer
// (None)

class UClass* UMETooltipContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("METooltipContainer");

	return Clss;
}


// METooltipContainer ManeaterUI.Default__METooltipContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UMETooltipContainer* UMETooltipContainer::GetDefaultObj()
{
	static class UMETooltipContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UMETooltipContainer*>(UMETooltipContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.NotorietyMeterWidget
// (None)

class UClass* UNotorietyMeterWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NotorietyMeterWidget");

	return Clss;
}


// NotorietyMeterWidget ManeaterUI.Default__NotorietyMeterWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UNotorietyMeterWidget* UNotorietyMeterWidget::GetDefaultObj()
{
	static class UNotorietyMeterWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UNotorietyMeterWidget*>(UNotorietyMeterWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.ObjectiveButtonWidget
// (None)

class UClass* UObjectiveButtonWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ObjectiveButtonWidget");

	return Clss;
}


// ObjectiveButtonWidget ManeaterUI.Default__ObjectiveButtonWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UObjectiveButtonWidget* UObjectiveButtonWidget::GetDefaultObj()
{
	static class UObjectiveButtonWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UObjectiveButtonWidget*>(UObjectiveButtonWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.ObjectiveButtonWidget.OnObjectiveTrack
// (Final, Native, Public)
// Parameters:
// class UME_PlayerObjective*         Objective                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldTrack                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNoTrackerUpdate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UObjectiveButtonWidget::OnObjectiveTrack(class UME_PlayerObjective* Objective, bool bShouldTrack, bool bNoTrackerUpdate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectiveButtonWidget", "OnObjectiveTrack");

	Params::UObjectiveButtonWidget_OnObjectiveTrack_Params Parms{};

	Parms.Objective = Objective;
	Parms.bShouldTrack = bShouldTrack;
	Parms.bNoTrackerUpdate = bNoTrackerUpdate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ObjectiveButtonWidget.GetFocusWidgetForNavigation
// (Final, Native, Protected)
// Parameters:
// enum class EUINavigation           NavigationDir                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UObjectiveButtonWidget::GetFocusWidgetForNavigation(enum class EUINavigation NavigationDir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectiveButtonWidget", "GetFocusWidgetForNavigation");

	Params::UObjectiveButtonWidget_GetFocusWidgetForNavigation_Params Parms{};

	Parms.NavigationDir = NavigationDir;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ManeaterUI.ObjectiveCollectionWidget
// (None)

class UClass* UObjectiveCollectionWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ObjectiveCollectionWidget");

	return Clss;
}


// ObjectiveCollectionWidget ManeaterUI.Default__ObjectiveCollectionWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UObjectiveCollectionWidget* UObjectiveCollectionWidget::GetDefaultObj()
{
	static class UObjectiveCollectionWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UObjectiveCollectionWidget*>(UObjectiveCollectionWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.ObjectiveCollectionWidget.SetFocusedObjective
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UObjectiveButtonWidget*      ObjectiveButton                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UObjectiveCollectionWidget::SetFocusedObjective(class UObjectiveButtonWidget* ObjectiveButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectiveCollectionWidget", "SetFocusedObjective");

	Params::UObjectiveCollectionWidget_SetFocusedObjective_Params Parms{};

	Parms.ObjectiveButton = ObjectiveButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ObjectiveCollectionWidget.OnObjective_MouseEnter
// (Final, Native, Protected)
// Parameters:
// class UObjectiveButtonWidget*      ObjectiveButton                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UObjectiveCollectionWidget::OnObjective_MouseEnter(class UObjectiveButtonWidget* ObjectiveButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectiveCollectionWidget", "OnObjective_MouseEnter");

	Params::UObjectiveCollectionWidget_OnObjective_MouseEnter_Params Parms{};

	Parms.ObjectiveButton = ObjectiveButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ObjectiveCollectionWidget.OnObjective_Focused
// (Final, Native, Protected)
// Parameters:
// class UObjectiveButtonWidget*      ObjectiveButton                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UObjectiveCollectionWidget::OnObjective_Focused(class UObjectiveButtonWidget* ObjectiveButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectiveCollectionWidget", "OnObjective_Focused");

	Params::UObjectiveCollectionWidget_OnObjective_Focused_Params Parms{};

	Parms.ObjectiveButton = ObjectiveButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.ObjectiveCompletionDecorator
// (None)

class UClass* UObjectiveCompletionDecorator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ObjectiveCompletionDecorator");

	return Clss;
}


// ObjectiveCompletionDecorator ManeaterUI.Default__ObjectiveCompletionDecorator
// (Public, ClassDefaultObject, ArchetypeObject)

class UObjectiveCompletionDecorator* UObjectiveCompletionDecorator::GetDefaultObj()
{
	static class UObjectiveCompletionDecorator* Default = nullptr;

	if (!Default)
		Default = static_cast<UObjectiveCompletionDecorator*>(UObjectiveCompletionDecorator::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.ObjectiveControllerWidget
// (None)

class UClass* UObjectiveControllerWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ObjectiveControllerWidget");

	return Clss;
}


// ObjectiveControllerWidget ManeaterUI.Default__ObjectiveControllerWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UObjectiveControllerWidget* UObjectiveControllerWidget::GetDefaultObj()
{
	static class UObjectiveControllerWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UObjectiveControllerWidget*>(UObjectiveControllerWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.ObjectiveControllerWidget.TutorialFinished
// (Final, Native, Protected)
// Parameters:

void UObjectiveControllerWidget::TutorialFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectiveControllerWidget", "TutorialFinished");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ObjectiveControllerWidget.OnToastDestroyed
// (Final, Native, Public)
// Parameters:
// class UTwBaseWidget*               Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UObjectiveControllerWidget::OnToastDestroyed(class UTwBaseWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectiveControllerWidget", "OnToastDestroyed");

	Params::UObjectiveControllerWidget_OnToastDestroyed_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ObjectiveControllerWidget.OnStoryEventProgress
// (Final, Native, Protected)
// Parameters:
// int32                              CurrentStoryIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ConditionText                                                    (Parm, NativeAccessSpecifierPublic)
// float                              StoryProgress                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UObjectiveControllerWidget::OnStoryEventProgress(int32 CurrentStoryIndex, class FText ConditionText, float StoryProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectiveControllerWidget", "OnStoryEventProgress");

	Params::UObjectiveControllerWidget_OnStoryEventProgress_Params Parms{};

	Parms.CurrentStoryIndex = CurrentStoryIndex;
	Parms.ConditionText = ConditionText;
	Parms.StoryProgress = StoryProgress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ObjectiveControllerWidget.OnRegionChanged
// (Final, Native, Protected)
// Parameters:
// struct FRegionToastData            Data                                                             (ConstParm, Parm, NativeAccessSpecifierPublic)

void UObjectiveControllerWidget::OnRegionChanged(const struct FRegionToastData& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectiveControllerWidget", "OnRegionChanged");

	Params::UObjectiveControllerWidget_OnRegionChanged_Params Parms{};

	Parms.Data = Data;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ObjectiveControllerWidget.OnObjectiveUpdated
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerObjective*         Objective                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UObjectiveControllerWidget::OnObjectiveUpdated(class UME_PlayerObjective* Objective)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectiveControllerWidget", "OnObjectiveUpdated");

	Params::UObjectiveControllerWidget_OnObjectiveUpdated_Params Parms{};

	Parms.Objective = Objective;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ObjectiveControllerWidget.OnObjectiveTrack
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerObjective*         Objective                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldTrack                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNoTrackerUpdate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UObjectiveControllerWidget::OnObjectiveTrack(class UME_PlayerObjective* Objective, bool bShouldTrack, bool bNoTrackerUpdate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectiveControllerWidget", "OnObjectiveTrack");

	Params::UObjectiveControllerWidget_OnObjectiveTrack_Params Parms{};

	Parms.Objective = Objective;
	Parms.bShouldTrack = bShouldTrack;
	Parms.bNoTrackerUpdate = bNoTrackerUpdate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ObjectiveControllerWidget.OnObjectiveStateChanged
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerObjective*         PlayerObjective                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EObjectiveState         NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UObjectiveControllerWidget::OnObjectiveStateChanged(class UME_PlayerObjective* PlayerObjective, enum class EObjectiveState NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectiveControllerWidget", "OnObjectiveStateChanged");

	Params::UObjectiveControllerWidget_OnObjectiveStateChanged_Params Parms{};

	Parms.PlayerObjective = PlayerObjective;
	Parms.NewState = NewState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ObjectiveControllerWidget.OnObjectiveStarted
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerObjective*         Objective                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UObjectiveControllerWidget::OnObjectiveStarted(class UME_PlayerObjective* Objective)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectiveControllerWidget", "OnObjectiveStarted");

	Params::UObjectiveControllerWidget_OnObjectiveStarted_Params Parms{};

	Parms.Objective = Objective;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ObjectiveControllerWidget.OnObjectiveDiscovered
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerObjective*         Objective                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UObjectiveControllerWidget::OnObjectiveDiscovered(class UME_PlayerObjective* Objective)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectiveControllerWidget", "OnObjectiveDiscovered");

	Params::UObjectiveControllerWidget_OnObjectiveDiscovered_Params Parms{};

	Parms.Objective = Objective;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ObjectiveControllerWidget.OnObjectiveComplete
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerObjective*         Objective                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UObjectiveControllerWidget::OnObjectiveComplete(class UME_PlayerObjective* Objective)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectiveControllerWidget", "OnObjectiveComplete");

	Params::UObjectiveControllerWidget_OnObjectiveComplete_Params Parms{};

	Parms.Objective = Objective;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ObjectiveControllerWidget.OnNewQuestAvailableChanged
// (Final, Native, Protected)
// Parameters:

void UObjectiveControllerWidget::OnNewQuestAvailableChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectiveControllerWidget", "OnNewQuestAvailableChanged");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ObjectiveControllerWidget.OnLevelChanged
// (Final, Native, Protected)
// Parameters:
// int32                              NewGrowthLevel                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bChangeFromTheoretical                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UObjectiveControllerWidget::OnLevelChanged(int32 NewGrowthLevel, bool bChangeFromTheoretical)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectiveControllerWidget", "OnLevelChanged");

	Params::UObjectiveControllerWidget_OnLevelChanged_Params Parms{};

	Parms.NewGrowthLevel = NewGrowthLevel;
	Parms.bChangeFromTheoretical = bChangeFromTheoretical;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ObjectiveControllerWidget.OnLandmarkRegionComplete
// (Final, Native, Public)
// Parameters:
// class UME_PlayerObjective*         Objective                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UObjectiveControllerWidget::OnLandmarkRegionComplete(class UME_PlayerObjective* Objective)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectiveControllerWidget", "OnLandmarkRegionComplete");

	Params::UObjectiveControllerWidget_OnLandmarkRegionComplete_Params Parms{};

	Parms.Objective = Objective;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ObjectiveControllerWidget.OnLandmarkObjectFound
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerObjective*         Objective                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        LandmarkDescription                                              (Parm, NativeAccessSpecifierPublic)

void UObjectiveControllerWidget::OnLandmarkObjectFound(class UME_PlayerObjective* Objective, class FText LandmarkDescription)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectiveControllerWidget", "OnLandmarkObjectFound");

	Params::UObjectiveControllerWidget_OnLandmarkObjectFound_Params Parms{};

	Parms.Objective = Objective;
	Parms.LandmarkDescription = LandmarkDescription;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ObjectiveControllerWidget.OnInfamyRankUp
// (Final, Native, Protected)
// Parameters:
// int32                              NewRank                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UObjectiveControllerWidget::OnInfamyRankUp(int32 NewRank)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectiveControllerWidget", "OnInfamyRankUp");

	Params::UObjectiveControllerWidget_OnInfamyRankUp_Params Parms{};

	Parms.NewRank = NewRank;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ObjectiveControllerWidget.OnHUDErrorMessage
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class FText                        ErrorMessage                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UObjectiveControllerWidget::OnHUDErrorMessage(class FText& ErrorMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectiveControllerWidget", "OnHUDErrorMessage");

	Params::UObjectiveControllerWidget_OnHUDErrorMessage_Params Parms{};

	Parms.ErrorMessage = ErrorMessage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ObjectiveControllerWidget.OnBountyPlacedOnHold
// (Final, Native, Protected)
// Parameters:

void UObjectiveControllerWidget::OnBountyPlacedOnHold()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectiveControllerWidget", "OnBountyPlacedOnHold");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ObjectiveControllerWidget.OnBountyBossSpawned
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FBountyViewData             BountyData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UObjectiveControllerWidget::OnBountyBossSpawned(struct FBountyViewData& BountyData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectiveControllerWidget", "OnBountyBossSpawned");

	Params::UObjectiveControllerWidget_OnBountyBossSpawned_Params Parms{};

	Parms.BountyData = BountyData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ObjectiveControllerWidget.OnBossFightAvailable
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerObjectiveBoss*     BossObjective                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UObjectiveControllerWidget::OnBossFightAvailable(class UME_PlayerObjectiveBoss* BossObjective)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectiveControllerWidget", "OnBossFightAvailable");

	Params::UObjectiveControllerWidget_OnBossFightAvailable_Params Parms{};

	Parms.BossObjective = BossObjective;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ObjectiveControllerWidget.OnAdvancedToNextEpisode
// (Final, Native, Protected)
// Parameters:
// int32                              CurrentStoryEventIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CurrentEpisodeNumber                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UObjectiveControllerWidget::OnAdvancedToNextEpisode(int32 CurrentStoryEventIndex, int32 CurrentEpisodeNumber)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectiveControllerWidget", "OnAdvancedToNextEpisode");

	Params::UObjectiveControllerWidget_OnAdvancedToNextEpisode_Params Parms{};

	Parms.CurrentStoryEventIndex = CurrentStoryEventIndex;
	Parms.CurrentEpisodeNumber = CurrentEpisodeNumber;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.ObjectiveDecoratorQueueWidget
// (None)

class UClass* UObjectiveDecoratorQueueWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ObjectiveDecoratorQueueWidget");

	return Clss;
}


// ObjectiveDecoratorQueueWidget ManeaterUI.Default__ObjectiveDecoratorQueueWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UObjectiveDecoratorQueueWidget* UObjectiveDecoratorQueueWidget::GetDefaultObj()
{
	static class UObjectiveDecoratorQueueWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UObjectiveDecoratorQueueWidget*>(UObjectiveDecoratorQueueWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.ObjectiveDiscoveredDecorator
// (None)

class UClass* UObjectiveDiscoveredDecorator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ObjectiveDiscoveredDecorator");

	return Clss;
}


// ObjectiveDiscoveredDecorator ManeaterUI.Default__ObjectiveDiscoveredDecorator
// (Public, ClassDefaultObject, ArchetypeObject)

class UObjectiveDiscoveredDecorator* UObjectiveDiscoveredDecorator::GetDefaultObj()
{
	static class UObjectiveDiscoveredDecorator* Default = nullptr;

	if (!Default)
		Default = static_cast<UObjectiveDiscoveredDecorator*>(UObjectiveDiscoveredDecorator::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.ObjectiveMapMarkerWidget
// (None)

class UClass* UObjectiveMapMarkerWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ObjectiveMapMarkerWidget");

	return Clss;
}


// ObjectiveMapMarkerWidget ManeaterUI.Default__ObjectiveMapMarkerWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UObjectiveMapMarkerWidget* UObjectiveMapMarkerWidget::GetDefaultObj()
{
	static class UObjectiveMapMarkerWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UObjectiveMapMarkerWidget*>(UObjectiveMapMarkerWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.ObjectiveMapMarkerWidget.OnObjectiveTrack
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerObjective*         PlayerObjective                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldTrack                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNoTrackerUpdate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UObjectiveMapMarkerWidget::OnObjectiveTrack(class UME_PlayerObjective* PlayerObjective, bool bShouldTrack, bool bNoTrackerUpdate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectiveMapMarkerWidget", "OnObjectiveTrack");

	Params::UObjectiveMapMarkerWidget_OnObjectiveTrack_Params Parms{};

	Parms.PlayerObjective = PlayerObjective;
	Parms.bShouldTrack = bShouldTrack;
	Parms.bNoTrackerUpdate = bNoTrackerUpdate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.ObjectiveProgressDecorator
// (None)

class UClass* UObjectiveProgressDecorator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ObjectiveProgressDecorator");

	return Clss;
}


// ObjectiveProgressDecorator ManeaterUI.Default__ObjectiveProgressDecorator
// (Public, ClassDefaultObject, ArchetypeObject)

class UObjectiveProgressDecorator* UObjectiveProgressDecorator::GetDefaultObj()
{
	static class UObjectiveProgressDecorator* Default = nullptr;

	if (!Default)
		Default = static_cast<UObjectiveProgressDecorator*>(UObjectiveProgressDecorator::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.ObjectiveTrackDecorator
// (None)

class UClass* UObjectiveTrackDecorator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ObjectiveTrackDecorator");

	return Clss;
}


// ObjectiveTrackDecorator ManeaterUI.Default__ObjectiveTrackDecorator
// (Public, ClassDefaultObject, ArchetypeObject)

class UObjectiveTrackDecorator* UObjectiveTrackDecorator::GetDefaultObj()
{
	static class UObjectiveTrackDecorator* Default = nullptr;

	if (!Default)
		Default = static_cast<UObjectiveTrackDecorator*>(UObjectiveTrackDecorator::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.ObjectiveTrackerQueueWidget
// (None)

class UClass* UObjectiveTrackerQueueWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ObjectiveTrackerQueueWidget");

	return Clss;
}


// ObjectiveTrackerQueueWidget ManeaterUI.Default__ObjectiveTrackerQueueWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UObjectiveTrackerQueueWidget* UObjectiveTrackerQueueWidget::GetDefaultObj()
{
	static class UObjectiveTrackerQueueWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UObjectiveTrackerQueueWidget*>(UObjectiveTrackerQueueWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.OverheadAgroWidget
// (None)

class UClass* UOverheadAgroWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OverheadAgroWidget");

	return Clss;
}


// OverheadAgroWidget ManeaterUI.Default__OverheadAgroWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UOverheadAgroWidget* UOverheadAgroWidget::GetDefaultObj()
{
	static class UOverheadAgroWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UOverheadAgroWidget*>(UOverheadAgroWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.PercentageUpdateDecorator
// (None)

class UClass* UPercentageUpdateDecorator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PercentageUpdateDecorator");

	return Clss;
}


// PercentageUpdateDecorator ManeaterUI.Default__PercentageUpdateDecorator
// (Public, ClassDefaultObject, ArchetypeObject)

class UPercentageUpdateDecorator* UPercentageUpdateDecorator::GetDefaultObj()
{
	static class UPercentageUpdateDecorator* Default = nullptr;

	if (!Default)
		Default = static_cast<UPercentageUpdateDecorator*>(UPercentageUpdateDecorator::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.PlayerAbilitiesWidget
// (None)

class UClass* UPlayerAbilitiesWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerAbilitiesWidget");

	return Clss;
}


// PlayerAbilitiesWidget ManeaterUI.Default__PlayerAbilitiesWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayerAbilitiesWidget* UPlayerAbilitiesWidget::GetDefaultObj()
{
	static class UPlayerAbilitiesWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerAbilitiesWidget*>(UPlayerAbilitiesWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.PlayerAbilitiesWidget.SetHealth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Health                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayerAbilitiesWidget::SetHealth(float Health)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbilitiesWidget", "SetHealth");

	Params::UPlayerAbilitiesWidget_SetHealth_Params Parms{};

	Parms.Health = Health;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.PlayerAbilitiesWidget.SetCooldownForAbilitySlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EAbilitySlot            AbilitySlot                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Cooldown                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayerAbilitiesWidget::SetCooldownForAbilitySlot(enum class EAbilitySlot AbilitySlot, float Cooldown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbilitiesWidget", "SetCooldownForAbilitySlot");

	Params::UPlayerAbilitiesWidget_SetCooldownForAbilitySlot_Params Parms{};

	Parms.AbilitySlot = AbilitySlot;
	Parms.Cooldown = Cooldown;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.PlayerAbilitiesWidget.SetCharges
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Charges                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayerAbilitiesWidget::SetCharges(float Charges)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbilitiesWidget", "SetCharges");

	Params::UPlayerAbilitiesWidget_SetCharges_Params Parms{};

	Parms.Charges = Charges;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.PlayerAbilitiesWidget.SetBoost
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Boost                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayerAbilitiesWidget::SetBoost(float Boost)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbilitiesWidget", "SetBoost");

	Params::UPlayerAbilitiesWidget_SetBoost_Params Parms{};

	Parms.Boost = Boost;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.PlayerAbilityInstanceWidget
// (None)

class UClass* UPlayerAbilityInstanceWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerAbilityInstanceWidget");

	return Clss;
}


// PlayerAbilityInstanceWidget ManeaterUI.Default__PlayerAbilityInstanceWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayerAbilityInstanceWidget* UPlayerAbilityInstanceWidget::GetDefaultObj()
{
	static class UPlayerAbilityInstanceWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerAbilityInstanceWidget*>(UPlayerAbilityInstanceWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.PlayerEvolutionContainer
// (None)

class UClass* UPlayerEvolutionContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerEvolutionContainer");

	return Clss;
}


// PlayerEvolutionContainer ManeaterUI.Default__PlayerEvolutionContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayerEvolutionContainer* UPlayerEvolutionContainer::GetDefaultObj()
{
	static class UPlayerEvolutionContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerEvolutionContainer*>(UPlayerEvolutionContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.PlayerHealthBarWidget
// (None)

class UClass* UPlayerHealthBarWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerHealthBarWidget");

	return Clss;
}


// PlayerHealthBarWidget ManeaterUI.Default__PlayerHealthBarWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayerHealthBarWidget* UPlayerHealthBarWidget::GetDefaultObj()
{
	static class UPlayerHealthBarWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerHealthBarWidget*>(UPlayerHealthBarWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.PlayerHealthBarWidget.SetRemainingBreath
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              RemainingBreath                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayerHealthBarWidget::SetRemainingBreath(float& RemainingBreath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerHealthBarWidget", "SetRemainingBreath");

	Params::UPlayerHealthBarWidget_SetRemainingBreath_Params Parms{};

	Parms.RemainingBreath = RemainingBreath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.PlayerHealthBarWidget.SetHealthValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayerHealthBarWidget::SetHealthValue(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerHealthBarWidget", "SetHealthValue");

	Params::UPlayerHealthBarWidget_SetHealthValue_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.PlayerHealthBarWidget.OnTweenStep
// (Final, Native, Public)
// Parameters:
// class UTwTweener*                  Tweener                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayerHealthBarWidget::OnTweenStep(class UTwTweener* Tweener)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerHealthBarWidget", "OnTweenStep");

	Params::UPlayerHealthBarWidget_OnTweenStep_Params Parms{};

	Parms.Tweener = Tweener;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.PlayerHealthBarWidget.OnRemainingBreathChanged_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayerHealthBarWidget::OnRemainingBreathChanged_BP(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerHealthBarWidget", "OnRemainingBreathChanged_BP");

	Params::UPlayerHealthBarWidget_OnRemainingBreathChanged_BP_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ManeaterUI.PlayerHealthBarWidget.OnHealthValueChanged_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayerHealthBarWidget::OnHealthValueChanged_BP(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerHealthBarWidget", "OnHealthValueChanged_BP");

	Params::UPlayerHealthBarWidget_OnHealthValueChanged_BP_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Class ManeaterUI.PlayerInfoWidget
// (None)

class UClass* UPlayerInfoWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerInfoWidget");

	return Clss;
}


// PlayerInfoWidget ManeaterUI.Default__PlayerInfoWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayerInfoWidget* UPlayerInfoWidget::GetDefaultObj()
{
	static class UPlayerInfoWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerInfoWidget*>(UPlayerInfoWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.PlayerInfoWidget.OnStoryUpdated
// (Final, Native, Protected)
// Parameters:
// int32                              ActiveStoryIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayerInfoWidget::OnStoryUpdated(int32 ActiveStoryIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerInfoWidget", "OnStoryUpdated");

	Params::UPlayerInfoWidget_OnStoryUpdated_Params Parms{};

	Parms.ActiveStoryIndex = ActiveStoryIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.PlayerInfoWidget.OnRegionChanged
// (Final, Native, Protected)
// Parameters:
// struct FRegionToastData            Data                                                             (ConstParm, Parm, NativeAccessSpecifierPublic)

void UPlayerInfoWidget::OnRegionChanged(const struct FRegionToastData& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerInfoWidget", "OnRegionChanged");

	Params::UPlayerInfoWidget_OnRegionChanged_Params Parms{};

	Parms.Data = Data;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.PlayerInfoWidget.OnPlayerHealthValueChanged
// (Final, Native, Protected, HasOutParams)
// Parameters:
// float                              Delta                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayerInfoWidget::OnPlayerHealthValueChanged(float& Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerInfoWidget", "OnPlayerHealthValueChanged");

	Params::UPlayerInfoWidget_OnPlayerHealthValueChanged_Params Parms{};

	Parms.Delta = Delta;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.PlayerInfoWidget.OnPlayerDamaged
// (Final, Native, Protected)
// Parameters:
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*                 InstigatedBy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      DamageCauser                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayerInfoWidget::OnPlayerDamaged(float Damage, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerInfoWidget", "OnPlayerDamaged");

	Params::UPlayerInfoWidget_OnPlayerDamaged_Params Parms{};

	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.PlayerNutrientImage
// (None)

class UClass* UPlayerNutrientImage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerNutrientImage");

	return Clss;
}


// PlayerNutrientImage ManeaterUI.Default__PlayerNutrientImage
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayerNutrientImage* UPlayerNutrientImage::GetDefaultObj()
{
	static class UPlayerNutrientImage* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerNutrientImage*>(UPlayerNutrientImage::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.PlayerNutrientImage.SetNutrientType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ENutrientType           Nutrient                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayerNutrientImage::SetNutrientType(enum class ENutrientType Nutrient)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerNutrientImage", "SetNutrientType");

	Params::UPlayerNutrientImage_SetNutrientType_Params Parms{};

	Parms.Nutrient = Nutrient;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.PlayerNutrientInstanceIcon
// (None)

class UClass* UPlayerNutrientInstanceIcon::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerNutrientInstanceIcon");

	return Clss;
}


// PlayerNutrientInstanceIcon ManeaterUI.Default__PlayerNutrientInstanceIcon
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayerNutrientInstanceIcon* UPlayerNutrientInstanceIcon::GetDefaultObj()
{
	static class UPlayerNutrientInstanceIcon* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerNutrientInstanceIcon*>(UPlayerNutrientInstanceIcon::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.PlayerNutrientInstanceIcon.OnTweenStep
// (Final, Native, Protected)
// Parameters:
// class UTwTweener*                  Tweener                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayerNutrientInstanceIcon::OnTweenStep(class UTwTweener* Tweener)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerNutrientInstanceIcon", "OnTweenStep");

	Params::UPlayerNutrientInstanceIcon_OnTweenStep_Params Parms{};

	Parms.Tweener = Tweener;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.PlayerNutrientInstanceIcon.OnTweenFinished
// (Final, Native, Protected)
// Parameters:
// class UTwTweener*                  Tweener                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayerNutrientInstanceIcon::OnTweenFinished(class UTwTweener* Tweener)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerNutrientInstanceIcon", "OnTweenFinished");

	Params::UPlayerNutrientInstanceIcon_OnTweenFinished_Params Parms{};

	Parms.Tweener = Tweener;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.PlayerNutrientInstanceIcon.OnFadeOutFinished
// (Final, Native, Protected)
// Parameters:
// class UTwTweener*                  Tweener                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayerNutrientInstanceIcon::OnFadeOutFinished(class UTwTweener* Tweener)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerNutrientInstanceIcon", "OnFadeOutFinished");

	Params::UPlayerNutrientInstanceIcon_OnFadeOutFinished_Params Parms{};

	Parms.Tweener = Tweener;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.PlayerNutrientWidget
// (None)

class UClass* UPlayerNutrientWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerNutrientWidget");

	return Clss;
}


// PlayerNutrientWidget ManeaterUI.Default__PlayerNutrientWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayerNutrientWidget* UPlayerNutrientWidget::GetDefaultObj()
{
	static class UPlayerNutrientWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerNutrientWidget*>(UPlayerNutrientWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.PlayerNutrientWidget.OnZeroOutStats
// (Final, Native, Protected)
// Parameters:

void UPlayerNutrientWidget::OnZeroOutStats()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerNutrientWidget", "OnZeroOutStats");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.PlayerNutrientWidget.OnTweenStarted
// (Final, Native, Protected)
// Parameters:

void UPlayerNutrientWidget::OnTweenStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerNutrientWidget", "OnTweenStarted");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.PlayerNutrientWidget.OnTweenFinished
// (Final, Native, Protected)
// Parameters:

void UPlayerNutrientWidget::OnTweenFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerNutrientWidget", "OnTweenFinished");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.PlayerNutrientWidget.OnPlayerNutrientGained
// (Final, Native, Protected)
// Parameters:
// enum class ENutrientType           NutrientType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NutrientGain                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFromObjective                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayerNutrientWidget::OnPlayerNutrientGained(enum class ENutrientType NutrientType, int32 NutrientGain, bool bFromObjective)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerNutrientWidget", "OnPlayerNutrientGained");

	Params::UPlayerNutrientWidget_OnPlayerNutrientGained_Params Parms{};

	Parms.NutrientType = NutrientType;
	Parms.NutrientGain = NutrientGain;
	Parms.bFromObjective = bFromObjective;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.PlayerNutrientWidget.OnOpacityOutFinished
// (Final, Native, Protected)
// Parameters:
// class UTwTweener*                  Tweener                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayerNutrientWidget::OnOpacityOutFinished(class UTwTweener* Tweener)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerNutrientWidget", "OnOpacityOutFinished");

	Params::UPlayerNutrientWidget_OnOpacityOutFinished_Params Parms{};

	Parms.Tweener = Tweener;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.PlayerNutrientWidget.OnOpacityInFinished
// (Final, Native, Protected)
// Parameters:
// class UTwTweener*                  Tweener                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayerNutrientWidget::OnOpacityInFinished(class UTwTweener* Tweener)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerNutrientWidget", "OnOpacityInFinished");

	Params::UPlayerNutrientWidget_OnOpacityInFinished_Params Parms{};

	Parms.Tweener = Tweener;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.PlayerNutrientWidget.OnNutrientsSpent
// (Final, Native, Protected)
// Parameters:
// enum class ENutrientType           NutrientType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NutrientSpent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayerNutrientWidget::OnNutrientsSpent(enum class ENutrientType NutrientType, int32 NutrientSpent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerNutrientWidget", "OnNutrientsSpent");

	Params::UPlayerNutrientWidget_OnNutrientsSpent_Params Parms{};

	Parms.NutrientType = NutrientType;
	Parms.NutrientSpent = NutrientSpent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.PlayerNutrientWidget.OnLifetimeEnded
// (Final, Native, Protected)
// Parameters:

void UPlayerNutrientWidget::OnLifetimeEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerNutrientWidget", "OnLifetimeEnded");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.PlayerSkillContainer
// (None)

class UClass* UPlayerSkillContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerSkillContainer");

	return Clss;
}


// PlayerSkillContainer ManeaterUI.Default__PlayerSkillContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayerSkillContainer* UPlayerSkillContainer::GetDefaultObj()
{
	static class UPlayerSkillContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerSkillContainer*>(UPlayerSkillContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.PlayerSkillWIdget
// (None)

class UClass* UPlayerSkillWIdget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerSkillWIdget");

	return Clss;
}


// PlayerSkillWIdget ManeaterUI.Default__PlayerSkillWIdget
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayerSkillWIdget* UPlayerSkillWIdget::GetDefaultObj()
{
	static class UPlayerSkillWIdget* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerSkillWIdget*>(UPlayerSkillWIdget::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.PlayerWaypointMapMarkerWidget
// (None)

class UClass* UPlayerWaypointMapMarkerWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerWaypointMapMarkerWidget");

	return Clss;
}


// PlayerWaypointMapMarkerWidget ManeaterUI.Default__PlayerWaypointMapMarkerWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayerWaypointMapMarkerWidget* UPlayerWaypointMapMarkerWidget::GetDefaultObj()
{
	static class UPlayerWaypointMapMarkerWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerWaypointMapMarkerWidget*>(UPlayerWaypointMapMarkerWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.QuestLogPanel
// (None)

class UClass* UQuestLogPanel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestLogPanel");

	return Clss;
}


// QuestLogPanel ManeaterUI.Default__QuestLogPanel
// (Public, ClassDefaultObject, ArchetypeObject)

class UQuestLogPanel* UQuestLogPanel::GetDefaultObj()
{
	static class UQuestLogPanel* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuestLogPanel*>(UQuestLogPanel::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.QuestLogPanel.SetRegionFilterButton
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UTwBaseButton*               RegionFilterButton                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UQuestLogPanel::SetRegionFilterButton(class UTwBaseButton* RegionFilterButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestLogPanel", "SetRegionFilterButton");

	Params::UQuestLogPanel_SetRegionFilterButton_Params Parms{};

	Parms.RegionFilterButton = RegionFilterButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.QuestLogPanel.PopulateObjectiveData
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UQuestLogPanel::PopulateObjectiveData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestLogPanel", "PopulateObjectiveData");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.QuestLogPanel.OnRegionFilter_Clicked
// (Final, Native, Protected)
// Parameters:
// struct FKey                        Button                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*          Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UQuestLogPanel::OnRegionFilter_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestLogPanel", "OnRegionFilter_Clicked");

	Params::UQuestLogPanel_OnRegionFilter_Clicked_Params Parms{};

	Parms.Button = Button;
	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.QuestLogPanel.OnObjectiveCollection_FocusOOB
// (Final, Native, Protected)
// Parameters:
// class UObjectiveCollectionWidget*  ObjectiveCollectionWidget                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EUINavigation           NavigationDir                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UQuestLogPanel::OnObjectiveCollection_FocusOOB(class UObjectiveCollectionWidget* ObjectiveCollectionWidget, enum class EUINavigation NavigationDir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestLogPanel", "OnObjectiveCollection_FocusOOB");

	Params::UQuestLogPanel_OnObjectiveCollection_FocusOOB_Params Parms{};

	Parms.ObjectiveCollectionWidget = ObjectiveCollectionWidget;
	Parms.NavigationDir = NavigationDir;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.QuestLogPanel.OnObjectiveCollection_FocusChanged
// (Final, Native, Protected)
// Parameters:
// class UObjectiveButtonWidget*      ObjectiveWidget                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UQuestLogPanel::OnObjectiveCollection_FocusChanged(class UObjectiveButtonWidget* ObjectiveWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestLogPanel", "OnObjectiveCollection_FocusChanged");

	Params::UQuestLogPanel_OnObjectiveCollection_FocusChanged_Params Parms{};

	Parms.ObjectiveWidget = ObjectiveWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.QuestLogPanel.OnControllerDisconnectedModalDismissed
// (Final, Native, Protected)
// Parameters:

void UQuestLogPanel::OnControllerDisconnectedModalDismissed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestLogPanel", "OnControllerDisconnectedModalDismissed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.QuestStatusHUDWidget
// (None)

class UClass* UQuestStatusHUDWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestStatusHUDWidget");

	return Clss;
}


// QuestStatusHUDWidget ManeaterUI.Default__QuestStatusHUDWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UQuestStatusHUDWidget* UQuestStatusHUDWidget::GetDefaultObj()
{
	static class UQuestStatusHUDWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuestStatusHUDWidget*>(UQuestStatusHUDWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.RegionHUDWidget
// (None)

class UClass* URegionHUDWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RegionHUDWidget");

	return Clss;
}


// RegionHUDWidget ManeaterUI.Default__RegionHUDWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class URegionHUDWidget* URegionHUDWidget::GetDefaultObj()
{
	static class URegionHUDWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<URegionHUDWidget*>(URegionHUDWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.RegionInfoListEntry
// (None)

class UClass* URegionInfoListEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RegionInfoListEntry");

	return Clss;
}


// RegionInfoListEntry ManeaterUI.Default__RegionInfoListEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class URegionInfoListEntry* URegionInfoListEntry::GetDefaultObj()
{
	static class URegionInfoListEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<URegionInfoListEntry*>(URegionInfoListEntry::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.RegionInfoWidget
// (None)

class UClass* URegionInfoWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RegionInfoWidget");

	return Clss;
}


// RegionInfoWidget ManeaterUI.Default__RegionInfoWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class URegionInfoWidget* URegionInfoWidget::GetDefaultObj()
{
	static class URegionInfoWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<URegionInfoWidget*>(URegionInfoWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.RegionInfoWidget.SetRegionData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRegionData                 NewRegionData                                                    (Parm, NativeAccessSpecifierPublic)

void URegionInfoWidget::SetRegionData(const struct FRegionData& NewRegionData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RegionInfoWidget", "SetRegionData");

	Params::URegionInfoWidget_SetRegionData_Params Parms{};

	Parms.NewRegionData = NewRegionData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.RegionInfoWidget.SetCurrentlyHovered
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bCurrentlyHovered                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URegionInfoWidget::SetCurrentlyHovered(bool bCurrentlyHovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RegionInfoWidget", "SetCurrentlyHovered");

	Params::URegionInfoWidget_SetCurrentlyHovered_Params Parms{};

	Parms.bCurrentlyHovered = bCurrentlyHovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ManeaterUI.RegionInfoWidget.OnRegionDataUpdated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URegionInfoWidget::OnRegionDataUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RegionInfoWidget", "OnRegionDataUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ManeaterUI.RegionInfoWidget.GetRegionName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText URegionInfoWidget::GetRegionName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RegionInfoWidget", "GetRegionName");

	Params::URegionInfoWidget_GetRegionName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ManeaterUI.RegionInfoWidget.GetRegion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EWorldRegion            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EWorldRegion URegionInfoWidget::GetRegion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RegionInfoWidget", "GetRegion");

	Params::URegionInfoWidget_GetRegion_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ManeaterUI.RegionObjectiveProgressWidget
// (None)

class UClass* URegionObjectiveProgressWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RegionObjectiveProgressWidget");

	return Clss;
}


// RegionObjectiveProgressWidget ManeaterUI.Default__RegionObjectiveProgressWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class URegionObjectiveProgressWidget* URegionObjectiveProgressWidget::GetDefaultObj()
{
	static class URegionObjectiveProgressWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<URegionObjectiveProgressWidget*>(URegionObjectiveProgressWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.RegionProgressWidget
// (None)

class UClass* URegionProgressWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RegionProgressWidget");

	return Clss;
}


// RegionProgressWidget ManeaterUI.Default__RegionProgressWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class URegionProgressWidget* URegionProgressWidget::GetDefaultObj()
{
	static class URegionProgressWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<URegionProgressWidget*>(URegionProgressWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.ResolutionSettingsStepper
// (None)

class UClass* UResolutionSettingsStepper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ResolutionSettingsStepper");

	return Clss;
}


// ResolutionSettingsStepper ManeaterUI.Default__ResolutionSettingsStepper
// (Public, ClassDefaultObject, ArchetypeObject)

class UResolutionSettingsStepper* UResolutionSettingsStepper::GetDefaultObj()
{
	static class UResolutionSettingsStepper* Default = nullptr;

	if (!Default)
		Default = static_cast<UResolutionSettingsStepper*>(UResolutionSettingsStepper::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.ResourceListWidget
// (None)

class UClass* UResourceListWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ResourceListWidget");

	return Clss;
}


// ResourceListWidget ManeaterUI.Default__ResourceListWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UResourceListWidget* UResourceListWidget::GetDefaultObj()
{
	static class UResourceListWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UResourceListWidget*>(UResourceListWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.ResourceListWidget.UpdateResources
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UResourceListWidget::UpdateResources()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResourceListWidget", "UpdateResources");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ResourceListWidget.OnNutrientsSpent
// (Final, Native, Protected)
// Parameters:
// enum class ENutrientType           NutrientType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NutrientSpent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UResourceListWidget::OnNutrientsSpent(enum class ENutrientType NutrientType, int32 NutrientSpent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResourceListWidget", "OnNutrientsSpent");

	Params::UResourceListWidget_OnNutrientsSpent_Params Parms{};

	Parms.NutrientType = NutrientType;
	Parms.NutrientSpent = NutrientSpent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.SaveSlotSelectWidget
// (None)

class UClass* USaveSlotSelectWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SaveSlotSelectWidget");

	return Clss;
}


// SaveSlotSelectWidget ManeaterUI.Default__SaveSlotSelectWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class USaveSlotSelectWidget* USaveSlotSelectWidget::GetDefaultObj()
{
	static class USaveSlotSelectWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<USaveSlotSelectWidget*>(USaveSlotSelectWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.SaveSlotSelectWidget.SetSaveSlotIdx
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Idx                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USaveSlotSelectWidget::SetSaveSlotIdx(int32 Idx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SaveSlotSelectWidget", "SetSaveSlotIdx");

	Params::USaveSlotSelectWidget_SetSaveSlotIdx_Params Parms{};

	Parms.Idx = Idx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.SaveSlotSelectWidget.OnRightButtonClicked
// (Final, Native, Protected)
// Parameters:
// struct FKey                        MouseButtonClicked                                               (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*          WidgetClicked                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USaveSlotSelectWidget::OnRightButtonClicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* WidgetClicked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SaveSlotSelectWidget", "OnRightButtonClicked");

	Params::USaveSlotSelectWidget_OnRightButtonClicked_Params Parms{};

	Parms.MouseButtonClicked = MouseButtonClicked;
	Parms.WidgetClicked = WidgetClicked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.SaveSlotSelectWidget.OnLeftButtonClicked
// (Final, Native, Protected)
// Parameters:
// struct FKey                        MouseButtonClicked                                               (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*          WidgetClicked                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USaveSlotSelectWidget::OnLeftButtonClicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* WidgetClicked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SaveSlotSelectWidget", "OnLeftButtonClicked");

	Params::USaveSlotSelectWidget_OnLeftButtonClicked_Params Parms{};

	Parms.MouseButtonClicked = MouseButtonClicked;
	Parms.WidgetClicked = WidgetClicked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.SaveSlotSelectWidget.IncrementSaveSlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USaveSlotSelectWidget::IncrementSaveSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SaveSlotSelectWidget", "IncrementSaveSlot");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.SaveSlotSelectWidget.DecrementSaveSlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USaveSlotSelectWidget::DecrementSaveSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SaveSlotSelectWidget", "DecrementSaveSlot");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.SettingsMenuController
// (None)

class UClass* USettingsMenuController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SettingsMenuController");

	return Clss;
}


// SettingsMenuController ManeaterUI.Default__SettingsMenuController
// (Public, ClassDefaultObject, ArchetypeObject)

class USettingsMenuController* USettingsMenuController::GetDefaultObj()
{
	static class USettingsMenuController* Default = nullptr;

	if (!Default)
		Default = static_cast<USettingsMenuController*>(USettingsMenuController::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.StoryCompleteWidget
// (None)

class UClass* UStoryCompleteWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StoryCompleteWidget");

	return Clss;
}


// StoryCompleteWidget ManeaterUI.Default__StoryCompleteWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UStoryCompleteWidget* UStoryCompleteWidget::GetDefaultObj()
{
	static class UStoryCompleteWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UStoryCompleteWidget*>(UStoryCompleteWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.StoryCompleteWidget.OnDismissStatsButton_Clicked
// (Final, Native, Public)
// Parameters:
// struct FKey                        MouseButtonClicked                                               (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*          OnWidgetClicked                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStoryCompleteWidget::OnDismissStatsButton_Clicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* OnWidgetClicked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoryCompleteWidget", "OnDismissStatsButton_Clicked");

	Params::UStoryCompleteWidget_OnDismissStatsButton_Clicked_Params Parms{};

	Parms.MouseButtonClicked = MouseButtonClicked;
	Parms.OnWidgetClicked = OnWidgetClicked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.StoryCompleteWidget.OnDismissCongratsButton_Clicked
// (Final, Native, Public)
// Parameters:
// struct FKey                        MouseButtonClicked                                               (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*          OnWidgetClicked                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStoryCompleteWidget::OnDismissCongratsButton_Clicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* OnWidgetClicked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoryCompleteWidget", "OnDismissCongratsButton_Clicked");

	Params::UStoryCompleteWidget_OnDismissCongratsButton_Clicked_Params Parms{};

	Parms.MouseButtonClicked = MouseButtonClicked;
	Parms.OnWidgetClicked = OnWidgetClicked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.SubtitleTextWidget
// (None)

class UClass* USubtitleTextWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubtitleTextWidget");

	return Clss;
}


// SubtitleTextWidget ManeaterUI.Default__SubtitleTextWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class USubtitleTextWidget* USubtitleTextWidget::GetDefaultObj()
{
	static class USubtitleTextWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<USubtitleTextWidget*>(USubtitleTextWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.SubtitleTextWidget.OnSubtitleTextUpdated
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class FText                        SubtitleText                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USubtitleTextWidget::OnSubtitleTextUpdated(class FText& SubtitleText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubtitleTextWidget", "OnSubtitleTextUpdated");

	Params::USubtitleTextWidget_OnSubtitleTextUpdated_Params Parms{};

	Parms.SubtitleText = SubtitleText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.TeleporterMapMarkerWidget
// (None)

class UClass* UTeleporterMapMarkerWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TeleporterMapMarkerWidget");

	return Clss;
}


// TeleporterMapMarkerWidget ManeaterUI.Default__TeleporterMapMarkerWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UTeleporterMapMarkerWidget* UTeleporterMapMarkerWidget::GetDefaultObj()
{
	static class UTeleporterMapMarkerWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UTeleporterMapMarkerWidget*>(UTeleporterMapMarkerWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.ThrashingControlsWidget
// (None)

class UClass* UThrashingControlsWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ThrashingControlsWidget");

	return Clss;
}


// ThrashingControlsWidget ManeaterUI.Default__ThrashingControlsWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UThrashingControlsWidget* UThrashingControlsWidget::GetDefaultObj()
{
	static class UThrashingControlsWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UThrashingControlsWidget*>(UThrashingControlsWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.ThrashingWidget
// (None)

class UClass* UThrashingWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ThrashingWidget");

	return Clss;
}


// ThrashingWidget ManeaterUI.Default__ThrashingWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UThrashingWidget* UThrashingWidget::GetDefaultObj()
{
	static class UThrashingWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UThrashingWidget*>(UThrashingWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.ThrashingWidget.OnUpdateThrashUI
// (Final, Native, Protected)
// Parameters:
// bool                               bShow                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPlayerSharkThrashed                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UThrashingWidget::OnUpdateThrashUI(bool bShow, bool bPlayerSharkThrashed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThrashingWidget", "OnUpdateThrashUI");

	Params::UThrashingWidget_OnUpdateThrashUI_Params Parms{};

	Parms.bShow = bShow;
	Parms.bPlayerSharkThrashed = bPlayerSharkThrashed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ThrashingWidget.OnThrashPulse
// (Final, Native, Protected)
// Parameters:

void UThrashingWidget::OnThrashPulse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThrashingWidget", "OnThrashPulse");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.ThrashingWidget.EnableThrashUI
// (Final, Native, Protected)
// Parameters:
// bool                               bPlayerSharkThrashed                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UThrashingWidget::EnableThrashUI(bool bPlayerSharkThrashed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThrashingWidget", "EnableThrashUI");

	Params::UThrashingWidget_EnableThrashUI_Params Parms{};

	Parms.bPlayerSharkThrashed = bPlayerSharkThrashed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.TimeTrialWidget
// (None)

class UClass* UTimeTrialWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TimeTrialWidget");

	return Clss;
}


// TimeTrialWidget ManeaterUI.Default__TimeTrialWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UTimeTrialWidget* UTimeTrialWidget::GetDefaultObj()
{
	static class UTimeTrialWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UTimeTrialWidget*>(UTimeTrialWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.TimeTrialWidget.TimeTrialTick
// (Final, Native, Protected)
// Parameters:
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTimeTrialWidget::TimeTrialTick(float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeTrialWidget", "TimeTrialTick");

	Params::UTimeTrialWidget_TimeTrialTick_Params Parms{};

	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.TimeTrialWidget.TimeTrialStart
// (Final, Native, Protected)
// Parameters:

void UTimeTrialWidget::TimeTrialStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeTrialWidget", "TimeTrialStart");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.TimeTrialWidget.TimeTrialRingPassed
// (Final, Native, Protected)
// Parameters:
// int32                              CurrentRing                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TotalRing                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTimeTrialWidget::TimeTrialRingPassed(int32 CurrentRing, int32 TotalRing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeTrialWidget", "TimeTrialRingPassed");

	Params::UTimeTrialWidget_TimeTrialRingPassed_Params Parms{};

	Parms.CurrentRing = CurrentRing;
	Parms.TotalRing = TotalRing;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.TimeTrialWidget.TimeTrialEnd
// (Final, Native, Protected)
// Parameters:

void UTimeTrialWidget::TimeTrialEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeTrialWidget", "TimeTrialEnd");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.TutorialInfoWidget
// (None)

class UClass* UTutorialInfoWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TutorialInfoWidget");

	return Clss;
}


// TutorialInfoWidget ManeaterUI.Default__TutorialInfoWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UTutorialInfoWidget* UTutorialInfoWidget::GetDefaultObj()
{
	static class UTutorialInfoWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UTutorialInfoWidget*>(UTutorialInfoWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.TutorialInfoWidget.TutorialFinished
// (Final, Native, Private)
// Parameters:

void UTutorialInfoWidget::TutorialFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialInfoWidget", "TutorialFinished");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.TutorialInfoWidget.StopTutorialTimer
// (Final, Native, Private)
// Parameters:

void UTutorialInfoWidget::StopTutorialTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialInfoWidget", "StopTutorialTimer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.TutorialInfoWidget.StartTutorialTimer
// (Final, Native, Private)
// Parameters:

void UTutorialInfoWidget::StartTutorialTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialInfoWidget", "StartTutorialTimer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.TutorialInfoWidget.SetObjectiveComplete
// (Final, Native, Private)
// Parameters:
// enum class ETutorialEventId        Objective                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTutorialInfoWidget::SetObjectiveComplete(enum class ETutorialEventId Objective)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialInfoWidget", "SetObjectiveComplete");

	Params::UTutorialInfoWidget_SetObjectiveComplete_Params Parms{};

	Parms.Objective = Objective;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.TutorialInfoWidget.SetEnabled
// (Final, Native, Public)
// Parameters:
// bool                               _bEnabled                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTutorialInfoWidget::SetEnabled(bool _bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialInfoWidget", "SetEnabled");

	Params::UTutorialInfoWidget_SetEnabled_Params Parms{};

	Parms._bEnabled = _bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.TutorialInfoWidget.RepeatedTutorialStepCompleted
// (Final, Native, Private)
// Parameters:
// int32                              Numberator                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Denomenator                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTutorialInfoWidget::RepeatedTutorialStepCompleted(int32 Numberator, int32 Denomenator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialInfoWidget", "RepeatedTutorialStepCompleted");

	Params::UTutorialInfoWidget_RepeatedTutorialStepCompleted_Params Parms{};

	Parms.Numberator = Numberator;
	Parms.Denomenator = Denomenator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.TutorialInfoWidget.RemoveObjective
// (Final, Native, Private)
// Parameters:
// enum class ETutorialEventId        TutorialEventId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTutorialInfoWidget::RemoveObjective(enum class ETutorialEventId TutorialEventId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialInfoWidget", "RemoveObjective");

	Params::UTutorialInfoWidget_RemoveObjective_Params Parms{};

	Parms.TutorialEventId = TutorialEventId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.TutorialInfoWidget.Disable
// (Final, Native, Public)
// Parameters:

void UTutorialInfoWidget::Disable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialInfoWidget", "Disable");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.TutorialInfoWidget.ClearAllObjectives
// (Final, Native, Private)
// Parameters:

void UTutorialInfoWidget::ClearAllObjectives()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialInfoWidget", "ClearAllObjectives");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.TutorialInfoWidget.AddObjective
// (Final, Native, Private, HasOutParams)
// Parameters:
// enum class ETutorialEventId        Objective                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FME_TutorialEvent           EventData                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UTutorialInfoWidget::AddObjective(enum class ETutorialEventId Objective, struct FME_TutorialEvent& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialInfoWidget", "AddObjective");

	Params::UTutorialInfoWidget_AddObjective_Params Parms{};

	Parms.Objective = Objective;
	Parms.EventData = EventData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.TutorialObjectiveListEntry
// (None)

class UClass* UTutorialObjectiveListEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TutorialObjectiveListEntry");

	return Clss;
}


// TutorialObjectiveListEntry ManeaterUI.Default__TutorialObjectiveListEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class UTutorialObjectiveListEntry* UTutorialObjectiveListEntry::GetDefaultObj()
{
	static class UTutorialObjectiveListEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<UTutorialObjectiveListEntry*>(UTutorialObjectiveListEntry::StaticClass()->DefaultObject);

	return Default;
}


// Class ManeaterUI.TUtorialPopupWidget
// (None)

class UClass* UTUtorialPopupWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TUtorialPopupWidget");

	return Clss;
}


// TUtorialPopupWidget ManeaterUI.Default__TUtorialPopupWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UTUtorialPopupWidget* UTUtorialPopupWidget::GetDefaultObj()
{
	static class UTUtorialPopupWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UTUtorialPopupWidget*>(UTUtorialPopupWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.TUtorialPopupWidget.OnTutorialButton_BP_Clicked
// (Final, Native, Public)
// Parameters:
// struct FKey                        MouseButtonClicked                                               (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*          OnWidgetClicked                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTUtorialPopupWidget::OnTutorialButton_BP_Clicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* OnWidgetClicked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TUtorialPopupWidget", "OnTutorialButton_BP_Clicked");

	Params::UTUtorialPopupWidget_OnTutorialButton_BP_Clicked_Params Parms{};

	Parms.MouseButtonClicked = MouseButtonClicked;
	Parms.OnWidgetClicked = OnWidgetClicked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.TUtorialPopupWidget.Disable
// (Final, Native, Public)
// Parameters:

void UTUtorialPopupWidget::Disable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TUtorialPopupWidget", "Disable");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.TUtorialSinglePopupWidget
// (None)

class UClass* UTUtorialSinglePopupWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TUtorialSinglePopupWidget");

	return Clss;
}


// TUtorialSinglePopupWidget ManeaterUI.Default__TUtorialSinglePopupWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UTUtorialSinglePopupWidget* UTUtorialSinglePopupWidget::GetDefaultObj()
{
	static class UTUtorialSinglePopupWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UTUtorialSinglePopupWidget*>(UTUtorialSinglePopupWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.TUtorialSinglePopupWidget.OnOkButton_Clicked
// (Final, Native, Public)
// Parameters:
// struct FKey                        MouseButtonClicked                                               (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*          OnWidgetClicked                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTUtorialSinglePopupWidget::OnOkButton_Clicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* OnWidgetClicked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TUtorialSinglePopupWidget", "OnOkButton_Clicked");

	Params::UTUtorialSinglePopupWidget_OnOkButton_Clicked_Params Parms{};

	Parms.MouseButtonClicked = MouseButtonClicked;
	Parms.OnWidgetClicked = OnWidgetClicked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.VideoSettingsWidget
// (None)

class UClass* UVideoSettingsWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VideoSettingsWidget");

	return Clss;
}


// VideoSettingsWidget ManeaterUI.Default__VideoSettingsWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UVideoSettingsWidget* UVideoSettingsWidget::GetDefaultObj()
{
	static class UVideoSettingsWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UVideoSettingsWidget*>(UVideoSettingsWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.VideoSettingsWidget.OnWindowModeChanged
// (Final, Native, Protected)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVideoSettingsWidget::OnWindowModeChanged(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VideoSettingsWidget", "OnWindowModeChanged");

	Params::UVideoSettingsWidget_OnWindowModeChanged_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.VideoSettingsWidget.OnResolutionChanged
// (Final, Native, Protected)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVideoSettingsWidget::OnResolutionChanged(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VideoSettingsWidget", "OnResolutionChanged");

	Params::UVideoSettingsWidget_OnResolutionChanged_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.VideoSettingsWidget.OnQualityChanged
// (Final, Native, Protected)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVideoSettingsWidget::OnQualityChanged(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VideoSettingsWidget", "OnQualityChanged");

	Params::UVideoSettingsWidget_OnQualityChanged_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.VideoSettingsWidget.OnOptionChanged
// (Final, Native, Protected)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVideoSettingsWidget::OnOptionChanged(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VideoSettingsWidget", "OnOptionChanged");

	Params::UVideoSettingsWidget_OnOptionChanged_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ManeaterUI.WorldMapWidget
// (None)

class UClass* UWorldMapWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WorldMapWidget");

	return Clss;
}


// WorldMapWidget ManeaterUI.Default__WorldMapWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UWorldMapWidget* UWorldMapWidget::GetDefaultObj()
{
	static class UWorldMapWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UWorldMapWidget*>(UWorldMapWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ManeaterUI.WorldMapWidget.UpdateRegionInfoWidgets
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWorldMapWidget::UpdateRegionInfoWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldMapWidget", "UpdateRegionInfoWidgets");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ManeaterUI.WorldMapWidget.SetDataForRegions
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FRegionData>         RegionData                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWorldMapWidget::SetDataForRegions(TArray<struct FRegionData>& RegionData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldMapWidget", "SetDataForRegions");

	Params::UWorldMapWidget_SetDataForRegions_Params Parms{};

	Parms.RegionData = RegionData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.WorldMapWidget.SetDataForRegion
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRegionData                 RegionData                                                       (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UWorldMapWidget::SetDataForRegion(struct FRegionData& RegionData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldMapWidget", "SetDataForRegion");

	Params::UWorldMapWidget_SetDataForRegion_Params Parms{};

	Parms.RegionData = RegionData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.WorldMapWidget.OnRegionDataChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWorldMapWidget::OnRegionDataChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldMapWidget", "OnRegionDataChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ManeaterUI.WorldMapWidget.OnObjectiveTrackEvent
// (Final, Native, Public)
// Parameters:
// class UME_PlayerObjective*         PlayerObjective                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldTrack                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNoTrackerUpdate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWorldMapWidget::OnObjectiveTrackEvent(class UME_PlayerObjective* PlayerObjective, bool bShouldTrack, bool bNoTrackerUpdate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldMapWidget", "OnObjectiveTrackEvent");

	Params::UWorldMapWidget_OnObjectiveTrackEvent_Params Parms{};

	Parms.PlayerObjective = PlayerObjective;
	Parms.bShouldTrack = bShouldTrack;
	Parms.bNoTrackerUpdate = bNoTrackerUpdate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ManeaterUI.WorldMapWidget.OnInputDeviceChanged
// (Final, Native, Public)
// Parameters:
// enum class EUserInputDevice        Device                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWorldMapWidget::OnInputDeviceChanged(enum class EUserInputDevice Device)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldMapWidget", "OnInputDeviceChanged");

	Params::UWorldMapWidget_OnInputDeviceChanged_Params Parms{};

	Parms.Device = Device;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


