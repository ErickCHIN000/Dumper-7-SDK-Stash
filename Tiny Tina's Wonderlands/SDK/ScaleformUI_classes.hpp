#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C0 (0x1E8 - 0x28)
// Class ScaleformUI.GFxMoviePlayer
class UGFxMoviePlayer : public UObject
{
public:
	class FString                                SwfAssetName;                                      // 0x28(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGFxObject*                            Root;                                              // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDisplayWithHudOff : 1;                            // Mask: 0x1, PropSize: 0x10x40(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableGammaCorrection : 1;                        // Mask: 0x2, PropSize: 0x10x40(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowInput : 1;                                   // Mask: 0x4, PropSize: 0x10x40(0x1)(Edit, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowFocus : 1;                                   // Mask: 0x8, PropSize: 0x10x40(0x1)(Edit, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCloseOnLevelChange : 1;                           // Mask: 0x10, PropSize: 0x10x40(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOnlyOwnerFocusable : 1;                           // Mask: 0x20, PropSize: 0x10x40(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDiscardNonOwnerInput : 1;                         // Mask: 0x40, PropSize: 0x10x40(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCaptureKeyboardInput : 1;                         // Mask: 0x80, PropSize: 0x10x40(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCaptureMouseInput : 1;                            // Mask: 0x1, PropSize: 0x10x41(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCaptureGamepadInput : 1;                          // Mask: 0x2, PropSize: 0x10x41(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCaptureTouchInput : 1;                            // Mask: 0x4, PropSize: 0x10x41(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsSplitscreenLayoutModified : 1;                  // Mask: 0x8, PropSize: 0x10x41(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShowDefaultMouseCursor : 1;                       // Mask: 0x10, PropSize: 0x10x41(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bBlurLesserMovies : 1;                             // Mask: 0x20, PropSize: 0x10x41(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHideLesserMovies : 1;                             // Mask: 0x40, PropSize: 0x10x41(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsPriorityBlurred : 1;                            // Mask: 0x80, PropSize: 0x10x41(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsPriorityHidden : 1;                             // Mask: 0x1, PropSize: 0x10x42(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIgnoreVisibilityEffect : 1;                       // Mask: 0x2, PropSize: 0x10x42(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIgnoreBlurEffect : 1;                             // Mask: 0x4, PropSize: 0x10x42(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRefreshed : 1;                                    // Mask: 0x8, PropSize: 0x10x42(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPerformHitTest : 1;                               // Mask: 0x10, PropSize: 0x10x42(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCacheThisDefinition : 1;                          // Mask: 0x20, PropSize: 0x10x42(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSkipUnnamedObjectsDuringPopulation : 1;           // Mask: 0x40, PropSize: 0x10x42(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_85 : 1;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_D47[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EGFxHitTestType                   HitTestType;                                       // 0x44(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D4B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextureRenderTarget2D*                RenderTexture;                                     // 0x48(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ExternalInterface;                                 // 0x50(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FKey>                          CaptureKeys;                                       // 0x58(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FKey>                          FocusIgnoreKeys;                                   // 0x68(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FExternalTexture>              ExternalTextures;                                  // 0x78(0x10)(BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EGFxRenderTextureMode             RenderTextureMode;                                 // 0x88(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Priority;                                          // 0x89(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D54[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGFxWidgetBinding>             WidgetBindings;                                    // 0x90(0x10)(BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        SplitscreenLayoutYAdjust;                          // 0xA0(0x4)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D57[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnFsCommand;                                       // 0xB0(0x10)(BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnStartCommand;                                    // 0xC0(0x10)(BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_D5C[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnCloseCommand;                                    // 0xE0(0x10)(BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTickCommand;                                     // 0xF0(0x10)(BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFocusGainedCommand;                              // 0x100(0x10)(BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFocusLostCommand;                                // 0x110(0x10)(BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_D61[0xAC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIgnoresSafeFrameScaling;                          // 0x1CC(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIgnoresHDRCalibration;                            // 0x1CD(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D67[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UGFxObject*>                    CachedMovieClipsArray;                             // 0x1D0(0x10)(BlueprintReadOnly, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_D6E[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGFxMoviePlayer* GetDefaultObj();

