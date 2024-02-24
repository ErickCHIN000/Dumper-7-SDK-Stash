#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ScaleformUI.GFxMoviePlayer
// (None)

class UClass* UGFxMoviePlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GFxMoviePlayer");

	return Clss;
}


// GFxMoviePlayer ScaleformUI.Default__GFxMoviePlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UGFxMoviePlayer* UGFxMoviePlayer::GetDefaultObj()
{
	static class UGFxMoviePlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UGFxMoviePlayer*>(UGFxMoviePlayer::StaticClass()->DefaultObject);

	return Default;
}


// Function ScaleformUI.GFxMoviePlayer.start
// (Native, Public, Const)
// Parameters:
// bool                               bRefresh                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGFxMoviePlayer::Start(bool bRefresh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "start");

	Params::UGFxMoviePlayer_Start_Params Parms{};

	Parms.bRefresh = bRefresh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ScaleformUI.GFxMoviePlayer.SetVisible
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// bool                               bVisible                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGFxMoviePlayer::SetVisible(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "SetVisible");

	Params::UGFxMoviePlayer_SetVisible_Params Parms{};

	Parms.bVisible = bVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxMoviePlayer.SetVisibility
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// class FString                      MovieClipName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bVisible                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGFxMoviePlayer::SetVisibility(const class FString& MovieClipName, bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "SetVisibility");

	Params::UGFxMoviePlayer_SetVisibility_Params Parms{};

	Parms.MovieClipName = MovieClipName;
	Parms.bVisible = bVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxMoviePlayer.SetViewScaleMode
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// enum class EGFxScaleMode           ScaleMode                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGFxMoviePlayer::SetViewScaleMode(enum class EGFxScaleMode ScaleMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "SetViewScaleMode");

	Params::UGFxMoviePlayer_SetViewScaleMode_Params Parms{};

	Parms.ScaleMode = ScaleMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxMoviePlayer.SetViewport
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// int32                              X                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Y                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Width                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Height                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGFxMoviePlayer::SetViewport(int32 X, int32 Y, int32 Width, int32 Height)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "SetViewport");

	Params::UGFxMoviePlayer_SetViewport_Params Parms{};

	Parms.X = X;
	Parms.Y = Y;
	Parms.Width = Width;
	Parms.Height = Height;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxMoviePlayer.SetView3D
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FTransform                  ViewTransform                                                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UGFxMoviePlayer::SetView3D(struct FTransform& ViewTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "SetView3D");

	Params::UGFxMoviePlayer_SetView3D_Params Parms{};

	Parms.ViewTransform = ViewTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxMoviePlayer.SetVariableValueArray
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// class FString                      MovieClipName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MemberName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FASValue>            Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UGFxMoviePlayer::SetVariableValueArray(const class FString& MovieClipName, const class FString& MemberName, TArray<struct FASValue>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "SetVariableValueArray");

	Params::UGFxMoviePlayer_SetVariableValueArray_Params Parms{};

	Parms.MovieClipName = MovieClipName;
	Parms.MemberName = MemberName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxMoviePlayer.SetVariableValue
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// class FString                      MovieClipName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MemberName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FASValue                    Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGFxMoviePlayer::SetVariableValue(const class FString& MovieClipName, const class FString& MemberName, struct FASValue& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "SetVariableValue");

	Params::UGFxMoviePlayer_SetVariableValue_Params Parms{};

	Parms.MovieClipName = MovieClipName;
	Parms.MemberName = MemberName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxMoviePlayer.SetTimingMode
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// enum class EGFxTimingMode          TimingMode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGFxMoviePlayer::SetTimingMode(enum class EGFxTimingMode TimingMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "SetTimingMode");

	Params::UGFxMoviePlayer_SetTimingMode_Params Parms{};

	Parms.TimingMode = TimingMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxMoviePlayer.SetScale
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// class FString                      MovieClipName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              XScale                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              YScale                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGFxMoviePlayer::SetScale(const class FString& MovieClipName, float XScale, float YScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "SetScale");

	Params::UGFxMoviePlayer_SetScale_Params Parms{};

	Parms.MovieClipName = MovieClipName;
	Parms.XScale = XScale;
	Parms.YScale = YScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxMoviePlayer.SetPosition
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// class FString                      MovieClipName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              X                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Y                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGFxMoviePlayer::SetPosition(const class FString& MovieClipName, float X, float Y)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "SetPosition");

	Params::UGFxMoviePlayer_SetPosition_Params Parms{};

	Parms.MovieClipName = MovieClipName;
	Parms.X = X;
	Parms.Y = Y;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxMoviePlayer.SetPerspective3D
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// struct FASPerspectiveTransform     PerspectiveTransform                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UGFxMoviePlayer::SetPerspective3D(struct FASPerspectiveTransform& PerspectiveTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "SetPerspective3D");

	Params::UGFxMoviePlayer_SetPerspective3D_Params Parms{};

	Parms.PerspectiveTransform = PerspectiveTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxMoviePlayer.SetPause
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// bool                               bPausePlayback                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGFxMoviePlayer::SetPause(bool bPausePlayback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "SetPause");

	Params::UGFxMoviePlayer_SetPause_Params Parms{};

	Parms.bPausePlayback = bPausePlayback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxMoviePlayer.SetMovieCanReceiveInput
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// bool                               bCanReceiveInput                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGFxMoviePlayer::SetMovieCanReceiveInput(bool bCanReceiveInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "SetMovieCanReceiveInput");

	Params::UGFxMoviePlayer_SetMovieCanReceiveInput_Params Parms{};

	Parms.bCanReceiveInput = bCanReceiveInput;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxMoviePlayer.SetMovieCanReceiveFocus
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// bool                               bCanReceiveFocus                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGFxMoviePlayer::SetMovieCanReceiveFocus(bool bCanReceiveFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "SetMovieCanReceiveFocus");

	Params::UGFxMoviePlayer_SetMovieCanReceiveFocus_Params Parms{};

	Parms.bCanReceiveFocus = bCanReceiveFocus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxMoviePlayer.SetFocusIgnoreKeys
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<struct FKey>                Keys                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UGFxMoviePlayer::SetFocusIgnoreKeys(TArray<struct FKey>& Keys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "SetFocusIgnoreKeys");

	Params::UGFxMoviePlayer_SetFocusIgnoreKeys_Params Parms{};

	Parms.Keys = Keys;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxMoviePlayer.SetExternalTexture
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// class FString                      Resource                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    Texture                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGFxMoviePlayer::SetExternalTexture(const class FString& Resource, class UTexture* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "SetExternalTexture");

	Params::UGFxMoviePlayer_SetExternalTexture_Params Parms{};

	Parms.Resource = Resource;
	Parms.Texture = Texture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxMoviePlayer.SetDisplayTransform
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// class FString                      MovieClipName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  DisplayTransform                                                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UGFxMoviePlayer::SetDisplayTransform(const class FString& MovieClipName, struct FTransform& DisplayTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "SetDisplayTransform");

	Params::UGFxMoviePlayer_SetDisplayTransform_Params Parms{};

	Parms.MovieClipName = MovieClipName;
	Parms.DisplayTransform = DisplayTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxMoviePlayer.SetDisplayInfo
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// class FString                      MovieClipName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FASDisplayInfo              Info                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UGFxMoviePlayer::SetDisplayInfo(const class FString& MovieClipName, struct FASDisplayInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "SetDisplayInfo");

	Params::UGFxMoviePlayer_SetDisplayInfo_Params Parms{};

	Parms.MovieClipName = MovieClipName;
	Parms.Info = Info;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxMoviePlayer.SetColorTransform
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// class FString                      MovieClipName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FASColorTransform           UnrealColorTransform                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UGFxMoviePlayer::SetColorTransform(const class FString& MovieClipName, struct FASColorTransform& UnrealColorTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "SetColorTransform");

	Params::UGFxMoviePlayer_SetColorTransform_Params Parms{};

	Parms.MovieClipName = MovieClipName;
	Parms.UnrealColorTransform = UnrealColorTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxMoviePlayer.SetCaptureKeys
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<struct FKey>                Keys                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UGFxMoviePlayer::SetCaptureKeys(TArray<struct FKey>& Keys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "SetCaptureKeys");

	Params::UGFxMoviePlayer_SetCaptureKeys_Params Parms{};

	Parms.Keys = Keys;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxMoviePlayer.SetAlignment
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// enum class EGFxAlign               Align                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGFxMoviePlayer::SetAlignment(enum class EGFxAlign Align)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "SetAlignment");

	Params::UGFxMoviePlayer_SetAlignment_Params Parms{};

	Parms.Align = Align;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxMoviePlayer.ReceiveGFxCommand
