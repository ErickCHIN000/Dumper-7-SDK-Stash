#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Goat2Mobile.GGCheapCableComponent
// (SceneComponent, PrimitiveComponent, StaticMeshComponent)

class UClass* UGGCheapCableComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GGCheapCableComponent");

	return Clss;
}


// GGCheapCableComponent Goat2Mobile.Default__GGCheapCableComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGGCheapCableComponent* UGGCheapCableComponent::GetDefaultObj()
{
	static class UGGCheapCableComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGGCheapCableComponent*>(UGGCheapCableComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function Goat2Mobile.GGCheapCableComponent.SetAttachEndToComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*             Component                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SocketName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGGCheapCableComponent::SetAttachEndToComponent(class USceneComponent* Component, class FName SocketName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGCheapCableComponent", "SetAttachEndToComponent");

	Params::UGGCheapCableComponent_SetAttachEndToComponent_Params Parms{};

	Parms.Component = Component;
	Parms.SocketName = SocketName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGCheapCableComponent.SetAttachEndTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ComponentProperty                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SocketName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGGCheapCableComponent::SetAttachEndTo(class AActor* Actor, class FName ComponentProperty, class FName SocketName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGCheapCableComponent", "SetAttachEndTo");

	Params::UGGCheapCableComponent_SetAttachEndTo_Params Parms{};

	Parms.Actor = Actor;
	Parms.ComponentProperty = ComponentProperty;
	Parms.SocketName = SocketName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGCheapCableComponent.ReplaceWithCheapCableComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCableComponent*             CableComponent                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGGCheapCableComponent*      ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGGCheapCableComponent* UGGCheapCableComponent::ReplaceWithCheapCableComponent(class UCableComponent* CableComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGCheapCableComponent", "ReplaceWithCheapCableComponent");

	Params::UGGCheapCableComponent_ReplaceWithCheapCableComponent_Params Parms{};

	Parms.CableComponent = CableComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Goat2Mobile.GGLevelStreamingGridAsset
// (None)

class UClass* UGGLevelStreamingGridAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GGLevelStreamingGridAsset");

	return Clss;
}


// GGLevelStreamingGridAsset Goat2Mobile.Default__GGLevelStreamingGridAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UGGLevelStreamingGridAsset* UGGLevelStreamingGridAsset::GetDefaultObj()
{
	static class UGGLevelStreamingGridAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UGGLevelStreamingGridAsset*>(UGGLevelStreamingGridAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class Goat2Mobile.GGLevelStreamingGridSubsystem
// (None)

class UClass* UGGLevelStreamingGridSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GGLevelStreamingGridSubsystem");

	return Clss;
}


// GGLevelStreamingGridSubsystem Goat2Mobile.Default__GGLevelStreamingGridSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UGGLevelStreamingGridSubsystem* UGGLevelStreamingGridSubsystem::GetDefaultObj()
{
	static class UGGLevelStreamingGridSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UGGLevelStreamingGridSubsystem*>(UGGLevelStreamingGridSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class Goat2Mobile.GGMobileContextualTouchWidget
// (None)

class UClass* UGGMobileContextualTouchWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GGMobileContextualTouchWidget");

	return Clss;
}


// GGMobileContextualTouchWidget Goat2Mobile.Default__GGMobileContextualTouchWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UGGMobileContextualTouchWidget* UGGMobileContextualTouchWidget::GetDefaultObj()
{
	static class UGGMobileContextualTouchWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UGGMobileContextualTouchWidget*>(UGGMobileContextualTouchWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function Goat2Mobile.GGMobileContextualTouchWidget.OnIntroFinished
// (Final, Native, Private)
// Parameters:
// class AGGIntro*                    Intro                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGGMobileContextualTouchWidget::OnIntroFinished(class AGGIntro* Intro)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileContextualTouchWidget", "OnIntroFinished");

	Params::UGGMobileContextualTouchWidget_OnIntroFinished_Params Parms{};

	Parms.Intro = Intro;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileContextualTouchWidget.ContextualButtonPressed
// (Final, Native, Private)
// Parameters:

void UGGMobileContextualTouchWidget::ContextualButtonPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileContextualTouchWidget", "ContextualButtonPressed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Goat2Mobile.GGMobileControlsLayoutBase
// (None)

class UClass* UGGMobileControlsLayoutBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GGMobileControlsLayoutBase");

	return Clss;
}


// GGMobileControlsLayoutBase Goat2Mobile.Default__GGMobileControlsLayoutBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UGGMobileControlsLayoutBase* UGGMobileControlsLayoutBase::GetDefaultObj()
{
	static class UGGMobileControlsLayoutBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UGGMobileControlsLayoutBase*>(UGGMobileControlsLayoutBase::StaticClass()->DefaultObject);

	return Default;
}


// Class Goat2Mobile.GGMobileControlsLayoutBike
// (None)

class UClass* UGGMobileControlsLayoutBike::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GGMobileControlsLayoutBike");

	return Clss;
}


// GGMobileControlsLayoutBike Goat2Mobile.Default__GGMobileControlsLayoutBike
// (Public, ClassDefaultObject, ArchetypeObject)

class UGGMobileControlsLayoutBike* UGGMobileControlsLayoutBike::GetDefaultObj()
{
	static class UGGMobileControlsLayoutBike* Default = nullptr;

	if (!Default)
		Default = static_cast<UGGMobileControlsLayoutBike*>(UGGMobileControlsLayoutBike::StaticClass()->DefaultObject);

	return Default;
}


// Function Goat2Mobile.GGMobileControlsLayoutBike.OnMenuOpened
// (Final, Native, Private)
// Parameters:
// struct FGameplayTag                InMenuTag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMenuNavigationContext      Context                                                          (Parm, NativeAccessSpecifierPublic)

void UGGMobileControlsLayoutBike::OnMenuOpened(const struct FGameplayTag& InMenuTag, const struct FMenuNavigationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutBike", "OnMenuOpened");

	Params::UGGMobileControlsLayoutBike_OnMenuOpened_Params Parms{};

	Parms.InMenuTag = InMenuTag;
	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsLayoutBike.OnExitVehicle
// (Final, Native, Private)
// Parameters:

void UGGMobileControlsLayoutBike::OnExitVehicle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutBike", "OnExitVehicle");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsLayoutBike.OnEnterVehicle
// (Final, Native, Private)
// Parameters:
// class AGGVehicle*                  Vehicle                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsDriver                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AGGCharacter*                Driver                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGGMobileControlsLayoutBike::OnEnterVehicle(class AGGVehicle* Vehicle, bool IsDriver, class AGGCharacter* Driver)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutBike", "OnEnterVehicle");

	Params::UGGMobileControlsLayoutBike_OnEnterVehicle_Params Parms{};

	Parms.Vehicle = Vehicle;
	Parms.IsDriver = IsDriver;
	Parms.Driver = Driver;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsLayoutBike.JumpReleased
// (Final, Native, Private)
// Parameters:

void UGGMobileControlsLayoutBike::JumpReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutBike", "JumpReleased");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsLayoutBike.JumpPressed
// (Final, Native, Private)
// Parameters:

void UGGMobileControlsLayoutBike::JumpPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutBike", "JumpPressed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsLayoutBike.ExitPressed
// (Final, Native, Private)
// Parameters:

void UGGMobileControlsLayoutBike::ExitPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutBike", "ExitPressed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Goat2Mobile.GGMobileControlsLayoutBrowsing
// (None)

class UClass* UGGMobileControlsLayoutBrowsing::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GGMobileControlsLayoutBrowsing");

	return Clss;
}


// GGMobileControlsLayoutBrowsing Goat2Mobile.Default__GGMobileControlsLayoutBrowsing
// (Public, ClassDefaultObject, ArchetypeObject)

class UGGMobileControlsLayoutBrowsing* UGGMobileControlsLayoutBrowsing::GetDefaultObj()
{
	static class UGGMobileControlsLayoutBrowsing* Default = nullptr;

	if (!Default)
		Default = static_cast<UGGMobileControlsLayoutBrowsing*>(UGGMobileControlsLayoutBrowsing::StaticClass()->DefaultObject);

	return Default;
}


// Function Goat2Mobile.GGMobileControlsLayoutBrowsing.SetBrowsingText
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        BrowsingText                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGGMobileControlsLayoutBrowsing::SetBrowsingText(class FText& BrowsingText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutBrowsing", "SetBrowsingText");

	Params::UGGMobileControlsLayoutBrowsing_SetBrowsingText_Params Parms{};

	Parms.BrowsingText = BrowsingText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Goat2Mobile.GGMobileControlsLayoutBrowsing.BrowseRightButtonPressed
// (Final, Native, Private)
// Parameters:

void UGGMobileControlsLayoutBrowsing::BrowseRightButtonPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutBrowsing", "BrowseRightButtonPressed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsLayoutBrowsing.BrowseLeftButtonPressed
// (Final, Native, Private)
// Parameters:

void UGGMobileControlsLayoutBrowsing::BrowseLeftButtonPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutBrowsing", "BrowseLeftButtonPressed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsLayoutBrowsing.BackButtonPressed
// (Final, Native, Private)
// Parameters:

void UGGMobileControlsLayoutBrowsing::BackButtonPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutBrowsing", "BackButtonPressed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Goat2Mobile.GGMobileControlsLayoutDefault
// (None)

class UClass* UGGMobileControlsLayoutDefault::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GGMobileControlsLayoutDefault");

	return Clss;
}


// GGMobileControlsLayoutDefault Goat2Mobile.Default__GGMobileControlsLayoutDefault
// (Public, ClassDefaultObject, ArchetypeObject)

class UGGMobileControlsLayoutDefault* UGGMobileControlsLayoutDefault::GetDefaultObj()
{
	static class UGGMobileControlsLayoutDefault* Default = nullptr;

	if (!Default)
		Default = static_cast<UGGMobileControlsLayoutDefault*>(UGGMobileControlsLayoutDefault::StaticClass()->DefaultObject);

	return Default;
}


// Function Goat2Mobile.GGMobileControlsLayoutDefault.UpdateTargetInteractable
// (Final, Native, Private)
// Parameters:
// class UObject*                     Interactable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGGMobileControlsLayoutDefault::UpdateTargetInteractable(class UObject* Interactable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutDefault", "UpdateTargetInteractable");

	Params::UGGMobileControlsLayoutDefault_UpdateTargetInteractable_Params Parms{};

	Parms.Interactable = Interactable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsLayoutDefault.TrickTogglePressed
// (Final, Native, Private)
// Parameters:

void UGGMobileControlsLayoutDefault::TrickTogglePressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutDefault", "TrickTogglePressed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsLayoutDefault.ToggleGoatEggVisibility
// (Final, Native, Private)
// Parameters:
// bool                               bEnteredEgg                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGGMobileControlsLayoutDefault::ToggleGoatEggVisibility(bool bEnteredEgg)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutDefault", "ToggleGoatEggVisibility");

	Params::UGGMobileControlsLayoutDefault_ToggleGoatEggVisibility_Params Parms{};

	Parms.bEnteredEgg = bEnteredEgg;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsLayoutDefault.PassengerSeatPressed
// (Final, Native, Private)
// Parameters:

void UGGMobileControlsLayoutDefault::PassengerSeatPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutDefault", "PassengerSeatPressed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsLayoutDefault.OnRagdollEnabled
// (Final, Native, Private, HasOutParams)
// Parameters:
// class ULSCharacterMovementComponent*MovementComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ACharacter*                  RagdollingCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRagdollStateChangeSettings StateChangeSettings                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGGMobileControlsLayoutDefault::OnRagdollEnabled(class ULSCharacterMovementComponent* MovementComp, class ACharacter* RagdollingCharacter, struct FRagdollStateChangeSettings& StateChangeSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutDefault", "OnRagdollEnabled");

	Params::UGGMobileControlsLayoutDefault_OnRagdollEnabled_Params Parms{};

	Parms.MovementComp = MovementComp;
	Parms.RagdollingCharacter = RagdollingCharacter;
	Parms.StateChangeSettings = StateChangeSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsLayoutDefault.OnMenuOpened
// (Final, Native, Private)
// Parameters:
// struct FGameplayTag                InMenuTag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMenuNavigationContext      Context                                                          (Parm, NativeAccessSpecifierPublic)

void UGGMobileControlsLayoutDefault::OnMenuOpened(const struct FGameplayTag& InMenuTag, const struct FMenuNavigationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutDefault", "OnMenuOpened");

	Params::UGGMobileControlsLayoutDefault_OnMenuOpened_Params Parms{};

	Parms.InMenuTag = InMenuTag;
	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsLayoutDefault.OnIntroFinished
// (Final, Native, Private)
// Parameters:
// class AGGIntro*                    Intro                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGGMobileControlsLayoutDefault::OnIntroFinished(class AGGIntro* Intro)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutDefault", "OnIntroFinished");

	Params::UGGMobileControlsLayoutDefault_OnIntroFinished_Params Parms{};

	Parms.Intro = Intro;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsLayoutDefault.OnInteractButtonUpdatedVisibility
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// enum class ESlateVisibility        NewVisibility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGGMobileControlsLayoutDefault::OnInteractButtonUpdatedVisibility(enum class ESlateVisibility NewVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutDefault", "OnInteractButtonUpdatedVisibility");

	Params::UGGMobileControlsLayoutDefault_OnInteractButtonUpdatedVisibility_Params Parms{};

	Parms.NewVisibility = NewVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Goat2Mobile.GGMobileControlsLayoutDefault.OnGoatReleased
// (Final, Native, Private)
// Parameters:
// class AActor*                      CatchedActor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Catcher                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGGMobileControlsLayoutDefault::OnGoatReleased(class AActor* CatchedActor, class AActor* Catcher)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutDefault", "OnGoatReleased");

	Params::UGGMobileControlsLayoutDefault_OnGoatReleased_Params Parms{};

	Parms.CatchedActor = CatchedActor;
	Parms.Catcher = Catcher;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsLayoutDefault.OnGoatLanded
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UGGMobileControlsLayoutDefault::OnGoatLanded(struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutDefault", "OnGoatLanded");

	Params::UGGMobileControlsLayoutDefault_OnGoatLanded_Params Parms{};

	Parms.Hit = Hit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsLayoutDefault.OnGoatGearChanged
// (Final, Native, Private)
// Parameters:
// class AGGGoat*                     Goat                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGGMobileControlsLayoutDefault::OnGoatGearChanged(class AGGGoat* Goat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutDefault", "OnGoatGearChanged");

	Params::UGGMobileControlsLayoutDefault_OnGoatGearChanged_Params Parms{};

	Parms.Goat = Goat;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsLayoutDefault.OnEnterVehicle
// (Final, Native, Private)
// Parameters:
// class AGGVehicle*                  Vehicle                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsDriver                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AGGCharacter*                Driver                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGGMobileControlsLayoutDefault::OnEnterVehicle(class AGGVehicle* Vehicle, bool IsDriver, class AGGCharacter* Driver)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutDefault", "OnEnterVehicle");

	Params::UGGMobileControlsLayoutDefault_OnEnterVehicle_Params Parms{};

	Parms.Vehicle = Vehicle;
	Parms.IsDriver = IsDriver;
	Parms.Driver = Driver;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsLayoutDefault.OnCinematicUpdated
// (Final, Native, Public)
// Parameters:
// bool                               bCinematicFinished                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGGMobileControlsLayoutDefault::OnCinematicUpdated(bool bCinematicFinished)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutDefault", "OnCinematicUpdated");

	Params::UGGMobileControlsLayoutDefault_OnCinematicUpdated_Params Parms{};

	Parms.bCinematicFinished = bCinematicFinished;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsLayoutDefault.OnCharacterTeleported
// (Final, Native, Private, HasOutParams, HasDefaults)
// Parameters:
// class AGGCharacter*                Character                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  OldTransform                                                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UGGMobileControlsLayoutDefault::OnCharacterTeleported(class AGGCharacter* Character, struct FTransform& OldTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutDefault", "OnCharacterTeleported");

	Params::UGGMobileControlsLayoutDefault_OnCharacterTeleported_Params Parms{};

	Parms.Character = Character;
	Parms.OldTransform = OldTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsLayoutDefault.JumpReleased
// (Final, Native, Private)
// Parameters:

void UGGMobileControlsLayoutDefault::JumpReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutDefault", "JumpReleased");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsLayoutDefault.JumpPressed
// (Final, Native, Private)
// Parameters:

void UGGMobileControlsLayoutDefault::JumpPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutDefault", "JumpPressed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsLayoutDefault.InteractReleased
// (Final, Native, Private)
// Parameters:

void UGGMobileControlsLayoutDefault::InteractReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutDefault", "InteractReleased");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsLayoutDefault.InteractPressed
// (Final, Native, Private)
// Parameters:

void UGGMobileControlsLayoutDefault::InteractPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutDefault", "InteractPressed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsLayoutDefault.HeadbuttUp
// (Final, Native, Private)
// Parameters:

void UGGMobileControlsLayoutDefault::HeadbuttUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutDefault", "HeadbuttUp");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsLayoutDefault.Headbutt
// (Final, Native, Private)
// Parameters:

void UGGMobileControlsLayoutDefault::Headbutt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutDefault", "Headbutt");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsLayoutDefault.AbilityDown
// (Final, Native, Private)
// Parameters:

void UGGMobileControlsLayoutDefault::AbilityDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutDefault", "AbilityDown");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Goat2Mobile.GGMobileControlsLayoutUFO
// (None)

class UClass* UGGMobileControlsLayoutUFO::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GGMobileControlsLayoutUFO");

	return Clss;
}


// GGMobileControlsLayoutUFO Goat2Mobile.Default__GGMobileControlsLayoutUFO
// (Public, ClassDefaultObject, ArchetypeObject)

class UGGMobileControlsLayoutUFO* UGGMobileControlsLayoutUFO::GetDefaultObj()
{
	static class UGGMobileControlsLayoutUFO* Default = nullptr;

	if (!Default)
		Default = static_cast<UGGMobileControlsLayoutUFO*>(UGGMobileControlsLayoutUFO::StaticClass()->DefaultObject);

	return Default;
}


// Function Goat2Mobile.GGMobileControlsLayoutUFO.UpButtonPressed
// (Final, Native, Private)
// Parameters:

void UGGMobileControlsLayoutUFO::UpButtonPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutUFO", "UpButtonPressed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsLayoutUFO.ShootButtonPressed
// (Final, Native, Private)
// Parameters:

void UGGMobileControlsLayoutUFO::ShootButtonPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutUFO", "ShootButtonPressed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsLayoutUFO.MovementButtonReleased
// (Final, Native, Private)
// Parameters:

void UGGMobileControlsLayoutUFO::MovementButtonReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutUFO", "MovementButtonReleased");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsLayoutUFO.EjectButtonPressed
// (Final, Native, Private)
// Parameters:

void UGGMobileControlsLayoutUFO::EjectButtonPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutUFO", "EjectButtonPressed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsLayoutUFO.DownButtonPressed
// (Final, Native, Private)
// Parameters:

void UGGMobileControlsLayoutUFO::DownButtonPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutUFO", "DownButtonPressed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsLayoutUFO.BeamButtonPressed
// (Final, Native, Private)
// Parameters:

void UGGMobileControlsLayoutUFO::BeamButtonPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutUFO", "BeamButtonPressed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Goat2Mobile.GGMobileControlsLayoutVehicle
// (None)

class UClass* UGGMobileControlsLayoutVehicle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GGMobileControlsLayoutVehicle");

	return Clss;
}


// GGMobileControlsLayoutVehicle Goat2Mobile.Default__GGMobileControlsLayoutVehicle
// (Public, ClassDefaultObject, ArchetypeObject)

class UGGMobileControlsLayoutVehicle* UGGMobileControlsLayoutVehicle::GetDefaultObj()
{
	static class UGGMobileControlsLayoutVehicle* Default = nullptr;

	if (!Default)
		Default = static_cast<UGGMobileControlsLayoutVehicle*>(UGGMobileControlsLayoutVehicle::StaticClass()->DefaultObject);

	return Default;
}


// Function Goat2Mobile.GGMobileControlsLayoutVehicle.ReverseReleased
// (Final, Native, Private)
// Parameters:

void UGGMobileControlsLayoutVehicle::ReverseReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutVehicle", "ReverseReleased");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsLayoutVehicle.ReversePressed
// (Final, Native, Private)
// Parameters:

void UGGMobileControlsLayoutVehicle::ReversePressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutVehicle", "ReversePressed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsLayoutVehicle.ReBindEnterAndExitVehicleDelegates
// (Final, Native, Private)
// Parameters:
// class AGGGoat*                     OldGoat                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AGGGoat*                     NewGoat                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGGMobileControlsLayoutVehicle::ReBindEnterAndExitVehicleDelegates(class AGGGoat* OldGoat, class AGGGoat* NewGoat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutVehicle", "ReBindEnterAndExitVehicleDelegates");

	Params::UGGMobileControlsLayoutVehicle_ReBindEnterAndExitVehicleDelegates_Params Parms{};

	Parms.OldGoat = OldGoat;
	Parms.NewGoat = NewGoat;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsLayoutVehicle.OnExitVehicle
// (Final, Native, Protected)
// Parameters:
// class AGGCharacter*                Character                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AGGVehicle*                  Vehicle                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGGMobileControlsLayoutVehicle::OnExitVehicle(class AGGCharacter* Character, class AGGVehicle* Vehicle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutVehicle", "OnExitVehicle");

	Params::UGGMobileControlsLayoutVehicle_OnExitVehicle_Params Parms{};

	Parms.Character = Character;
	Parms.Vehicle = Vehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsLayoutVehicle.OnEnterVehicle
// (Final, Native, Protected)
// Parameters:
// class AGGCharacter*                Character                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AGGVehicle*                  Vehicle                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGGMobileControlsLayoutVehicle::OnEnterVehicle(class AGGCharacter* Character, class AGGVehicle* Vehicle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutVehicle", "OnEnterVehicle");

	Params::UGGMobileControlsLayoutVehicle_OnEnterVehicle_Params Parms{};

	Parms.Character = Character;
	Parms.Vehicle = Vehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsLayoutVehicle.OnCinematicUpdated
// (Final, Native, Private)
// Parameters:
// bool                               bCinematicFinished                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGGMobileControlsLayoutVehicle::OnCinematicUpdated(bool bCinematicFinished)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutVehicle", "OnCinematicUpdated");

	Params::UGGMobileControlsLayoutVehicle_OnCinematicUpdated_Params Parms{};

	Parms.bCinematicFinished = bCinematicFinished;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsLayoutVehicle.GasReleased
// (Final, Native, Private)
// Parameters:

void UGGMobileControlsLayoutVehicle::GasReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutVehicle", "GasReleased");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsLayoutVehicle.GasPressed
// (Final, Native, Private)
// Parameters:

void UGGMobileControlsLayoutVehicle::GasPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutVehicle", "GasPressed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsLayoutVehicle.ExitVehiclePressed
// (Final, Native, Private)
// Parameters:

void UGGMobileControlsLayoutVehicle::ExitVehiclePressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsLayoutVehicle", "ExitVehiclePressed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Goat2Mobile.GGMobileControlsUserWidget
// (None)

class UClass* UGGMobileControlsUserWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GGMobileControlsUserWidget");

	return Clss;
}


// GGMobileControlsUserWidget Goat2Mobile.Default__GGMobileControlsUserWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UGGMobileControlsUserWidget* UGGMobileControlsUserWidget::GetDefaultObj()
{
	static class UGGMobileControlsUserWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UGGMobileControlsUserWidget*>(UGGMobileControlsUserWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function Goat2Mobile.GGMobileControlsUserWidget.UpdateTeleportationProgress
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              CurrentTimeHeld                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToFinish                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGGMobileControlsUserWidget::UpdateTeleportationProgress(float CurrentTimeHeld, float TimeToFinish)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsUserWidget", "UpdateTeleportationProgress");

	Params::UGGMobileControlsUserWidget_UpdateTeleportationProgress_Params Parms{};

	Parms.CurrentTimeHeld = CurrentTimeHeld;
	Parms.TimeToFinish = TimeToFinish;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Goat2Mobile.GGMobileControlsUserWidget.SettingsButtonPressed
// (Final, Native, Public)
// Parameters:

void UGGMobileControlsUserWidget::SettingsButtonPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsUserWidget", "SettingsButtonPressed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsUserWidget.ResetUI
// (Final, Native, Protected)
// Parameters:
// class AGGGoat*                     OldGoat                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AGGGoat*                     NewGoat                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGGMobileControlsUserWidget::ResetUI(class AGGGoat* OldGoat, class AGGGoat* NewGoat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsUserWidget", "ResetUI");

	Params::UGGMobileControlsUserWidget_ResetUI_Params Parms{};

	Parms.OldGoat = OldGoat;
	Parms.NewGoat = NewGoat;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsUserWidget.PauseButtonReleased
// (Final, Native, Public)
// Parameters:

void UGGMobileControlsUserWidget::PauseButtonReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsUserWidget", "PauseButtonReleased");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsUserWidget.PauseButtonPressed
// (Final, Native, Public)
// Parameters:

void UGGMobileControlsUserWidget::PauseButtonPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsUserWidget", "PauseButtonPressed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsUserWidget.OnStoppedBrowsing
// (Final, Native, Protected)
// Parameters:

void UGGMobileControlsUserWidget::OnStoppedBrowsing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsUserWidget", "OnStoppedBrowsing");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsUserWidget.OnStartedBrowsing
// (Final, Native, Protected)
// Parameters:
// class FText                        BrowsingText                                                     (ConstParm, Parm, NativeAccessSpecifierPublic)

void UGGMobileControlsUserWidget::OnStartedBrowsing(class FText BrowsingText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsUserWidget", "OnStartedBrowsing");

	Params::UGGMobileControlsUserWidget_OnStartedBrowsing_Params Parms{};

	Parms.BrowsingText = BrowsingText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsUserWidget.OnQuestDiscovered
// (Final, Native, Private)
// Parameters:
// float                              SplashDuration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGGMobileControlsUserWidget::OnQuestDiscovered(float SplashDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsUserWidget", "OnQuestDiscovered");

	Params::UGGMobileControlsUserWidget_OnQuestDiscovered_Params Parms{};

	Parms.SplashDuration = SplashDuration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsUserWidget.OnMenuExited
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGGMobileControlsUserWidget::OnMenuExited(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsUserWidget", "OnMenuExited");

	Params::UGGMobileControlsUserWidget_OnMenuExited_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsUserWidget.OnMenuEntered
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGGMobileControlsUserWidget::OnMenuEntered(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsUserWidget", "OnMenuEntered");

	Params::UGGMobileControlsUserWidget_OnMenuEntered_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsUserWidget.OnLobbyUpdate
// (Final, Native, Private)
// Parameters:
// enum class EGGLobbyUpdateType      LobbyUpdateType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGGMobileControlsUserWidget::OnLobbyUpdate(enum class EGGLobbyUpdateType LobbyUpdateType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsUserWidget", "OnLobbyUpdate");

	Params::UGGMobileControlsUserWidget_OnLobbyUpdate_Params Parms{};

	Parms.LobbyUpdateType = LobbyUpdateType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsUserWidget.OnLoadingScreenRemoved
// (Final, Native, Private)
// Parameters:
// class AGGPlayerController*         Controller                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoadingScreenType      Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERemovalReason          RemovalReason                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGGMobileControlsUserWidget::OnLoadingScreenRemoved(class AGGPlayerController* Controller, enum class ELoadingScreenType Type, enum class ERemovalReason RemovalReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsUserWidget", "OnLoadingScreenRemoved");

	Params::UGGMobileControlsUserWidget_OnLoadingScreenRemoved_Params Parms{};

	Parms.Controller = Controller;
	Parms.Type = Type;
	Parms.RemovalReason = RemovalReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsUserWidget.OnIntroFinished
// (Final, Native, Protected)
// Parameters:
// class AGGIntro*                    Intro                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGGMobileControlsUserWidget::OnIntroFinished(class AGGIntro* Intro)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsUserWidget", "OnIntroFinished");

	Params::UGGMobileControlsUserWidget_OnIntroFinished_Params Parms{};

	Parms.Intro = Intro;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsUserWidget.OnExitVehicle
// (Final, Native, Protected, Const)
// Parameters:

void UGGMobileControlsUserWidget::OnExitVehicle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsUserWidget", "OnExitVehicle");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsUserWidget.OnExitUFO
// (Final, Native, Protected)
// Parameters:

void UGGMobileControlsUserWidget::OnExitUFO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsUserWidget", "OnExitUFO");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsUserWidget.OnEnterVehicle
// (Final, Native, Protected)
// Parameters:
// class AGGVehicle*                  Vehicle                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsDriver                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AGGCharacter*                Driver                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGGMobileControlsUserWidget::OnEnterVehicle(class AGGVehicle* Vehicle, bool IsDriver, class AGGCharacter* Driver)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsUserWidget", "OnEnterVehicle");

	Params::UGGMobileControlsUserWidget_OnEnterVehicle_Params Parms{};

	Parms.Vehicle = Vehicle;
	Parms.IsDriver = IsDriver;
	Parms.Driver = Driver;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsUserWidget.OnEnterUFO
// (Final, Native, Protected)
// Parameters:

void UGGMobileControlsUserWidget::OnEnterUFO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsUserWidget", "OnEnterUFO");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsUserWidget.OnEnterExitDamCannon
// (Final, Native, Private)
// Parameters:
// bool                               bIsInsideCannon                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGGMobileControlsUserWidget::OnEnterExitDamCannon(bool bIsInsideCannon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsUserWidget", "OnEnterExitDamCannon");

	Params::UGGMobileControlsUserWidget_OnEnterExitDamCannon_Params Parms{};

	Parms.bIsInsideCannon = bIsInsideCannon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsUserWidget.OnCinematicUpdated
// (Final, Native, Protected)
// Parameters:
// bool                               bCinematicFinished                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGGMobileControlsUserWidget::OnCinematicUpdated(bool bCinematicFinished)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsUserWidget", "OnCinematicUpdated");

	Params::UGGMobileControlsUserWidget_OnCinematicUpdated_Params Parms{};

	Parms.bCinematicFinished = bCinematicFinished;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Goat2Mobile.GGMobileControlsUserWidget.GetImageMatchingActionInput
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ActionInput                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UImage*                      ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UImage* UGGMobileControlsUserWidget::GetImageMatchingActionInput(class FName& ActionInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsUserWidget", "GetImageMatchingActionInput");

	Params::UGGMobileControlsUserWidget_GetImageMatchingActionInput_Params Parms{};

	Parms.ActionInput = ActionInput;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Goat2Mobile.GGMobileControlsUserWidget.DisableAllTutorialOverlays
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGGMobileControlsUserWidget::DisableAllTutorialOverlays()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileControlsUserWidget", "DisableAllTutorialOverlays");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Goat2Mobile.GGMobileDistanceWarningWidget
// (None)

class UClass* UGGMobileDistanceWarningWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GGMobileDistanceWarningWidget");

	return Clss;
}


// GGMobileDistanceWarningWidget Goat2Mobile.Default__GGMobileDistanceWarningWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UGGMobileDistanceWarningWidget* UGGMobileDistanceWarningWidget::GetDefaultObj()
{
	static class UGGMobileDistanceWarningWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UGGMobileDistanceWarningWidget*>(UGGMobileDistanceWarningWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function Goat2Mobile.GGMobileDistanceWarningWidget.OnToggleDistanceWarning
// (Final, Native, Protected, Const)
// Parameters:
// bool                               bShow                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGGMobileDistanceWarningWidget::OnToggleDistanceWarning(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GGMobileDistanceWarningWidget", "OnToggleDistanceWarning");

	Params::UGGMobileDistanceWarningWidget_OnToggleDistanceWarning_Params Parms{};

	Parms.bShow = bShow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Goat2Mobile.GGMobileHUDUserWidget
// (None)

class UClass* UGGMobileHUDUserWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GGMobileHUDUserWidget");

	return Clss;
}


// GGMobileHUDUserWidget Goat2Mobile.Default__GGMobileHUDUserWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UGGMobileHUDUserWidget* UGGMobileHUDUserWidget::GetDefaultObj()
{
	static class UGGMobileHUDUserWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UGGMobileHUDUserWidget*>(UGGMobileHUDUserWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class Goat2Mobile.GGMobileLODActor
// (Actor)

class UClass* AGGMobileLODActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GGMobileLODActor");

	return Clss;
}


// GGMobileLODActor Goat2Mobile.Default__GGMobileLODActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AGGMobileLODActor* AGGMobileLODActor::GetDefaultObj()
{
	static class AGGMobileLODActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AGGMobileLODActor*>(AGGMobileLODActor::StaticClass()->DefaultObject);

	return Default;
}


// Class Goat2Mobile.GGMobileLODRedirector
// (Actor)

class UClass* AGGMobileLODRedirector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GGMobileLODRedirector");

	return Clss;
}


// GGMobileLODRedirector Goat2Mobile.Default__GGMobileLODRedirector
// (Public, ClassDefaultObject, ArchetypeObject)

class AGGMobileLODRedirector* AGGMobileLODRedirector::GetDefaultObj()
{
	static class AGGMobileLODRedirector* Default = nullptr;

	if (!Default)
		Default = static_cast<AGGMobileLODRedirector*>(AGGMobileLODRedirector::StaticClass()->DefaultObject);

	return Default;
}


// Class Goat2Mobile.GGMobilePerformanceWarnings
// (None)

class UClass* UGGMobilePerformanceWarnings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GGMobilePerformanceWarnings");

	return Clss;
}


// GGMobilePerformanceWarnings Goat2Mobile.Default__GGMobilePerformanceWarnings
// (Public, ClassDefaultObject, ArchetypeObject)

class UGGMobilePerformanceWarnings* UGGMobilePerformanceWarnings::GetDefaultObj()
{
	static class UGGMobilePerformanceWarnings* Default = nullptr;

	if (!Default)
		Default = static_cast<UGGMobilePerformanceWarnings*>(UGGMobilePerformanceWarnings::StaticClass()->DefaultObject);

	return Default;
}


// Class Goat2Mobile.GGMobilePostProcessVolume
// (Actor)

class UClass* AGGMobilePostProcessVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GGMobilePostProcessVolume");

	return Clss;
}


// GGMobilePostProcessVolume Goat2Mobile.Default__GGMobilePostProcessVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class AGGMobilePostProcessVolume* AGGMobilePostProcessVolume::GetDefaultObj()
{
	static class AGGMobilePostProcessVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<AGGMobilePostProcessVolume*>(AGGMobilePostProcessVolume::StaticClass()->DefaultObject);

	return Default;
}


// Class Goat2Mobile.GGPhysicsDebuggerSubsystem
// (None)

class UClass* UGGPhysicsDebuggerSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GGPhysicsDebuggerSubsystem");

	return Clss;
}


// GGPhysicsDebuggerSubsystem Goat2Mobile.Default__GGPhysicsDebuggerSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UGGPhysicsDebuggerSubsystem* UGGPhysicsDebuggerSubsystem::GetDefaultObj()
{
	static class UGGPhysicsDebuggerSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UGGPhysicsDebuggerSubsystem*>(UGGPhysicsDebuggerSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class Goat2Mobile.GGSeasonalContentManager
// (Actor)

class UClass* AGGSeasonalContentManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GGSeasonalContentManager");

	return Clss;
}


// GGSeasonalContentManager Goat2Mobile.Default__GGSeasonalContentManager
// (Public, ClassDefaultObject, ArchetypeObject)

class AGGSeasonalContentManager* AGGSeasonalContentManager::GetDefaultObj()
{
	static class AGGSeasonalContentManager* Default = nullptr;

	if (!Default)
		Default = static_cast<AGGSeasonalContentManager*>(AGGSeasonalContentManager::StaticClass()->DefaultObject);

	return Default;
}


// Class Goat2Mobile.StaticMeshLoadingSubsystem
// (None)

class UClass* UStaticMeshLoadingSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StaticMeshLoadingSubsystem");

	return Clss;
}


// StaticMeshLoadingSubsystem Goat2Mobile.Default__StaticMeshLoadingSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UStaticMeshLoadingSubsystem* UStaticMeshLoadingSubsystem::GetDefaultObj()
{
	static class UStaticMeshLoadingSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UStaticMeshLoadingSubsystem*>(UStaticMeshLoadingSubsystem::StaticClass()->DefaultObject);

	return Default;
}

}