	bool Start(bool bRefresh);
	void SetVisible(bool bVisible);
	void SetVisibility(const class FString& MovieClipName, bool bVisible);
	void SetViewScaleMode(enum class EGFxScaleMode ScaleMode);
	void SetViewport(int32 X, int32 Y, int32 Width, int32 Height);
	void SetView3D(struct FTransform& ViewTransform);
	void SetVariableValueArray(const class FString& MovieClipName, const class FString& MemberName, TArray<struct FASValue>& Value);
	void SetVariableValue(const class FString& MovieClipName, const class FString& MemberName, struct FASValue& Value);
	void SetTimingMode(enum class EGFxTimingMode TimingMode);
	void SetScale(const class FString& MovieClipName, float XScale, float YScale);
	void SetPosition(const class FString& MovieClipName, float X, float Y);
	void SetPerspective3D(struct FASPerspectiveTransform& PerspectiveTransform);
	void SetPause(bool bPausePlayback);
	void SetMovieCanReceiveInput(bool bCanReceiveInput);
	void SetMovieCanReceiveFocus(bool bCanReceiveFocus);
	void SetFocusIgnoreKeys(TArray<struct FKey>& Keys);
	void SetExternalTexture(const class FString& Resource, class UTexture* Texture);
	void SetDisplayTransform(const class FString& MovieClipName, struct FTransform& DisplayTransform);
	void SetDisplayInfo(const class FString& MovieClipName, struct FASDisplayInfo& Info);
	void SetColorTransform(const class FString& MovieClipName, struct FASColorTransform& UnrealColorTransform);
	void SetCaptureKeys(TArray<struct FKey>& Keys);
	void SetAlignment(enum class EGFxAlign Align);
	void ReceiveGFxCommand(const class FString& Command, const class FString& Arguments);
	class UGFxMoviePlayer* OpenMovie(class USwfMovie* SwfMovie, class UObject* ExternalScriptInterface, class UTextureRenderTarget2D* RenderToTexture, class UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool bRefresh);
	void OnTick(float DeltaTime);
	void OnStart();
	void OnGameTick(float DeltaTime);
	void OnFocusLost(int32 LocalPlayerIndex);
	void OnFocusGained(int32 LocalPlayerIndex);
	void OnClose();
	bool IsVisible();
	bool IsPaused();
	struct FASValue Invoke(const class FString& MovieClipName, const class FString& FunctionName, TArray<struct FASValue>& Params);
	void GotoAndStopI(const class FString& MovieClipName, int32 Frame);
	void GotoAndStop(const class FString& MovieClipName, const class FString& Frame);
	void GotoAndPlayI(const class FString& MovieClipName, int32 Frame);
	void GotoAndPlay(const class FString& MovieClipName, const class FString& Frame);
	bool GetVisibility(const class FString& MovieClipName);
	struct FTransform GetView3D();
	TArray<struct FASValue> GetVariableValueArray(const class FString& MovieClipName, const class FString& MemberName);
	struct FASValue GetVariableValue(const class FString& MovieClipName, const class FString& MemberName);
	bool GetScale(const class FString& MovieClipName, float* XScale, float* YScale);
	bool GetPosition(const class FString& MovieClipName, float* X, float* Y);
	struct FASPerspectiveTransform GetPerspective3D();
	class UGFxObject* GetMovieClip(const class FString& MovieClipName);
	struct FTransform GetDisplayTransform(const class FString& MovieClipName);
	struct FASDisplayInfo GetDisplayInfo(const class FString& MovieClipName);
	struct FASColorTransform GetColorTransform(const class FString& MovieClipName);
	void Close();
};