// (Native, Public, Const)
// Parameters:
// class FString                      Command                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Arguments                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGFxMoviePlayer::ReceiveGFxCommand(const class FString& Command, const class FString& Arguments)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "ReceiveGFxCommand");

	Params::UGFxMoviePlayer_ReceiveGFxCommand_Params Parms{};

	Parms.Command = Command;
	Parms.Arguments = Arguments;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxMoviePlayer.OpenMovie
// (Final, Native, Static, Public, BlueprintCallable, Const)
// Parameters:
// class USwfMovie*                   SwfMovie                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ExternalScriptInterface                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*      RenderToTexture                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGFxMoviePlayer*             MoviePlayer                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               DisplayWithHudOff                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRefresh                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGFxMoviePlayer*             ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGFxMoviePlayer* UGFxMoviePlayer::OpenMovie(class USwfMovie* SwfMovie, class UObject* ExternalScriptInterface, class UTextureRenderTarget2D* RenderToTexture, class UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool bRefresh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "OpenMovie");

	Params::UGFxMoviePlayer_OpenMovie_Params Parms{};

	Parms.SwfMovie = SwfMovie;
	Parms.ExternalScriptInterface = ExternalScriptInterface;
	Parms.RenderToTexture = RenderToTexture;
	Parms.MoviePlayer = MoviePlayer;
	Parms.DisplayWithHudOff = DisplayWithHudOff;
	Parms.bRefresh = bRefresh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ScaleformUI.GFxMoviePlayer.OnTick
