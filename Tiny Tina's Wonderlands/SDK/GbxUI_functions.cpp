#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GbxUI.GbxGFxMovie
// (None)

class UClass* UGbxGFxMovie::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxMovie");

	return Clss;
}


// GbxGFxMovie GbxUI.Default__GbxGFxMovie
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxMovie* UGbxGFxMovie::GetDefaultObj()
{
	static class UGbxGFxMovie* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxMovie*>(UGbxGFxMovie::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxGFxMovie.TranslateWorldToLocal
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector                     LocationWorldSpace                                               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   OutPositionLocal                                                 (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPlayerViewportRelative                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseMovieDimensions                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxGFxMovie::TranslateWorldToLocal(struct FVector& LocationWorldSpace, struct FVector2D* OutPositionLocal, bool bPlayerViewportRelative, bool bUseMovieDimensions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMovie", "TranslateWorldToLocal");

	Params::UGbxGFxMovie_TranslateWorldToLocal_Params Parms{};

	Parms.LocationWorldSpace = LocationWorldSpace;
	Parms.bPlayerViewportRelative = bPlayerViewportRelative;
	Parms.bUseMovieDimensions = bUseMovieDimensions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPositionLocal != nullptr)
		*OutPositionLocal = std::move(Parms.OutPositionLocal);

	return Parms.ReturnValue;

}


// Function GbxUI.GbxGFxMovie.TranslateToScreen
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector2D                   Point                                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UGbxGFxMovie::TranslateToScreen(struct FVector2D& Point)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMovie", "TranslateToScreen");

	Params::UGbxGFxMovie_TranslateToScreen_Params Parms{};

	Parms.Point = Point;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxGFxMovie.TranslateScreenToLocal
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector2D                   Point                                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseMovieDimensions                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UGbxGFxMovie::TranslateScreenToLocal(struct FVector2D& Point, bool bUseMovieDimensions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMovie", "TranslateScreenToLocal");

	Params::UGbxGFxMovie_TranslateScreenToLocal_Params Parms{};

	Parms.Point = Point;
	Parms.bUseMovieDimensions = bUseMovieDimensions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxGFxMovie.TranslateRectToScreen
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FBox2D                      Rect                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FBox2D                      ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FBox2D UGbxGFxMovie::TranslateRectToScreen(struct FBox2D& Rect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMovie", "TranslateRectToScreen");

	Params::UGbxGFxMovie_TranslateRectToScreen_Params Parms{};

	Parms.Rect = Rect;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxGFxMovie.SpawnMovie
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class AGbxPlayerController*        NewGPCOwner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*      RenderTarget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxGFxMovie::SpawnMovie(class AGbxPlayerController* NewGPCOwner, class UTextureRenderTarget2D* RenderTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMovie", "SpawnMovie");

	Params::UGbxGFxMovie_SpawnMovie_Params Parms{};

	Parms.NewGPCOwner = NewGPCOwner;
	Parms.RenderTarget = RenderTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxMovie.SpawnGbxGFxMovie
// (Final, Native, Static, Public, BlueprintCallable, Const)
// Parameters:
// class AGbxPlayerController*        GbxPlayerController                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UGbxGFxMovie>    MovieClass                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGbxGFxMovie*                ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxGFxMovie* UGbxGFxMovie::SpawnGbxGFxMovie(class AGbxPlayerController* GbxPlayerController, TSubclassOf<class UGbxGFxMovie> MovieClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMovie", "SpawnGbxGFxMovie");

	Params::UGbxGFxMovie_SpawnGbxGFxMovie_Params Parms{};

	Parms.GbxPlayerController = GbxPlayerController;
	Parms.MovieClass = MovieClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxGFxMovie.SetViewportToPlayerScreen
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class AGbxPlayerController*        Pc                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxGFxMovie::SetViewportToPlayerScreen(class AGbxPlayerController* Pc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMovie", "SetViewportToPlayerScreen");

	Params::UGbxGFxMovie_SetViewportToPlayerScreen_Params Parms{};

	Parms.Pc = Pc;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxMovie.SetOffsetDisplayTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FTransform                  Transform                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UGbxGFxMovie::SetOffsetDisplayTransform(struct FTransform& Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMovie", "SetOffsetDisplayTransform");

	Params::UGbxGFxMovie_SetOffsetDisplayTransform_Params Parms{};

	Parms.Transform = Transform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxMovie.SetBaseDisplayTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FTransform                  Transform                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UGbxGFxMovie::SetBaseDisplayTransform(struct FTransform& Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMovie", "SetBaseDisplayTransform");

	Params::UGbxGFxMovie_SetBaseDisplayTransform_Params Parms{};

	Parms.Transform = Transform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxMovie.SetAudioEnabled
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxGFxMovie::SetAudioEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMovie", "SetAudioEnabled");

	Params::UGbxGFxMovie_SetAudioEnabled_Params Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxMovie.SetAnchor
// (Final, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// struct FGbxGFxAnchor               Anchor                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UGbxGFxMovie::SetAnchor(struct FGbxGFxAnchor& Anchor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMovie", "SetAnchor");

	Params::UGbxGFxMovie_SetAnchor_Params Parms{};

	Parms.Anchor = Anchor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxMovie.RunUIEventAudio
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// class FName                        EventName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ProviderHistory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxGFxMovie::RunUIEventAudio(class FName EventName, const class FString& ProviderHistory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMovie", "RunUIEventAudio");

	Params::UGbxGFxMovie_RunUIEventAudio_Params Parms{};

	Parms.EventName = EventName;
	Parms.ProviderHistory = ProviderHistory;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxGFxMovie.GetViewportOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UGbxGFxMovie::GetViewportOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMovie", "GetViewportOffset");

	Params::UGbxGFxMovie_GetViewportOffset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxGFxMovie.GetViewportDimensions
// (Final, Native, Public, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UGbxGFxMovie::GetViewportDimensions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMovie", "GetViewportDimensions");

	Params::UGbxGFxMovie_GetViewportDimensions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxGFxMovie.GetStageDimensions
// (Final, Native, Public, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UGbxGFxMovie::GetStageDimensions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMovie", "GetStageDimensions");

	Params::UGbxGFxMovie_GetStageDimensions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxGFxMovie.GetOwningPlayerPawn
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class APawn* UGbxGFxMovie::GetOwningPlayerPawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMovie", "GetOwningPlayerPawn");

	Params::UGbxGFxMovie_GetOwningPlayerPawn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxGFxMovie.GetOwningPlayerController
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AGbxPlayerController*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AGbxPlayerController* UGbxGFxMovie::GetOwningPlayerController()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMovie", "GetOwningPlayerController");

	Params::UGbxGFxMovie_GetOwningPlayerController_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxGFxMovie.GetOffsetDisplayTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform UGbxGFxMovie::GetOffsetDisplayTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMovie", "GetOffsetDisplayTransform");

	Params::UGbxGFxMovie_GetOffsetDisplayTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxGFxMovie.GetMovieDimensions
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UGbxGFxMovie::GetMovieDimensions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMovie", "GetMovieDimensions");

	Params::UGbxGFxMovie_GetMovieDimensions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxGFxMovie.GetBaseDisplayTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform UGbxGFxMovie::GetBaseDisplayTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMovie", "GetBaseDisplayTransform");

	Params::UGbxGFxMovie_GetBaseDisplayTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxGFxMovie.extTransitionComplete
// (Final, Native, Public, Const)
// Parameters:

void UGbxGFxMovie::ExtTransitionComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMovie", "extTransitionComplete");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxMovie.extAnimationFinished
// (Native, Public, Const)
// Parameters:
// class FString                      TargetName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxGFxMovie::ExtAnimationFinished(const class FString& TargetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMovie", "extAnimationFinished");

	Params::UGbxGFxMovie_ExtAnimationFinished_Params Parms{};

	Parms.TargetName = TargetName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxMovie.ApplyNewAudioSettings
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UDataTable*                  NewDataTable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EUIAudioSettingOperationMergeOperation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxGFxMovie::ApplyNewAudioSettings(class UDataTable* NewDataTable, enum class EUIAudioSettingOperation MergeOperation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMovie", "ApplyNewAudioSettings");

	Params::UGbxGFxMovie_ApplyNewAudioSettings_Params Parms{};

	Parms.NewDataTable = NewDataTable;
	Parms.MergeOperation = MergeOperation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxUI.GbxGFxMenu
// (None)

class UClass* UGbxGFxMenu::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxMenu");

	return Clss;
}


// GbxGFxMenu GbxUI.Default__GbxGFxMenu
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxMenu* UGbxGFxMenu::GetDefaultObj()
{
	static class UGbxGFxMenu* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxMenu*>(UGbxGFxMenu::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxGFxMenu.SetWidgetAdjacency
// (Final, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TScriptInterface<class IGbxFocusableWidget>Widget                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// struct FGbxFocusableWidgetAdjacencyInfoAdjacencyInfo                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UGbxGFxMenu::SetWidgetAdjacency(TScriptInterface<class IGbxFocusableWidget> Widget, struct FGbxFocusableWidgetAdjacencyInfo& AdjacencyInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMenu", "SetWidgetAdjacency");

	Params::UGbxGFxMenu_SetWidgetAdjacency_Params Parms{};

	Parms.Widget = Widget;
	Parms.AdjacencyInfo = AdjacencyInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxMenu.SetFocusedWidget
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// TScriptInterface<class IGbxFocusableWidget>WidgetToFocus                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// bool                               bFromMouse                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxGFxMenu::SetFocusedWidget(TScriptInterface<class IGbxFocusableWidget> WidgetToFocus, bool bFromMouse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMenu", "SetFocusedWidget");

	Params::UGbxGFxMenu_SetFocusedWidget_Params Parms{};

	Parms.WidgetToFocus = WidgetToFocus;
	Parms.bFromMouse = bFromMouse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxMenu.SetFocusableWidgetAdjancency
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// TScriptInterface<class IGbxFocusableWidget>Widget                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class UObject*                     AdjacentUp                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     AdjacentDown                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     AdjacentLeft                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     AdjacentRight                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxGFxMenu::SetFocusableWidgetAdjancency(TScriptInterface<class IGbxFocusableWidget> Widget, class UObject* AdjacentUp, class UObject* AdjacentDown, class UObject* AdjacentLeft, class UObject* AdjacentRight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMenu", "SetFocusableWidgetAdjancency");

	Params::UGbxGFxMenu_SetFocusableWidgetAdjancency_Params Parms{};

	Parms.Widget = Widget;
	Parms.AdjacentUp = AdjacentUp;
	Parms.AdjacentDown = AdjacentDown;
	Parms.AdjacentLeft = AdjacentLeft;
	Parms.AdjacentRight = AdjacentRight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxMenu.RegisterFocusableWidgetWithAdjacency
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// TScriptInterface<class IGbxFocusableWidget>Widget                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class UObject*                     AdjacentUp                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     AdjacentDown                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     AdjacentLeft                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     AdjacentRight                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxGFxMenu::RegisterFocusableWidgetWithAdjacency(TScriptInterface<class IGbxFocusableWidget> Widget, class UObject* AdjacentUp, class UObject* AdjacentDown, class UObject* AdjacentLeft, class UObject* AdjacentRight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMenu", "RegisterFocusableWidgetWithAdjacency");

	Params::UGbxGFxMenu_RegisterFocusableWidgetWithAdjacency_Params Parms{};

	Parms.Widget = Widget;
	Parms.AdjacentUp = AdjacentUp;
	Parms.AdjacentDown = AdjacentDown;
	Parms.AdjacentLeft = AdjacentLeft;
	Parms.AdjacentRight = AdjacentRight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxMenu.RegisterFocusableWidget
// (Final, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TScriptInterface<class IGbxFocusableWidget>Widget                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// struct FGbxFocusableWidgetAdjacencyInfoAdjacencyInfo                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UGbxGFxMenu::RegisterFocusableWidget(TScriptInterface<class IGbxFocusableWidget> Widget, struct FGbxFocusableWidgetAdjacencyInfo& AdjacencyInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMenu", "RegisterFocusableWidget");

	Params::UGbxGFxMenu_RegisterFocusableWidget_Params Parms{};

	Parms.Widget = Widget;
	Parms.AdjacencyInfo = AdjacencyInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxMenu.MenuStack_Clear
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:

void UGbxGFxMenu::MenuStack_Clear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMenu", "MenuStack_Clear");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxMenu.IsWidgetFocused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     WidgetInQuestion                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxGFxMenu::IsWidgetFocused(class UObject* WidgetInQuestion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMenu", "IsWidgetFocused");

	Params::UGbxGFxMenu_IsWidgetFocused_Params Parms{};

	Parms.WidgetInQuestion = WidgetInQuestion;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxGFxMenu.GetFocusedWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UGbxGFxMenu::GetFocusedWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMenu", "GetFocusedWidget");

	Params::UGbxGFxMenu_GetFocusedWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxUI.GbxGFxHUDWidget
// (None)

class UClass* UGbxGFxHUDWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxHUDWidget");

	return Clss;
}


// GbxGFxHUDWidget GbxUI.Default__GbxGFxHUDWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxHUDWidget* UGbxGFxHUDWidget::GetDefaultObj()
{
	static class UGbxGFxHUDWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxHUDWidget*>(UGbxGFxHUDWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxGFxHUDWidget.extInitAnimationFinished
// (Native, Public, Const)
// Parameters:

void UGbxGFxHUDWidget::ExtInitAnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxHUDWidget", "extInitAnimationFinished");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxHUDWidget.extHideAnimationFinished
// (Native, Public, Const)
// Parameters:

void UGbxGFxHUDWidget::ExtHideAnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxHUDWidget", "extHideAnimationFinished");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxUI.GbxUserWidget
// (None)

class UClass* UGbxUserWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxUserWidget");

	return Clss;
}


// GbxUserWidget GbxUI.Default__GbxUserWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxUserWidget* UGbxUserWidget::GetDefaultObj()
{
	static class UGbxUserWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxUserWidget*>(UGbxUserWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxUserWidget.SetLabelText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        LabelText                                                        (Parm, NativeAccessSpecifierPublic)

void UGbxUserWidget::SetLabelText(class FText LabelText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUserWidget", "SetLabelText");

	Params::UGbxUserWidget_SetLabelText_Params Parms{};

	Parms.LabelText = LabelText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxUserWidget.OnFocusableWidgetUnhovered
// (Native, Public)
// Parameters:

void UGbxUserWidget::OnFocusableWidgetUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUserWidget", "OnFocusableWidgetUnhovered");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxUserWidget.OnFocusableWidgetReleased
// (Native, Public)
// Parameters:

void UGbxUserWidget::OnFocusableWidgetReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUserWidget", "OnFocusableWidgetReleased");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxUserWidget.OnFocusableWidgetPressed
// (Native, Public)
// Parameters:

void UGbxUserWidget::OnFocusableWidgetPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUserWidget", "OnFocusableWidgetPressed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxUserWidget.OnFocusableWidgetHovered
// (Native, Public)
// Parameters:

void UGbxUserWidget::OnFocusableWidgetHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUserWidget", "OnFocusableWidgetHovered");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxUserWidget.OnFocusableWidgetClicked
// (Native, Public)
// Parameters:

void UGbxUserWidget::OnFocusableWidgetClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUserWidget", "OnFocusableWidgetClicked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxUserWidget.IsRegisteredAsFocusableWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxUserWidget::IsRegisteredAsFocusableWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUserWidget", "IsRegisteredAsFocusableWidget");

	Params::UGbxUserWidget_IsRegisteredAsFocusableWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxUserWidget.IsFocusableWidgetStateHovered
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EGbxFocusableWidgetStateState                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxUserWidget::IsFocusableWidgetStateHovered(enum class EGbxFocusableWidgetState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUserWidget", "IsFocusableWidgetStateHovered");

	Params::UGbxUserWidget_IsFocusableWidgetStateHovered_Params Parms{};

	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxUserWidget.IsFocusableWidgetStateFocused
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EGbxFocusableWidgetStateState                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxUserWidget::IsFocusableWidgetStateFocused(enum class EGbxFocusableWidgetState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUserWidget", "IsFocusableWidgetStateFocused");

	Params::UGbxUserWidget_IsFocusableWidgetStateFocused_Params Parms{};

	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxUserWidget.HandleFocusableWidgetStateChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGbxFocusableWidgetStateNewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bBecameFocused                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLostFocus                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxUserWidget::HandleFocusableWidgetStateChanged(enum class EGbxFocusableWidgetState NewState, bool bBecameFocused, bool bLostFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUserWidget", "HandleFocusableWidgetStateChanged");

	Params::UGbxUserWidget_HandleFocusableWidgetStateChanged_Params Parms{};

	Parms.NewState = NewState;
	Parms.bBecameFocused = bBecameFocused;
	Parms.bLostFocus = bLostFocus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxUI.GbxUserWidget.GotoAndStop
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FFrameTime                  StopTime                                                         (ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidgetAnimation*            InAnimation                                                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxUserWidget::GotoAndStop(const struct FFrameTime& StopTime, class UWidgetAnimation* InAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUserWidget", "GotoAndStop");

	Params::UGbxUserWidget_GotoAndStop_Params Parms{};

	Parms.StopTime = StopTime;
	Parms.InAnimation = InAnimation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxUserWidget.GetAllChildWidgetsOfClass
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSubclassOf<class UWidget>         TargetClass                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UWidget*>             OutputArray                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UGbxUserWidget::GetAllChildWidgetsOfClass(TSubclassOf<class UWidget> TargetClass, TArray<class UWidget*>& OutputArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUserWidget", "GetAllChildWidgetsOfClass");

	Params::UGbxUserWidget_GetAllChildWidgetsOfClass_Params Parms{};

	Parms.TargetClass = TargetClass;
	Parms.OutputArray = OutputArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxUI.GbxUmgMenu
// (None)

class UClass* UGbxUmgMenu::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxUmgMenu");

	return Clss;
}


// GbxUmgMenu GbxUI.Default__GbxUmgMenu
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxUmgMenu* UGbxUmgMenu::GetDefaultObj()
{
	static class UGbxUmgMenu* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxUmgMenu*>(UGbxUmgMenu::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxUmgMenu.SetWidgetAdjacency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Widget                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGbxFocusableWidgetAdjacencyInfoAdjacencyInfo                                                    (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)

void UGbxUmgMenu::SetWidgetAdjacency(class UObject* Widget, const struct FGbxFocusableWidgetAdjacencyInfo& AdjacencyInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUmgMenu", "SetWidgetAdjacency");

	Params::UGbxUmgMenu_SetWidgetAdjacency_Params Parms{};

	Parms.Widget = Widget;
	Parms.AdjacencyInfo = AdjacencyInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxUmgMenu.SetSlateFocusedWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxUmgMenu::SetSlateFocusedWidget(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUmgMenu", "SetSlateFocusedWidget");

	Params::UGbxUmgMenu_SetSlateFocusedWidget_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxUmgMenu.SetHintBarContainer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TScriptInterface<class IGbxHintBarWidgetContainer>InContainer                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)

void UGbxUmgMenu::SetHintBarContainer(TScriptInterface<class IGbxHintBarWidgetContainer>& InContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUmgMenu", "SetHintBarContainer");

	Params::UGbxUmgMenu_SetHintBarContainer_Params Parms{};

	Parms.InContainer = InContainer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxUmgMenu.SetFocusedWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Widget                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFromMouse                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxUmgMenu::SetFocusedWidget(class UObject* Widget, bool bFromMouse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUmgMenu", "SetFocusedWidget");

	Params::UGbxUmgMenu_SetFocusedWidget_Params Parms{};

	Parms.Widget = Widget;
	Parms.bFromMouse = bFromMouse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxUmgMenu.SetFocusableWidgetAdjancency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Widget                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     AdjacentUp                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     AdjacentDown                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     AdjacentLeft                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     AdjacentRight                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxUmgMenu::SetFocusableWidgetAdjancency(class UObject* Widget, class UObject* AdjacentUp, class UObject* AdjacentDown, class UObject* AdjacentLeft, class UObject* AdjacentRight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUmgMenu", "SetFocusableWidgetAdjancency");

	Params::UGbxUmgMenu_SetFocusableWidgetAdjancency_Params Parms{};

	Parms.Widget = Widget;
	Parms.AdjacentUp = AdjacentUp;
	Parms.AdjacentDown = AdjacentDown;
	Parms.AdjacentLeft = AdjacentLeft;
	Parms.AdjacentRight = AdjacentRight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxUmgMenu.RegisterStagePlacedHint
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TScriptInterface<class IGbxHintWidget>InHintWidget                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class FName                        InInputAction                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxUmgMenu::RegisterStagePlacedHint(TScriptInterface<class IGbxHintWidget>& InHintWidget, class FName InInputAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUmgMenu", "RegisterStagePlacedHint");

	Params::UGbxUmgMenu_RegisterStagePlacedHint_Params Parms{};

	Parms.InHintWidget = InHintWidget;
	Parms.InInputAction = InInputAction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxUmgMenu.RegisterFocusableWidgetWithAdjacency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Widget                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     AdjacentUp                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     AdjacentDown                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     AdjacentLeft                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     AdjacentRight                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxUmgMenu::RegisterFocusableWidgetWithAdjacency(class UObject* Widget, class UObject* AdjacentUp, class UObject* AdjacentDown, class UObject* AdjacentLeft, class UObject* AdjacentRight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUmgMenu", "RegisterFocusableWidgetWithAdjacency");

	Params::UGbxUmgMenu_RegisterFocusableWidgetWithAdjacency_Params Parms{};

	Parms.Widget = Widget;
	Parms.AdjacentUp = AdjacentUp;
	Parms.AdjacentDown = AdjacentDown;
	Parms.AdjacentLeft = AdjacentLeft;
	Parms.AdjacentRight = AdjacentRight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxUmgMenu.RegisterFocusableWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Widget                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGbxFocusableWidgetAdjacencyInfoAdjacencyInfo                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UGbxUmgMenu::RegisterFocusableWidget(class UObject* Widget, const struct FGbxFocusableWidgetAdjacencyInfo& AdjacencyInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUmgMenu", "RegisterFocusableWidget");

	Params::UGbxUmgMenu_RegisterFocusableWidget_Params Parms{};

	Parms.Widget = Widget;
	Parms.AdjacencyInfo = AdjacencyInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxUmgMenu.PopulateHintBar
// (Native, Public, BlueprintCallable)
// Parameters:

void UGbxUmgMenu::PopulateHintBar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUmgMenu", "PopulateHintBar");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxUmgMenu.NavigateBack
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGbxUmgMenu::NavigateBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUmgMenu", "NavigateBack");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxUmgMenu.MenuStack_SwitchTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGbxMenuData*                MenuDataIn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UGbxUmgMenu::MenuStack_SwitchTo(class UGbxMenuData* MenuDataIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUmgMenu", "MenuStack_SwitchTo");

	Params::UGbxUmgMenu_MenuStack_SwitchTo_Params Parms{};

	Parms.MenuDataIn = MenuDataIn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxUmgMenu.MenuStack_Push
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGbxMenuData*                MenuDataIn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UGbxUmgMenu::MenuStack_Push(class UGbxMenuData* MenuDataIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUmgMenu", "MenuStack_Push");

	Params::UGbxUmgMenu_MenuStack_Push_Params Parms{};

	Parms.MenuDataIn = MenuDataIn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxUmgMenu.MenuStack_PopToSwitchTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Menu                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGbxMenuData*                MenuDataIn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UGbxUmgMenu::MenuStack_PopToSwitchTo(class UObject* Menu, class UGbxMenuData* MenuDataIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUmgMenu", "MenuStack_PopToSwitchTo");

	Params::UGbxUmgMenu_MenuStack_PopToSwitchTo_Params Parms{};

	Parms.Menu = Menu;
	Parms.MenuDataIn = MenuDataIn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxUmgMenu.MenuStack_PopTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Menu                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxUmgMenu::MenuStack_PopTo(class UObject* Menu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUmgMenu", "MenuStack_PopTo");

	Params::UGbxUmgMenu_MenuStack_PopTo_Params Parms{};

	Parms.Menu = Menu;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxUmgMenu.MenuStack_Pop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGbxUmgMenu::MenuStack_Pop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUmgMenu", "MenuStack_Pop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxUmgMenu.MenuStack_Clear
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGbxUmgMenu::MenuStack_Clear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUmgMenu", "MenuStack_Clear");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxUmgMenu.IsWidgetFocused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     WidgetInQuestion                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxUmgMenu::IsWidgetFocused(class UObject* WidgetInQuestion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUmgMenu", "IsWidgetFocused");

	Params::UGbxUmgMenu_IsWidgetFocused_Params Parms{};

	Parms.WidgetInQuestion = WidgetInQuestion;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxUmgMenu.IsActiveMenuOnStack
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxUmgMenu::IsActiveMenuOnStack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUmgMenu", "IsActiveMenuOnStack");

	Params::UGbxUmgMenu_IsActiveMenuOnStack_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxUmgMenu.HandleMenuInputDeviceChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EGbxMenuInputDevice     NewInputDevice                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxUmgMenu::HandleMenuInputDeviceChanged(enum class EGbxMenuInputDevice NewInputDevice)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUmgMenu", "HandleMenuInputDeviceChanged");

	Params::UGbxUmgMenu_HandleMenuInputDeviceChanged_Params Parms{};

	Parms.NewInputDevice = NewInputDevice;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxUI.GbxUmgMenu.HandleMenuInputAction
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                        InputAction                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ControllerId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxUmgMenu::HandleMenuInputAction(class FName& InputAction, int32 ControllerId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUmgMenu", "HandleMenuInputAction");

	Params::UGbxUmgMenu_HandleMenuInputAction_Params Parms{};

	Parms.InputAction = InputAction;
	Parms.ControllerId = ControllerId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxUI.GbxUmgMenu.HandleMenuInit
// (Event, Public, BlueprintEvent)
// Parameters:

void UGbxUmgMenu::HandleMenuInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUmgMenu", "HandleMenuInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxUI.GbxUmgMenu.HandleMenuDeinit
// (Event, Public, BlueprintEvent)
// Parameters:

void UGbxUmgMenu::HandleMenuDeinit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUmgMenu", "HandleMenuDeinit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxUI.GbxUmgMenu.HandleMenuDeactivate
// (Event, Public, BlueprintEvent)
// Parameters:

void UGbxUmgMenu::HandleMenuDeactivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUmgMenu", "HandleMenuDeactivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxUI.GbxUmgMenu.HandleMenuAspectRatioChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              NewAspectRatio                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxUmgMenu::HandleMenuAspectRatioChanged(float NewAspectRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUmgMenu", "HandleMenuAspectRatioChanged");

	Params::UGbxUmgMenu_HandleMenuAspectRatioChanged_Params Parms{};

	Parms.NewAspectRatio = NewAspectRatio;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxUI.GbxUmgMenu.HandleMenuActivate
// (Event, Public, BlueprintEvent)
// Parameters:

void UGbxUmgMenu::HandleMenuActivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUmgMenu", "HandleMenuActivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxUI.GbxUmgMenu.GetListItemFactory
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGbxListItemFactory*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxListItemFactory* UGbxUmgMenu::GetListItemFactory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUmgMenu", "GetListItemFactory");

	Params::UGbxUmgMenu_GetListItemFactory_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxUmgMenu.GetFocusedWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UGbxUmgMenu::GetFocusedWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUmgMenu", "GetFocusedWidget");

	Params::UGbxUmgMenu_GetFocusedWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxUmgMenu.GetCurrentInputDevice
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EGbxMenuInputDevice     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EGbxMenuInputDevice UGbxUmgMenu::GetCurrentInputDevice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUmgMenu", "GetCurrentInputDevice");

	Params::UGbxUmgMenu_GetCurrentInputDevice_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxUI.GbxMenuSwitcherSubmenu
// (None)

class UClass* UGbxMenuSwitcherSubmenu::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxMenuSwitcherSubmenu");

	return Clss;
}


// GbxMenuSwitcherSubmenu GbxUI.Default__GbxMenuSwitcherSubmenu
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxMenuSwitcherSubmenu* UGbxMenuSwitcherSubmenu::GetDefaultObj()
{
	static class UGbxMenuSwitcherSubmenu* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxMenuSwitcherSubmenu*>(UGbxMenuSwitcherSubmenu::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxDebugMenuSubmenu
// (None)

class UClass* UGbxDebugMenuSubmenu::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxDebugMenuSubmenu");

	return Clss;
}


// GbxDebugMenuSubmenu GbxUI.Default__GbxDebugMenuSubmenu
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxDebugMenuSubmenu* UGbxDebugMenuSubmenu::GetDefaultObj()
{
	static class UGbxDebugMenuSubmenu* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxDebugMenuSubmenu*>(UGbxDebugMenuSubmenu::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxMenuData
// (None)

class UClass* UGbxMenuData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxMenuData");

	return Clss;
}


// GbxMenuData GbxUI.Default__GbxMenuData
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxMenuData* UGbxMenuData::GetDefaultObj()
{
	static class UGbxMenuData* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxMenuData*>(UGbxMenuData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxGFxMenuData
// (None)

class UClass* UGbxGFxMenuData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxMenuData");

	return Clss;
}


// GbxGFxMenuData GbxUI.Default__GbxGFxMenuData
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxMenuData* UGbxGFxMenuData::GetDefaultObj()
{
	static class UGbxGFxMenuData* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxMenuData*>(UGbxGFxMenuData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxGFxObject
// (None)

class UClass* UGbxGFxObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxObject");

	return Clss;
}


// GbxGFxObject GbxUI.Default__GbxGFxObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxObject* UGbxGFxObject::GetDefaultObj()
{
	static class UGbxGFxObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxObject*>(UGbxGFxObject::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxGFxObject.SetOffsetDisplayTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  Transform                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UGbxGFxObject::SetOffsetDisplayTransform(struct FTransform& Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxObject", "SetOffsetDisplayTransform");

	Params::UGbxGFxObject_SetOffsetDisplayTransform_Params Parms{};

	Parms.Transform = Transform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxObject.SetBaseDisplayTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  Transform                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UGbxGFxObject::SetBaseDisplayTransform(struct FTransform& Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxObject", "SetBaseDisplayTransform");

	Params::UGbxGFxObject_SetBaseDisplayTransform_Params Parms{};

	Parms.Transform = Transform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxObject.RotateAboutPoint
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// float                              Degrees                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Point                                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxGFxObject::RotateAboutPoint(float Degrees, struct FVector2D& Point)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxObject", "RotateAboutPoint");

	Params::UGbxGFxObject_RotateAboutPoint_Params Parms{};

	Parms.Degrees = Degrees;
	Parms.Point = Point;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxObject.GetOffsetDisplayTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform UGbxGFxObject::GetOffsetDisplayTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxObject", "GetOffsetDisplayTransform");

	Params::UGbxGFxObject_GetOffsetDisplayTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxGFxObject.GetBaseDisplayTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform UGbxGFxObject::GetBaseDisplayTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxObject", "GetBaseDisplayTransform");

	Params::UGbxGFxObject_GetBaseDisplayTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxUI.GbxGFxButton
// (None)

class UClass* UGbxGFxButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxButton");

	return Clss;
}


// GbxGFxButton GbxUI.Default__GbxGFxButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxButton* UGbxGFxButton::GetDefaultObj()
{
	static class UGbxGFxButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxButton*>(UGbxGFxButton::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxGFxButton.SetLockedState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EGbxGFxButtonLockedStateInLockedState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldRefresh                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxGFxButton::SetLockedState(enum class EGbxGFxButtonLockedState InLockedState, bool bShouldRefresh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxButton", "SetLockedState");

	Params::UGbxGFxButton_SetLockedState_Params Parms{};

	Parms.InLockedState = InLockedState;
	Parms.bShouldRefresh = bShouldRefresh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxButton.SetLabelText
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bForceUpdate                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxGFxButton::SetLabelText(class FText& Text, bool bForceUpdate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxButton", "SetLabelText");

	Params::UGbxGFxButton_SetLabelText_Params Parms{};

	Parms.Text = Text;
	Parms.bForceUpdate = bForceUpdate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxButton.SetCheckedState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EGbxGFxButtonCheckedStateInCheckedState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldRefresh                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxGFxButton::SetCheckedState(enum class EGbxGFxButtonCheckedState InCheckedState, bool bShouldRefresh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxButton", "SetCheckedState");

	Params::UGbxGFxButton_SetCheckedState_Params Parms{};

	Parms.InCheckedState = InCheckedState;
	Parms.bShouldRefresh = bShouldRefresh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxButton.SetButtonType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EGbxGFxButtonType       InButtonType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxGFxButton::SetButtonType(enum class EGbxGFxButtonType InButtonType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxButton", "SetButtonType");

	Params::UGbxGFxButton_SetButtonType_Params Parms{};

	Parms.InButtonType = InButtonType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxButton.RefreshView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EGbxFocusableWidgetStatePrevState                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxGFxButton::RefreshView(enum class EGbxFocusableWidgetState PrevState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxButton", "RefreshView");

	Params::UGbxGFxButton_RefreshView_Params Parms{};

	Parms.PrevState = PrevState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxButton.K2_HandleFocusableWidgetStateChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGbxFocusableWidgetStateNewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bBecameFocused                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLostFocus                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxGFxButton::K2_HandleFocusableWidgetStateChanged(enum class EGbxFocusableWidgetState NewState, bool bBecameFocused, bool bLostFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxButton", "K2_HandleFocusableWidgetStateChanged");

	Params::UGbxGFxButton_K2_HandleFocusableWidgetStateChanged_Params Parms{};

	Parms.NewState = NewState;
	Parms.bBecameFocused = bBecameFocused;
	Parms.bLostFocus = bLostFocus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxUI.GbxGFxButton.IsRegisteredAsFocusableWidget
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxGFxButton::IsRegisteredAsFocusableWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxButton", "IsRegisteredAsFocusableWidget");

	Params::UGbxGFxButton_IsRegisteredAsFocusableWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxGFxButton.IsLocked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxGFxButton::IsLocked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxButton", "IsLocked");

	Params::UGbxGFxButton_IsLocked_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxGFxButton.IsFocusableWidgetStateUp
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EGbxFocusableWidgetStateState                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxGFxButton::IsFocusableWidgetStateUp(enum class EGbxFocusableWidgetState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxButton", "IsFocusableWidgetStateUp");

	Params::UGbxGFxButton_IsFocusableWidgetStateUp_Params Parms{};

	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxGFxButton.IsFocusableWidgetStateHovered
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EGbxFocusableWidgetStateState                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxGFxButton::IsFocusableWidgetStateHovered(enum class EGbxFocusableWidgetState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxButton", "IsFocusableWidgetStateHovered");

	Params::UGbxGFxButton_IsFocusableWidgetStateHovered_Params Parms{};

	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxGFxButton.IsFocusableWidgetStateFocused
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EGbxFocusableWidgetStateState                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxGFxButton::IsFocusableWidgetStateFocused(enum class EGbxFocusableWidgetState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxButton", "IsFocusableWidgetStateFocused");

	Params::UGbxGFxButton_IsFocusableWidgetStateFocused_Params Parms{};

	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxGFxButton.IsFocusableWidgetStateDown
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EGbxFocusableWidgetStateState                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxGFxButton::IsFocusableWidgetStateDown(enum class EGbxFocusableWidgetState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxButton", "IsFocusableWidgetStateDown");

	Params::UGbxGFxButton_IsFocusableWidgetStateDown_Params Parms{};

	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxGFxButton.IsFocusableWidgetStateDisabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EGbxFocusableWidgetStateState                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxGFxButton::IsFocusableWidgetStateDisabled(enum class EGbxFocusableWidgetState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxButton", "IsFocusableWidgetStateDisabled");

	Params::UGbxGFxButton_IsFocusableWidgetStateDisabled_Params Parms{};

	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxGFxButton.IsChecked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxGFxButton::IsChecked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxButton", "IsChecked");

	Params::UGbxGFxButton_IsChecked_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxGFxButton.GetLockedState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EGbxGFxButtonLockedStateReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EGbxGFxButtonLockedState UGbxGFxButton::GetLockedState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxButton", "GetLockedState");

	Params::UGbxGFxButton_GetLockedState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxGFxButton.GetCheckedState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EGbxGFxButtonCheckedStateReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EGbxGFxButtonCheckedState UGbxGFxButton::GetCheckedState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxButton", "GetCheckedState");

	Params::UGbxGFxButton_GetCheckedState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxGFxButton.GetButtonType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EGbxGFxButtonType       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EGbxGFxButtonType UGbxGFxButton::GetButtonType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxButton", "GetButtonType");

	Params::UGbxGFxButton_GetButtonType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// DelegateFunction GbxUI.GbxGFxButton.GbxGFxButtonEvent__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// class UGbxGFxButton*               BUTTON                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGbxMenuInputEvent          InputInfo                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGbxGFxButton::GbxGFxButtonEvent__DelegateSignature(class UGbxGFxButton* BUTTON, struct FGbxMenuInputEvent& InputInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxButton", "GbxGFxButtonEvent__DelegateSignature");

	Params::UGbxGFxButton_GbxGFxButtonEvent__DelegateSignature_Params Parms{};

	Parms.BUTTON = BUTTON;
	Parms.InputInfo = InputInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Class GbxUI.GbxGFxListCell
// (None)

class UClass* UGbxGFxListCell::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxListCell");

	return Clss;
}


// GbxGFxListCell GbxUI.Default__GbxGFxListCell
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxListCell* UGbxGFxListCell::GetDefaultObj()
{
	static class UGbxGFxListCell* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxListCell*>(UGbxGFxListCell::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxGFxMenuSwitcherSubmenu
// (None)

class UClass* UGbxGFxMenuSwitcherSubmenu::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxMenuSwitcherSubmenu");

	return Clss;
}


// GbxGFxMenuSwitcherSubmenu GbxUI.Default__GbxGFxMenuSwitcherSubmenu
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxMenuSwitcherSubmenu* UGbxGFxMenuSwitcherSubmenu::GetDefaultObj()
{
	static class UGbxGFxMenuSwitcherSubmenu* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxMenuSwitcherSubmenu*>(UGbxGFxMenuSwitcherSubmenu::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxGFxMovieLoader
// (None)

class UClass* UGbxGFxMovieLoader::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxMovieLoader");

	return Clss;
}


// GbxGFxMovieLoader GbxUI.Default__GbxGFxMovieLoader
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxMovieLoader* UGbxGFxMovieLoader::GetDefaultObj()
{
	static class UGbxGFxMovieLoader* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxMovieLoader*>(UGbxGFxMovieLoader::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxGFxGridScrollingList
// (None)

class UClass* UGbxGFxGridScrollingList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxGridScrollingList");

	return Clss;
}


// GbxGFxGridScrollingList GbxUI.Default__GbxGFxGridScrollingList
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxGridScrollingList* UGbxGFxGridScrollingList::GetDefaultObj()
{
	static class UGbxGFxGridScrollingList* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxGridScrollingList*>(UGbxGFxGridScrollingList::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxGFxGridScrollingList.OnScrollBarPositionUpdated
// (Final, Native, Protected)
// Parameters:
// float                              SliderPercentage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxGFxGridScrollingList::OnScrollBarPositionUpdated(float SliderPercentage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxGridScrollingList", "OnScrollBarPositionUpdated");

	Params::UGbxGFxGridScrollingList_OnScrollBarPositionUpdated_Params Parms{};

	Parms.SliderPercentage = SliderPercentage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxUI.GbxGFxListCellWithData
// (None)

class UClass* UGbxGFxListCellWithData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxListCellWithData");

	return Clss;
}


// GbxGFxListCellWithData GbxUI.Default__GbxGFxListCellWithData
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxListCellWithData* UGbxGFxListCellWithData::GetDefaultObj()
{
	static class UGbxGFxListCellWithData* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxListCellWithData*>(UGbxGFxListCellWithData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxGFxListItemSpinner
// (None)

class UClass* UGbxGFxListItemSpinner::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxListItemSpinner");

	return Clss;
}


// GbxGFxListItemSpinner GbxUI.Default__GbxGFxListItemSpinner
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxListItemSpinner* UGbxGFxListItemSpinner::GetDefaultObj()
{
	static class UGbxGFxListItemSpinner* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxListItemSpinner*>(UGbxGFxListItemSpinner::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxGFxListItemSpinner.OnSpinnerValueUpdated
// (Final, Native, Private)
// Parameters:

void UGbxGFxListItemSpinner::OnSpinnerValueUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxListItemSpinner", "OnSpinnerValueUpdated");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxUI.GbxGFxListItemNumber
// (None)

class UClass* UGbxGFxListItemNumber::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxListItemNumber");

	return Clss;
}


// GbxGFxListItemNumber GbxUI.Default__GbxGFxListItemNumber
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxListItemNumber* UGbxGFxListItemNumber::GetDefaultObj()
{
	static class UGbxGFxListItemNumber* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxListItemNumber*>(UGbxGFxListItemNumber::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxGFxListItemNumber.OnSliderUpdated
// (Final, Native, Private)
// Parameters:
// float                              SliderPct                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxGFxListItemNumber::OnSliderUpdated(float SliderPct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxListItemNumber", "OnSliderUpdated");

	Params::UGbxGFxListItemNumber_OnSliderUpdated_Params Parms{};

	Parms.SliderPct = SliderPct;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxUI.GbxGFxGridScrollingListPaged
// (None)

class UClass* UGbxGFxGridScrollingListPaged::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxGridScrollingListPaged");

	return Clss;
}


// GbxGFxGridScrollingListPaged GbxUI.Default__GbxGFxGridScrollingListPaged
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxGridScrollingListPaged* UGbxGFxGridScrollingListPaged::GetDefaultObj()
{
	static class UGbxGFxGridScrollingListPaged* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxGridScrollingListPaged*>(UGbxGFxGridScrollingListPaged::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxGFxMenuSwitcherMenuData
// (None)

class UClass* UGbxGFxMenuSwitcherMenuData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxMenuSwitcherMenuData");

	return Clss;
}


// GbxGFxMenuSwitcherMenuData GbxUI.Default__GbxGFxMenuSwitcherMenuData
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxMenuSwitcherMenuData* UGbxGFxMenuSwitcherMenuData::GetDefaultObj()
{
	static class UGbxGFxMenuSwitcherMenuData* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxMenuSwitcherMenuData*>(UGbxGFxMenuSwitcherMenuData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxGFxMenuSwitcher
// (None)

class UClass* UGbxGFxMenuSwitcher::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxMenuSwitcher");

	return Clss;
}


// GbxGFxMenuSwitcher GbxUI.Default__GbxGFxMenuSwitcher
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxMenuSwitcher* UGbxGFxMenuSwitcher::GetDefaultObj()
{
	static class UGbxGFxMenuSwitcher* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxMenuSwitcher*>(UGbxGFxMenuSwitcher::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxGFxProgressBar
// (None)

class UClass* UGbxGFxProgressBar::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxProgressBar");

	return Clss;
}


// GbxGFxProgressBar GbxUI.Default__GbxGFxProgressBar
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxProgressBar* UGbxGFxProgressBar::GetDefaultObj()
{
	static class UGbxGFxProgressBar* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxProgressBar*>(UGbxGFxProgressBar::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxGFxProgressBar.SetPercent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InPercent                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxGFxProgressBar::SetPercent(float InPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxProgressBar", "SetPercent");

	Params::UGbxGFxProgressBar_SetPercent_Params Parms{};

	Parms.InPercent = InPercent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxProgressBar.SetMaxValueText
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGbxGFxProgressBar::SetMaxValueText(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxProgressBar", "SetMaxValueText");

	Params::UGbxGFxProgressBar_SetMaxValueText_Params Parms{};

	Parms.Text = Text;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxProgressBar.SetFillColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InColor                                                          (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxGFxProgressBar::SetFillColorAndOpacity(const struct FLinearColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxProgressBar", "SetFillColorAndOpacity");

	Params::UGbxGFxProgressBar_SetFillColorAndOpacity_Params Parms{};

	Parms.InColor = InColor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxProgressBar.SetCurrentValueText
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGbxGFxProgressBar::SetCurrentValueText(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxProgressBar", "SetCurrentValueText");

	Params::UGbxGFxProgressBar_SetCurrentValueText_Params Parms{};

	Parms.Text = Text;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxProgressBar.PassedPercentThreshold
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              Threshold                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OldValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CurrentValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncreasing                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDecreasing                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxGFxProgressBar::PassedPercentThreshold(float Threshold, float OldValue, float CurrentValue, bool bIncreasing, bool bDecreasing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxProgressBar", "PassedPercentThreshold");

	Params::UGbxGFxProgressBar_PassedPercentThreshold_Params Parms{};

	Parms.Threshold = Threshold;
	Parms.OldValue = OldValue;
	Parms.CurrentValue = CurrentValue;
	Parms.bIncreasing = bIncreasing;
	Parms.bDecreasing = bDecreasing;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxGFxProgressBar.InterpolateToPercentWithInterpolator
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              InPercent                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGbxProgressBarInterpolator Interpolator                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UGbxGFxProgressBar::InterpolateToPercentWithInterpolator(float InPercent, struct FGbxProgressBarInterpolator& Interpolator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxProgressBar", "InterpolateToPercentWithInterpolator");

	Params::UGbxGFxProgressBar_InterpolateToPercentWithInterpolator_Params Parms{};

	Parms.InPercent = InPercent;
	Parms.Interpolator = Interpolator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxProgressBar.InterpolateToPercent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InPercent                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxGFxProgressBar::InterpolateToPercent(float InPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxProgressBar", "InterpolateToPercent");

	Params::UGbxGFxProgressBar_InterpolateToPercent_Params Parms{};

	Parms.InPercent = InPercent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxProgressBar.HandlePercentChanged
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              OldValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CurrentValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsInterpolating                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGbxProgressBarInterpolator ActiveInterpolator                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UGbxGFxProgressBar::HandlePercentChanged(float OldValue, float CurrentValue, bool bIsInterpolating, struct FGbxProgressBarInterpolator& ActiveInterpolator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxProgressBar", "HandlePercentChanged");

	Params::UGbxGFxProgressBar_HandlePercentChanged_Params Parms{};

	Parms.OldValue = OldValue;
	Parms.CurrentValue = CurrentValue;
	Parms.bIsInterpolating = bIsInterpolating;
	Parms.ActiveInterpolator = ActiveInterpolator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxUI.GbxGFxProgressBar.HandleEnterPercentRange
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                        RangeName                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxGFxProgressBar::HandleEnterPercentRange(class FName& RangeName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxProgressBar", "HandleEnterPercentRange");

	Params::UGbxGFxProgressBar_HandleEnterPercentRange_Params Parms{};

	Parms.RangeName = RangeName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxUI.GbxGFxProgressBar.GetPercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGbxGFxProgressBar::GetPercent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxProgressBar", "GetPercent");

	Params::UGbxGFxProgressBar_GetPercent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxGFxProgressBar.EnteredPercentRange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              RangeMin                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RangeMax                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OldValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CurrentValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncreasing                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDecreasing                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxGFxProgressBar::EnteredPercentRange(float RangeMin, float RangeMax, float OldValue, float CurrentValue, bool bIncreasing, bool bDecreasing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxProgressBar", "EnteredPercentRange");

	Params::UGbxGFxProgressBar_EnteredPercentRange_Params Parms{};

	Parms.RangeMin = RangeMin;
	Parms.RangeMax = RangeMax;
	Parms.OldValue = OldValue;
	Parms.CurrentValue = CurrentValue;
	Parms.bIncreasing = bIncreasing;
	Parms.bDecreasing = bDecreasing;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxUI.GbxHUDContainer
// (None)

class UClass* UGbxHUDContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxHUDContainer");

	return Clss;
}


// GbxHUDContainer GbxUI.Default__GbxHUDContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxHUDContainer* UGbxHUDContainer::GetDefaultObj()
{
	static class UGbxHUDContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxHUDContainer*>(UGbxHUDContainer::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxHUDContainer.HandleInit
// (Event, Public, BlueprintEvent)
// Parameters:

void UGbxHUDContainer::HandleInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxHUDContainer", "HandleInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxUI.GbxHUDContainer.HandleDeinit
// (Event, Public, BlueprintEvent)
// Parameters:

void UGbxHUDContainer::HandleDeinit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxHUDContainer", "HandleDeinit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxUI.GbxHUDContainer.HandleDeactivate
// (Event, Public, BlueprintEvent)
// Parameters:

void UGbxHUDContainer::HandleDeactivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxHUDContainer", "HandleDeactivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxUI.GbxHUDContainer.HandleActivate
// (Event, Public, BlueprintEvent)
// Parameters:

void UGbxHUDContainer::HandleActivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxHUDContainer", "HandleActivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Class GbxUI.GbxHUDWidget
// (None)

class UClass* UGbxHUDWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxHUDWidget");

	return Clss;
}


// GbxHUDWidget GbxUI.Default__GbxHUDWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxHUDWidget* UGbxHUDWidget::GetDefaultObj()
{
	static class UGbxHUDWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxHUDWidget*>(UGbxHUDWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxHUDWidget.HandleInit
// (Event, Public, BlueprintEvent)
// Parameters:

void UGbxHUDWidget::HandleInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxHUDWidget", "HandleInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxUI.GbxHUDWidget.HandleDeinit
// (Event, Public, BlueprintEvent)
// Parameters:

void UGbxHUDWidget::HandleDeinit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxHUDWidget", "HandleDeinit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxUI.GbxHUDWidget.HandleDeactivate
// (Event, Public, BlueprintEvent)
// Parameters:

void UGbxHUDWidget::HandleDeactivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxHUDWidget", "HandleDeactivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxUI.GbxHUDWidget.HandleActivate
// (Event, Public, BlueprintEvent)
// Parameters:

void UGbxHUDWidget::HandleActivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxHUDWidget", "HandleActivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Class GbxUI.GbxListItem
// (None)

class UClass* UGbxListItem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxListItem");

	return Clss;
}


// GbxListItem GbxUI.Default__GbxListItem
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxListItem* UGbxListItem::GetDefaultObj()
{
	static class UGbxListItem* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxListItem*>(UGbxListItem::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxListItem.GetItemIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGbxListItem::GetItemIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxListItem", "GetItemIndex");

	Params::UGbxListItem_GetItemIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxUI.GbxListItemText
// (None)

class UClass* UGbxListItemText::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxListItemText");

	return Clss;
}


// GbxListItemText GbxUI.Default__GbxListItemText
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxListItemText* UGbxListItemText::GetDefaultObj()
{
	static class UGbxListItemText* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxListItemText*>(UGbxListItemText::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxGFxHUDContainer
// (None)

class UClass* UGbxGFxHUDContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxHUDContainer");

	return Clss;
}


// GbxGFxHUDContainer GbxUI.Default__GbxGFxHUDContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxHUDContainer* UGbxGFxHUDContainer::GetDefaultObj()
{
	static class UGbxGFxHUDContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxHUDContainer*>(UGbxGFxHUDContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxHUD
// (Actor)

class UClass* AGbxHUD::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxHUD");

	return Clss;
}


// GbxHUD GbxUI.Default__GbxHUD
// (Public, ClassDefaultObject, ArchetypeObject)

class AGbxHUD* AGbxHUD::GetDefaultObj()
{
	static class AGbxHUD* Default = nullptr;

	if (!Default)
		Default = static_cast<AGbxHUD*>(AGbxHUD::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxHUD.SwitchToHUDState
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxPlayerController*        PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGbxHUDStateData*            State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGbxHUD::SwitchToHUDState(class AGbxPlayerController* PlayerController, class UGbxHUDStateData* State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxHUD", "SwitchToHUDState");

	Params::AGbxHUD_SwitchToHUDState_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxHUD.SetHUDContainer
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxPlayerController*        PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGbxHUDData*                 ContainerDefinition                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGbxHUD::SetHUDContainer(class AGbxPlayerController* PlayerController, class UGbxHUDData* ContainerDefinition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxHUD", "SetHUDContainer");

	Params::AGbxHUD_SetHUDContainer_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.ContainerDefinition = ContainerDefinition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxHUD.PushHUDState
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxPlayerController*        PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGbxHUDStateData*            State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowDuplicatePush                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGbxHUD::PushHUDState(class AGbxPlayerController* PlayerController, class UGbxHUDStateData* State, bool bAllowDuplicatePush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxHUD", "PushHUDState");

	Params::AGbxHUD_PushHUDState_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.State = State;
	Parms.bAllowDuplicatePush = bAllowDuplicatePush;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxHUD.PopToSwitchToHUDState
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxPlayerController*        PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGbxHUDStateData*            PopToState                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGbxHUDStateData*            SwitchToState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGbxHUD::PopToSwitchToHUDState(class AGbxPlayerController* PlayerController, class UGbxHUDStateData* PopToState, class UGbxHUDStateData* SwitchToState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxHUD", "PopToSwitchToHUDState");

	Params::AGbxHUD_PopToSwitchToHUDState_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.PopToState = PopToState;
	Parms.SwitchToState = SwitchToState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxHUD.PopToHUDState
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxPlayerController*        PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGbxHUDStateData*            State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGbxHUD::PopToHUDState(class AGbxPlayerController* PlayerController, class UGbxHUDStateData* State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxHUD", "PopToHUDState");

	Params::AGbxHUD_PopToHUDState_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxHUD.PopSpecifiedHUDState
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxPlayerController*        PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGbxHUDStateData*            State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGbxHUD::PopSpecifiedHUDState(class AGbxPlayerController* PlayerController, class UGbxHUDStateData* State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxHUD", "PopSpecifiedHUDState");

	Params::AGbxHUD_PopSpecifiedHUDState_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxHUD.PopHUDState
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxPlayerController*        PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGbxHUD::PopHUDState(class AGbxPlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxHUD", "PopHUDState");

	Params::AGbxHUD_PopHUDState_Params Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxHUD.OnPrimaryCharacterChanged
// (Final, Native, Protected)
// Parameters:
// class AGbxCharacter*               Character                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGbxHUD::OnPrimaryCharacterChanged(class AGbxCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxHUD", "OnPrimaryCharacterChanged");

	Params::AGbxHUD_OnPrimaryCharacterChanged_Params Parms{};

	Parms.Character = Character;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxHUD.OnPawnChanged
// (Native, Protected)
// Parameters:
// class APawn*                       Pawn                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       OldPawn                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGbxHUD::OnPawnChanged(class APawn* Pawn, class APawn* OldPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxHUD", "OnPawnChanged");

	Params::AGbxHUD_OnPawnChanged_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.OldPawn = OldPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxHUD.hidedamagenumbers
// (Final, Exec, Native, Public)
// Parameters:
// bool                               bShouldHideDamage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGbxHUD::Hidedamagenumbers(bool bShouldHideDamage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxHUD", "hidedamagenumbers");

	Params::AGbxHUD_Hidedamagenumbers_Params Parms{};

	Parms.bShouldHideDamage = bShouldHideDamage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxHUD.GotoPreviousHUDState
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxPlayerController*        PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGbxHUD::GotoPreviousHUDState(class AGbxPlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxHUD", "GotoPreviousHUDState");

	Params::AGbxHUD_GotoPreviousHUDState_Params Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxHUD.GotoHUDState
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxPlayerController*        PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGbxHUDStateData*            State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGbxHUD::GotoHUDState(class AGbxPlayerController* PlayerController, class UGbxHUDStateData* State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxHUD", "GotoHUDState");

	Params::AGbxHUD_GotoHUDState_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxHUD.GetCurrentHUDState
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxPlayerController*        PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGbxHUDStateData*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxHUDStateData* AGbxHUD::GetCurrentHUDState(class AGbxPlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxHUD", "GetCurrentHUDState");

	Params::AGbxHUD_GetCurrentHUDState_Params Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxHUD.ClearToDefaultHUDState
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxPlayerController*        PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGbxHUD::ClearToDefaultHUDState(class AGbxPlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxHUD", "ClearToDefaultHUDState");

	Params::AGbxHUD_ClearToDefaultHUDState_Params Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxHUD.ClearHUDStates
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxPlayerController*        PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGbxHUD::ClearHUDStates(class AGbxPlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxHUD", "ClearHUDStates");

	Params::AGbxHUD_ClearHUDStates_Params Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxUI.GbxUIBlueprintHelperLibrary
// (None)

class UClass* UGbxUIBlueprintHelperLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxUIBlueprintHelperLibrary");

	return Clss;
}


// GbxUIBlueprintHelperLibrary GbxUI.Default__GbxUIBlueprintHelperLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxUIBlueprintHelperLibrary* UGbxUIBlueprintHelperLibrary::GetDefaultObj()
{
	static class UGbxUIBlueprintHelperLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxUIBlueprintHelperLibrary*>(UGbxUIBlueprintHelperLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxUIDataCollectorBase
// (None)

class UClass* UGbxUIDataCollectorBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxUIDataCollectorBase");

	return Clss;
}


// GbxUIDataCollectorBase GbxUI.Default__GbxUIDataCollectorBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxUIDataCollectorBase* UGbxUIDataCollectorBase::GetDefaultObj()
{
	static class UGbxUIDataCollectorBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxUIDataCollectorBase*>(UGbxUIDataCollectorBase::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxUIInputComponent
// (None)

class UClass* UGbxUIInputComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxUIInputComponent");

	return Clss;
}


// GbxUIInputComponent GbxUI.Default__GbxUIInputComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxUIInputComponent* UGbxUIInputComponent::GetDefaultObj()
{
	static class UGbxUIInputComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxUIInputComponent*>(UGbxUIInputComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxUILibrary
// (None)

class UClass* UGbxUILibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxUILibrary");

	return Clss;
}


// GbxUILibrary GbxUI.Default__GbxUILibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxUILibrary* UGbxUILibrary::GetDefaultObj()
{
	static class UGbxUILibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxUILibrary*>(UGbxUILibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxUILibrary.SendTextToDebugHUD
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        Text                                                             (Parm, NativeAccessSpecifierPublic)
// struct FLinearColor                Color                                                            (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TextSize                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxUILibrary::SendTextToDebugHUD(class UObject* WorldContextObject, class FText Text, const struct FLinearColor& Color, int32 TextSize, float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUILibrary", "SendTextToDebugHUD");

	Params::UGbxUILibrary_SendTextToDebugHUD_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Text = Text;
	Parms.Color = Color;
	Parms.TextSize = TextSize;
	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxUILibrary.PlayFullScreenMovie
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxPlayerController*        GbxPC                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMediaSource*                MediaSource                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPlayOnceAndDestroy                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGbxFullScreenMovie*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxFullScreenMovie* UGbxUILibrary::PlayFullScreenMovie(class AGbxPlayerController* GbxPC, class UMediaSource* MediaSource, bool bPlayOnceAndDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUILibrary", "PlayFullScreenMovie");

	Params::UGbxUILibrary_PlayFullScreenMovie_Params Parms{};

	Parms.GbxPC = GbxPC;
	Parms.MediaSource = MediaSource;
	Parms.bPlayOnceAndDestroy = bPlayOnceAndDestroy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxUILibrary.CreateTextListItemWithDelegates
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class IGbxList>   OwningList                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class APlayerController*           OwningPlayer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        LabelText                                                        (Parm, NativeAccessSpecifierPublic)
// UDelegateProperty_                 ClickedDelegate                                                  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// UDelegateProperty_                 SelectedDelegate                                                 (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// class UGbxListItemText*            ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxListItemText* UGbxUILibrary::CreateTextListItemWithDelegates(TScriptInterface<class IGbxList> OwningList, class APlayerController* OwningPlayer, class FText LabelText, UDelegateProperty_ ClickedDelegate, UDelegateProperty_ SelectedDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUILibrary", "CreateTextListItemWithDelegates");

	Params::UGbxUILibrary_CreateTextListItemWithDelegates_Params Parms{};

	Parms.OwningList = OwningList;
	Parms.OwningPlayer = OwningPlayer;
	Parms.LabelText = LabelText;
	Parms.ClickedDelegate = ClickedDelegate;
	Parms.SelectedDelegate = SelectedDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxUILibrary.CreateTextListItem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class IGbxList>   OwningList                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class APlayerController*           OwningPlayer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        LabelText                                                        (Parm, NativeAccessSpecifierPublic)
// class UGbxListItemText*            ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxListItemText* UGbxUILibrary::CreateTextListItem(TScriptInterface<class IGbxList> OwningList, class APlayerController* OwningPlayer, class FText LabelText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUILibrary", "CreateTextListItem");

	Params::UGbxUILibrary_CreateTextListItem_Params Parms{};

	Parms.OwningList = OwningList;
	Parms.OwningPlayer = OwningPlayer;
	Parms.LabelText = LabelText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxUILibrary.CreateNumberListItemWithDelegates
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class IGbxList>   OwningList                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class APlayerController*           OwningPlayer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        LabelText                                                        (Parm, NativeAccessSpecifierPublic)
// float                              InitialValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SliderMin                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SliderMax                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SliderStep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UDelegateProperty_                 ChangedDelegate                                                  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// UDelegateProperty_                 SelectedDelegate                                                 (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// class UGbxListItemNumber*          ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxListItemNumber* UGbxUILibrary::CreateNumberListItemWithDelegates(TScriptInterface<class IGbxList> OwningList, class APlayerController* OwningPlayer, class FText LabelText, float InitialValue, float SliderMin, float SliderMax, float SliderStep, UDelegateProperty_ ChangedDelegate, UDelegateProperty_ SelectedDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUILibrary", "CreateNumberListItemWithDelegates");

	Params::UGbxUILibrary_CreateNumberListItemWithDelegates_Params Parms{};

	Parms.OwningList = OwningList;
	Parms.OwningPlayer = OwningPlayer;
	Parms.LabelText = LabelText;
	Parms.InitialValue = InitialValue;
	Parms.SliderMin = SliderMin;
	Parms.SliderMax = SliderMax;
	Parms.SliderStep = SliderStep;
	Parms.ChangedDelegate = ChangedDelegate;
	Parms.SelectedDelegate = SelectedDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxUILibrary.CreateNumberListItem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class IGbxList>   OwningList                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class APlayerController*           OwningPlayer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        LabelText                                                        (Parm, NativeAccessSpecifierPublic)
// float                              InitialValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SliderMin                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SliderMax                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SliderStep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGbxListItemNumber*          ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxListItemNumber* UGbxUILibrary::CreateNumberListItem(TScriptInterface<class IGbxList> OwningList, class APlayerController* OwningPlayer, class FText LabelText, float InitialValue, float SliderMin, float SliderMax, float SliderStep)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUILibrary", "CreateNumberListItem");

	Params::UGbxUILibrary_CreateNumberListItem_Params Parms{};

	Parms.OwningList = OwningList;
	Parms.OwningPlayer = OwningPlayer;
	Parms.LabelText = LabelText;
	Parms.InitialValue = InitialValue;
	Parms.SliderMin = SliderMin;
	Parms.SliderMax = SliderMax;
	Parms.SliderStep = SliderStep;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxUILibrary.CreateListItemWithDelegates
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class IGbxList>   OwningList                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class APlayerController*           OwningPlayer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UGbxListItem>    ItemClass                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UDelegateProperty_                 ClickedDelegate                                                  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// UDelegateProperty_                 SelectedDelegate                                                 (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// class UGbxListItem*                ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxListItem* UGbxUILibrary::CreateListItemWithDelegates(TScriptInterface<class IGbxList> OwningList, class APlayerController* OwningPlayer, TSubclassOf<class UGbxListItem> ItemClass, UDelegateProperty_ ClickedDelegate, UDelegateProperty_ SelectedDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUILibrary", "CreateListItemWithDelegates");

	Params::UGbxUILibrary_CreateListItemWithDelegates_Params Parms{};

	Parms.OwningList = OwningList;
	Parms.OwningPlayer = OwningPlayer;
	Parms.ItemClass = ItemClass;
	Parms.ClickedDelegate = ClickedDelegate;
	Parms.SelectedDelegate = SelectedDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxUILibrary.CreateListItem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class IGbxList>   OwningList                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class APlayerController*           OwningPlayer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UGbxListItem>    ItemClass                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGbxListItem*                ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxListItem* UGbxUILibrary::CreateListItem(TScriptInterface<class IGbxList> OwningList, class APlayerController* OwningPlayer, TSubclassOf<class UGbxListItem> ItemClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUILibrary", "CreateListItem");

	Params::UGbxUILibrary_CreateListItem_Params Parms{};

	Parms.OwningList = OwningList;
	Parms.OwningPlayer = OwningPlayer;
	Parms.ItemClass = ItemClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxUILibrary.CreateDefaultListItemWithDelegates
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class IGbxList>   OwningList                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class APlayerController*           OwningPlayer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UDelegateProperty_                 ClickedDelegate                                                  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// UDelegateProperty_                 SelectedDelegate                                                 (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// class UGbxListItem*                ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxListItem* UGbxUILibrary::CreateDefaultListItemWithDelegates(TScriptInterface<class IGbxList> OwningList, class APlayerController* OwningPlayer, UDelegateProperty_ ClickedDelegate, UDelegateProperty_ SelectedDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUILibrary", "CreateDefaultListItemWithDelegates");

	Params::UGbxUILibrary_CreateDefaultListItemWithDelegates_Params Parms{};

	Parms.OwningList = OwningList;
	Parms.OwningPlayer = OwningPlayer;
	Parms.ClickedDelegate = ClickedDelegate;
	Parms.SelectedDelegate = SelectedDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxUILibrary.CreateDefaultListItem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class IGbxList>   OwningList                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class APlayerController*           OwningPlayer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGbxListItem*                ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxListItem* UGbxUILibrary::CreateDefaultListItem(TScriptInterface<class IGbxList> OwningList, class APlayerController* OwningPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUILibrary", "CreateDefaultListItem");

	Params::UGbxUILibrary_CreateDefaultListItem_Params Parms{};

	Parms.OwningList = OwningList;
	Parms.OwningPlayer = OwningPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxUILibrary.CreateComboBoxListItemWithDelegates
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TScriptInterface<class IGbxList>   OwningList                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class APlayerController*           OwningPlayer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        LabelText                                                        (Parm, NativeAccessSpecifierPublic)
// TArray<class FText>                Items                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              InitialIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UDelegateProperty_                 ChangedDelegate                                                  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// UDelegateProperty_                 SelectedDelegate                                                 (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// class UGbxListItemComboBox*        ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxListItemComboBox* UGbxUILibrary::CreateComboBoxListItemWithDelegates(TScriptInterface<class IGbxList> OwningList, class APlayerController* OwningPlayer, class FText LabelText, TArray<class FText>& Items, int32 InitialIndex, UDelegateProperty_ ChangedDelegate, UDelegateProperty_ SelectedDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUILibrary", "CreateComboBoxListItemWithDelegates");

	Params::UGbxUILibrary_CreateComboBoxListItemWithDelegates_Params Parms{};

	Parms.OwningList = OwningList;
	Parms.OwningPlayer = OwningPlayer;
	Parms.LabelText = LabelText;
	Parms.Items = Items;
	Parms.InitialIndex = InitialIndex;
	Parms.ChangedDelegate = ChangedDelegate;
	Parms.SelectedDelegate = SelectedDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxUILibrary.CreateComboBoxListItem
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TScriptInterface<class IGbxList>   OwningList                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class APlayerController*           OwningPlayer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        LabelText                                                        (Parm, NativeAccessSpecifierPublic)
// TArray<class FText>                Items                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              InitialIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGbxListItemComboBox*        ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxListItemComboBox* UGbxUILibrary::CreateComboBoxListItem(TScriptInterface<class IGbxList> OwningList, class APlayerController* OwningPlayer, class FText LabelText, TArray<class FText>& Items, int32 InitialIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUILibrary", "CreateComboBoxListItem");

	Params::UGbxUILibrary_CreateComboBoxListItem_Params Parms{};

	Parms.OwningList = OwningList;
	Parms.OwningPlayer = OwningPlayer;
	Parms.LabelText = LabelText;
	Parms.Items = Items;
	Parms.InitialIndex = InitialIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxUILibrary.CreateBooleanListItemWithDelegates
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class IGbxList>   OwningList                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class APlayerController*           OwningPlayer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        LabelText                                                        (Parm, NativeAccessSpecifierPublic)
// bool                               InitialValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UDelegateProperty_                 ChangedDelegate                                                  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// UDelegateProperty_                 SelectedDelegate                                                 (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// class UGbxListItemBoolean*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxListItemBoolean* UGbxUILibrary::CreateBooleanListItemWithDelegates(TScriptInterface<class IGbxList> OwningList, class APlayerController* OwningPlayer, class FText LabelText, bool InitialValue, UDelegateProperty_ ChangedDelegate, UDelegateProperty_ SelectedDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUILibrary", "CreateBooleanListItemWithDelegates");

	Params::UGbxUILibrary_CreateBooleanListItemWithDelegates_Params Parms{};

	Parms.OwningList = OwningList;
	Parms.OwningPlayer = OwningPlayer;
	Parms.LabelText = LabelText;
	Parms.InitialValue = InitialValue;
	Parms.ChangedDelegate = ChangedDelegate;
	Parms.SelectedDelegate = SelectedDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxUILibrary.CreateBooleanListItem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class IGbxList>   OwningList                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class APlayerController*           OwningPlayer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        LabelText                                                        (Parm, NativeAccessSpecifierPublic)
// bool                               InitialValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGbxListItemBoolean*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxListItemBoolean* UGbxUILibrary::CreateBooleanListItem(TScriptInterface<class IGbxList> OwningList, class APlayerController* OwningPlayer, class FText LabelText, bool InitialValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUILibrary", "CreateBooleanListItem");

	Params::UGbxUILibrary_CreateBooleanListItem_Params Parms{};

	Parms.OwningList = OwningList;
	Parms.OwningPlayer = OwningPlayer;
	Parms.LabelText = LabelText;
	Parms.InitialValue = InitialValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxUILibrary.AbbreviateNumberText
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              ValueToFormat                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UGbxUILibrary::AbbreviateNumberText(float ValueToFormat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUILibrary", "AbbreviateNumberText");

	Params::UGbxUILibrary_AbbreviateNumberText_Params Parms{};

	Parms.ValueToFormat = ValueToFormat;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxUI.GbxUISystem
// (None)

class UClass* UGbxUISystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxUISystem");

	return Clss;
}


// GbxUISystem GbxUI.Default__GbxUISystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxUISystem* UGbxUISystem::GetDefaultObj()
{
	static class UGbxUISystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxUISystem*>(UGbxUISystem::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxUIGlobals
// (None)

class UClass* UGbxUIGlobals::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxUIGlobals");

	return Clss;
}


// GbxUIGlobals GbxUI.Default__GbxUIGlobals
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxUIGlobals* UGbxUIGlobals::GetDefaultObj()
{
	static class UGbxUIGlobals* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxUIGlobals*>(UGbxUIGlobals::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxUmgMenuData
// (None)

class UClass* UGbxUmgMenuData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxUmgMenuData");

	return Clss;
}


// GbxUmgMenuData GbxUI.Default__GbxUmgMenuData
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxUmgMenuData* UGbxUmgMenuData::GetDefaultObj()
{
	static class UGbxUmgMenuData* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxUmgMenuData*>(UGbxUmgMenuData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxCascadingList
// (None)

class UClass* UGbxCascadingList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxCascadingList");

	return Clss;
}


// GbxCascadingList GbxUI.Default__GbxCascadingList
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxCascadingList* UGbxCascadingList::GetDefaultObj()
{
	static class UGbxCascadingList* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxCascadingList*>(UGbxCascadingList::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxCascadingList.SetActiveList
// (Final, Native, Private)
// Parameters:
// class UGbxGridListWidget*          List                                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxCascadingList::SetActiveList(class UGbxGridListWidget* List)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxCascadingList", "SetActiveList");

	Params::UGbxCascadingList_SetActiveList_Params Parms{};

	Parms.List = List;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxCascadingList.PushItems
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FGbxCascadingListItemData>Items                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UGbxCascadingList::PushItems(TArray<struct FGbxCascadingListItemData>& Items)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxCascadingList", "PushItems");

	Params::UGbxCascadingList_PushItems_Params Parms{};

	Parms.Items = Items;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxCascadingList.Pop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGbxCascadingList::Pop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxCascadingList", "Pop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxCascadingList.OnShiftListsForward
// (Event, Public, BlueprintEvent)
// Parameters:

void UGbxCascadingList::OnShiftListsForward()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxCascadingList", "OnShiftListsForward");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxUI.GbxCascadingList.OnShiftListsBack
// (Event, Public, BlueprintEvent)
// Parameters:

void UGbxCascadingList::OnShiftListsBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxCascadingList", "OnShiftListsBack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxUI.GbxCascadingList.OnItemSelected_Internal
// (Final, Native, Private)
// Parameters:
// class UGbxListItem*                Item                                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxCascadingList::OnItemSelected_Internal(class UGbxListItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxCascadingList", "OnItemSelected_Internal");

	Params::UGbxCascadingList_OnItemSelected_Internal_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxCascadingList.OnItemClicked_Internal
// (Final, Native, Private)
// Parameters:
// class UGbxListItem*                Item                                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxCascadingList::OnItemClicked_Internal(class UGbxListItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxCascadingList", "OnItemClicked_Internal");

	Params::UGbxCascadingList_OnItemClicked_Internal_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxCascadingList.HasItems
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxCascadingList::HasItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxCascadingList", "HasItems");

	Params::UGbxCascadingList_HasItems_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxCascadingList.GetStackDepth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGbxCascadingList::GetStackDepth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxCascadingList", "GetStackDepth");

	Params::UGbxCascadingList_GetStackDepth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxCascadingList.Clear
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGbxCascadingList::Clear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxCascadingList", "Clear");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxUI.GbxComboBoxDropdownMenu
// (None)

class UClass* UGbxComboBoxDropdownMenu::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxComboBoxDropdownMenu");

	return Clss;
}


// GbxComboBoxDropdownMenu GbxUI.Default__GbxComboBoxDropdownMenu
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxComboBoxDropdownMenu* UGbxComboBoxDropdownMenu::GetDefaultObj()
{
	static class UGbxComboBoxDropdownMenu* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxComboBoxDropdownMenu*>(UGbxComboBoxDropdownMenu::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxComboBoxDropdownMenu.OnChoiceClicked
// (Final, Native, Public)
// Parameters:
// class UGbxListItem*                ListItem                                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxComboBoxDropdownMenu::OnChoiceClicked(class UGbxListItem* ListItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxComboBoxDropdownMenu", "OnChoiceClicked");

	Params::UGbxComboBoxDropdownMenu_OnChoiceClicked_Params Parms{};

	Parms.ListItem = ListItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxComboBoxDropdownMenu.DismissWithoutChanging
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGbxComboBoxDropdownMenu::DismissWithoutChanging()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxComboBoxDropdownMenu", "DismissWithoutChanging");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxUI.GbxComboBox
// (None)

class UClass* UGbxComboBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxComboBox");

	return Clss;
}


// GbxComboBox GbxUI.Default__GbxComboBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxComboBox* UGbxComboBox::GetDefaultObj()
{
	static class UGbxComboBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxComboBox*>(UGbxComboBox::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxComboBox.OnComboBoxClicked
// (Final, Native, Public, HasOutParams)
// Parameters:
// class UGbxUserWidget*              Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGbxMenuInputEvent          InputInfo                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGbxComboBox::OnComboBoxClicked(class UGbxUserWidget* Widget, struct FGbxMenuInputEvent& InputInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxComboBox", "OnComboBoxClicked");

	Params::UGbxComboBox_OnComboBoxClicked_Params Parms{};

	Parms.Widget = Widget;
	Parms.InputInfo = InputInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxComboBox.GetCurentChoiceReferenceIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGbxComboBox::GetCurentChoiceReferenceIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxComboBox", "GetCurentChoiceReferenceIndex");

	Params::UGbxComboBox_GetCurentChoiceReferenceIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxUI.GbxCoreDialogBoxHelpers
// (None)

class UClass* UGbxCoreDialogBoxHelpers::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxCoreDialogBoxHelpers");

	return Clss;
}


// GbxCoreDialogBoxHelpers GbxUI.Default__GbxCoreDialogBoxHelpers
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxCoreDialogBoxHelpers* UGbxCoreDialogBoxHelpers::GetDefaultObj()
{
	static class UGbxCoreDialogBoxHelpers* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxCoreDialogBoxHelpers*>(UGbxCoreDialogBoxHelpers::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxCoreDialogBoxHelpers.ShowYesNoDialog
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxPlayerController*        Pc                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        HeaderText                                                       (ConstParm, Parm, NativeAccessSpecifierPublic)
// class FText                        MessageText                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
// bool                               bAnyUserCanInteract                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGbxDialogBox*               ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxDialogBox* UGbxCoreDialogBoxHelpers::ShowYesNoDialog(class AGbxPlayerController* Pc, class FText HeaderText, class FText MessageText, bool bAnyUserCanInteract)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxCoreDialogBoxHelpers", "ShowYesNoDialog");

	Params::UGbxCoreDialogBoxHelpers_ShowYesNoDialog_Params Parms{};

	Parms.Pc = Pc;
	Parms.HeaderText = HeaderText;
	Parms.MessageText = MessageText;
	Parms.bAnyUserCanInteract = bAnyUserCanInteract;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxCoreDialogBoxHelpers.ShowOkayDialog
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxPlayerController*        Pc                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        HeaderText                                                       (ConstParm, Parm, NativeAccessSpecifierPublic)
// class FText                        MessageText                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
// bool                               bAnyUserCanInteract                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGbxDialogBoxHelpersDialogTemplateTemplate                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGbxDialogBox*               ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxDialogBox* UGbxCoreDialogBoxHelpers::ShowOkayDialog(class AGbxPlayerController* Pc, class FText HeaderText, class FText MessageText, bool bAnyUserCanInteract, enum class EGbxDialogBoxHelpersDialogTemplate Template)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxCoreDialogBoxHelpers", "ShowOkayDialog");

	Params::UGbxCoreDialogBoxHelpers_ShowOkayDialog_Params Parms{};

	Parms.Pc = Pc;
	Parms.HeaderText = HeaderText;
	Parms.MessageText = MessageText;
	Parms.bAnyUserCanInteract = bAnyUserCanInteract;
	Parms.Template = Template;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxCoreDialogBoxHelpers.ShowDialog
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AGbxPlayerController*        Pc                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGbxDialogBoxInfo           DialogBoxInfo                                                    (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UGbxDialogBox*               ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxDialogBox* UGbxCoreDialogBoxHelpers::ShowDialog(class AGbxPlayerController* Pc, struct FGbxDialogBoxInfo& DialogBoxInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxCoreDialogBoxHelpers", "ShowDialog");

	Params::UGbxCoreDialogBoxHelpers_ShowDialog_Params Parms{};

	Parms.Pc = Pc;
	Parms.DialogBoxInfo = DialogBoxInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxCoreDialogBoxHelpers.ShowConfirmCancelDialog
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxPlayerController*        Pc                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        HeaderText                                                       (ConstParm, Parm, NativeAccessSpecifierPublic)
// class FText                        MessageText                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
// bool                               bAnyUserCanInteract                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGbxDialogBox*               ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxDialogBox* UGbxCoreDialogBoxHelpers::ShowConfirmCancelDialog(class AGbxPlayerController* Pc, class FText HeaderText, class FText MessageText, bool bAnyUserCanInteract)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxCoreDialogBoxHelpers", "ShowConfirmCancelDialog");

	Params::UGbxCoreDialogBoxHelpers_ShowConfirmCancelDialog_Params Parms{};

	Parms.Pc = Pc;
	Parms.HeaderText = HeaderText;
	Parms.MessageText = MessageText;
	Parms.bAnyUserCanInteract = bAnyUserCanInteract;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxCoreDialogBoxHelpers.ShowBlockingDialog
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxPlayerController*        Pc                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        HeaderText                                                       (ConstParm, Parm, NativeAccessSpecifierPublic)
// class FText                        MessageText                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
// bool                               bBlocksAllUsers                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGbxDialogBox*               ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxDialogBox* UGbxCoreDialogBoxHelpers::ShowBlockingDialog(class AGbxPlayerController* Pc, class FText HeaderText, class FText MessageText, bool bBlocksAllUsers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxCoreDialogBoxHelpers", "ShowBlockingDialog");

	Params::UGbxCoreDialogBoxHelpers_ShowBlockingDialog_Params Parms{};

	Parms.Pc = Pc;
	Parms.HeaderText = HeaderText;
	Parms.MessageText = MessageText;
	Parms.bBlocksAllUsers = bBlocksAllUsers;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxUI.GbxCrosshairDataAsset
// (None)

class UClass* UGbxCrosshairDataAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxCrosshairDataAsset");

	return Clss;
}


// GbxCrosshairDataAsset GbxUI.Default__GbxCrosshairDataAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxCrosshairDataAsset* UGbxCrosshairDataAsset::GetDefaultObj()
{
	static class UGbxCrosshairDataAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxCrosshairDataAsset*>(UGbxCrosshairDataAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxMenuSwitcherMenuData
// (None)

class UClass* UGbxMenuSwitcherMenuData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxMenuSwitcherMenuData");

	return Clss;
}


// GbxMenuSwitcherMenuData GbxUI.Default__GbxMenuSwitcherMenuData
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxMenuSwitcherMenuData* UGbxMenuSwitcherMenuData::GetDefaultObj()
{
	static class UGbxMenuSwitcherMenuData* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxMenuSwitcherMenuData*>(UGbxMenuSwitcherMenuData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxDebugMenuData
// (None)

class UClass* UGbxDebugMenuData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxDebugMenuData");

	return Clss;
}


// GbxDebugMenuData GbxUI.Default__GbxDebugMenuData
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxDebugMenuData* UGbxDebugMenuData::GetDefaultObj()
{
	static class UGbxDebugMenuData* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxDebugMenuData*>(UGbxDebugMenuData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxMenuSwitcher
// (None)

class UClass* UGbxMenuSwitcher::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxMenuSwitcher");

	return Clss;
}


// GbxMenuSwitcher GbxUI.Default__GbxMenuSwitcher
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxMenuSwitcher* UGbxMenuSwitcher::GetDefaultObj()
{
	static class UGbxMenuSwitcher* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxMenuSwitcher*>(UGbxMenuSwitcher::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxMenuSwitcher.SwitchToPage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        SubMenuId                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxMenuSwitcher::SwitchToPage(class FName SubMenuId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxMenuSwitcher", "SwitchToPage");

	Params::UGbxMenuSwitcher_SwitchToPage_Params Parms{};

	Parms.SubMenuId = SubMenuId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxMenuSwitcher.PrevPage
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGbxMenuSwitcher::PrevPage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxMenuSwitcher", "PrevPage");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxMenuSwitcher.NextPage
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGbxMenuSwitcher::NextPage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxMenuSwitcher", "NextPage");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxMenuSwitcher.GetCurrentSubmenuId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UGbxMenuSwitcher::GetCurrentSubmenuId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxMenuSwitcher", "GetCurrentSubmenuId");

	Params::UGbxMenuSwitcher_GetCurrentSubmenuId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxUI.GbxDebugMenu
// (None)

class UClass* UGbxDebugMenu::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxDebugMenu");

	return Clss;
}


// GbxDebugMenu GbxUI.Default__GbxDebugMenu
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxDebugMenu* UGbxDebugMenu::GetDefaultObj()
{
	static class UGbxDebugMenu* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxDebugMenu*>(UGbxDebugMenu::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxDebugMenu.OnCloseClicked
// (Final, Native, Public)
// Parameters:

void UGbxDebugMenu::OnCloseClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDebugMenu", "OnCloseClicked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxDebugMenu.OnCategorySelected
// (Final, Native, Public, HasOutParams)
// Parameters:
// class UGbxUserWidget*              Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGbxMenuInputEvent          InputInfo                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGbxDebugMenu::OnCategorySelected(class UGbxUserWidget* Widget, struct FGbxMenuInputEvent& InputInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDebugMenu", "OnCategorySelected");

	Params::UGbxDebugMenu_OnCategorySelected_Params Parms{};

	Parms.Widget = Widget;
	Parms.InputInfo = InputInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxUI.GbxDebugRumbleMenu
// (None)

class UClass* UGbxDebugRumbleMenu::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxDebugRumbleMenu");

	return Clss;
}


// GbxDebugRumbleMenu GbxUI.Default__GbxDebugRumbleMenu
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxDebugRumbleMenu* UGbxDebugRumbleMenu::GetDefaultObj()
{
	static class UGbxDebugRumbleMenu* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxDebugRumbleMenu*>(UGbxDebugRumbleMenu::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxDebugRumbleMenu.OnSliderValueChanged
// (Final, Native, Protected)
// Parameters:
// class UGbxListItem*                Item                                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxDebugRumbleMenu::OnSliderValueChanged(class UGbxListItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDebugRumbleMenu", "OnSliderValueChanged");

	Params::UGbxDebugRumbleMenu_OnSliderValueChanged_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxUI.GbxDialogBoxData
// (None)

class UClass* UGbxDialogBoxData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxDialogBoxData");

	return Clss;
}


// GbxDialogBoxData GbxUI.Default__GbxDialogBoxData
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxDialogBoxData* UGbxDialogBoxData::GetDefaultObj()
{
	static class UGbxDialogBoxData* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxDialogBoxData*>(UGbxDialogBoxData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxDialogBox
// (None)

class UClass* UGbxDialogBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxDialogBox");

	return Clss;
}


// GbxDialogBox GbxUI.Default__GbxDialogBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxDialogBox* UGbxDialogBox::GetDefaultObj()
{
	static class UGbxDialogBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxDialogBox*>(UGbxDialogBox::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxDialogBox.UpdateText
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        NewHeaderText                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        NewBodyText                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGbxDialogBox::UpdateText(class FText& NewHeaderText, class FText& NewBodyText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBox", "UpdateText");

	Params::UGbxDialogBox_UpdateText_Params Parms{};

	Parms.NewHeaderText = NewHeaderText;
	Parms.NewBodyText = NewBodyText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxUI.GbxDialogBox.SetupDialog
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGbxDialogBoxInfo           DialogBoxInfo                                                    (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UGbxDialogBox::SetupDialog(struct FGbxDialogBoxInfo& DialogBoxInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBox", "SetupDialog");

	Params::UGbxDialogBox_SetupDialog_Params Parms{};

	Parms.DialogBoxInfo = DialogBoxInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxUI.GbxDialogBox.SetHeaderTextFormatArg
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      ArgName                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReplacementText                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGbxDialogBox::SetHeaderTextFormatArg(const class FString& ArgName, class FText& ReplacementText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBox", "SetHeaderTextFormatArg");

	Params::UGbxDialogBox_SetHeaderTextFormatArg_Params Parms{};

	Parms.ArgName = ArgName;
	Parms.ReplacementText = ReplacementText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxDialogBox.SetHeaderText
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        NewText                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bClearFormatArgs                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxDialogBox::SetHeaderText(class FText& NewText, bool bClearFormatArgs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBox", "SetHeaderText");

	Params::UGbxDialogBox_SetHeaderText_Params Parms{};

	Parms.NewText = NewText;
	Parms.bClearFormatArgs = bClearFormatArgs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxDialogBox.SetBodyTextFormatArg
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      ArgName                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReplacementText                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGbxDialogBox::SetBodyTextFormatArg(const class FString& ArgName, class FText& ReplacementText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBox", "SetBodyTextFormatArg");

	Params::UGbxDialogBox_SetBodyTextFormatArg_Params Parms{};

	Parms.ArgName = ArgName;
	Parms.ReplacementText = ReplacementText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxDialogBox.SetBodyText
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        NewText                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bClearFormatArgs                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxDialogBox::SetBodyText(class FText& NewText, bool bClearFormatArgs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBox", "SetBodyText");

	Params::UGbxDialogBox_SetBodyText_Params Parms{};

	Parms.NewText = NewText;
	Parms.bClearFormatArgs = bClearFormatArgs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxDialogBox.OnChoiceClicked
// (Final, Native, Private)
// Parameters:
// class UGbxListItem*                ClickedItem                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxDialogBox::OnChoiceClicked(class UGbxListItem* ClickedItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBox", "OnChoiceClicked");

	Params::UGbxDialogBox_OnChoiceClicked_Params Parms{};

	Parms.ClickedItem = ClickedItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxDialogBox.Dismiss
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGbxDialogBox::Dismiss()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxDialogBox", "Dismiss");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxUI.GbxDialogBoxChoiceWidget
// (None)

class UClass* UGbxDialogBoxChoiceWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxDialogBoxChoiceWidget");

	return Clss;
}


// GbxDialogBoxChoiceWidget GbxUI.Default__GbxDialogBoxChoiceWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxDialogBoxChoiceWidget* UGbxDialogBoxChoiceWidget::GetDefaultObj()
{
	static class UGbxDialogBoxChoiceWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxDialogBoxChoiceWidget*>(UGbxDialogBoxChoiceWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxDragDropContainerInterface
// (None)

class UClass* IGbxDragDropContainerInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxDragDropContainerInterface");

	return Clss;
}


// GbxDragDropContainerInterface GbxUI.Default__GbxDragDropContainerInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IGbxDragDropContainerInterface* IGbxDragDropContainerInterface::GetDefaultObj()
{
	static class IGbxDragDropContainerInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IGbxDragDropContainerInterface*>(IGbxDragDropContainerInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxFocusableWidgetStyleData
// (None)

class UClass* UGbxFocusableWidgetStyleData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxFocusableWidgetStyleData");

	return Clss;
}


// GbxFocusableWidgetStyleData GbxUI.Default__GbxFocusableWidgetStyleData
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxFocusableWidgetStyleData* UGbxFocusableWidgetStyleData::GetDefaultObj()
{
	static class UGbxFocusableWidgetStyleData* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxFocusableWidgetStyleData*>(UGbxFocusableWidgetStyleData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxFocusableWidget
// (None)

class UClass* IGbxFocusableWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxFocusableWidget");

	return Clss;
}


// GbxFocusableWidget GbxUI.Default__GbxFocusableWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class IGbxFocusableWidget* IGbxFocusableWidget::GetDefaultObj()
{
	static class IGbxFocusableWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<IGbxFocusableWidget*>(IGbxFocusableWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxFocusableWidget.SetFocusableWidgetEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGbxFocusableWidget::SetFocusableWidgetEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxFocusableWidget", "SetFocusableWidgetEnabled");

	Params::IGbxFocusableWidget_SetFocusableWidgetEnabled_Params Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxFocusableWidget.IsFocusableWidgetFocused
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IGbxFocusableWidget::IsFocusableWidgetFocused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxFocusableWidget", "IsFocusableWidgetFocused");

	Params::IGbxFocusableWidget_IsFocusableWidgetFocused_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxFocusableWidget.IsFocusableWidgetEnabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IGbxFocusableWidget::IsFocusableWidgetEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxFocusableWidget", "IsFocusableWidgetEnabled");

	Params::IGbxFocusableWidget_IsFocusableWidgetEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxFocusableWidget.GetFocusableWidgetState
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EGbxFocusableWidgetStateReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EGbxFocusableWidgetState IGbxFocusableWidget::GetFocusableWidgetState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxFocusableWidget", "GetFocusableWidgetState");

	Params::IGbxFocusableWidget_GetFocusableWidgetState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxUI.GbxFullScreenMovie
// (None)

class UClass* UGbxFullScreenMovie::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxFullScreenMovie");

	return Clss;
}


// GbxFullScreenMovie GbxUI.Default__GbxFullScreenMovie
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxFullScreenMovie* UGbxFullScreenMovie::GetDefaultObj()
{
	static class UGbxFullScreenMovie* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxFullScreenMovie*>(UGbxFullScreenMovie::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxFullScreenMovie.OnMovieFinishedPlaying
// (Final, Native, Public)
// Parameters:

void UGbxFullScreenMovie::OnMovieFinishedPlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxFullScreenMovie", "OnMovieFinishedPlaying");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxUI.GbxGFxContextualMenuData
// (None)

class UClass* UGbxGFxContextualMenuData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxContextualMenuData");

	return Clss;
}


// GbxGFxContextualMenuData GbxUI.Default__GbxGFxContextualMenuData
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxContextualMenuData* UGbxGFxContextualMenuData::GetDefaultObj()
{
	static class UGbxGFxContextualMenuData* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxContextualMenuData*>(UGbxGFxContextualMenuData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxGFxContextualMenu
// (None)

class UClass* UGbxGFxContextualMenu::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxContextualMenu");

	return Clss;
}


// GbxGFxContextualMenu GbxUI.Default__GbxGFxContextualMenu
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxContextualMenu* UGbxGFxContextualMenu::GetDefaultObj()
{
	static class UGbxGFxContextualMenu* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxContextualMenu*>(UGbxGFxContextualMenu::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxGFxContextualMenu.OnSelectionChanged
// (Final, Native, Private, Const)
// Parameters:
// class UGbxGFxListCell*             Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxGFxContextualMenu::OnSelectionChanged(class UGbxGFxListCell* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxContextualMenu", "OnSelectionChanged");

	Params::UGbxGFxContextualMenu_OnSelectionChanged_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxContextualMenu.OnContextualMenuItemClicked
// (Final, Native, Private, HasOutParams, Const)
// Parameters:
// class UGbxGFxButton*               PressedButton                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGbxMenuInputEvent          InputInfo                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGbxGFxContextualMenu::OnContextualMenuItemClicked(class UGbxGFxButton* PressedButton, struct FGbxMenuInputEvent& InputInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxContextualMenu", "OnContextualMenuItemClicked");

	Params::UGbxGFxContextualMenu_OnContextualMenuItemClicked_Params Parms{};

	Parms.PressedButton = PressedButton;
	Parms.InputInfo = InputInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxUI.GbxGFxContextualMenuHelpers
// (None)

class UClass* UGbxGFxContextualMenuHelpers::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxContextualMenuHelpers");

	return Clss;
}


// GbxGFxContextualMenuHelpers GbxUI.Default__GbxGFxContextualMenuHelpers
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxContextualMenuHelpers* UGbxGFxContextualMenuHelpers::GetDefaultObj()
{
	static class UGbxGFxContextualMenuHelpers* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxContextualMenuHelpers*>(UGbxGFxContextualMenuHelpers::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxGFxDragDropManager
// (None)

class UClass* UGbxGFxDragDropManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxDragDropManager");

	return Clss;
}


// GbxGFxDragDropManager GbxUI.Default__GbxGFxDragDropManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxDragDropManager* UGbxGFxDragDropManager::GetDefaultObj()
{
	static class UGbxGFxDragDropManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxDragDropManager*>(UGbxGFxDragDropManager::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxGFxDragDropManager.OnDropButtonUnhovered
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class UGbxGFxButton*               UnhoveredButton                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGbxMenuInputEvent          InputInfo                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGbxGFxDragDropManager::OnDropButtonUnhovered(class UGbxGFxButton* UnhoveredButton, struct FGbxMenuInputEvent& InputInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxDragDropManager", "OnDropButtonUnhovered");

	Params::UGbxGFxDragDropManager_OnDropButtonUnhovered_Params Parms{};

	Parms.UnhoveredButton = UnhoveredButton;
	Parms.InputInfo = InputInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxDragDropManager.OnDropButtonHovered
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class UGbxGFxButton*               HoveredButton                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGbxMenuInputEvent          InputInfo                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGbxGFxDragDropManager::OnDropButtonHovered(class UGbxGFxButton* HoveredButton, struct FGbxMenuInputEvent& InputInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxDragDropManager", "OnDropButtonHovered");

	Params::UGbxGFxDragDropManager_OnDropButtonHovered_Params Parms{};

	Parms.HoveredButton = HoveredButton;
	Parms.InputInfo = InputInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxUI.GbxGFxDropDownList
// (None)

class UClass* UGbxGFxDropDownList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxDropDownList");

	return Clss;
}


// GbxGFxDropDownList GbxUI.Default__GbxGFxDropDownList
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxDropDownList* UGbxGFxDropDownList::GetDefaultObj()
{
	static class UGbxGFxDropDownList* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxDropDownList*>(UGbxGFxDropDownList::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxGFxDropDownList.OnEntryClicked
// (Final, Native, Private, HasOutParams)
// Parameters:
// class UGbxGFxButton*               BUTTON                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGbxMenuInputEvent          InputInfo                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGbxGFxDropDownList::OnEntryClicked(class UGbxGFxButton* BUTTON, struct FGbxMenuInputEvent& InputInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxDropDownList", "OnEntryClicked");

	Params::UGbxGFxDropDownList_OnEntryClicked_Params Parms{};

	Parms.BUTTON = BUTTON;
	Parms.InputInfo = InputInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxDropDownList.OnDropDownButtonClicked
// (Final, Native, Private, HasOutParams)
// Parameters:
// class UGbxGFxButton*               BUTTON                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGbxMenuInputEvent          InputInfo                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGbxGFxDropDownList::OnDropDownButtonClicked(class UGbxGFxButton* BUTTON, struct FGbxMenuInputEvent& InputInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxDropDownList", "OnDropDownButtonClicked");

	Params::UGbxGFxDropDownList_OnDropDownButtonClicked_Params Parms{};

	Parms.BUTTON = BUTTON;
	Parms.InputInfo = InputInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxUI.GbxGFxComboBoxScrollingList
// (None)

class UClass* UGbxGFxComboBoxScrollingList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxComboBoxScrollingList");

	return Clss;
}


// GbxGFxComboBoxScrollingList GbxUI.Default__GbxGFxComboBoxScrollingList
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxComboBoxScrollingList* UGbxGFxComboBoxScrollingList::GetDefaultObj()
{
	static class UGbxGFxComboBoxScrollingList* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxComboBoxScrollingList*>(UGbxGFxComboBoxScrollingList::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxGFxEditableTextField
// (None)

class UClass* UGbxGFxEditableTextField::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxEditableTextField");

	return Clss;
}


// GbxGFxEditableTextField GbxUI.Default__GbxGFxEditableTextField
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxEditableTextField* UGbxGFxEditableTextField::GetDefaultObj()
{
	static class UGbxGFxEditableTextField* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxEditableTextField*>(UGbxGFxEditableTextField::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxGFxHintBarContainer
// (None)

class UClass* UGbxGFxHintBarContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxHintBarContainer");

	return Clss;
}


// GbxGFxHintBarContainer GbxUI.Default__GbxGFxHintBarContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxHintBarContainer* UGbxGFxHintBarContainer::GetDefaultObj()
{
	static class UGbxGFxHintBarContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxHintBarContainer*>(UGbxGFxHintBarContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxGFxHintWidget
// (None)

class UClass* UGbxGFxHintWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxHintWidget");

	return Clss;
}


// GbxGFxHintWidget GbxUI.Default__GbxGFxHintWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxHintWidget* UGbxGFxHintWidget::GetDefaultObj()
{
	static class UGbxGFxHintWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxHintWidget*>(UGbxGFxHintWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxGFxHintWidget.OnThisHintClicked
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class UGbxGFxButton*               BUTTON                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGbxMenuInputEvent          InputInfo                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGbxGFxHintWidget::OnThisHintClicked(class UGbxGFxButton* BUTTON, struct FGbxMenuInputEvent& InputInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxHintWidget", "OnThisHintClicked");

	Params::UGbxGFxHintWidget_OnThisHintClicked_Params Parms{};

	Parms.BUTTON = BUTTON;
	Parms.InputInfo = InputInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxUI.GbxGFxListItemComboBox
// (None)

class UClass* UGbxGFxListItemComboBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxListItemComboBox");

	return Clss;
}


// GbxGFxListItemComboBox GbxUI.Default__GbxGFxListItemComboBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxListItemComboBox* UGbxGFxListItemComboBox::GetDefaultObj()
{
	static class UGbxGFxListItemComboBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxListItemComboBox*>(UGbxGFxListItemComboBox::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxGFxListItemComboBox.OnSelectionUpdated
// (Final, Native, Private)
// Parameters:
// class UGbxGFxListCell*             Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxGFxListItemComboBox::OnSelectionUpdated(class UGbxGFxListCell* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxListItemComboBox", "OnSelectionUpdated");

	Params::UGbxGFxListItemComboBox_OnSelectionUpdated_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxListItemComboBox.OnOwningListSelectionChanged
// (Final, Native, Private)
// Parameters:
// class UGbxGFxListCell*             Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxGFxListItemComboBox::OnOwningListSelectionChanged(class UGbxGFxListCell* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxListItemComboBox", "OnOwningListSelectionChanged");

	Params::UGbxGFxListItemComboBox_OnOwningListSelectionChanged_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxListItemComboBox.OnDropDownButtonClicked
// (Final, Native, Private)
// Parameters:

void UGbxGFxListItemComboBox::OnDropDownButtonClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxListItemComboBox", "OnDropDownButtonClicked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxUI.GbxGFxListItemControls
// (None)

class UClass* UGbxGFxListItemControls::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxListItemControls");

	return Clss;
}


// GbxGFxListItemControls GbxUI.Default__GbxGFxListItemControls
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxListItemControls* UGbxGFxListItemControls::GetDefaultObj()
{
	static class UGbxGFxListItemControls* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxListItemControls*>(UGbxGFxListItemControls::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxGFxMediaPlayer
// (None)

class UClass* UGbxGFxMediaPlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxMediaPlayer");

	return Clss;
}


// GbxGFxMediaPlayer GbxUI.Default__GbxGFxMediaPlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxMediaPlayer* UGbxGFxMediaPlayer::GetDefaultObj()
{
	static class UGbxGFxMediaPlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxMediaPlayer*>(UGbxGFxMediaPlayer::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxGFxMediaPlayer.OnMovieTracksChanged
// (Final, Native, Private)
// Parameters:

void UGbxGFxMediaPlayer::OnMovieTracksChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMediaPlayer", "OnMovieTracksChanged");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxMediaPlayer.OnMovieSeekCompleted
// (Final, Native, Private)
// Parameters:

void UGbxGFxMediaPlayer::OnMovieSeekCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMediaPlayer", "OnMovieSeekCompleted");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxMediaPlayer.OnMoviePlaybackSuspended
// (Final, Native, Private)
// Parameters:

void UGbxGFxMediaPlayer::OnMoviePlaybackSuspended()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMediaPlayer", "OnMoviePlaybackSuspended");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxMediaPlayer.OnMoviePlaybackResumed
// (Final, Native, Private)
// Parameters:

void UGbxGFxMediaPlayer::OnMoviePlaybackResumed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMediaPlayer", "OnMoviePlaybackResumed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxMediaPlayer.OnMovieMediaOpenFailed
// (Final, Native, Private)
// Parameters:
// class FString                      FailedUrl                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxGFxMediaPlayer::OnMovieMediaOpenFailed(const class FString& FailedUrl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMediaPlayer", "OnMovieMediaOpenFailed");

	Params::UGbxGFxMediaPlayer_OnMovieMediaOpenFailed_Params Parms{};

	Parms.FailedUrl = FailedUrl;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxMediaPlayer.OnMovieMediaOpened
// (Final, Native, Private)
// Parameters:
// class FString                      OpenedUrl                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxGFxMediaPlayer::OnMovieMediaOpened(const class FString& OpenedUrl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMediaPlayer", "OnMovieMediaOpened");

	Params::UGbxGFxMediaPlayer_OnMovieMediaOpened_Params Parms{};

	Parms.OpenedUrl = OpenedUrl;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxMediaPlayer.OnMovieMediaClosed
// (Final, Native, Private)
// Parameters:

void UGbxGFxMediaPlayer::OnMovieMediaClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMediaPlayer", "OnMovieMediaClosed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxMediaPlayer.OnMovieEndReached
// (Final, Native, Private)
// Parameters:

void UGbxGFxMediaPlayer::OnMovieEndReached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMediaPlayer", "OnMovieEndReached");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction GbxUI.GbxGFxMediaPlayer.GbxGFxMediaPlayerEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UGbxGFxMediaPlayer::GbxGFxMediaPlayerEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMediaPlayer", "GbxGFxMediaPlayerEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Class GbxUI.GbxGFxMenuSwitcherNavCell
// (None)

class UClass* UGbxGFxMenuSwitcherNavCell::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxMenuSwitcherNavCell");

	return Clss;
}


// GbxGFxMenuSwitcherNavCell GbxUI.Default__GbxGFxMenuSwitcherNavCell
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxMenuSwitcherNavCell* UGbxGFxMenuSwitcherNavCell::GetDefaultObj()
{
	static class UGbxGFxMenuSwitcherNavCell* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxMenuSwitcherNavCell*>(UGbxGFxMenuSwitcherNavCell::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxGFxMenuSwitcherNavWidget
// (None)

class UClass* UGbxGFxMenuSwitcherNavWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxMenuSwitcherNavWidget");

	return Clss;
}


// GbxGFxMenuSwitcherNavWidget GbxUI.Default__GbxGFxMenuSwitcherNavWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxMenuSwitcherNavWidget* UGbxGFxMenuSwitcherNavWidget::GetDefaultObj()
{
	static class UGbxGFxMenuSwitcherNavWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxMenuSwitcherNavWidget*>(UGbxGFxMenuSwitcherNavWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxGFxMenuSwitcherNavWidget.OnTabClicked
// (Final, Native, Public, HasOutParams)
// Parameters:
// class UGbxGFxButton*               BUTTON                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGbxMenuInputEvent          InputInfo                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGbxGFxMenuSwitcherNavWidget::OnTabClicked(class UGbxGFxButton* BUTTON, struct FGbxMenuInputEvent& InputInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxMenuSwitcherNavWidget", "OnTabClicked");

	Params::UGbxGFxMenuSwitcherNavWidget_OnTabClicked_Params Parms{};

	Parms.BUTTON = BUTTON;
	Parms.InputInfo = InputInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxUI.GbxGFxSprite
// (None)

class UClass* UGbxGFxSprite::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxSprite");

	return Clss;
}


// GbxGFxSprite GbxUI.Default__GbxGFxSprite
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxSprite* UGbxGFxSprite::GetDefaultObj()
{
	static class UGbxGFxSprite* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxSprite*>(UGbxGFxSprite::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxGFxMouseBlocker
// (None)

class UClass* UGbxGFxMouseBlocker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxMouseBlocker");

	return Clss;
}


// GbxGFxMouseBlocker GbxUI.Default__GbxGFxMouseBlocker
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxMouseBlocker* UGbxGFxMouseBlocker::GetDefaultObj()
{
	static class UGbxGFxMouseBlocker* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxMouseBlocker*>(UGbxGFxMouseBlocker::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxGFxMouseCapturePanel
// (None)

class UClass* UGbxGFxMouseCapturePanel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxMouseCapturePanel");

	return Clss;
}


// GbxGFxMouseCapturePanel GbxUI.Default__GbxGFxMouseCapturePanel
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxMouseCapturePanel* UGbxGFxMouseCapturePanel::GetDefaultObj()
{
	static class UGbxGFxMouseCapturePanel* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxMouseCapturePanel*>(UGbxGFxMouseCapturePanel::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxGFxPooledGridList
// (None)

class UClass* UGbxGFxPooledGridList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxPooledGridList");

	return Clss;
}


// GbxGFxPooledGridList GbxUI.Default__GbxGFxPooledGridList
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxPooledGridList* UGbxGFxPooledGridList::GetDefaultObj()
{
	static class UGbxGFxPooledGridList* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxPooledGridList*>(UGbxGFxPooledGridList::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxGFxRadioButtonList
// (None)

class UClass* UGbxGFxRadioButtonList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxRadioButtonList");

	return Clss;
}


// GbxGFxRadioButtonList GbxUI.Default__GbxGFxRadioButtonList
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxRadioButtonList* UGbxGFxRadioButtonList::GetDefaultObj()
{
	static class UGbxGFxRadioButtonList* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxRadioButtonList*>(UGbxGFxRadioButtonList::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxGFxRechargeableProgressBar
// (None)

class UClass* UGbxGFxRechargeableProgressBar::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxRechargeableProgressBar");

	return Clss;
}


// GbxGFxRechargeableProgressBar GbxUI.Default__GbxGFxRechargeableProgressBar
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxRechargeableProgressBar* UGbxGFxRechargeableProgressBar::GetDefaultObj()
{
	static class UGbxGFxRechargeableProgressBar* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxRechargeableProgressBar*>(UGbxGFxRechargeableProgressBar::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxGFxSlider
// (None)

class UClass* UGbxGFxSlider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxSlider");

	return Clss;
}


// GbxGFxSlider GbxUI.Default__GbxGFxSlider
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxSlider* UGbxGFxSlider::GetDefaultObj()
{
	static class UGbxGFxSlider* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxSlider*>(UGbxGFxSlider::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction GbxUI.GbxGFxSlider.GbxGFxSliderUpdateEvent__DelegateSignature
// (Public, Delegate)
// Parameters:
// float                              SliderPercent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxGFxSlider::GbxGFxSliderUpdateEvent__DelegateSignature(float SliderPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxSlider", "GbxGFxSliderUpdateEvent__DelegateSignature");

	Params::UGbxGFxSlider_GbxGFxSliderUpdateEvent__DelegateSignature_Params Parms{};

	Parms.SliderPercent = SliderPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxUI.GbxGFxSlider.EndSlide
// (Final, Native, Public, HasOutParams)
// Parameters:
// class UGbxGFxButton*               BUTTON                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGbxMenuInputEvent          InputInfo                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGbxGFxSlider::EndSlide(class UGbxGFxButton* BUTTON, struct FGbxMenuInputEvent& InputInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxSlider", "EndSlide");

	Params::UGbxGFxSlider_EndSlide_Params Parms{};

	Parms.BUTTON = BUTTON;
	Parms.InputInfo = InputInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxSlider.BeginRightSlide
// (Final, Native, Public, HasOutParams)
// Parameters:
// class UGbxGFxButton*               BUTTON                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGbxMenuInputEvent          InputInfo                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGbxGFxSlider::BeginRightSlide(class UGbxGFxButton* BUTTON, struct FGbxMenuInputEvent& InputInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxSlider", "BeginRightSlide");

	Params::UGbxGFxSlider_BeginRightSlide_Params Parms{};

	Parms.BUTTON = BUTTON;
	Parms.InputInfo = InputInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxGFxSlider.BeginLeftSlide
// (Final, Native, Public, HasOutParams)
// Parameters:
// class UGbxGFxButton*               BUTTON                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGbxMenuInputEvent          InputInfo                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGbxGFxSlider::BeginLeftSlide(class UGbxGFxButton* BUTTON, struct FGbxMenuInputEvent& InputInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxGFxSlider", "BeginLeftSlide");

	Params::UGbxGFxSlider_BeginLeftSlide_Params Parms{};

	Parms.BUTTON = BUTTON;
	Parms.InputInfo = InputInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxUI.GbxGridListWidget
// (None)

class UClass* UGbxGridListWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGridListWidget");

	return Clss;
}


// GbxGridListWidget GbxUI.Default__GbxGridListWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGridListWidget* UGbxGridListWidget::GetDefaultObj()
{
	static class UGbxGridListWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGridListWidget*>(UGbxGridListWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxGuidePanel
// (None)

class UClass* UGbxGuidePanel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGuidePanel");

	return Clss;
}


// GbxGuidePanel GbxUI.Default__GbxGuidePanel
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGuidePanel* UGbxGuidePanel::GetDefaultObj()
{
	static class UGbxGuidePanel* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGuidePanel*>(UGbxGuidePanel::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxHintBarWidgetContainer
// (None)

class UClass* IGbxHintBarWidgetContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxHintBarWidgetContainer");

	return Clss;
}


// GbxHintBarWidgetContainer GbxUI.Default__GbxHintBarWidgetContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class IGbxHintBarWidgetContainer* IGbxHintBarWidgetContainer::GetDefaultObj()
{
	static class IGbxHintBarWidgetContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<IGbxHintBarWidgetContainer*>(IGbxHintBarWidgetContainer::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxHintBarWidgetContainer.HintBarSetVisible
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGbxHintBarWidgetContainer::HintBarSetVisible(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxHintBarWidgetContainer", "HintBarSetVisible");

	Params::IGbxHintBarWidgetContainer_HintBarSetVisible_Params Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxUI.GbxHintBarWidgetContainer.HintBarInitOwnerInfo
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGbxHintBar*                 HintBarOwner                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AGbxPlayerController*        PlayerControllerContext                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGbxHintBarWidgetContainer::HintBarInitOwnerInfo(class UGbxHintBar* HintBarOwner, class AGbxPlayerController* PlayerControllerContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxHintBarWidgetContainer", "HintBarInitOwnerInfo");

	Params::IGbxHintBarWidgetContainer_HintBarInitOwnerInfo_Params Parms{};

	Parms.HintBarOwner = HintBarOwner;
	Parms.PlayerControllerContext = PlayerControllerContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxUI.GbxHintBarWidgetContainer.HintBarClearAllHints
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IGbxHintBarWidgetContainer::HintBarClearAllHints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxHintBarWidgetContainer", "HintBarClearAllHints");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxUI.GbxHintBarWidgetContainer.HintBarAppendHint
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGbxHintInfo                HintInfo                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IGbxHintBarWidgetContainer::HintBarAppendHint(struct FGbxHintInfo& HintInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxHintBarWidgetContainer", "HintBarAppendHint");

	Params::IGbxHintBarWidgetContainer_HintBarAppendHint_Params Parms{};

	Parms.HintInfo = HintInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Class GbxUI.GbxHintBar
// (None)

class UClass* UGbxHintBar::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxHintBar");

	return Clss;
}


// GbxHintBar GbxUI.Default__GbxHintBar
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxHintBar* UGbxHintBar::GetDefaultObj()
{
	static class UGbxHintBar* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxHintBar*>(UGbxHintBar::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxHintBar.OnHintClicked
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InputAction                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHeld                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxHintBar::OnHintClicked(class FName& InputAction, bool bHeld)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxHintBar", "OnHintClicked");

	Params::UGbxHintBar_OnHintClicked_Params Parms{};

	Parms.InputAction = InputAction;
	Parms.bHeld = bHeld;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxUI.GbxHintWidget
// (None)

class UClass* IGbxHintWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxHintWidget");

	return Clss;
}


// GbxHintWidget GbxUI.Default__GbxHintWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class IGbxHintWidget* IGbxHintWidget::GetDefaultObj()
{
	static class IGbxHintWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<IGbxHintWidget*>(IGbxHintWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxHintWidget.HintWidgetSetVisible
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGbxHintWidget::HintWidgetSetVisible(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxHintWidget", "HintWidgetSetVisible");

	Params::IGbxHintWidget_HintWidgetSetVisible_Params Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxUI.GbxHintWidget.HintWidgetSetInfo
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGbxHintInfo                HintInfo                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IGbxHintWidget::HintWidgetSetInfo(struct FGbxHintInfo& HintInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxHintWidget", "HintWidgetSetInfo");

	Params::IGbxHintWidget_HintWidgetSetInfo_Params Parms{};

	Parms.HintInfo = HintInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxUI.GbxHintWidget.HintWidgetInitOwnerInfo
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGbxHintBar*                 HintBarOwner                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AGbxPlayerController*        PlayerControllerContext                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGbxHintWidget::HintWidgetInitOwnerInfo(class UGbxHintBar* HintBarOwner, class AGbxPlayerController* PlayerControllerContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxHintWidget", "HintWidgetInitOwnerInfo");

	Params::IGbxHintWidget_HintWidgetInitOwnerInfo_Params Parms{};

	Parms.HintBarOwner = HintBarOwner;
	Parms.PlayerControllerContext = PlayerControllerContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Class GbxUI.GbxHUDData
// (None)

class UClass* UGbxHUDData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxHUDData");

	return Clss;
}


// GbxHUDData GbxUI.Default__GbxHUDData
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxHUDData* UGbxHUDData::GetDefaultObj()
{
	static class UGbxHUDData* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxHUDData*>(UGbxHUDData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.HUDDataProviderInterface
// (None)

class UClass* IHUDDataProviderInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUDDataProviderInterface");

	return Clss;
}


// HUDDataProviderInterface GbxUI.Default__HUDDataProviderInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IHUDDataProviderInterface* IHUDDataProviderInterface::GetDefaultObj()
{
	static class IHUDDataProviderInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IHUDDataProviderInterface*>(IHUDDataProviderInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxGFxHUDFeedbackData
// (None)

class UClass* UGbxGFxHUDFeedbackData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxGFxHUDFeedbackData");

	return Clss;
}


// GbxGFxHUDFeedbackData GbxUI.Default__GbxGFxHUDFeedbackData
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxGFxHUDFeedbackData* UGbxGFxHUDFeedbackData::GetDefaultObj()
{
	static class UGbxGFxHUDFeedbackData* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxGFxHUDFeedbackData*>(UGbxGFxHUDFeedbackData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxHUDStateData
// (None)

class UClass* UGbxHUDStateData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxHUDStateData");

	return Clss;
}


// GbxHUDStateData GbxUI.Default__GbxHUDStateData
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxHUDStateData* UGbxHUDStateData::GetDefaultObj()
{
	static class UGbxHUDStateData* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxHUDStateData*>(UGbxHUDStateData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxList
// (None)

class UClass* IGbxList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxList");

	return Clss;
}


// GbxList GbxUI.Default__GbxList
// (Public, ClassDefaultObject, ArchetypeObject)

class IGbxList* IGbxList::GetDefaultObj()
{
	static class IGbxList* Default = nullptr;

	if (!Default)
		Default = static_cast<IGbxList*>(IGbxList::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxList.TryToAcquireMenuFocus
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bFromMouse                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGbxList::TryToAcquireMenuFocus(bool bFromMouse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxList", "TryToAcquireMenuFocus");

	Params::IGbxList_TryToAcquireMenuFocus_Params Parms{};

	Parms.bFromMouse = bFromMouse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxList.SetSelectionChangedDelegate
// (Native, Public, BlueprintCallable)
// Parameters:
// UDelegateProperty_                 InSelectionChangedDelegate                                       (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void IGbxList::SetSelectionChangedDelegate(UDelegateProperty_ InSelectionChangedDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxList", "SetSelectionChangedDelegate");

	Params::IGbxList_SetSelectionChangedDelegate_Params Parms{};

	Parms.InSelectionChangedDelegate = InSelectionChangedDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxList.SetSelectedItem
// (Native, Public, BlueprintCallable)
// Parameters:
// class UGbxListItem*                Item                                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bScrollIntoView                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAnimateScroll                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGbxList::SetSelectedItem(class UGbxListItem* Item, bool bScrollIntoView, bool bAnimateScroll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxList", "SetSelectedItem");

	Params::IGbxList_SetSelectedItem_Params Parms{};

	Parms.Item = Item;
	Parms.bScrollIntoView = bScrollIntoView;
	Parms.bAnimateScroll = bAnimateScroll;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxList.SetSelectedIndex
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewSelection                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bScrollIntoView                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAnimateScroll                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGbxList::SetSelectedIndex(int32 NewSelection, bool bScrollIntoView, bool bAnimateScroll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxList", "SetSelectedIndex");

	Params::IGbxList_SetSelectedIndex_Params Parms{};

	Parms.NewSelection = NewSelection;
	Parms.bScrollIntoView = bScrollIntoView;
	Parms.bAnimateScroll = bAnimateScroll;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxList.SetItemClickedDelegate
// (Native, Public, BlueprintCallable)
// Parameters:
// UDelegateProperty_                 InItemClickedDelegate                                            (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void IGbxList::SetItemClickedDelegate(UDelegateProperty_ InItemClickedDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxList", "SetItemClickedDelegate");

	Params::IGbxList_SetItemClickedDelegate_Params Parms{};

	Parms.InItemClickedDelegate = InItemClickedDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxList.RemoveListItem
// (Native, Public, BlueprintCallable)
// Parameters:
// class UGbxListItem*                Item                                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGbxList::RemoveListItem(class UGbxListItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxList", "RemoveListItem");

	Params::IGbxList_RemoveListItem_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxList.RemoveAllListItems
// (Native, Public, BlueprintCallable)
// Parameters:

void IGbxList::RemoveAllListItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxList", "RemoveAllListItems");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxList.OnItemClicked
// (Native, Public, BlueprintCallable)
// Parameters:
// class UGbxListItem*                Item                                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGbxList::OnItemClicked(class UGbxListItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxList", "OnItemClicked");

	Params::IGbxList_OnItemClicked_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxList.MoveSelectionUp
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IGbxList::MoveSelectionUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxList", "MoveSelectionUp");

	Params::IGbxList_MoveSelectionUp_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxList.MoveSelectionRight
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IGbxList::MoveSelectionRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxList", "MoveSelectionRight");

	Params::IGbxList_MoveSelectionRight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxList.MoveSelectionLeft
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IGbxList::MoveSelectionLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxList", "MoveSelectionLeft");

	Params::IGbxList_MoveSelectionLeft_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxList.MoveSelectionDown
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IGbxList::MoveSelectionDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxList", "MoveSelectionDown");

	Params::IGbxList_MoveSelectionDown_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxList.IsListFocused
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IGbxList::IsListFocused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxList", "IsListFocused");

	Params::IGbxList_IsListFocused_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxList.IsListEnabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IGbxList::IsListEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxList", "IsListEnabled");

	Params::IGbxList_IsListEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxList.InsertListItem
// (Native, Public, BlueprintCallable)
// Parameters:
// class UGbxListItem*                Item                                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGbxList::InsertListItem(class UGbxListItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxList", "InsertListItem");

	Params::IGbxList_InsertListItem_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxList.GetSelectedItem
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGbxListItem*                ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxListItem* IGbxList::GetSelectedItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxList", "GetSelectedItem");

	Params::IGbxList_GetSelectedItem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxList.GetSelectedIndex
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 IGbxList::GetSelectedIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxList", "GetSelectedIndex");

	Params::IGbxList_GetSelectedIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxList.GetNumItemsInList
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 IGbxList::GetNumItemsInList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxList", "GetNumItemsInList");

	Params::IGbxList_GetNumItemsInList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxList.GetListItemFactory
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGbxListItemFactory*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxListItemFactory* IGbxList::GetListItemFactory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxList", "GetListItemFactory");

	Params::IGbxList_GetListItemFactory_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxList.GetItemAtIndex
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGbxListItem*                ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxListItem* IGbxList::GetItemAtIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxList", "GetItemAtIndex");

	Params::IGbxList_GetItemAtIndex_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxList.GetDefaultItemClass
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UGbxListItem>    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class UGbxListItem> IGbxList::GetDefaultItemClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxList", "GetDefaultItemClass");

	Params::IGbxList_GetDefaultItemClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxUI.GbxListItemBoolean
// (None)

class UClass* UGbxListItemBoolean::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxListItemBoolean");

	return Clss;
}


// GbxListItemBoolean GbxUI.Default__GbxListItemBoolean
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxListItemBoolean* UGbxListItemBoolean::GetDefaultObj()
{
	static class UGbxListItemBoolean* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxListItemBoolean*>(UGbxListItemBoolean::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxListItemBoolean.SetChecked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bChecked                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxListItemBoolean::SetChecked(bool bChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxListItemBoolean", "SetChecked");

	Params::UGbxListItemBoolean_SetChecked_Params Parms{};

	Parms.bChecked = bChecked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxListItemBoolean.IsChecked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxListItemBoolean::IsChecked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxListItemBoolean", "IsChecked");

	Params::UGbxListItemBoolean_IsChecked_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxListItemBoolean.HandleFocusableWidgetPressed
// (Native, Protected, HasOutParams)
// Parameters:
// struct FGbxMenuInputEvent          InputInfo                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGbxListItemBoolean::HandleFocusableWidgetPressed(struct FGbxMenuInputEvent& InputInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxListItemBoolean", "HandleFocusableWidgetPressed");

	Params::UGbxListItemBoolean_HandleFocusableWidgetPressed_Params Parms{};

	Parms.InputInfo = InputInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxUI.GbxListItemComboBox
// (None)

class UClass* UGbxListItemComboBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxListItemComboBox");

	return Clss;
}


// GbxListItemComboBox GbxUI.Default__GbxListItemComboBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxListItemComboBox* UGbxListItemComboBox::GetDefaultObj()
{
	static class UGbxListItemComboBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxListItemComboBox*>(UGbxListItemComboBox::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxListItemComboBox.SetSelectedOptionIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxListItemComboBox::SetSelectedOptionIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxListItemComboBox", "SetSelectedOptionIndex");

	Params::UGbxListItemComboBox_SetSelectedOptionIndex_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxListItemComboBox.SelectPreviousOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGbxListItemComboBox::SelectPreviousOption()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxListItemComboBox", "SelectPreviousOption");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxListItemComboBox.SelectNextOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGbxListItemComboBox::SelectNextOption()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxListItemComboBox", "SelectNextOption");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxListItemComboBox.OnValueComboBoxChanged
// (Final, Native, Protected)
// Parameters:
// class FString                      SelectedItem                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESelectInfo             SelectionType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxListItemComboBox::OnValueComboBoxChanged(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxListItemComboBox", "OnValueComboBoxChanged");

	Params::UGbxListItemComboBox_OnValueComboBoxChanged_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction GbxUI.GbxListItemComboBox.ListItemComboBoxSelectionChangedDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                              NewSelectedIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxListItemComboBox::ListItemComboBoxSelectionChangedDelegate__DelegateSignature(int32 NewSelectedIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxListItemComboBox", "ListItemComboBoxSelectionChangedDelegate__DelegateSignature");

	Params::UGbxListItemComboBox_ListItemComboBoxSelectionChangedDelegate__DelegateSignature_Params Parms{};

	Parms.NewSelectedIndex = NewSelectedIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxUI.GbxListItemComboBox.InitializeComboBox
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FText>                Items                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              InitialValue                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxListItemComboBox::InitializeComboBox(TArray<class FText>& Items, int32 InitialValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxListItemComboBox", "InitializeComboBox");

	Params::UGbxListItemComboBox_InitializeComboBox_Params Parms{};

	Parms.Items = Items;
	Parms.InitialValue = InitialValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxListItemComboBox.GetSelectedOptionIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGbxListItemComboBox::GetSelectedOptionIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxListItemComboBox", "GetSelectedOptionIndex");

	Params::UGbxListItemComboBox_GetSelectedOptionIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxUI.GbxListItemFactory
// (None)

class UClass* UGbxListItemFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxListItemFactory");

	return Clss;
}


// GbxListItemFactory GbxUI.Default__GbxListItemFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxListItemFactory* UGbxListItemFactory::GetDefaultObj()
{
	static class UGbxListItemFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxListItemFactory*>(UGbxListItemFactory::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxListItemFactory.CreateTextItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           Owner                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class IGbxList>   Parent                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class FText                        LabelText                                                        (Parm, NativeAccessSpecifierPublic)
// UDelegateProperty_                 ClickedDelegate                                                  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// UDelegateProperty_                 SelectedDelegate                                                 (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// class UGbxListItemText*            ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxListItemText* UGbxListItemFactory::CreateTextItem(class APlayerController* Owner, TScriptInterface<class IGbxList> Parent, class FText LabelText, UDelegateProperty_ ClickedDelegate, UDelegateProperty_ SelectedDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxListItemFactory", "CreateTextItem");

	Params::UGbxListItemFactory_CreateTextItem_Params Parms{};

	Parms.Owner = Owner;
	Parms.Parent = Parent;
	Parms.LabelText = LabelText;
	Parms.ClickedDelegate = ClickedDelegate;
	Parms.SelectedDelegate = SelectedDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxListItemFactory.CreateNumberItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           Owner                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class IGbxList>   Parent                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class FText                        LabelText                                                        (Parm, NativeAccessSpecifierPublic)
// float                              InitialValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SliderMin                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SliderMax                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SliderStep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UDelegateProperty_                 ChangedDelegate                                                  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// UDelegateProperty_                 SelectedDelegate                                                 (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// class UGbxListItemNumber*          ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxListItemNumber* UGbxListItemFactory::CreateNumberItem(class APlayerController* Owner, TScriptInterface<class IGbxList> Parent, class FText LabelText, float InitialValue, float SliderMin, float SliderMax, float SliderStep, UDelegateProperty_ ChangedDelegate, UDelegateProperty_ SelectedDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxListItemFactory", "CreateNumberItem");

	Params::UGbxListItemFactory_CreateNumberItem_Params Parms{};

	Parms.Owner = Owner;
	Parms.Parent = Parent;
	Parms.LabelText = LabelText;
	Parms.InitialValue = InitialValue;
	Parms.SliderMin = SliderMin;
	Parms.SliderMax = SliderMax;
	Parms.SliderStep = SliderStep;
	Parms.ChangedDelegate = ChangedDelegate;
	Parms.SelectedDelegate = SelectedDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxListItemFactory.CreateItemWithDelegates
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           Owner                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class IGbxList>   Parent                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// TSubclassOf<class UGbxListItem>    ItemClass                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UDelegateProperty_                 ClickedDelegate                                                  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// UDelegateProperty_                 SelectedDelegate                                                 (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// class UGbxListItem*                ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxListItem* UGbxListItemFactory::CreateItemWithDelegates(class APlayerController* Owner, TScriptInterface<class IGbxList> Parent, TSubclassOf<class UGbxListItem> ItemClass, UDelegateProperty_ ClickedDelegate, UDelegateProperty_ SelectedDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxListItemFactory", "CreateItemWithDelegates");

	Params::UGbxListItemFactory_CreateItemWithDelegates_Params Parms{};

	Parms.Owner = Owner;
	Parms.Parent = Parent;
	Parms.ItemClass = ItemClass;
	Parms.ClickedDelegate = ClickedDelegate;
	Parms.SelectedDelegate = SelectedDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxListItemFactory.CreateItem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           Owner                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class IGbxList>   Parent                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// TSubclassOf<class UGbxListItem>    ItemClass                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGbxListItem*                ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxListItem* UGbxListItemFactory::CreateItem(class APlayerController* Owner, TScriptInterface<class IGbxList> Parent, TSubclassOf<class UGbxListItem> ItemClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxListItemFactory", "CreateItem");

	Params::UGbxListItemFactory_CreateItem_Params Parms{};

	Parms.Owner = Owner;
	Parms.Parent = Parent;
	Parms.ItemClass = ItemClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxListItemFactory.CreateComboBoxItem
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class APlayerController*           Owner                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class IGbxList>   Parent                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class FText                        LabelText                                                        (Parm, NativeAccessSpecifierPublic)
// TArray<class FText>                Items                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              InitialIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UDelegateProperty_                 ChangedDelegate                                                  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// UDelegateProperty_                 SelectedDelegate                                                 (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// class UGbxListItemComboBox*        ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxListItemComboBox* UGbxListItemFactory::CreateComboBoxItem(class APlayerController* Owner, TScriptInterface<class IGbxList> Parent, class FText LabelText, TArray<class FText>& Items, int32 InitialIndex, UDelegateProperty_ ChangedDelegate, UDelegateProperty_ SelectedDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxListItemFactory", "CreateComboBoxItem");

	Params::UGbxListItemFactory_CreateComboBoxItem_Params Parms{};

	Parms.Owner = Owner;
	Parms.Parent = Parent;
	Parms.LabelText = LabelText;
	Parms.Items = Items;
	Parms.InitialIndex = InitialIndex;
	Parms.ChangedDelegate = ChangedDelegate;
	Parms.SelectedDelegate = SelectedDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxListItemFactory.CreateBooleanItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           Owner                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class IGbxList>   Parent                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class FText                        LabelText                                                        (Parm, NativeAccessSpecifierPublic)
// bool                               InitialValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UDelegateProperty_                 ChangedDelegate                                                  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// UDelegateProperty_                 SelectedDelegate                                                 (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// class UGbxListItemBoolean*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxListItemBoolean* UGbxListItemFactory::CreateBooleanItem(class APlayerController* Owner, TScriptInterface<class IGbxList> Parent, class FText LabelText, bool InitialValue, UDelegateProperty_ ChangedDelegate, UDelegateProperty_ SelectedDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxListItemFactory", "CreateBooleanItem");

	Params::UGbxListItemFactory_CreateBooleanItem_Params Parms{};

	Parms.Owner = Owner;
	Parms.Parent = Parent;
	Parms.LabelText = LabelText;
	Parms.InitialValue = InitialValue;
	Parms.ChangedDelegate = ChangedDelegate;
	Parms.SelectedDelegate = SelectedDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxUI.GbxListItemNumber
// (None)

class UClass* UGbxListItemNumber::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxListItemNumber");

	return Clss;
}


// GbxListItemNumber GbxUI.Default__GbxListItemNumber
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxListItemNumber* UGbxListItemNumber::GetDefaultObj()
{
	static class UGbxListItemNumber* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxListItemNumber*>(UGbxListItemNumber::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxListItemNumber.OnSliderValueChanged
// (Final, Native, Protected)
// Parameters:
// float                              NewPosition                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxListItemNumber::OnSliderValueChanged(float NewPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxListItemNumber", "OnSliderValueChanged");

	Params::UGbxListItemNumber_OnSliderValueChanged_Params Parms{};

	Parms.NewPosition = NewPosition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxListItemNumber.IncrementSlider
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGbxListItemNumber::IncrementSlider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxListItemNumber", "IncrementSlider");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxListItemNumber.GetCurrentValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGbxListItemNumber::GetCurrentValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxListItemNumber", "GetCurrentValue");

	Params::UGbxListItemNumber_GetCurrentValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxListItemNumber.DecrementSlider
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGbxListItemNumber::DecrementSlider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxListItemNumber", "DecrementSlider");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxUI.GbxMenu
// (None)

class UClass* IGbxMenu::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxMenu");

	return Clss;
}


// GbxMenu GbxUI.Default__GbxMenu
// (Public, ClassDefaultObject, ArchetypeObject)

class IGbxMenu* IGbxMenu::GetDefaultObj()
{
	static class IGbxMenu* Default = nullptr;

	if (!Default)
		Default = static_cast<IGbxMenu*>(IGbxMenu::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxMenuInputSettings
// (None)

class UClass* UGbxMenuInputSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxMenuInputSettings");

	return Clss;
}


// GbxMenuInputSettings GbxUI.Default__GbxMenuInputSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxMenuInputSettings* UGbxMenuInputSettings::GetDefaultObj()
{
	static class UGbxMenuInputSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxMenuInputSettings*>(UGbxMenuInputSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxMenuInput
// (None)

class UClass* UGbxMenuInput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxMenuInput");

	return Clss;
}


// GbxMenuInput GbxUI.Default__GbxMenuInput
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxMenuInput* UGbxMenuInput::GetDefaultObj()
{
	static class UGbxMenuInput* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxMenuInput*>(UGbxMenuInput::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxMenuInputListener
// (None)

class UClass* IGbxMenuInputListener::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxMenuInputListener");

	return Clss;
}


// GbxMenuInputListener GbxUI.Default__GbxMenuInputListener
// (Public, ClassDefaultObject, ArchetypeObject)

class IGbxMenuInputListener* IGbxMenuInputListener::GetDefaultObj()
{
	static class IGbxMenuInputListener* Default = nullptr;

	if (!Default)
		Default = static_cast<IGbxMenuInputListener*>(IGbxMenuInputListener::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxMenuStackMenuInfo
// (None)

class UClass* UGbxMenuStackMenuInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxMenuStackMenuInfo");

	return Clss;
}


// GbxMenuStackMenuInfo GbxUI.Default__GbxMenuStackMenuInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxMenuStackMenuInfo* UGbxMenuStackMenuInfo::GetDefaultObj()
{
	static class UGbxMenuStackMenuInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxMenuStackMenuInfo*>(UGbxMenuStackMenuInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxMenuStack
// (None)

class UClass* UGbxMenuStack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxMenuStack");

	return Clss;
}


// GbxMenuStack GbxUI.Default__GbxMenuStack
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxMenuStack* UGbxMenuStack::GetDefaultObj()
{
	static class UGbxMenuStack* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxMenuStack*>(UGbxMenuStack::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxMenuStack.Tick
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxMenuStack::Tick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxMenuStack", "Tick");

	Params::UGbxMenuStack_Tick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxMenuStack.SwitchTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGbxMenuData*                MenuData                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UGbxMenuStack::SwitchTo(class UGbxMenuData* MenuData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxMenuStack", "SwitchTo");

	Params::UGbxMenuStack_SwitchTo_Params Parms{};

	Parms.MenuData = MenuData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxMenuStack.SetBlockingMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShouldBlock                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxMenuStack::SetBlockingMode(bool bShouldBlock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxMenuStack", "SetBlockingMode");

	Params::UGbxMenuStack_SetBlockingMode_Params Parms{};

	Parms.bShouldBlock = bShouldBlock;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxMenuStack.SetBlockAllRawInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShouldBlock                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxMenuStack::SetBlockAllRawInput(bool bShouldBlock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxMenuStack", "SetBlockAllRawInput");

	Params::UGbxMenuStack_SetBlockAllRawInput_Params Parms{};

	Parms.bShouldBlock = bShouldBlock;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxMenuStack.Push
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGbxMenuData*                MenuData                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UGbxMenuStack::Push(class UGbxMenuData* MenuData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxMenuStack", "Push");

	Params::UGbxMenuStack_Push_Params Parms{};

	Parms.MenuData = MenuData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxMenuStack.PopToSwitchTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Menu                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGbxMenuData*                MenuData                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UGbxMenuStack::PopToSwitchTo(class UObject* Menu, class UGbxMenuData* MenuData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxMenuStack", "PopToSwitchTo");

	Params::UGbxMenuStack_PopToSwitchTo_Params Parms{};

	Parms.Menu = Menu;
	Parms.MenuData = MenuData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxMenuStack.PopTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Menu                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxMenuStack::PopTo(class UObject* Menu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxMenuStack", "PopTo");

	Params::UGbxMenuStack_PopTo_Params Parms{};

	Parms.Menu = Menu;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxMenuStack.Pop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGbxMenuStack::Pop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxMenuStack", "Pop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxMenuStack.Num
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGbxMenuStack::Num()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxMenuStack", "Num");

	Params::UGbxMenuStack_Num_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxMenuStack.HandleRawInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInputEvent             EVENTTYPE                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ControllerId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxMenuStack::HandleRawInput(const struct FKey& Key, enum class EInputEvent EVENTTYPE, int32 ControllerId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxMenuStack", "HandleRawInput");

	Params::UGbxMenuStack_HandleRawInput_Params Parms{};

	Parms.Key = Key;
	Parms.EVENTTYPE = EVENTTYPE;
	Parms.ControllerId = ControllerId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxMenuStack.GetTopMenu
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UGbxMenuStack::GetTopMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxMenuStack", "GetTopMenu");

	Params::UGbxMenuStack_GetTopMenu_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxMenuStack.GetMenuAtIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UGbxMenuStack::GetMenuAtIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxMenuStack", "GetMenuAtIndex");

	Params::UGbxMenuStack_GetMenuAtIndex_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxMenuStack.GetIndexOfMenu
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Menu                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGbxMenuStack::GetIndexOfMenu(class UObject* Menu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxMenuStack", "GetIndexOfMenu");

	Params::UGbxMenuStack_GetIndexOfMenu_Params Parms{};

	Parms.Menu = Menu;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxMenuStack.GetCurrentInputDevice
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EGbxMenuInputDevice     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EGbxMenuInputDevice UGbxMenuStack::GetCurrentInputDevice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxMenuStack", "GetCurrentInputDevice");

	Params::UGbxMenuStack_GetCurrentInputDevice_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxMenuStack.Draw
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGbxMenuStack::Draw()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxMenuStack", "Draw");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxMenuStack.Clear
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGbxMenuStack::Clear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxMenuStack", "Clear");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxUI.GbxMeshWidget
// (None)

class UClass* UGbxMeshWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxMeshWidget");

	return Clss;
}


// GbxMeshWidget GbxUI.Default__GbxMeshWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxMeshWidget* UGbxMeshWidget::GetDefaultObj()
{
	static class UGbxMeshWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxMeshWidget*>(UGbxMeshWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxNoClipCanvasPanel
// (None)

class UClass* UGbxNoClipCanvasPanel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxNoClipCanvasPanel");

	return Clss;
}


// GbxNoClipCanvasPanel GbxUI.Default__GbxNoClipCanvasPanel
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxNoClipCanvasPanel* UGbxNoClipCanvasPanel::GetDefaultObj()
{
	static class UGbxNoClipCanvasPanel* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxNoClipCanvasPanel*>(UGbxNoClipCanvasPanel::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxProgressBar
// (None)

class UClass* UGbxProgressBar::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxProgressBar");

	return Clss;
}


// GbxProgressBar GbxUI.Default__GbxProgressBar
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxProgressBar* UGbxProgressBar::GetDefaultObj()
{
	static class UGbxProgressBar* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxProgressBar*>(UGbxProgressBar::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxProgressBar.SetShear
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InShear                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxProgressBar::SetShear(float InShear)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxProgressBar", "SetShear");

	Params::UGbxProgressBar_SetShear_Params Parms{};

	Parms.InShear = InShear;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxProgressBar.SetPercent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InPercent                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxProgressBar::SetPercent(float InPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxProgressBar", "SetPercent");

	Params::UGbxProgressBar_SetPercent_Params Parms{};

	Parms.InPercent = InPercent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxProgressBar.SetMaxValueText
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGbxProgressBar::SetMaxValueText(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxProgressBar", "SetMaxValueText");

	Params::UGbxProgressBar_SetMaxValueText_Params Parms{};

	Parms.Text = Text;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxProgressBar.SetFillColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InColor                                                          (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxProgressBar::SetFillColorAndOpacity(const struct FLinearColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxProgressBar", "SetFillColorAndOpacity");

	Params::UGbxProgressBar_SetFillColorAndOpacity_Params Parms{};

	Parms.InColor = InColor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxProgressBar.SetCurrentValueText
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGbxProgressBar::SetCurrentValueText(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxProgressBar", "SetCurrentValueText");

	Params::UGbxProgressBar_SetCurrentValueText_Params Parms{};

	Parms.Text = Text;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxProgressBar.PassedPercentThreshold
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              Threshold                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OldValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CurrentValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncreasing                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDecreasing                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxProgressBar::PassedPercentThreshold(float Threshold, float OldValue, float CurrentValue, bool bIncreasing, bool bDecreasing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxProgressBar", "PassedPercentThreshold");

	Params::UGbxProgressBar_PassedPercentThreshold_Params Parms{};

	Parms.Threshold = Threshold;
	Parms.OldValue = OldValue;
	Parms.CurrentValue = CurrentValue;
	Parms.bIncreasing = bIncreasing;
	Parms.bDecreasing = bDecreasing;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxProgressBar.IsInterpolating
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxProgressBar::IsInterpolating()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxProgressBar", "IsInterpolating");

	Params::UGbxProgressBar_IsInterpolating_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxProgressBar.InterpolateToPercentWithInterpolator
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              InPercent                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGbxProgressBarInterpolator Interpolator                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UGbxProgressBar::InterpolateToPercentWithInterpolator(float InPercent, struct FGbxProgressBarInterpolator& Interpolator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxProgressBar", "InterpolateToPercentWithInterpolator");

	Params::UGbxProgressBar_InterpolateToPercentWithInterpolator_Params Parms{};

	Parms.InPercent = InPercent;
	Parms.Interpolator = Interpolator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxProgressBar.InterpolateToPercent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InPercent                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxProgressBar::InterpolateToPercent(float InPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxProgressBar", "InterpolateToPercent");

	Params::UGbxProgressBar_InterpolateToPercent_Params Parms{};

	Parms.InPercent = InPercent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxProgressBar.HandleShowDeltaEffect
// (Event, Public, BlueprintEvent)
// Parameters:
// class UWidget*                     Effect                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OldValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CurrentValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxProgressBar::HandleShowDeltaEffect(class UWidget* Effect, float OldValue, float CurrentValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxProgressBar", "HandleShowDeltaEffect");

	Params::UGbxProgressBar_HandleShowDeltaEffect_Params Parms{};

	Parms.Effect = Effect;
	Parms.OldValue = OldValue;
	Parms.CurrentValue = CurrentValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxUI.GbxProgressBar.HandlePercentChanged
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              OldValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CurrentValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsInterpolating                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGbxProgressBarInterpolator ActiveInterpolator                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UGbxProgressBar::HandlePercentChanged(float OldValue, float CurrentValue, bool bIsInterpolating, struct FGbxProgressBarInterpolator& ActiveInterpolator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxProgressBar", "HandlePercentChanged");

	Params::UGbxProgressBar_HandlePercentChanged_Params Parms{};

	Parms.OldValue = OldValue;
	Parms.CurrentValue = CurrentValue;
	Parms.bIsInterpolating = bIsInterpolating;
	Parms.ActiveInterpolator = ActiveInterpolator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxUI.GbxProgressBar.HandleEnterPercentRange
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                        RangeName                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxProgressBar::HandleEnterPercentRange(class FName& RangeName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxProgressBar", "HandleEnterPercentRange");

	Params::UGbxProgressBar_HandleEnterPercentRange_Params Parms{};

	Parms.RangeName = RangeName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxUI.GbxProgressBar.GetShear
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGbxProgressBar::GetShear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxProgressBar", "GetShear");

	Params::UGbxProgressBar_GetShear_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxProgressBar.GetPercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGbxProgressBar::GetPercent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxProgressBar", "GetPercent");

	Params::UGbxProgressBar_GetPercent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// DelegateFunction GbxUI.GbxProgressBar.GbxProgressBarRangeEvent__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// class FName                        RangeName                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxProgressBar::GbxProgressBarRangeEvent__DelegateSignature(class FName& RangeName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxProgressBar", "GbxProgressBarRangeEvent__DelegateSignature");

	Params::UGbxProgressBar_GbxProgressBarRangeEvent__DelegateSignature_Params Parms{};

	Parms.RangeName = RangeName;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction GbxUI.GbxProgressBar.GbxProgressBarEvent__DelegateSignature
// (Public, Delegate)
// Parameters:

void UGbxProgressBar::GbxProgressBarEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxProgressBar", "GbxProgressBarEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxUI.GbxProgressBar.EnteredPercentRange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              RangeMin                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RangeMax                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OldValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CurrentValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncreasing                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDecreasing                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxProgressBar::EnteredPercentRange(float RangeMin, float RangeMax, float OldValue, float CurrentValue, bool bIncreasing, bool bDecreasing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxProgressBar", "EnteredPercentRange");

	Params::UGbxProgressBar_EnteredPercentRange_Params Parms{};

	Parms.RangeMin = RangeMin;
	Parms.RangeMax = RangeMax;
	Parms.OldValue = OldValue;
	Parms.CurrentValue = CurrentValue;
	Parms.bIncreasing = bIncreasing;
	Parms.bDecreasing = bDecreasing;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxUI.GbxRetainerBox
// (None)

class UClass* UGbxRetainerBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxRetainerBox");

	return Clss;
}


// GbxRetainerBox GbxUI.Default__GbxRetainerBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxRetainerBox* UGbxRetainerBox::GetDefaultObj()
{
	static class UGbxRetainerBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxRetainerBox*>(UGbxRetainerBox::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxRichTextBlock
// (None)

class UClass* UGbxRichTextBlock::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxRichTextBlock");

	return Clss;
}


// GbxRichTextBlock GbxUI.Default__GbxRichTextBlock
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxRichTextBlock* UGbxRichTextBlock::GetDefaultObj()
{
	static class UGbxRichTextBlock* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxRichTextBlock*>(UGbxRichTextBlock::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxScrollBoxList
// (None)

class UClass* UGbxScrollBoxList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxScrollBoxList");

	return Clss;
}


// GbxScrollBoxList GbxUI.Default__GbxScrollBoxList
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxScrollBoxList* UGbxScrollBoxList::GetDefaultObj()
{
	static class UGbxScrollBoxList* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxScrollBoxList*>(UGbxScrollBoxList::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxSpinner
// (None)

class UClass* UGbxSpinner::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxSpinner");

	return Clss;
}


// GbxSpinner GbxUI.Default__GbxSpinner
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxSpinner* UGbxSpinner::GetDefaultObj()
{
	static class UGbxSpinner* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxSpinner*>(UGbxSpinner::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxSpinner.SpinRight
// (Final, Native, Public, HasOutParams)
// Parameters:
// class UGbxGFxButton*               PressedButton                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGbxMenuInputEvent          InputInfo                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGbxSpinner::SpinRight(class UGbxGFxButton* PressedButton, struct FGbxMenuInputEvent& InputInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxSpinner", "SpinRight");

	Params::UGbxSpinner_SpinRight_Params Parms{};

	Parms.PressedButton = PressedButton;
	Parms.InputInfo = InputInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction GbxUI.GbxSpinner.SpinnerValueUpdatedEvent__DelegateSignature
// (Public, Delegate)
// Parameters:

void UGbxSpinner::SpinnerValueUpdatedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxSpinner", "SpinnerValueUpdatedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxUI.GbxSpinner.SpinLeft
// (Final, Native, Public, HasOutParams)
// Parameters:
// class UGbxGFxButton*               PressedButton                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGbxMenuInputEvent          InputInfo                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGbxSpinner::SpinLeft(class UGbxGFxButton* PressedButton, struct FGbxMenuInputEvent& InputInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxSpinner", "SpinLeft");

	Params::UGbxSpinner_SpinLeft_Params Parms{};

	Parms.PressedButton = PressedButton;
	Parms.InputInfo = InputInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxUI.GbxTextField
// (None)

class UClass* UGbxTextField::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxTextField");

	return Clss;
}


// GbxTextField GbxUI.Default__GbxTextField
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxTextField* UGbxTextField::GetDefaultObj()
{
	static class UGbxTextField* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxTextField*>(UGbxTextField::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxTextField.OnScrollBarPositionUpdated
// (Final, Native, Public)
// Parameters:
// float                              SliderPercentage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxTextField::OnScrollBarPositionUpdated(float SliderPercentage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxTextField", "OnScrollBarPositionUpdated");

	Params::UGbxTextField_OnScrollBarPositionUpdated_Params Parms{};

	Parms.SliderPercentage = SliderPercentage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxUI.GbxUIAssetBankManager
// (None)

class UClass* UGbxUIAssetBankManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxUIAssetBankManager");

	return Clss;
}


// GbxUIAssetBankManager GbxUI.Default__GbxUIAssetBankManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxUIAssetBankManager* UGbxUIAssetBankManager::GetDefaultObj()
{
	static class UGbxUIAssetBankManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxUIAssetBankManager*>(UGbxUIAssetBankManager::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxUIDataCollector_BasicText
// (None)

class UClass* UGbxUIDataCollector_BasicText::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxUIDataCollector_BasicText");

	return Clss;
}


// GbxUIDataCollector_BasicText GbxUI.Default__GbxUIDataCollector_BasicText
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxUIDataCollector_BasicText* UGbxUIDataCollector_BasicText::GetDefaultObj()
{
	static class UGbxUIDataCollector_BasicText* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxUIDataCollector_BasicText*>(UGbxUIDataCollector_BasicText::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxUIEventDispatcher
// (None)

class UClass* UGbxUIEventDispatcher::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxUIEventDispatcher");

	return Clss;
}


// GbxUIEventDispatcher GbxUI.Default__GbxUIEventDispatcher
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxUIEventDispatcher* UGbxUIEventDispatcher::GetDefaultObj()
{
	static class UGbxUIEventDispatcher* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxUIEventDispatcher*>(UGbxUIEventDispatcher::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.UIAccessors
// (None)

class UClass* IUIAccessors::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIAccessors");

	return Clss;
}


// UIAccessors GbxUI.Default__UIAccessors
// (Public, ClassDefaultObject, ArchetypeObject)

class IUIAccessors* IUIAccessors::GetDefaultObj()
{
	static class IUIAccessors* Default = nullptr;

	if (!Default)
		Default = static_cast<IUIAccessors*>(IUIAccessors::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxUIHoldInputTracker
// (None)

class UClass* UGbxUIHoldInputTracker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxUIHoldInputTracker");

	return Clss;
}


// GbxUIHoldInputTracker GbxUI.Default__GbxUIHoldInputTracker
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxUIHoldInputTracker* UGbxUIHoldInputTracker::GetDefaultObj()
{
	static class UGbxUIHoldInputTracker* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxUIHoldInputTracker*>(UGbxUIHoldInputTracker::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxUIInputManager
// (None)

class UClass* UGbxUIInputManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxUIInputManager");

	return Clss;
}


// GbxUIInputManager GbxUI.Default__GbxUIInputManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxUIInputManager* UGbxUIInputManager::GetDefaultObj()
{
	static class UGbxUIInputManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxUIInputManager*>(UGbxUIInputManager::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxUIKillScaleform
// (None)

class UClass* UGbxUIKillScaleform::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxUIKillScaleform");

	return Clss;
}


// GbxUIKillScaleform GbxUI.Default__GbxUIKillScaleform
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxUIKillScaleform* UGbxUIKillScaleform::GetDefaultObj()
{
	static class UGbxUIKillScaleform* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxUIKillScaleform*>(UGbxUIKillScaleform::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxUILocalization
// (None)

class UClass* UGbxUILocalization::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxUILocalization");

	return Clss;
}


// GbxUILocalization GbxUI.Default__GbxUILocalization
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxUILocalization* UGbxUILocalization::GetDefaultObj()
{
	static class UGbxUILocalization* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxUILocalization*>(UGbxUILocalization::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxUILocalization.IsInputActionGlyphAvailable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        ActionName                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AGbxPlayerController*        Pc                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGbxActionToTextType    GlyphType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxUILocalization::IsInputActionGlyphAvailable(class FName ActionName, class AGbxPlayerController* Pc, enum class EGbxActionToTextType GlyphType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUILocalization", "IsInputActionGlyphAvailable");

	Params::UGbxUILocalization_IsInputActionGlyphAvailable_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.Pc = Pc;
	Parms.GlyphType = GlyphType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxUILocalization.InputActionToText
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        ActionName                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AGbxPlayerController*        Pc                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGbxActionToTextType    GlyphType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UGbxUILocalization::InputActionToText(class FName ActionName, class AGbxPlayerController* Pc, enum class EGbxActionToTextType GlyphType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUILocalization", "InputActionToText");

	Params::UGbxUILocalization_InputActionToText_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.Pc = Pc;
	Parms.GlyphType = GlyphType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxUILocalization.InputActionToRichText
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        ActionName                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AGbxPlayerController*        Pc                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGbxActionToTextType    GlyphType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   GlyphSize                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UGbxUILocalization::InputActionToRichText(class FName ActionName, class AGbxPlayerController* Pc, enum class EGbxActionToTextType GlyphType, const struct FVector2D& GlyphSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUILocalization", "InputActionToRichText");

	Params::UGbxUILocalization_InputActionToRichText_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.Pc = Pc;
	Parms.GlyphType = GlyphType;
	Parms.GlyphSize = GlyphSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxUILocalization.InputActionToGlyph
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        ActionName                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AGbxPlayerController*        Pc                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGbxActionToTextType    GlyphType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSlateBrush UGbxUILocalization::InputActionToGlyph(class FName ActionName, class AGbxPlayerController* Pc, enum class EGbxActionToTextType GlyphType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUILocalization", "InputActionToGlyph");

	Params::UGbxUILocalization_InputActionToGlyph_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.Pc = Pc;
	Parms.GlyphType = GlyphType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxUILocalization.InputActionToGFxHTMLText
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        ActionName                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AGbxPlayerController*        Pc                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGbxActionToTextType    GlyphType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              GlyphHeight                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              VSpace                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UGbxUILocalization::InputActionToGFxHTMLText(class FName ActionName, class AGbxPlayerController* Pc, enum class EGbxActionToTextType GlyphType, float GlyphHeight, int32 VSpace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUILocalization", "InputActionToGFxHTMLText");

	Params::UGbxUILocalization_InputActionToGFxHTMLText_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.Pc = Pc;
	Parms.GlyphType = GlyphType;
	Parms.GlyphHeight = GlyphHeight;
	Parms.VSpace = VSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxUI.GbxUILocalization.FKeyToGFxHTMLText
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKey                        Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AGbxPlayerController*        Pc                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGbxActionToTextType    GlyphType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              GlyphHeight                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UGbxUILocalization::FKeyToGFxHTMLText(struct FKey& Key, class AGbxPlayerController* Pc, enum class EGbxActionToTextType GlyphType, float GlyphHeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUILocalization", "FKeyToGFxHTMLText");

	Params::UGbxUILocalization_FKeyToGFxHTMLText_Params Parms{};

	Parms.Key = Key;
	Parms.Pc = Pc;
	Parms.GlyphType = GlyphType;
	Parms.GlyphHeight = GlyphHeight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxUI.GbxInputToGlyphMap
// (None)

class UClass* UGbxInputToGlyphMap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxInputToGlyphMap");

	return Clss;
}


// GbxInputToGlyphMap GbxUI.Default__GbxInputToGlyphMap
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxInputToGlyphMap* UGbxInputToGlyphMap::GetDefaultObj()
{
	static class UGbxInputToGlyphMap* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxInputToGlyphMap*>(UGbxInputToGlyphMap::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxUIPreloader
// (None)

class UClass* UGbxUIPreloader::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxUIPreloader");

	return Clss;
}


// GbxUIPreloader GbxUI.Default__GbxUIPreloader
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxUIPreloader* UGbxUIPreloader::GetDefaultObj()
{
	static class UGbxUIPreloader* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxUIPreloader*>(UGbxUIPreloader::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxUISpinnerWidget
// (None)

class UClass* UGbxUISpinnerWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxUISpinnerWidget");

	return Clss;
}


// GbxUISpinnerWidget GbxUI.Default__GbxUISpinnerWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxUISpinnerWidget* UGbxUISpinnerWidget::GetDefaultObj()
{
	static class UGbxUISpinnerWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxUISpinnerWidget*>(UGbxUISpinnerWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxUISpinnerWidget.MoveToNumber
// (Final, Native, Public)
// Parameters:
// uint8                              NewNumber                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGbxSpinnerWidgetGoToMethodGoToMethod                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGbxUISpinnerWidget::MoveToNumber(uint8 NewNumber, enum class EGbxSpinnerWidgetGoToMethod GoToMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxUISpinnerWidget", "MoveToNumber");

	Params::UGbxUISpinnerWidget_MoveToNumber_Params Parms{};

	Parms.NewNumber = NewNumber;
	Parms.GoToMethod = GoToMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxUI.GbxUIView
// (None)

class UClass* UGbxUIView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxUIView");

	return Clss;
}


// GbxUIView GbxUI.Default__GbxUIView
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxUIView* UGbxUIView::GetDefaultObj()
{
	static class UGbxUIView* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxUIView*>(UGbxUIView::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxUIViewManager
// (None)

class UClass* UGbxUIViewManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxUIViewManager");

	return Clss;
}


// GbxUIViewManager GbxUI.Default__GbxUIViewManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxUIViewManager* UGbxUIViewManager::GetDefaultObj()
{
	static class UGbxUIViewManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxUIViewManager*>(UGbxUIViewManager::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxWidgetComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UGbxWidgetComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxWidgetComponent");

	return Clss;
}


// GbxWidgetComponent GbxUI.Default__GbxWidgetComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxWidgetComponent* UGbxWidgetComponent::GetDefaultObj()
{
	static class UGbxWidgetComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxWidgetComponent*>(UGbxWidgetComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxWidgetComponent.Setup
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSubclassOf<class UUserWidget>     NewWidgetClass                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AGbxPlayerController*        NewTrackedPlayer                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             ParentComponent                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWidgetSpace            WidgetSpace                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewLayerZOrder                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        CollisionProfile                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxWidgetComponent::Setup(TSubclassOf<class UUserWidget>& NewWidgetClass, class AGbxPlayerController* NewTrackedPlayer, class USceneComponent* ParentComponent, enum class EWidgetSpace WidgetSpace, int32 NewLayerZOrder, class FName CollisionProfile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxWidgetComponent", "Setup");

	Params::UGbxWidgetComponent_Setup_Params Parms{};

	Parms.NewWidgetClass = NewWidgetClass;
	Parms.NewTrackedPlayer = NewTrackedPlayer;
	Parms.ParentComponent = ParentComponent;
	Parms.WidgetSpace = WidgetSpace;
	Parms.NewLayerZOrder = NewLayerZOrder;
	Parms.CollisionProfile = CollisionProfile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxWidgetComponent.SetDistanceScaleCurve
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCurveFloat*                 NewDistanceScaleCurve                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxWidgetComponent::SetDistanceScaleCurve(class UCurveFloat* NewDistanceScaleCurve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxWidgetComponent", "SetDistanceScaleCurve");

	Params::UGbxWidgetComponent_SetDistanceScaleCurve_Params Parms{};

	Parms.NewDistanceScaleCurve = NewDistanceScaleCurve;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxWidgetComponent.SetDistanceAlphaCurve
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCurveFloat*                 NewDistanceAlphaCurve                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxWidgetComponent::SetDistanceAlphaCurve(class UCurveFloat* NewDistanceAlphaCurve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxWidgetComponent", "SetDistanceAlphaCurve");

	Params::UGbxWidgetComponent_SetDistanceAlphaCurve_Params Parms{};

	Parms.NewDistanceAlphaCurve = NewDistanceAlphaCurve;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.GbxWidgetComponent.SetDistanceAlphaBorder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class Uborder*                     NewDistanceAlphaBorder                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxWidgetComponent::SetDistanceAlphaBorder(class Uborder* NewDistanceAlphaBorder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxWidgetComponent", "SetDistanceAlphaBorder");

	Params::UGbxWidgetComponent_SetDistanceAlphaBorder_Params Parms{};

	Parms.NewDistanceAlphaBorder = NewDistanceAlphaBorder;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxUI.GbxWidgetFocusManager
// (None)

class UClass* UGbxWidgetFocusManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxWidgetFocusManager");

	return Clss;
}


// GbxWidgetFocusManager GbxUI.Default__GbxWidgetFocusManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxWidgetFocusManager* UGbxWidgetFocusManager::GetDefaultObj()
{
	static class UGbxWidgetFocusManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxWidgetFocusManager*>(UGbxWidgetFocusManager::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.GbxWorldSpaceProxyWidget
// (None)

class UClass* UGbxWorldSpaceProxyWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxWorldSpaceProxyWidget");

	return Clss;
}


// GbxWorldSpaceProxyWidget GbxUI.Default__GbxWorldSpaceProxyWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxWorldSpaceProxyWidget* UGbxWorldSpaceProxyWidget::GetDefaultObj()
{
	static class UGbxWorldSpaceProxyWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxWorldSpaceProxyWidget*>(UGbxWorldSpaceProxyWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.GbxWorldSpaceProxyWidget.GetWorldLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UGbxWorldSpaceProxyWidget::GetWorldLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxWorldSpaceProxyWidget", "GetWorldLocation");

	Params::UGbxWorldSpaceProxyWidget_GetWorldLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxUI.InWorldDamageNumber
// (None)

class UClass* UInWorldDamageNumber::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InWorldDamageNumber");

	return Clss;
}


// InWorldDamageNumber GbxUI.Default__InWorldDamageNumber
// (Public, ClassDefaultObject, ArchetypeObject)

class UInWorldDamageNumber* UInWorldDamageNumber::GetDefaultObj()
{
	static class UInWorldDamageNumber* Default = nullptr;

	if (!Default)
		Default = static_cast<UInWorldDamageNumber*>(UInWorldDamageNumber::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxUI.InWorldDamageNumber.OnWentOffscreen
// (Final, Native, Public)
// Parameters:

void UInWorldDamageNumber::OnWentOffscreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InWorldDamageNumber", "OnWentOffscreen");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxUI.InWorldDamageNumber.ImpulseAnimationCompleted
// (Final, Native, Protected)
// Parameters:
// class UUserWidget*                 AssociatedWidget                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInWorldDamageNumber::ImpulseAnimationCompleted(class UUserWidget* AssociatedWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InWorldDamageNumber", "ImpulseAnimationCompleted");

	Params::UInWorldDamageNumber_ImpulseAnimationCompleted_Params Parms{};

	Parms.AssociatedWidget = AssociatedWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxUI.NexusAssetStoreUIMaterials
// (None)

class UClass* UNexusAssetStoreUIMaterials::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NexusAssetStoreUIMaterials");

	return Clss;
}


// NexusAssetStoreUIMaterials GbxUI.Default__NexusAssetStoreUIMaterials
// (Public, ClassDefaultObject, ArchetypeObject)

class UNexusAssetStoreUIMaterials* UNexusAssetStoreUIMaterials::GetDefaultObj()
{
	static class UNexusAssetStoreUIMaterials* Default = nullptr;

	if (!Default)
		Default = static_cast<UNexusAssetStoreUIMaterials*>(UNexusAssetStoreUIMaterials::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.NexusAssetStoreUITextures
// (None)

class UClass* UNexusAssetStoreUITextures::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NexusAssetStoreUITextures");

	return Clss;
}


// NexusAssetStoreUITextures GbxUI.Default__NexusAssetStoreUITextures
// (Public, ClassDefaultObject, ArchetypeObject)

class UNexusAssetStoreUITextures* UNexusAssetStoreUITextures::GetDefaultObj()
{
	static class UNexusAssetStoreUITextures* Default = nullptr;

	if (!Default)
		Default = static_cast<UNexusAssetStoreUITextures*>(UNexusAssetStoreUITextures::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.NexusConfigStoreUIAssetBanks
// (None)

class UClass* UNexusConfigStoreUIAssetBanks::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NexusConfigStoreUIAssetBanks");

	return Clss;
}


// NexusConfigStoreUIAssetBanks GbxUI.Default__NexusConfigStoreUIAssetBanks
// (Public, ClassDefaultObject, ArchetypeObject)

class UNexusConfigStoreUIAssetBanks* UNexusConfigStoreUIAssetBanks::GetDefaultObj()
{
	static class UNexusConfigStoreUIAssetBanks* Default = nullptr;

	if (!Default)
		Default = static_cast<UNexusConfigStoreUIAssetBanks*>(UNexusConfigStoreUIAssetBanks::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.NexusConfigStoreUIAudioEvents
// (None)

class UClass* UNexusConfigStoreUIAudioEvents::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NexusConfigStoreUIAudioEvents");

	return Clss;
}


// NexusConfigStoreUIAudioEvents GbxUI.Default__NexusConfigStoreUIAudioEvents
// (Public, ClassDefaultObject, ArchetypeObject)

class UNexusConfigStoreUIAudioEvents* UNexusConfigStoreUIAudioEvents::GetDefaultObj()
{
	static class UNexusConfigStoreUIAudioEvents* Default = nullptr;

	if (!Default)
		Default = static_cast<UNexusConfigStoreUIAudioEvents*>(UNexusConfigStoreUIAudioEvents::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.NexusConfigStoreUIComponents
// (None)

class UClass* UNexusConfigStoreUIComponents::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NexusConfigStoreUIComponents");

	return Clss;
}


// NexusConfigStoreUIComponents GbxUI.Default__NexusConfigStoreUIComponents
// (Public, ClassDefaultObject, ArchetypeObject)

class UNexusConfigStoreUIComponents* UNexusConfigStoreUIComponents::GetDefaultObj()
{
	static class UNexusConfigStoreUIComponents* Default = nullptr;

	if (!Default)
		Default = static_cast<UNexusConfigStoreUIComponents*>(UNexusConfigStoreUIComponents::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.NexusConfigStoreUIGlyphDefs
// (None)

class UClass* UNexusConfigStoreUIGlyphDefs::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NexusConfigStoreUIGlyphDefs");

	return Clss;
}


// NexusConfigStoreUIGlyphDefs GbxUI.Default__NexusConfigStoreUIGlyphDefs
// (Public, ClassDefaultObject, ArchetypeObject)

class UNexusConfigStoreUIGlyphDefs* UNexusConfigStoreUIGlyphDefs::GetDefaultObj()
{
	static class UNexusConfigStoreUIGlyphDefs* Default = nullptr;

	if (!Default)
		Default = static_cast<UNexusConfigStoreUIGlyphDefs*>(UNexusConfigStoreUIGlyphDefs::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.NexusConfigStoreUIPages
// (None)

class UClass* UNexusConfigStoreUIPages::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NexusConfigStoreUIPages");

	return Clss;
}


// NexusConfigStoreUIPages GbxUI.Default__NexusConfigStoreUIPages
// (Public, ClassDefaultObject, ArchetypeObject)

class UNexusConfigStoreUIPages* UNexusConfigStoreUIPages::GetDefaultObj()
{
	static class UNexusConfigStoreUIPages* Default = nullptr;

	if (!Default)
		Default = static_cast<UNexusConfigStoreUIPages*>(UNexusConfigStoreUIPages::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.NexusConfigStoreUIStates
// (None)

class UClass* UNexusConfigStoreUIStates::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NexusConfigStoreUIStates");

	return Clss;
}


// NexusConfigStoreUIStates GbxUI.Default__NexusConfigStoreUIStates
// (Public, ClassDefaultObject, ArchetypeObject)

class UNexusConfigStoreUIStates* UNexusConfigStoreUIStates::GetDefaultObj()
{
	static class UNexusConfigStoreUIStates* Default = nullptr;

	if (!Default)
		Default = static_cast<UNexusConfigStoreUIStates*>(UNexusConfigStoreUIStates::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.NexusConfigStoreUIViewDefs
// (None)

class UClass* UNexusConfigStoreUIViewDefs::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NexusConfigStoreUIViewDefs");

	return Clss;
}


// NexusConfigStoreUIViewDefs GbxUI.Default__NexusConfigStoreUIViewDefs
// (Public, ClassDefaultObject, ArchetypeObject)

class UNexusConfigStoreUIViewDefs* UNexusConfigStoreUIViewDefs::GetDefaultObj()
{
	static class UNexusConfigStoreUIViewDefs* Default = nullptr;

	if (!Default)
		Default = static_cast<UNexusConfigStoreUIViewDefs*>(UNexusConfigStoreUIViewDefs::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.NexusConfigStoreUIWidgetClasses
// (None)

class UClass* UNexusConfigStoreUIWidgetClasses::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NexusConfigStoreUIWidgetClasses");

	return Clss;
}


// NexusConfigStoreUIWidgetClasses GbxUI.Default__NexusConfigStoreUIWidgetClasses
// (Public, ClassDefaultObject, ArchetypeObject)

class UNexusConfigStoreUIWidgetClasses* UNexusConfigStoreUIWidgetClasses::GetDefaultObj()
{
	static class UNexusConfigStoreUIWidgetClasses* Default = nullptr;

	if (!Default)
		Default = static_cast<UNexusConfigStoreUIWidgetClasses*>(UNexusConfigStoreUIWidgetClasses::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxUI.NexusConfigStoreUIWidgetDefs
// (None)

class UClass* UNexusConfigStoreUIWidgetDefs::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NexusConfigStoreUIWidgetDefs");

	return Clss;
}


// NexusConfigStoreUIWidgetDefs GbxUI.Default__NexusConfigStoreUIWidgetDefs
// (Public, ClassDefaultObject, ArchetypeObject)

class UNexusConfigStoreUIWidgetDefs* UNexusConfigStoreUIWidgetDefs::GetDefaultObj()
{
	static class UNexusConfigStoreUIWidgetDefs* Default = nullptr;

	if (!Default)
		Default = static_cast<UNexusConfigStoreUIWidgetDefs*>(UNexusConfigStoreUIWidgetDefs::StaticClass()->DefaultObject);

	return Default;
}

}