// 0x10 (0x38 - 0x28)
// Class ScaleformUI.GFxObject
class UGFxObject : public UObject
{
public:
	uint8                                        Pad_EDF[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGFxObject* GetDefaultObj();

	void SetVisible(bool bVisible);
	void SetScale(float XScale, float YScale);
	void SetPosition(float X, float Y);
	void SetMemberValueArray(class UGFxMoviePlayer* MoviePlayer, const class FString& MemberName, TArray<struct FASValue>& Input);
	void SetMemberValue(const class FString& MemberName, struct FASValue& Input);
	void SetDisplayTransform(struct FTransform& DisplayTransform);
	void SetDisplayInfo(struct FASDisplayInfo& UnrealDisplayInfo);
	void SetColorTransform(struct FASColorTransform& UnrealColorTransform);
	struct FASValue Invoke(const class FString& FunctionName, TArray<struct FASValue>& Params);
	void GotoAndStopI(int32 FrameNumber);
	void GotoAndStop(const class FString& FrameString);
	void GotoAndPlayI(int32 FrameNumber);
	void GotoAndPlay(const class FString& FrameString);
	bool GetVisible();
	bool GetScale(float* XScale, float* YScale);
	bool GetPosition(float* X, float* Y);
	TArray<struct FASValue> GetMemberValueArray(const class FString& MemberName);
	struct FASValue GetMemberValue(const class FString& MemberName);
	struct FTransform GetDisplayTransform();
	struct FASDisplayInfo GetDisplayInfo();
	struct FASColorTransform GetColorTransform();
};

// 0x0 (0x28 - 0x28)
// Class ScaleformUI.ScaleformBlueprintLibrary
class UScaleformBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UScaleformBlueprintLibrary* GetDefaultObj();

	class UGFxMoviePlayer* OpenMovie(class USwfMovie* Movie, class UObject* ExternalInterface, class UTextureRenderTarget2D* RenderTexture, class UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool StartPaused);
	struct FASValue InvokeNoParams(class UGFxMoviePlayer* MoviePlayer, const class FString& FunctionName);
	struct FASValue Invoke(class UGFxMoviePlayer* MoviePlayer, const class FString& FunctionName, TArray<struct FASValue>& Params);
	class UGFxObject* GetVariable(class UGFxMoviePlayer* MoviePlayer, const class FString& VariablePath);
	class UGFxObject* GetMovieClip(class UGFxMoviePlayer* MoviePlayer, const class FString& MovieClipName);
	class UGFxObject* GetMember(class UGFxMoviePlayer* MoviePlayer, const class FString& MemberName);
	void GetAllGFxMoviePlayerOfClass(class UObject* WorldContextObject, TArray<class UGFxMoviePlayer*>* FoundGFxMoviePlayer, TSubclassOf<class UGFxMoviePlayer> GFxMoviePlayerClass, bool VisibleOnly);
	void CloseMovie(class UGFxMoviePlayer* MoviePlayer);
};

// 0xD0 (0xF8 - 0x28)
// Class ScaleformUI.SwfMovie
class USwfMovie : public UObject
{
public:
	uint8                                        bUseGFxExport : 1;                                 // Mask: 0x1, PropSize: 0x10x28(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOptimizeForMobiles : 1;                           // Mask: 0x2, PropSize: 0x10x28(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSetSRGBOnImportedTextures : 1;                    // Mask: 0x4, PropSize: 0x10x28(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPackTextures : 1;                                 // Mask: 0x8, PropSize: 0x10x28(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_96 : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_100D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PackTextureSize;                                   // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bArePackedTextures4k : 1;                          // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bForceSquarePacking : 1;                           // Mask: 0x2, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_97 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1012[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EFlashTextureRescale              TextureRescale;                                    // 0x34(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1017[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TextureFormat;                                     // 0x38(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReplaceImages : 1;                                // Mask: 0x1, PropSize: 0x10x48(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_98 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_101E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SourceFile;                                        // 0x50(0x10)(Edit, ZeroConstructor, EditConst, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseOrderedLoading : 1;                            // Mask: 0x1, PropSize: 0x10x60(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLoadImageFiles : 1;                               // Mask: 0x2, PropSize: 0x10x60(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_99 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1025[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TextureLoadPriority;                               // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        FontMappings;                                      // 0x68(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	class FString                                SourceFileTimestamp;                               // 0x78(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       ImportTimeStamp;                                   // 0x88(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                RawData;                                           // 0x90(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UObject*>                       ReferencedAssets;                                  // 0xA0(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FScaleformTextureReference>    SoftReferencedTextures;                            // 0xB0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1035[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFlashNativeBindingInfo>       InstanceNameAndPathBindings;                       // 0xD0(0x10)(Edit, ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<struct FFlashNativeBindingInfo>       TransientInstanceNameAndPathBindings;              // 0xE0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_103C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USwfMovie* GetDefaultObj();

};

}