// (Native, Public, Const)
// Parameters:
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGFxMoviePlayer::OnTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "OnTick");

	Params::UGFxMoviePlayer_OnTick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxMoviePlayer.OnStart
// (Native, Public, Const)
// Parameters:

void UGFxMoviePlayer::OnStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "OnStart");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxMoviePlayer.OnGameTick
// (Native, Public, Const)
// Parameters:
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGFxMoviePlayer::OnGameTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "OnGameTick");

	Params::UGFxMoviePlayer_OnGameTick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxMoviePlayer.OnFocusLost
// (Native, Public, Const)
// Parameters:
// int32                              LocalPlayerIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGFxMoviePlayer::OnFocusLost(int32 LocalPlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "OnFocusLost");

	Params::UGFxMoviePlayer_OnFocusLost_Params Parms{};

	Parms.LocalPlayerIndex = LocalPlayerIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxMoviePlayer.OnFocusGained
// (Native, Public, Const)
// Parameters:
// int32                              LocalPlayerIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGFxMoviePlayer::OnFocusGained(int32 LocalPlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "OnFocusGained");

	Params::UGFxMoviePlayer_OnFocusGained_Params Parms{};

	Parms.LocalPlayerIndex = LocalPlayerIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxMoviePlayer.OnClose
// (Native, Public, Const)
// Parameters:

void UGFxMoviePlayer::OnClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "OnClose");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxMoviePlayer.IsVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGFxMoviePlayer::IsVisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "IsVisible");

	Params::UGFxMoviePlayer_IsVisible_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ScaleformUI.GFxMoviePlayer.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGFxMoviePlayer::IsPaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "IsPaused");

	Params::UGFxMoviePlayer_IsPaused_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ScaleformUI.GFxMoviePlayer.Invoke
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// class FString                      MovieClipName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FunctionName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FASValue>            Params                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FASValue                    ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FASValue UGFxMoviePlayer::Invoke(const class FString& MovieClipName, const class FString& FunctionName, TArray<struct FASValue>& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "Invoke");

	Params::UGFxMoviePlayer_Invoke_Params Parms{};

	Parms.MovieClipName = MovieClipName;
	Parms.FunctionName = FunctionName;
	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ScaleformUI.GFxMoviePlayer.GotoAndStopI
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// class FString                      MovieClipName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Frame                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGFxMoviePlayer::GotoAndStopI(const class FString& MovieClipName, int32 Frame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "GotoAndStopI");

	Params::UGFxMoviePlayer_GotoAndStopI_Params Parms{};

	Parms.MovieClipName = MovieClipName;
	Parms.Frame = Frame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxMoviePlayer.GotoAndStop
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// class FString                      MovieClipName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Frame                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGFxMoviePlayer::GotoAndStop(const class FString& MovieClipName, const class FString& Frame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "GotoAndStop");

	Params::UGFxMoviePlayer_GotoAndStop_Params Parms{};

	Parms.MovieClipName = MovieClipName;
	Parms.Frame = Frame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxMoviePlayer.GotoAndPlayI
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// class FString                      MovieClipName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Frame                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGFxMoviePlayer::GotoAndPlayI(const class FString& MovieClipName, int32 Frame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "GotoAndPlayI");

	Params::UGFxMoviePlayer_GotoAndPlayI_Params Parms{};

	Parms.MovieClipName = MovieClipName;
	Parms.Frame = Frame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxMoviePlayer.GotoAndPlay
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// class FString                      MovieClipName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Frame                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGFxMoviePlayer::GotoAndPlay(const class FString& MovieClipName, const class FString& Frame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "GotoAndPlay");

	Params::UGFxMoviePlayer_GotoAndPlay_Params Parms{};

	Parms.MovieClipName = MovieClipName;
	Parms.Frame = Frame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxMoviePlayer.GetVisibility
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// class FString                      MovieClipName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGFxMoviePlayer::GetVisibility(const class FString& MovieClipName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "GetVisibility");

	Params::UGFxMoviePlayer_GetVisibility_Params Parms{};

	Parms.MovieClipName = MovieClipName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ScaleformUI.GFxMoviePlayer.GetView3D
// (Native, Public, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform UGFxMoviePlayer::GetView3D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "GetView3D");

	Params::UGFxMoviePlayer_GetView3D_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ScaleformUI.GFxMoviePlayer.GetVariableValueArray
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// class FString                      MovieClipName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MemberName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FASValue>            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FASValue> UGFxMoviePlayer::GetVariableValueArray(const class FString& MovieClipName, const class FString& MemberName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "GetVariableValueArray");

	Params::UGFxMoviePlayer_GetVariableValueArray_Params Parms{};

	Parms.MovieClipName = MovieClipName;
	Parms.MemberName = MemberName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ScaleformUI.GFxMoviePlayer.GetVariableValue
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// class FString                      MovieClipName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MemberName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FASValue                    ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FASValue UGFxMoviePlayer::GetVariableValue(const class FString& MovieClipName, const class FString& MemberName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "GetVariableValue");

	Params::UGFxMoviePlayer_GetVariableValue_Params Parms{};

	Parms.MovieClipName = MovieClipName;
	Parms.MemberName = MemberName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ScaleformUI.GFxMoviePlayer.GetScale
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// class FString                      MovieClipName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              XScale                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              YScale                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGFxMoviePlayer::GetScale(const class FString& MovieClipName, float* XScale, float* YScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "GetScale");

	Params::UGFxMoviePlayer_GetScale_Params Parms{};

	Parms.MovieClipName = MovieClipName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (XScale != nullptr)
		*XScale = Parms.XScale;

	if (YScale != nullptr)
		*YScale = Parms.YScale;

	return Parms.ReturnValue;

}


// Function ScaleformUI.GFxMoviePlayer.GetPosition
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// class FString                      MovieClipName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              X                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Y                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGFxMoviePlayer::GetPosition(const class FString& MovieClipName, float* X, float* Y)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "GetPosition");

	Params::UGFxMoviePlayer_GetPosition_Params Parms{};

	Parms.MovieClipName = MovieClipName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (X != nullptr)
		*X = Parms.X;

	if (Y != nullptr)
		*Y = Parms.Y;

	return Parms.ReturnValue;

}


// Function ScaleformUI.GFxMoviePlayer.GetPerspective3D
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// struct FASPerspectiveTransform     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FASPerspectiveTransform UGFxMoviePlayer::GetPerspective3D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "GetPerspective3D");

	Params::UGFxMoviePlayer_GetPerspective3D_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ScaleformUI.GFxMoviePlayer.GetMovieClip
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class FString                      MovieClipName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGFxObject*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGFxObject* UGFxMoviePlayer::GetMovieClip(const class FString& MovieClipName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "GetMovieClip");

	Params::UGFxMoviePlayer_GetMovieClip_Params Parms{};

	Parms.MovieClipName = MovieClipName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ScaleformUI.GFxMoviePlayer.GetDisplayTransform
// (Native, Public, HasDefaults, BlueprintCallable, Const)
// Parameters:
// class FString                      MovieClipName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform UGFxMoviePlayer::GetDisplayTransform(const class FString& MovieClipName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "GetDisplayTransform");

	Params::UGFxMoviePlayer_GetDisplayTransform_Params Parms{};

	Parms.MovieClipName = MovieClipName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ScaleformUI.GFxMoviePlayer.GetDisplayInfo
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// class FString                      MovieClipName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FASDisplayInfo              ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FASDisplayInfo UGFxMoviePlayer::GetDisplayInfo(const class FString& MovieClipName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "GetDisplayInfo");

	Params::UGFxMoviePlayer_GetDisplayInfo_Params Parms{};

	Parms.MovieClipName = MovieClipName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ScaleformUI.GFxMoviePlayer.GetColorTransform
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// class FString                      MovieClipName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FASColorTransform           ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FASColorTransform UGFxMoviePlayer::GetColorTransform(const class FString& MovieClipName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "GetColorTransform");

	Params::UGFxMoviePlayer_GetColorTransform_Params Parms{};

	Parms.MovieClipName = MovieClipName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ScaleformUI.GFxMoviePlayer.Close
// (Native, Public, BlueprintCallable, Const)
// Parameters:

void UGFxMoviePlayer::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxMoviePlayer", "Close");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ScaleformUI.GFxObject
// (None)

class UClass* UGFxObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GFxObject");

	return Clss;
}


// GFxObject ScaleformUI.Default__GFxObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UGFxObject* UGFxObject::GetDefaultObj()
{
	static class UGFxObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UGFxObject*>(UGFxObject::StaticClass()->DefaultObject);

	return Default;
}


// Function ScaleformUI.GFxObject.SetVisible
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bVisible                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGFxObject::SetVisible(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxObject", "SetVisible");

	Params::UGFxObject_SetVisible_Params Parms{};

	Parms.bVisible = bVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxObject.SetScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              XScale                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              YScale                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGFxObject::SetScale(float XScale, float YScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxObject", "SetScale");

	Params::UGFxObject_SetScale_Params Parms{};

	Parms.XScale = XScale;
	Parms.YScale = YScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxObject.SetPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              X                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Y                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGFxObject::SetPosition(float X, float Y)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxObject", "SetPosition");

	Params::UGFxObject_SetPosition_Params Parms{};

	Parms.X = X;
	Parms.Y = Y;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxObject.SetMemberValueArray
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UGFxMoviePlayer*             MoviePlayer                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MemberName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FASValue>            Input                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UGFxObject::SetMemberValueArray(class UGFxMoviePlayer* MoviePlayer, const class FString& MemberName, TArray<struct FASValue>& Input)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxObject", "SetMemberValueArray");

	Params::UGFxObject_SetMemberValueArray_Params Parms{};

	Parms.MoviePlayer = MoviePlayer;
	Parms.MemberName = MemberName;
	Parms.Input = Input;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxObject.SetMemberValue
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      MemberName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FASValue                    Input                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGFxObject::SetMemberValue(const class FString& MemberName, struct FASValue& Input)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxObject", "SetMemberValue");

	Params::UGFxObject_SetMemberValue_Params Parms{};

	Parms.MemberName = MemberName;
	Parms.Input = Input;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxObject.SetDisplayTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  DisplayTransform                                                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UGFxObject::SetDisplayTransform(struct FTransform& DisplayTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxObject", "SetDisplayTransform");

	Params::UGFxObject_SetDisplayTransform_Params Parms{};

	Parms.DisplayTransform = DisplayTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxObject.SetDisplayInfo
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FASDisplayInfo              UnrealDisplayInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UGFxObject::SetDisplayInfo(struct FASDisplayInfo& UnrealDisplayInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxObject", "SetDisplayInfo");

	Params::UGFxObject_SetDisplayInfo_Params Parms{};

	Parms.UnrealDisplayInfo = UnrealDisplayInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxObject.SetColorTransform
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FASColorTransform           UnrealColorTransform                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UGFxObject::SetColorTransform(struct FASColorTransform& UnrealColorTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxObject", "SetColorTransform");

	Params::UGFxObject_SetColorTransform_Params Parms{};

	Parms.UnrealColorTransform = UnrealColorTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxObject.Invoke
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      FunctionName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FASValue>            Params                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FASValue                    ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FASValue UGFxObject::Invoke(const class FString& FunctionName, TArray<struct FASValue>& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxObject", "Invoke");

	Params::UGFxObject_Invoke_Params Parms{};

	Parms.FunctionName = FunctionName;
	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ScaleformUI.GFxObject.GotoAndStopI
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              FrameNumber                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGFxObject::GotoAndStopI(int32 FrameNumber)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxObject", "GotoAndStopI");

	Params::UGFxObject_GotoAndStopI_Params Parms{};

	Parms.FrameNumber = FrameNumber;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxObject.GotoAndStop
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FrameString                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGFxObject::GotoAndStop(const class FString& FrameString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxObject", "GotoAndStop");

	Params::UGFxObject_GotoAndStop_Params Parms{};

	Parms.FrameString = FrameString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxObject.GotoAndPlayI
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              FrameNumber                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGFxObject::GotoAndPlayI(int32 FrameNumber)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxObject", "GotoAndPlayI");

	Params::UGFxObject_GotoAndPlayI_Params Parms{};

	Parms.FrameNumber = FrameNumber;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxObject.GotoAndPlay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FrameString                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGFxObject::GotoAndPlay(const class FString& FrameString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxObject", "GotoAndPlay");

	Params::UGFxObject_GotoAndPlay_Params Parms{};

	Parms.FrameString = FrameString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ScaleformUI.GFxObject.GetVisible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGFxObject::GetVisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxObject", "GetVisible");

	Params::UGFxObject_GetVisible_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ScaleformUI.GFxObject.GetScale
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              XScale                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              YScale                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGFxObject::GetScale(float* XScale, float* YScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxObject", "GetScale");

	Params::UGFxObject_GetScale_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (XScale != nullptr)
		*XScale = Parms.XScale;

	if (YScale != nullptr)
		*YScale = Parms.YScale;

	return Parms.ReturnValue;

}


// Function ScaleformUI.GFxObject.GetPosition
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              X                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Y                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGFxObject::GetPosition(float* X, float* Y)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxObject", "GetPosition");

	Params::UGFxObject_GetPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (X != nullptr)
		*X = Parms.X;

	if (Y != nullptr)
		*Y = Parms.Y;

	return Parms.ReturnValue;

}


// Function ScaleformUI.GFxObject.GetMemberValueArray
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      MemberName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FASValue>            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FASValue> UGFxObject::GetMemberValueArray(const class FString& MemberName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxObject", "GetMemberValueArray");

	Params::UGFxObject_GetMemberValueArray_Params Parms{};

	Parms.MemberName = MemberName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ScaleformUI.GFxObject.GetMemberValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      MemberName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FASValue                    ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FASValue UGFxObject::GetMemberValue(const class FString& MemberName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxObject", "GetMemberValue");

	Params::UGFxObject_GetMemberValue_Params Parms{};

	Parms.MemberName = MemberName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ScaleformUI.GFxObject.GetDisplayTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform UGFxObject::GetDisplayTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxObject", "GetDisplayTransform");

	Params::UGFxObject_GetDisplayTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ScaleformUI.GFxObject.GetDisplayInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FASDisplayInfo              ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FASDisplayInfo UGFxObject::GetDisplayInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxObject", "GetDisplayInfo");

	Params::UGFxObject_GetDisplayInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ScaleformUI.GFxObject.GetColorTransform
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FASColorTransform           ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FASColorTransform UGFxObject::GetColorTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GFxObject", "GetColorTransform");

	Params::UGFxObject_GetColorTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ScaleformUI.ScaleformBlueprintLibrary
// (None)

class UClass* UScaleformBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScaleformBlueprintLibrary");

	return Clss;
}


// ScaleformBlueprintLibrary ScaleformUI.Default__ScaleformBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UScaleformBlueprintLibrary* UScaleformBlueprintLibrary::GetDefaultObj()
{
	static class UScaleformBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UScaleformBlueprintLibrary*>(UScaleformBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ScaleformUI.ScaleformBlueprintLibrary.OpenMovie
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USwfMovie*                   Movie                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ExternalInterface                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*      RenderTexture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGFxMoviePlayer*             MoviePlayer                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               DisplayWithHudOff                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               StartPaused                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGFxMoviePlayer*             ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGFxMoviePlayer* UScaleformBlueprintLibrary::OpenMovie(class USwfMovie* Movie, class UObject* ExternalInterface, class UTextureRenderTarget2D* RenderTexture, class UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool StartPaused)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScaleformBlueprintLibrary", "OpenMovie");

	Params::UScaleformBlueprintLibrary_OpenMovie_Params Parms{};

	Parms.Movie = Movie;
	Parms.ExternalInterface = ExternalInterface;
	Parms.RenderTexture = RenderTexture;
	Parms.MoviePlayer = MoviePlayer;
	Parms.DisplayWithHudOff = DisplayWithHudOff;
	Parms.StartPaused = StartPaused;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ScaleformUI.ScaleformBlueprintLibrary.InvokeNoParams
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGFxMoviePlayer*             MoviePlayer                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FunctionName                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FASValue                    ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FASValue UScaleformBlueprintLibrary::InvokeNoParams(class UGFxMoviePlayer* MoviePlayer, const class FString& FunctionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScaleformBlueprintLibrary", "InvokeNoParams");

	Params::UScaleformBlueprintLibrary_InvokeNoParams_Params Parms{};

	Parms.MoviePlayer = MoviePlayer;
	Parms.FunctionName = FunctionName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ScaleformUI.ScaleformBlueprintLibrary.Invoke
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UGFxMoviePlayer*             MoviePlayer                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FunctionName                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FASValue>            Params                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FASValue                    ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FASValue UScaleformBlueprintLibrary::Invoke(class UGFxMoviePlayer* MoviePlayer, const class FString& FunctionName, TArray<struct FASValue>& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScaleformBlueprintLibrary", "Invoke");

	Params::UScaleformBlueprintLibrary_Invoke_Params Parms{};

	Parms.MoviePlayer = MoviePlayer;
	Parms.FunctionName = FunctionName;
	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ScaleformUI.ScaleformBlueprintLibrary.GetVariable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGFxMoviePlayer*             MoviePlayer                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VariablePath                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGFxObject*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGFxObject* UScaleformBlueprintLibrary::GetVariable(class UGFxMoviePlayer* MoviePlayer, const class FString& VariablePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScaleformBlueprintLibrary", "GetVariable");

	Params::UScaleformBlueprintLibrary_GetVariable_Params Parms{};

	Parms.MoviePlayer = MoviePlayer;
	Parms.VariablePath = VariablePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ScaleformUI.ScaleformBlueprintLibrary.GetMovieClip
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGFxMoviePlayer*             MoviePlayer                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MovieClipName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGFxObject*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGFxObject* UScaleformBlueprintLibrary::GetMovieClip(class UGFxMoviePlayer* MoviePlayer, const class FString& MovieClipName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScaleformBlueprintLibrary", "GetMovieClip");

	Params::UScaleformBlueprintLibrary_GetMovieClip_Params Parms{};

	Parms.MoviePlayer = MoviePlayer;
	Parms.MovieClipName = MovieClipName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ScaleformUI.ScaleformBlueprintLibrary.GetMember
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGFxMoviePlayer*             MoviePlayer                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MemberName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGFxObject*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGFxObject* UScaleformBlueprintLibrary::GetMember(class UGFxMoviePlayer* MoviePlayer, const class FString& MemberName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScaleformBlueprintLibrary", "GetMember");

	Params::UScaleformBlueprintLibrary_GetMember_Params Parms{};

	Parms.MoviePlayer = MoviePlayer;
	Parms.MemberName = MemberName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ScaleformUI.ScaleformBlueprintLibrary.GetAllGFxMoviePlayerOfClass
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UGFxMoviePlayer*>     FoundGFxMoviePlayer                                              (ConstParm, Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TSubclassOf<class UGFxMoviePlayer> GFxMoviePlayerClass                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               VisibleOnly                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScaleformBlueprintLibrary::GetAllGFxMoviePlayerOfClass(class UObject* WorldContextObject, TArray<class UGFxMoviePlayer*>* FoundGFxMoviePlayer, TSubclassOf<class UGFxMoviePlayer> GFxMoviePlayerClass, bool VisibleOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScaleformBlueprintLibrary", "GetAllGFxMoviePlayerOfClass");

	Params::UScaleformBlueprintLibrary_GetAllGFxMoviePlayerOfClass_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.GFxMoviePlayerClass = GFxMoviePlayerClass;
	Parms.VisibleOnly = VisibleOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FoundGFxMoviePlayer != nullptr)
		*FoundGFxMoviePlayer = std::move(Parms.FoundGFxMoviePlayer);

}


// Function ScaleformUI.ScaleformBlueprintLibrary.CloseMovie
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGFxMoviePlayer*             MoviePlayer                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScaleformBlueprintLibrary::CloseMovie(class UGFxMoviePlayer* MoviePlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScaleformBlueprintLibrary", "CloseMovie");

	Params::UScaleformBlueprintLibrary_CloseMovie_Params Parms{};

	Parms.MoviePlayer = MoviePlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ScaleformUI.SwfMovie
// (None)

class UClass* USwfMovie::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SwfMovie");

	return Clss;
}


// SwfMovie ScaleformUI.Default__SwfMovie
// (Public, ClassDefaultObject, ArchetypeObject)

class USwfMovie* USwfMovie::GetDefaultObj()
{
	static class USwfMovie* Default = nullptr;

	if (!Default)
		Default = static_cast<USwfMovie*>(USwfMovie::StaticClass()->DefaultObject);

	return Default;
}

}


