#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2D0 (0x4B8 - 0x1E8)
// Class GbxUI.GbxGFxMovie
class UGbxGFxMovie : public UGFxMoviePlayer
{
public:
	class USwfMovie*                             MovieData;                                         // 0x1E8(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGFxScaleMode                     ScaleModeType;                                     // 0x1F0(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGFxAlign                         AlignmentType;                                     // 0x1F1(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAnchorToViewport;                                 // 0x1F2(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37C[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxGFxAnchor                         AnchorData;                                        // 0x1F4(0x18)(Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_37F[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            AudioDataTable;                                    // 0x218(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxGFxMovieClipAppendix              GetChildAppendix;                                  // 0x220(0x60)(Edit, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class EGbxGFxMovieGetChildStrategy      GetChildStrategy;                                  // 0x280(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_381[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxGFxObject*                         CachedStage;                                       // 0x288(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxGFxObject*                         GbxRoot;                                           // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxGFxObject*                         GetChildRoot;                                      // 0x298(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             CachedGbxRootPosition;                             // 0x2A0(0x8)(BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_389[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsTransitioning;                                  // 0x2C0(0x1)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TransitionTimeout;                                 // 0x2C4(0x4)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_393[0x148];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class AGbxPlayerController*                  OwningGPC;                                         // 0x410(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_398[0x68];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UGbxGFxObject*>                 Tickables;                                         // 0x480(0x10)(BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_39B[0x11];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bGbxMovieStarted;                                  // 0x4A1(0x1)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39C[0x16];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxGFxMovie* GetDefaultObj();

	bool TranslateWorldToLocal(struct FVector& LocationWorldSpace, struct FVector2D* OutPositionLocal, bool bPlayerViewportRelative, bool bUseMovieDimensions);
	struct FVector2D TranslateToScreen(struct FVector2D& Point);
	struct FVector2D TranslateScreenToLocal(struct FVector2D& Point, bool bUseMovieDimensions);
	struct FBox2D TranslateRectToScreen(struct FBox2D& Rect);
	void SpawnMovie(class AGbxPlayerController* NewGPCOwner, class UTextureRenderTarget2D* RenderTarget);
	class UGbxGFxMovie* SpawnGbxGFxMovie(class AGbxPlayerController* GbxPlayerController, TSubclassOf<class UGbxGFxMovie> MovieClass);
	void SetViewportToPlayerScreen(class AGbxPlayerController* Pc);
	void SetOffsetDisplayTransform(struct FTransform& Transform);
	void SetBaseDisplayTransform(struct FTransform& Transform);
	void SetAudioEnabled(bool bEnabled);
	void SetAnchor(struct FGbxGFxAnchor& Anchor);
	bool RunUIEventAudio(class FName EventName, const class FString& ProviderHistory);
	struct FVector2D GetViewportOffset();
	struct FVector2D GetViewportDimensions();
	struct FVector2D GetStageDimensions();
	class APawn* GetOwningPlayerPawn();
	class AGbxPlayerController* GetOwningPlayerController();
	struct FTransform GetOffsetDisplayTransform();
	struct FVector2D GetMovieDimensions();
	struct FTransform GetBaseDisplayTransform();
	void ExtTransitionComplete();
	void ExtAnimationFinished(const class FString& TargetName);
	void ApplyNewAudioSettings(class UDataTable* NewDataTable, enum class EUIAudioSettingOperation MergeOperation);
};

// 0x1B0 (0x668 - 0x4B8)
// Class GbxUI.GbxGFxMenu
class UGbxGFxMenu : public UGbxGFxMovie
{
public:
	uint8                                        Pad_458[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EGbxFocusableWidgetMouseBehavior  DefaultMouseFocusBehavior;                         // 0x4C0(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxGFxMenuData*                       MenuData;                                          // 0x4C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ButtonFocusedAudioEventName;                       // 0x4D0(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ButtonClickedAudioEventName;                       // 0x4E0(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SliderAudioEventName;                              // 0x4F0(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SpinnerAudioEventName;                             // 0x500(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NavigateBackAudioEventName;                        // 0x510(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OpenMenuAudioEventName;                            // 0x520(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CloseMenuAudioEventName;                           // 0x528(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMenuTransitionOutCompleted;                      // 0x530(0x10)(BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMenuInputChanged;                                // 0x540(0x10)(BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	enum class EGbxGFxListAlignment              HintBarAlignment;                                  // 0x550(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCallMenuTickOnlyIfMenuIsStarted;                  // 0x551(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_465[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SplitscreenRootOffset;                             // 0x554(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxGFxContextualMenu*                 OwnedContextualMenu;                               // 0x558(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxGFxMenu*                           ActiveDialog;                                      // 0x560(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class AGbxPlayerController>   PCOwner;                                           // 0x56C(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AGbxCharacter>          PrimaryCharacterOwner;                             // 0x574(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UGbxMenuStack>          MenuStackOwner;                                    // 0x57C(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        DrawPriority;                                      // 0x584(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxWidgetFocusManager*                FocusManager;                                      // 0x588(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxHintBar*                           HintBar;                                           // 0x590(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxGFxHintBarContainer*               HintBarContainer;                                  // 0x598(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxGFxMouseBlocker*                   MouseBlockerClip;                                  // 0x5A0(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bWantsDismiss;                                     // 0x5A8(0x1)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_477[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UGbxGameInstance>       GameInstanceRef;                                   // 0x5AC(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UGbxUIGlobals>          UIGlobalsRef;                                      // 0x5B4(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_47C[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bCachedLastInputFromMouse;                         // 0x5BE(0x1)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bReceiveMouseEvenIfNotActive;                      // 0x5BF(0x1)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsInitedFromStash;                                // 0x5C0(0x1)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bMouseHitsAllowedYet;                              // 0x5C1(0x1)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bGotFirstMouseMove;                                // 0x5C2(0x1)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_480[0xD];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxGFxObject*                         MenuContentClip;                                   // 0x5D0(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxGFxObject*                         MenuLayoutsClip;                                   // 0x5D8(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxGFxObject*                         MenuLayoutClip;                                    // 0x5E0(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsSplitScreenLayout;                              // 0x5E8(0x1)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_484[0x17];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bBlockPauseMenu;                                   // 0x600(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bGFxMenuWasStarted;                                // 0x601(0x1)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_487[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxGFxButton*                         LastFocusedButton;                                 // 0x608(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_48B[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxGFxMenu* GetDefaultObj();

	void SetWidgetAdjacency(TScriptInterface<class IGbxFocusableWidget> Widget, struct FGbxFocusableWidgetAdjacencyInfo& AdjacencyInfo);
	void SetFocusedWidget(TScriptInterface<class IGbxFocusableWidget> WidgetToFocus, bool bFromMouse);
	void SetFocusableWidgetAdjancency(TScriptInterface<class IGbxFocusableWidget> Widget, class UObject* AdjacentUp, class UObject* AdjacentDown, class UObject* AdjacentLeft, class UObject* AdjacentRight);
	void RegisterFocusableWidgetWithAdjacency(TScriptInterface<class IGbxFocusableWidget> Widget, class UObject* AdjacentUp, class UObject* AdjacentDown, class UObject* AdjacentLeft, class UObject* AdjacentRight);
	void RegisterFocusableWidget(TScriptInterface<class IGbxFocusableWidget> Widget, struct FGbxFocusableWidgetAdjacencyInfo& AdjacencyInfo);
	void MenuStack_Clear();
	bool IsWidgetFocused(class UObject* WidgetInQuestion);
	class UObject* GetFocusedWidget();
};

// 0x158 (0x610 - 0x4B8)
// Class GbxUI.GbxGFxHUDWidget
class UGbxGFxHUDWidget : public UGbxGFxMovie
{
public:
	uint8                                        Pad_4B3[0x68];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EGFxHUDWidgetAnchorType           AnchorType;                                        // 0x520(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                LayoutInstanceStringOverride;                      // 0x528(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AnchorBoneName;                                    // 0x538(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxContextSensitivePromptTime;                     // 0x540(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxTimeUntilStopAdvancing;                         // 0x544(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BA[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ShowFrameName;                                     // 0x550(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                HideFrameName;                                     // 0x560(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                OnFrameName;                                       // 0x570(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                OffFrameName;                                      // 0x580(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxGFxHintWidget*                     ContextSensitivePrompt;                            // 0x590(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                InstanceString;                                    // 0x598(0x10)(BlueprintReadOnly, ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AGbxHUD>                OwningHUD;                                         // 0x5A8(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UGbxGFxHUDContainer>    OwningHUDContainer;                                // 0x5B0(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AGbxPlayerController>   OwningPC;                                          // 0x5B8(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class APawn>                  OwningPawn;                                        // 0x5C0(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxGFxObject*                         IconTransitionWrapper;                             // 0x5C8(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxGFxObject*                         InitializationClip;                                // 0x5D0(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4C0[0x14];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UGameInstance>          GameInstanceRef;                                   // 0x5EC(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UGbxUIGlobals>          UIGlobalsRef;                                      // 0x5F4(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4C3[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bDynamicallyLoaded : 1;                            // Mask: 0x1, PropSize: 0x10x604(0x1)(Edit, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4C4[0xB];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxGFxHUDWidget* GetDefaultObj();

	void ExtInitAnimationFinished();
	void ExtHideAnimationFinished();
};

// 0xB0 (0x2B8 - 0x208)
// Class GbxUI.GbxUserWidget
class UGbxUserWidget : public UUserWidget
{
public:
	uint8                                        Pad_502[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextBlock*                            LabelTextBlock;                                    // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            ValueTextBlock;                                    // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                SelectedImage;                                     // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRegisterAsFocusableWidget;                        // 0x230(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxFocusableWidgetMouseBehavior  MouseFocusBehavior;                                // 0x231(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_509[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxFocusableWidgetStyleData*          FocusableWidgetStyleData;                          // 0x238(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OnFocusedAudioEventName;                           // 0x240(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OnClickedAudioEventName;                           // 0x248(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNeverCreateMouseFocusButton;                      // 0x250(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_50E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBUTTON*                               MouseFocusButton;                                  // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           OnWidgetClicked;                                   // 0x260(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           OnWidgetFocused;                                   // 0x270(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  FocusableWidgetNavUp;                              // 0x280(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FocusableWidgetNavDown;                            // 0x288(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FocusableWidgetNavLeft;                            // 0x290(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FocusableWidgetNavRight;                           // 0x298(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFocusOnMenuCreation;                              // 0x2A0(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_518[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UGbxUmgMenu>            MenuThatOwnsFocus;                                 // 0x2A4(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_51B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            AudioDataTable;                                    // 0x2B0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxUserWidget* GetDefaultObj();

	void SetLabelText(class FText LabelText);
	void OnFocusableWidgetUnhovered();
	void OnFocusableWidgetReleased();
	void OnFocusableWidgetPressed();
	void OnFocusableWidgetHovered();
	void OnFocusableWidgetClicked();
	bool IsRegisteredAsFocusableWidget();
	bool IsFocusableWidgetStateHovered(enum class EGbxFocusableWidgetState State);
	bool IsFocusableWidgetStateFocused(enum class EGbxFocusableWidgetState State);
	void HandleFocusableWidgetStateChanged(enum class EGbxFocusableWidgetState NewState, bool bBecameFocused, bool bLostFocus);
	void GotoAndStop(const struct FFrameTime& StopTime, class UWidgetAnimation* InAnimation);
	void GetAllChildWidgetsOfClass(TSubclassOf<class UWidget> TargetClass, TArray<class UWidget*>& OutputArray);
};

// 0x38 (0x2F0 - 0x2B8)
// Class GbxUI.GbxUmgMenu
class UGbxUmgMenu : public UGbxUserWidget
{
public:
	uint8                                        Pad_612[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxUmgMenuData*                       MenuData;                                          // 0x2C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGbxPlayerController*                  PCOwner;                                           // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxMenuStack*                         MenuStackOwner;                                    // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxWidgetFocusManager*                FocusManager;                                      // 0x2D8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxHintBar*                           HintBar;                                           // 0x2E0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_615[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EGbxFocusableWidgetMouseBehavior  DefaultMouseFocusBehavior;                         // 0x2ED(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_617[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxUmgMenu* GetDefaultObj();

	void SetWidgetAdjacency(class UObject* Widget, const struct FGbxFocusableWidgetAdjacencyInfo& AdjacencyInfo);
	void SetSlateFocusedWidget(class UWidget* Widget);
	void SetHintBarContainer(TScriptInterface<class IGbxHintBarWidgetContainer>& InContainer);
	void SetFocusedWidget(class UObject* Widget, bool bFromMouse);
	void SetFocusableWidgetAdjancency(class UObject* Widget, class UObject* AdjacentUp, class UObject* AdjacentDown, class UObject* AdjacentLeft, class UObject* AdjacentRight);
	void RegisterStagePlacedHint(TScriptInterface<class IGbxHintWidget>& InHintWidget, class FName InInputAction);
	void RegisterFocusableWidgetWithAdjacency(class UObject* Widget, class UObject* AdjacentUp, class UObject* AdjacentDown, class UObject* AdjacentLeft, class UObject* AdjacentRight);
	void RegisterFocusableWidget(class UObject* Widget, const struct FGbxFocusableWidgetAdjacencyInfo& AdjacencyInfo);
	void PopulateHintBar();
	void NavigateBack();
	class UObject* MenuStack_SwitchTo(class UGbxMenuData* MenuDataIn);
	class UObject* MenuStack_Push(class UGbxMenuData* MenuDataIn);
	class UObject* MenuStack_PopToSwitchTo(class UObject* Menu, class UGbxMenuData* MenuDataIn);
	void MenuStack_PopTo(class UObject* Menu);
	void MenuStack_Pop();
	void MenuStack_Clear();
	bool IsWidgetFocused(class UObject* WidgetInQuestion);
	bool IsActiveMenuOnStack();
	void HandleMenuInputDeviceChanged(enum class EGbxMenuInputDevice NewInputDevice);
	void HandleMenuInputAction(class FName& InputAction, int32 ControllerId);
	void HandleMenuInit();
	void HandleMenuDeinit();
	void HandleMenuDeactivate();
	void HandleMenuAspectRatioChanged(float NewAspectRatio);
	void HandleMenuActivate();
	class UGbxListItemFactory* GetListItemFactory();
	class UObject* GetFocusedWidget();
	enum class EGbxMenuInputDevice GetCurrentInputDevice();
};

// 0x8 (0x2F8 - 0x2F0)
// Class GbxUI.GbxMenuSwitcherSubmenu
class UGbxMenuSwitcherSubmenu : public UGbxUmgMenu
{
public:
	TWeakObjectPtr<class UGbxMenuSwitcher>       OwnerMenuSwitcher;                                 // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxMenuSwitcherSubmenu* GetDefaultObj();

};

// 0x0 (0x2F8 - 0x2F8)
// Class GbxUI.GbxDebugMenuSubmenu
class UGbxDebugMenuSubmenu : public UGbxMenuSwitcherSubmenu
{
public:

	static class UClass* StaticClass();
	static class UGbxDebugMenuSubmenu* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class GbxUI.GbxMenuData
class UGbxMenuData : public UGbxDataAsset
{
public:
	bool                                         bHideMenusBeneath;                                 // 0x30(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowsMouse;                                       // 0x31(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxMenuInputMode                 InputMode;                                         // 0x32(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxMenuParentType                ParentType;                                        // 0x33(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoAttemptPop;                                   // 0x34(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseMenuStashing;                                  // 0x35(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActivateIfPoppedTo;                               // 0x36(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_649[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDialogEvent*                          IdleDialogEvent;                                   // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogParameter*                      IdleDialogTargetParamater;                         // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxMenuData* GetDefaultObj();

};

// 0x78 (0xC0 - 0x48)
// Class GbxUI.GbxGFxMenuData
class UGbxGFxMenuData : public UGbxMenuData
{
public:
	TSoftClassPtr<class UGbxGFxMenu>             MovieClass;                                        // 0x48(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TransitionMovieClipTarget;                         // 0x70(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TransitionOutAnimation;                            // 0x80(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TransitionOutTimeout;                              // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_659[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxHUDStateData*                      OverrideHUDState;                                  // 0x98(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_65C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GFxMenuDrawPriorityBoost;                          // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_65D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UObject*>                       CreatedMenus;                                      // 0xB0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxGFxMenuData* GetDefaultObj();

};

// 0x138 (0x170 - 0x38)
// Class GbxUI.GbxGFxObject
class UGbxGFxObject : public UGFxObject
{
public:
	class UGbxGFxMovie*                          OwningMovie;                                       // 0x38(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6A1[0x130];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxGFxObject* GetDefaultObj();

	void SetOffsetDisplayTransform(struct FTransform& Transform);
	void SetBaseDisplayTransform(struct FTransform& Transform);
	void RotateAboutPoint(float Degrees, struct FVector2D& Point);
	struct FTransform GetOffsetDisplayTransform();
	struct FTransform GetBaseDisplayTransform();
};

// 0x158 (0x2C8 - 0x170)
// Class GbxUI.GbxGFxButton
class UGbxGFxButton : public UGbxGFxObject
{
public:
	uint8                                        Pad_741[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EGbxFocusableWidgetMouseBehavior  MouseFocusBehavior;                                // 0x198(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_742[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  OnFocusedAudioEventName;                           // 0x1A0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OnClickedAudioEventName;                           // 0x1A8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           OnClicked;                                         // 0x1B0(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           OnSecondaryClicked;                                // 0x1C0(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           OnFocused;                                         // 0x1D0(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           OnUnfocused;                                       // 0x1E0(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           OnPressed;                                         // 0x1F0(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           OnReleased;                                        // 0x200(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           OnHovered;                                         // 0x210(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           OnUnhovered;                                       // 0x220(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           OnHeld;                                            // 0x230(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UGbxGFxMenu>            OwningMenu;                                        // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxTextField*                         Label;                                             // 0x248(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_74D[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxGFxObject*                         AppearanceFrameClip;                               // 0x268(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TimeButtonHeld;                                    // 0x270(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasSentHeldEvent;                                 // 0x274(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bWantsHeld;                                        // 0x275(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIgnoreNextClick;                                  // 0x276(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bNewIndicatorUsesLabels;                           // 0x277(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_753[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxGFxButton* GetDefaultObj();

	void SetLockedState(enum class EGbxGFxButtonLockedState InLockedState, bool bShouldRefresh);
	void SetLabelText(class FText& Text, bool bForceUpdate);
	void SetCheckedState(enum class EGbxGFxButtonCheckedState InCheckedState, bool bShouldRefresh);
	void SetButtonType(enum class EGbxGFxButtonType InButtonType);
	void RefreshView(enum class EGbxFocusableWidgetState PrevState);
	void K2_HandleFocusableWidgetStateChanged(enum class EGbxFocusableWidgetState NewState, bool bBecameFocused, bool bLostFocus);
	bool IsRegisteredAsFocusableWidget();
	bool IsLocked();
	bool IsFocusableWidgetStateUp(enum class EGbxFocusableWidgetState State);
	bool IsFocusableWidgetStateHovered(enum class EGbxFocusableWidgetState State);
	bool IsFocusableWidgetStateFocused(enum class EGbxFocusableWidgetState State);
	bool IsFocusableWidgetStateDown(enum class EGbxFocusableWidgetState State);
	bool IsFocusableWidgetStateDisabled(enum class EGbxFocusableWidgetState State);
	bool IsChecked();
	enum class EGbxGFxButtonLockedState GetLockedState();
	enum class EGbxGFxButtonCheckedState GetCheckedState();
	enum class EGbxGFxButtonType GetButtonType();
	void GbxGFxButtonEvent__DelegateSignature(class UGbxGFxButton* BUTTON, struct FGbxMenuInputEvent& InputInfo);
};

// 0x40 (0x308 - 0x2C8)
// Class GbxUI.GbxGFxListCell
class UGbxGFxListCell : public UGbxGFxButton
{
public:
	class UGbxGFxGridScrollingList*              OwningList;                                        // 0x2C8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxGFxObject*                         CellBounds;                                        // 0x2D0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ListIndex;                                         // 0x2D8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             PositionInContainer;                               // 0x2DC(0x8)(Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TopOffsetPosition;                                 // 0x2E4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BottomOffsetPosition;                              // 0x2E8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LeftOffsetPosition;                                // 0x2EC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RightOffsetPosition;                               // 0x2F0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsReadjustingFocus;                               // 0x2F4(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_776[0x13];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxGFxListCell* GetDefaultObj();

};

// 0x8 (0x670 - 0x668)
// Class GbxUI.GbxGFxMenuSwitcherSubmenu
class UGbxGFxMenuSwitcherSubmenu : public UGbxGFxMenu
{
public:
	TWeakObjectPtr<class UGbxGFxMenuSwitcher>    OwnerMenuSwitcher;                                 // 0x668(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGbxGFxMenuSwitcherSubmenu* GetDefaultObj();

};

// 0x28 (0x198 - 0x170)
// Class GbxUI.GbxGFxMovieLoader
class UGbxGFxMovieLoader : public UGbxGFxObject
{
public:
	UMulticastDelegateProperty_                  OnMovieLoadCompleteDelegate;                       // 0x170(0x10)(ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic)
	class UGbxGFxObject*                         LoadedMovie;                                       // 0x180(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USwfMovie*                             QueuedLoadMovie;                                   // 0x188(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USwfMovie*                             CurrentMovie;                                      // 0x190(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxGFxMovieLoader* GetDefaultObj();

};

// 0x1B0 (0x320 - 0x170)
// Class GbxUI.GbxGFxGridScrollingList
class UGbxGFxGridScrollingList : public UGbxGFxObject
{
public:
	uint8                                        Pad_79E[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  SelectionChangedDelegate;                          // 0x180(0x10)(ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  ItemPressedDelegate;                               // 0x190(0x10)(ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_7A3[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  ItemClickedDelegate;                               // 0x1A8(0x10)(ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  ItemSecondaryClickedDelegate;                      // 0x1B8(0x10)(ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_7A7[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxGFxListConfig                     Config;                                            // 0x1E0(0x90)(Transient, NativeAccessSpecifierPublic)
	int32                                        SelectedIndex;                                     // 0x270(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SelectedIndexWhenFocusWasLost;                     // 0x274(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGbxScrollingListCellInfo>     AllCells;                                          // 0x278(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FGbxScrollingListCellInfo>     UnusedCellPool;                                    // 0x288(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	class UGbxGFxObject*                         GridArea;                                          // 0x298(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxGFxObject*                         GridMask;                                          // 0x2A0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             PositionOfFirstItem;                               // 0x2A8(0x8)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NextUniqueId;                                      // 0x2B0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ViewWindowSize;                                    // 0x2B4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxUIScroller                        UiScroller;                                        // 0x2B8(0x34)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bIsContentDirty;                                   // 0x2EC(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             AverageItemDims;                                   // 0x2F0(0x8)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxGFxSlider*                         ScrollBar;                                         // 0x2F8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bScrollbarIsChildOfThis;                           // 0x300(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B8[0x1F];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxGFxGridScrollingList* GetDefaultObj();

	void OnScrollBarPositionUpdated(float SliderPercentage);
};

// 0x10 (0x318 - 0x308)
// Class GbxUI.GbxGFxListCellWithData
class UGbxGFxListCellWithData : public UGbxGFxListCell
{
public:
	class FName                                  TextID;                                            // 0x308(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDataAsset*                            DataAsset;                                         // 0x310(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGbxGFxListCellWithData* GetDefaultObj();

};

// 0x48 (0x360 - 0x318)
// Class GbxUI.GbxGFxListItemSpinner
class UGbxGFxListItemSpinner : public UGbxGFxListCellWithData
{
public:
	uint8                                        Pad_7D3[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxSpinner*                           SpinnerItem;                                       // 0x320(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7D4[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxGFxListItemSpinner* GetDefaultObj();

	void OnSpinnerValueUpdated();
};

// 0x88 (0x3A0 - 0x318)
// Class GbxUI.GbxGFxListItemNumber
class UGbxGFxListItemNumber : public UGbxGFxListCellWithData
{
public:
	int32                                        SliderRepeatsToAccelerate;                         // 0x318(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SliderMaxIncreases;                                // 0x31C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SliderFastestSteps;                                // 0x320(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F4[0x1C];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxGFxSlider*                         SliderItem;                                        // 0x340(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxTextField*                         ValueItem;                                         // 0x348(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7F5[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxGFxListItemNumber* GetDefaultObj();

	void OnSliderUpdated(float SliderPct);
};

// 0x10 (0x330 - 0x320)
// Class GbxUI.GbxGFxGridScrollingListPaged
class UGbxGFxGridScrollingListPaged : public UGbxGFxGridScrollingList
{
public:
	uint8                                        Pad_7FB[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxGFxGridScrollingListPaged* GetDefaultObj();

};

// 0x20 (0xE0 - 0xC0)
// Class GbxUI.GbxGFxMenuSwitcherMenuData
class UGbxGFxMenuSwitcherMenuData : public UGbxGFxMenuData
{
public:
	TArray<struct FGbxGFxMenuSwitcherSubmenuInfo> CurrentSubmenus;                                   // 0xC0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FGbxGFxMenuSwitcherSubmenuInfo> Submenus;                                          // 0xD0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGbxGFxMenuSwitcherMenuData* GetDefaultObj();

};

// 0x20 (0x688 - 0x668)
// Class GbxUI.GbxGFxMenuSwitcher
class UGbxGFxMenuSwitcher : public UGbxGFxMenu
{
public:
	TWeakObjectPtr<class UGbxGFxMenuSwitcherSubmenu> CurrentSubmenu;                                    // 0x668(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  CurrentSubmenuId;                                  // 0x670(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  PreviousSubmenuId;                                 // 0x678(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumSubMenus;                                       // 0x680(0x4)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_812[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxGFxMenuSwitcher* GetDefaultObj();

};

// 0x1A8 (0x318 - 0x170)
// Class GbxUI.GbxGFxProgressBar
class UGbxGFxProgressBar : public UGbxGFxObject
{
public:
	uint8                                        Pad_878[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Percent;                                           // 0x178(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumFillFrames;                                     // 0x17C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumDeltaBarFrames;                                 // 0x180(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumBackgroundBarFrames;                            // 0x184(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxProgressBarInterpolator           DefaultInterpolator;                               // 0x188(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FGbxProgressBarRange>          Ranges;                                            // 0x1B0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                EdgeFlashID;                                       // 0x1C0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EdgeFlashInnerID;                                  // 0x1D0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FillBarId;                                         // 0x1E0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DeltaBarId;                                        // 0x1F0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BackgroundBarId;                                   // 0x200(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CurrentValueLabelId;                               // 0x210(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MaxValueLabelId;                                   // 0x220(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_882[0x88];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           OnInterpolationComplete;                           // 0x2B8(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           OnEnterRange;                                      // 0x2C8(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxProgressBarInterpolator           Interpolator;                                      // 0x2D8(0x28)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_883[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxGFxProgressBar* GetDefaultObj();

	void SetPercent(float InPercent);
	void SetMaxValueText(class FText& Text);
	void SetFillColorAndOpacity(const struct FLinearColor& InColor);
	void SetCurrentValueText(class FText& Text);
	bool PassedPercentThreshold(float Threshold, float OldValue, float CurrentValue, bool bIncreasing, bool bDecreasing);
	void InterpolateToPercentWithInterpolator(float InPercent, struct FGbxProgressBarInterpolator& Interpolator);
	void InterpolateToPercent(float InPercent);
	void HandlePercentChanged(float OldValue, float CurrentValue, bool bIsInterpolating, struct FGbxProgressBarInterpolator& ActiveInterpolator);
	void HandleEnterPercentRange(class FName& RangeName);
	float GetPercent();
	bool EnteredPercentRange(float RangeMin, float RangeMax, float OldValue, float CurrentValue, bool bIncreasing, bool bDecreasing);
};

// 0x28 (0x2E0 - 0x2B8)
// Class GbxUI.GbxHUDContainer
class UGbxHUDContainer : public UGbxUserWidget
{
public:
	class UCanvasPanel*                          RootPanel;                                         // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGbxPlayerController*                  OwningPlayerController;                            // 0x2C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGbxHUD*                               OwningHUD;                                         // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProjectedContainerZOrder;                          // 0x2D0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCanvasPanel*                          DebugPanel;                                        // 0x2D8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxHUDContainer* GetDefaultObj();

	void HandleInit();
	void HandleDeinit();
	void HandleDeactivate();
	void HandleActivate();
};

// 0x58 (0x310 - 0x2B8)
// Class GbxUI.GbxHUDWidget
class UGbxHUDWidget : public UGbxUserWidget
{
public:
	struct FGeometry                             CachedGeometry;                                    // 0x2B8(0x38)(BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UGbxHUDContainer*                      OwningHUDContainer;                                // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGbxHUD*                               OwningHUD;                                         // 0x2F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGbxPlayerController*                  OwningPlayerController;                            // 0x300(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B5[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxHUDWidget* GetDefaultObj();

	void HandleInit();
	void HandleDeinit();
	void HandleDeactivate();
	void HandleActivate();
};

// 0x30 (0x2E8 - 0x2B8)
// Class GbxUI.GbxListItem
class UGbxListItem : public UGbxUserWidget
{
public:
	UDelegateProperty_                           OnListItemValueChanged;                            // 0x2B8(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	TScriptInterface<class IGbxList>             ListOwner;                                         // 0x2C8(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class FName                                  ChangedAudioEventName;                             // 0x2D8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C9[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxListItem* GetDefaultObj();

	int32 GetItemIndex();
};

// 0x0 (0x2E8 - 0x2E8)
// Class GbxUI.GbxListItemText
class UGbxListItemText : public UGbxListItem
{
public:

	static class UClass* StaticClass();
	static class UGbxListItemText* GetDefaultObj();

};

// 0xE8 (0x5A0 - 0x4B8)
// Class GbxUI.GbxGFxHUDContainer
class UGbxGFxHUDContainer : public UGbxGFxMovie
{
public:
	uint8                                        Pad_8D5[0x38];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UGbxGFxHUDWidget*>              Widgets;                                           // 0x4F0(0x10)(BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	class UGbxHUDData*                           HUDData;                                           // 0x500(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGbxHUDFeedbackManager                FeedbackManager;                                   // 0x508(0x70)(BlueprintReadOnly, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8D7[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class AGbxPlayerController>   OwningPC;                                          // 0x580(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class AGbxHUD>                OwningHUD;                                         // 0x588(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class APawn>                  OwningPawn;                                        // 0x590(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bViewportNeedsRefresh;                             // 0x598(0x1)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bFinishedInitializing;                             // 0x599(0x1)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8DD[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxGFxHUDContainer* GetDefaultObj();

};

// 0xB0 (0x628 - 0x578)
// Class GbxUI.GbxHUD
class AGbxHUD : public AHUD
{
public:
	uint8                                        Pad_961[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxHUDStateManager                   HudStateManager;                                   // 0x590(0x40)(Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	bool                                         bDisplayScaleformHUD;                              // 0x5D0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_963[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 ChangedFromPawn;                                   // 0x5D8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_967[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxGFxHUDContainer*                   GFxHUDContainer;                                   // 0x5E8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxHUDData*                           OverrideContainerDefinition;                       // 0x5F0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_96A[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EGbxMenuInputDevice               CurrentInputDevice;                                // 0x608(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_96C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class AGbxPlayerController>   OwningPC;                                          // 0x60C(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class AGbxCharacter>          OwningPrimaryCharacter;                            // 0x614(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class APawn>                  OwningPawn;                                        // 0x61C(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_96D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGbxHUD* GetDefaultObj();

	void SwitchToHUDState(class AGbxPlayerController* PlayerController, class UGbxHUDStateData* State);
	void SetHUDContainer(class AGbxPlayerController* PlayerController, class UGbxHUDData* ContainerDefinition);
	void PushHUDState(class AGbxPlayerController* PlayerController, class UGbxHUDStateData* State, bool bAllowDuplicatePush);
	void PopToSwitchToHUDState(class AGbxPlayerController* PlayerController, class UGbxHUDStateData* PopToState, class UGbxHUDStateData* SwitchToState);
	void PopToHUDState(class AGbxPlayerController* PlayerController, class UGbxHUDStateData* State);
	void PopSpecifiedHUDState(class AGbxPlayerController* PlayerController, class UGbxHUDStateData* State);
	void PopHUDState(class AGbxPlayerController* PlayerController);
	void OnPrimaryCharacterChanged(class AGbxCharacter* Character);
	void OnPawnChanged(class APawn* Pawn, class APawn* OldPawn);
	void Hidedamagenumbers(bool bShouldHideDamage);
	void GotoPreviousHUDState(class AGbxPlayerController* PlayerController);
	void GotoHUDState(class AGbxPlayerController* PlayerController, class UGbxHUDStateData* State);
	class UGbxHUDStateData* GetCurrentHUDState(class AGbxPlayerController* PlayerController);
	void ClearToDefaultHUDState(class AGbxPlayerController* PlayerController);
	void ClearHUDStates(class AGbxPlayerController* PlayerController);
};

// 0x0 (0x28 - 0x28)
// Class GbxUI.GbxUIBlueprintHelperLibrary
class UGbxUIBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGbxUIBlueprintHelperLibrary* GetDefaultObj();

};

// 0x48 (0x70 - 0x28)
// Class GbxUI.GbxUIDataCollectorBase
class UGbxUIDataCollectorBase : public UObject
{
public:
	uint8                                        Pad_97E[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxUIDataCollectorBase* GetDefaultObj();

};

// 0x28 (0x3C8 - 0x3A0)
// Class GbxUI.GbxUIInputComponent
class UGbxUIInputComponent : public UGbxInputComponent
{
public:
	uint8                                        Pad_985[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UGbxUIHoldInputTracker*>        HoldInputTrackers;                                 // 0x3A8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_988[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxUIInputComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxUI.GbxUILibrary
class UGbxUILibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGbxUILibrary* GetDefaultObj();

	void SendTextToDebugHUD(class UObject* WorldContextObject, class FText Text, const struct FLinearColor& Color, int32 TextSize, float Duration);
	class UGbxFullScreenMovie* PlayFullScreenMovie(class AGbxPlayerController* GbxPC, class UMediaSource* MediaSource, bool bPlayOnceAndDestroy);
	class UGbxListItemText* CreateTextListItemWithDelegates(TScriptInterface<class IGbxList> OwningList, class APlayerController* OwningPlayer, class FText LabelText, UDelegateProperty_ ClickedDelegate, UDelegateProperty_ SelectedDelegate);
	class UGbxListItemText* CreateTextListItem(TScriptInterface<class IGbxList> OwningList, class APlayerController* OwningPlayer, class FText LabelText);
	class UGbxListItemNumber* CreateNumberListItemWithDelegates(TScriptInterface<class IGbxList> OwningList, class APlayerController* OwningPlayer, class FText LabelText, float InitialValue, float SliderMin, float SliderMax, float SliderStep, UDelegateProperty_ ChangedDelegate, UDelegateProperty_ SelectedDelegate);
	class UGbxListItemNumber* CreateNumberListItem(TScriptInterface<class IGbxList> OwningList, class APlayerController* OwningPlayer, class FText LabelText, float InitialValue, float SliderMin, float SliderMax, float SliderStep);
	class UGbxListItem* CreateListItemWithDelegates(TScriptInterface<class IGbxList> OwningList, class APlayerController* OwningPlayer, TSubclassOf<class UGbxListItem> ItemClass, UDelegateProperty_ ClickedDelegate, UDelegateProperty_ SelectedDelegate);
	class UGbxListItem* CreateListItem(TScriptInterface<class IGbxList> OwningList, class APlayerController* OwningPlayer, TSubclassOf<class UGbxListItem> ItemClass);
	class UGbxListItem* CreateDefaultListItemWithDelegates(TScriptInterface<class IGbxList> OwningList, class APlayerController* OwningPlayer, UDelegateProperty_ ClickedDelegate, UDelegateProperty_ SelectedDelegate);
	class UGbxListItem* CreateDefaultListItem(TScriptInterface<class IGbxList> OwningList, class APlayerController* OwningPlayer);
	class UGbxListItemComboBox* CreateComboBoxListItemWithDelegates(TScriptInterface<class IGbxList> OwningList, class APlayerController* OwningPlayer, class FText LabelText, TArray<class FText>& Items, int32 InitialIndex, UDelegateProperty_ ChangedDelegate, UDelegateProperty_ SelectedDelegate);
	class UGbxListItemComboBox* CreateComboBoxListItem(TScriptInterface<class IGbxList> OwningList, class APlayerController* OwningPlayer, class FText LabelText, TArray<class FText>& Items, int32 InitialIndex);
	class UGbxListItemBoolean* CreateBooleanListItemWithDelegates(TScriptInterface<class IGbxList> OwningList, class APlayerController* OwningPlayer, class FText LabelText, bool InitialValue, UDelegateProperty_ ChangedDelegate, UDelegateProperty_ SelectedDelegate);
	class UGbxListItemBoolean* CreateBooleanListItem(TScriptInterface<class IGbxList> OwningList, class APlayerController* OwningPlayer, class FText LabelText, bool InitialValue);
	class FString AbbreviateNumberText(float ValueToFormat);
};

// 0x88 (0xB0 - 0x28)
// Class GbxUI.GbxUISystem
class UGbxUISystem : public UObject
{
public:
	uint8                                        Pad_A59[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         GameInst;                                          // 0x30(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A5B[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UGbxUIViewManager*>             ViewMgrs;                                          // 0x40(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class UGbxUIAssetBankManager*                AssetBankMgr;                                      // 0x50(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A5C[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxUIPreloader*                       Preloader;                                         // 0x80(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A5F[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftClassPath                        UISystemClassPath;                                 // 0x98(0x18)(Config, GlobalConfig, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxUISystem* GetDefaultObj();

};

// 0x1A0 (0x1D0 - 0x30)
// Class GbxUI.GbxUIGlobals
class UGbxUIGlobals : public UGbxDataAsset
{
public:
	class UGbxInputToGlyphMap*                   InputToGlyphMap;                                   // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxDialogBoxData*                     DialogBoxTemplates;                                // 0x38(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxListItemFactory*                   DefaultListItemFactory;                            // 0x40(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxFullScreenMovie>       FullScreenMovieWidget;                             // 0x48(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaPlayer*                          FullScreenMediaPlayer;                             // 0x50(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UGbxHUDData*>                   PersistentWidgetGroups;                            // 0x58(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UGbxGFxContextualMenuData*             GFxContextualMenuTemplate;                         // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MarkupStartCharacter;                              // 0x70(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                MarkupEndCharacter;                                // 0x80(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FName, struct FTextMarkupDictionaryEntry> MarkupDictionary;                                  // 0x90(0x50)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FVector2D                             DefaultGlyphSize;                                  // 0xE0(0x8)(Edit, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                GlyphMarkupStartCharacter;                         // 0xE8(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                GlyphMarkupEndCharacter;                           // 0xF8(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FName, class FText>               ClosedCaptioningTable;                             // 0x108(0x50)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UGbxMenuData*>                  AlwaysLoadedGFxMenus;                              // 0x158(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class USwfMovie>>      AlwaysLoadedGFxMovies;                             // 0x168(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	int32                                        HintGlyphVSpace;                                   // 0x178(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A6B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<TSoftClassPtr<class UGbxGFxMenu>, struct FGbxMenuSplitscreenLayouts> SplitscreenLayouts;                                // 0x180(0x50)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxUIGlobals* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class GbxUI.GbxUmgMenuData
class UGbxUmgMenuData : public UGbxMenuData
{
public:
	TSubclassOf<class UGbxUmgMenu>               MenuClass;                                         // 0x48(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxListItemFactory*                   ListItemFactory;                                   // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxUmgMenuData* GetDefaultObj();

};

// 0x60 (0x318 - 0x2B8)
// Class GbxUI.GbxCascadingList
class UGbxCascadingList : public UGbxUserWidget
{
public:
	TSubclassOf<class UGbxListItem>              DefaultListItemClass;                              // 0x2B8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UGbxGridListWidget*>            ListViews;                                         // 0x2C0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	UDelegateProperty_                           OnItemSelected;                                    // 0x2D0(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           OnItemClicked;                                     // 0x2E0(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           OnItemCreated;                                     // 0x2F0(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	class UGbxGridListWidget*                    ActiveList;                                        // 0x300(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FGbxCascadingListItemData>     NavigationStack;                                   // 0x308(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGbxCascadingList* GetDefaultObj();

	void SetActiveList(class UGbxGridListWidget* List);
	void PushItems(TArray<struct FGbxCascadingListItemData>& Items);
	void Pop();
	void OnShiftListsForward();
	void OnShiftListsBack();
	void OnItemSelected_Internal(class UGbxListItem* Item);
	void OnItemClicked_Internal(class UGbxListItem* Item);
	bool HasItems();
	int32 GetStackDepth();
	void Clear();
};

// 0x28 (0x318 - 0x2F0)
// Class GbxUI.GbxComboBoxDropdownMenu
class UGbxComboBoxDropdownMenu : public UGbxUmgMenu
{
public:
	TArray<struct FGbxComboBoxItemInfo>          ChoiceListArray;                                   // 0x2F0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UWidget*                               ChoiceListContainer;                               // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxGridListWidget*                    ChoiceList;                                        // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UGbxComboBox>           ComboBoxOwner;                                     // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxComboBoxDropdownMenu* GetDefaultObj();

	void OnChoiceClicked(class UGbxListItem* ListItem);
	void DismissWithoutChanging();
};

// 0x70 (0x358 - 0x2E8)
// Class GbxUI.GbxComboBox
class UGbxComboBox : public UGbxListItem
{
public:
	TSubclassOf<class UGbxComboBoxDropdownMenu>  DropdownMenuClass;                                 // 0x2E8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             DropdownMenuOffset;                                // 0x2F0(0x8)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           OnComboChoiceChanged;                              // 0x2F8(0x10)(BlueprintVisible, ZeroConstructor, Transient, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FGbxComboBoxItemInfo>          ChoiceListArray;                                   // 0x308(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	int32                                        CurrentChoiceReferenceIndex;                       // 0x318(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGeometry                             LastKnownGeometry;                                 // 0x31C(0x38)(Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_AF9[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxComboBox* GetDefaultObj();

	void OnComboBoxClicked(class UGbxUserWidget* Widget, struct FGbxMenuInputEvent& InputInfo);
	int32 GetCurentChoiceReferenceIndex();
};

// 0x0 (0x28 - 0x28)
// Class GbxUI.GbxCoreDialogBoxHelpers
class UGbxCoreDialogBoxHelpers : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGbxCoreDialogBoxHelpers* GetDefaultObj();

	class UGbxDialogBox* ShowYesNoDialog(class AGbxPlayerController* Pc, class FText HeaderText, class FText MessageText, bool bAnyUserCanInteract);
	class UGbxDialogBox* ShowOkayDialog(class AGbxPlayerController* Pc, class FText HeaderText, class FText MessageText, bool bAnyUserCanInteract, enum class EGbxDialogBoxHelpersDialogTemplate Template);
	class UGbxDialogBox* ShowDialog(class AGbxPlayerController* Pc, struct FGbxDialogBoxInfo& DialogBoxInfo);
	class UGbxDialogBox* ShowConfirmCancelDialog(class AGbxPlayerController* Pc, class FText HeaderText, class FText MessageText, bool bAnyUserCanInteract);
	class UGbxDialogBox* ShowBlockingDialog(class AGbxPlayerController* Pc, class FText HeaderText, class FText MessageText, bool bBlocksAllUsers);
};

// 0x20 (0x50 - 0x30)
// Class GbxUI.GbxCrosshairDataAsset
class UGbxCrosshairDataAsset : public UGbxDataAsset
{
public:
	class FString                                CrosshairFrameName;                                // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                    CrosshairActorClass;                               // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideMinSpreadReticle;                             // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideAccuracyReticle;                              // 0x49(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EChargeClipState                  ChargeClipState;                                   // 0x4A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA2[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxCrosshairDataAsset* GetDefaultObj();

};

// 0x10 (0x68 - 0x58)
// Class GbxUI.GbxMenuSwitcherMenuData
class UGbxMenuSwitcherMenuData : public UGbxUmgMenuData
{
public:
	TArray<struct FGbxMenuSwitcherSubmenuInfo>   Submenus;                                          // 0x58(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxMenuSwitcherMenuData* GetDefaultObj();

};

// 0x0 (0x68 - 0x68)
// Class GbxUI.GbxDebugMenuData
class UGbxDebugMenuData : public UGbxMenuSwitcherMenuData
{
public:

	static class UClass* StaticClass();
	static class UGbxDebugMenuData* GetDefaultObj();

};

// 0x18 (0x308 - 0x2F0)
// Class GbxUI.GbxMenuSwitcher
class UGbxMenuSwitcher : public UGbxUmgMenu
{
public:
	uint8                                        Pad_BD1[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxMenuSwitcher* GetDefaultObj();

	void SwitchToPage(class FName SubMenuId);
	void PrevPage();
	void NextPage();
	class FName GetCurrentSubmenuId();
};

// 0x28 (0x330 - 0x308)
// Class GbxUI.GbxDebugMenu
class UGbxDebugMenu : public UGbxMenuSwitcher
{
public:
	class UGbxGridListWidget*                    CategoryList;                                      // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBUTTON*                               CloseButton;                                       // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPanelWidget*                          SubmenuContainer;                                  // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          HiddenSubmenus;                                    // 0x320(0x10)(ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGbxDebugMenu* GetDefaultObj();

	void OnCloseClicked();
	void OnCategorySelected(class UGbxUserWidget* Widget, struct FGbxMenuInputEvent& InputInfo);
};

// 0x40 (0x338 - 0x2F8)
// Class GbxUI.GbxDebugRumbleMenu
class UGbxDebugRumbleMenu : public UGbxDebugMenuSubmenu
{
public:
	float                                        SliderStepSize;                                    // 0x2F8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C12[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxScrollBoxList*                     ContentPanel;                                      // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxListItemNumber*                    LeftLargeSlider;                                   // 0x308(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxListItemNumber*                    LeftSmallSlider;                                   // 0x310(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxListItemNumber*                    RightLargeSlider;                                  // 0x318(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxListItemNumber*                    RightSmallSlider;                                  // 0x320(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C17[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxDebugRumbleMenu* GetDefaultObj();

	void OnSliderValueChanged(class UGbxListItem* Item);
};

// 0x70 (0xC8 - 0x58)
// Class GbxUI.GbxDialogBoxData
class UGbxDialogBoxData : public UGbxUmgMenuData
{
public:
	struct FGbxDialogBoxInfo                     DialogInfo;                                        // 0x58(0x60)(Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FGbxDialogBoxTemplateMapItem>  Templates;                                         // 0xB8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxDialogBoxData* GetDefaultObj();

};

// 0xE0 (0x3D0 - 0x2F0)
// Class GbxUI.GbxDialogBox
class UGbxDialogBox : public UGbxUmgMenu
{
public:
	bool                                         bWantsToDismiss;                                   // 0x2F0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_CA5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  HeaderText;                                        // 0x2F8(0x18)(Transient, NativeAccessSpecifierPrivate)
	class FText                                  BodyText;                                          // 0x310(0x18)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_CA8[0xA0];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxScrollBoxList*                     ChoiceList;                                        // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxDialogBox* GetDefaultObj();

	void UpdateText(class FText& NewHeaderText, class FText& NewBodyText);
	void SetupDialog(struct FGbxDialogBoxInfo& DialogBoxInfo);
	void SetHeaderTextFormatArg(const class FString& ArgName, class FText& ReplacementText);
	void SetHeaderText(class FText& NewText, bool bClearFormatArgs);
	void SetBodyTextFormatArg(const class FString& ArgName, class FText& ReplacementText);
	void SetBodyText(class FText& NewText, bool bClearFormatArgs);
	void OnChoiceClicked(class UGbxListItem* ClickedItem);
	void Dismiss();
};

// 0x8 (0x2F0 - 0x2E8)
// Class GbxUI.GbxDialogBoxChoiceWidget
class UGbxDialogBoxChoiceWidget : public UGbxListItem
{
public:
	class FName                                  ChoiceNameId;                                      // 0x2E8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxDialogBoxChoiceWidget* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxUI.GbxDragDropContainerInterface
class IGbxDragDropContainerInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGbxDragDropContainerInterface* GetDefaultObj();

};

// 0x190 (0x1C0 - 0x30)
// Class GbxUI.GbxFocusableWidgetStyleData
class UGbxFocusableWidgetStyleData : public UGbxDataAsset
{
public:
	TArray<struct FGbxFocusableWidgetItemStyle>  Styles;                                            // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGbxFocusableWidgetItemStyle          DefaultFocusedStyle;                               // 0x40(0xC0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGbxFocusableWidgetItemStyle          DefaultNotFocusedStyle;                            // 0x100(0xC0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxFocusableWidgetStyleData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxUI.GbxFocusableWidget
class IGbxFocusableWidget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGbxFocusableWidget* GetDefaultObj();

	void SetFocusableWidgetEnabled(bool bEnabled);
	bool IsFocusableWidgetFocused();
	bool IsFocusableWidgetEnabled();
	enum class EGbxFocusableWidgetState GetFocusableWidgetState();
};

// 0x8 (0x2C0 - 0x2B8)
// Class GbxUI.GbxFullScreenMovie
class UGbxFullScreenMovie : public UGbxUserWidget
{
public:
	class UMediaPlayer*                          CurrentPlayer;                                     // 0x2B8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxFullScreenMovie* GetDefaultObj();

	void OnMovieFinishedPlaying();
};

// 0x80 (0x140 - 0xC0)
// Class GbxUI.GbxGFxContextualMenuData
class UGbxGFxContextualMenuData : public UGbxGFxMenuData
{
public:
	struct FContextualMenuInfo                   ContextualMenuInfo;                                // 0xC0(0x80)(Transient, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxGFxContextualMenuData* GetDefaultObj();

};

// 0xD8 (0x740 - 0x668)
// Class GbxUI.GbxGFxContextualMenu
class UGbxGFxContextualMenu : public UGbxGFxMenu
{
public:
	TArray<struct FGbxGFxContextualMenuLocTableData> LocTable;                                          // 0x668(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UGFxObject*                            ContextualMenu;                                    // 0x678(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxGFxGridScrollingList*              ContentPanel;                                      // 0x680(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxTextField*                         ToolTipsTextField;                                 // 0x688(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D56[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  RemoveFriendText;                                  // 0x6B0(0x18)(BlueprintReadOnly, Config, NativeAccessSpecifierPrivate)
	class FText                                  AddShiftFriendText;                                // 0x6C8(0x18)(BlueprintReadOnly, Config, NativeAccessSpecifierPrivate)
	class FText                                  RemoveShiftFriendText;                             // 0x6E0(0x18)(BlueprintReadOnly, Config, NativeAccessSpecifierPrivate)
	class FText                                  BlockShiftUserText;                                // 0x6F8(0x18)(BlueprintReadOnly, Config, NativeAccessSpecifierPrivate)
	class FText                                  UnblockShiftUserText;                              // 0x710(0x18)(BlueprintReadOnly, Config, NativeAccessSpecifierPrivate)
	class FText                                  ReportShiftPlayerText;                             // 0x728(0x18)(BlueprintReadOnly, Config, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGbxGFxContextualMenu* GetDefaultObj();

	void OnSelectionChanged(class UGbxGFxListCell* Item);
	void OnContextualMenuItemClicked(class UGbxGFxButton* PressedButton, struct FGbxMenuInputEvent& InputInfo);
};

// 0x0 (0x28 - 0x28)
// Class GbxUI.GbxGFxContextualMenuHelpers
class UGbxGFxContextualMenuHelpers : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGbxGFxContextualMenuHelpers* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class GbxUI.GbxGFxDragDropManager
class UGbxGFxDragDropManager : public UObject
{
public:
	uint8                                        Pad_D95[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxGFxDragDropManager* GetDefaultObj();

	void OnDropButtonUnhovered(class UGbxGFxButton* UnhoveredButton, struct FGbxMenuInputEvent& InputInfo);
	void OnDropButtonHovered(class UGbxGFxButton* HoveredButton, struct FGbxMenuInputEvent& InputInfo);
};

// 0x80 (0x1F0 - 0x170)
// Class GbxUI.GbxGFxDropDownList
class UGbxGFxDropDownList : public UGbxGFxObject
{
public:
	class UGbxTextField*                         CurrentSelectionText;                              // 0x170(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxGFxSlider*                         ListScrollBar;                                     // 0x178(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxGFxButton*                         DropDownButton;                                    // 0x180(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxGFxButton*                         TopButton;                                         // 0x188(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxGFxObject*                         DropDownListContainer;                             // 0x190(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxGFxComboBoxScrollingList*          DropDownList;                                      // 0x198(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DD0[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          EntriesList;                                       // 0x1A8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	class FText                                  CurrentlySelectedEntry;                            // 0x1B8(0x18)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_DD3[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxGFxDropDownList* GetDefaultObj();

	void OnEntryClicked(class UGbxGFxButton* BUTTON, struct FGbxMenuInputEvent& InputInfo);
	void OnDropDownButtonClicked(class UGbxGFxButton* BUTTON, struct FGbxMenuInputEvent& InputInfo);
};

// 0x10 (0x330 - 0x320)
// Class GbxUI.GbxGFxComboBoxScrollingList
class UGbxGFxComboBoxScrollingList : public UGbxGFxGridScrollingList
{
public:
	uint8                                        Pad_DE3[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxGFxComboBoxScrollingList* GetDefaultObj();

};

// 0x118 (0x420 - 0x308)
// Class GbxUI.GbxGFxEditableTextField
class UGbxGFxEditableTextField : public UGbxGFxListCell
{
public:
	uint8                                        Pad_DF9[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bConfirmOnFocusOut;                                // 0x310(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DFB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                EditText;                                          // 0x318(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bMultiline;                                        // 0x328(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EGFxVirtualKeyboardType           KeyboardType;                                      // 0x329(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bLoseFocusOnConfirm;                               // 0x32A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E09[0xBD];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  OnTextSubmittedAudioEventName;                     // 0x3E8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  OnTextEditAbortedAudioEventName;                   // 0x3F0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  OnTextInputAudioEventName;                         // 0x3F8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E13[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxGFxEditableTextField* GetDefaultObj();

};

// 0x20 (0x340 - 0x320)
// Class GbxUI.GbxGFxHintBarContainer
class UGbxGFxHintBarContainer : public UGbxGFxGridScrollingList
{
public:
	uint8                                        Pad_E26[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UGbxHintBar>            HintBarOwningBar;                                  // 0x328(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AGbxPlayerController>   HintBarOwnerPC;                                    // 0x330(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E2C[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxGFxHintBarContainer* GetDefaultObj();

};

// 0xC8 (0x3D0 - 0x308)
// Class GbxUI.GbxGFxHintWidget
class UGbxGFxHintWidget : public UGbxGFxListCell
{
public:
	uint8                                        Pad_E89[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UGbxHintBar>            HintBarOwnerBar;                                   // 0x310(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AGbxPlayerController>   HintBarOwnerPC;                                    // 0x318(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGbxHintInfo                          HintBarHintInfo;                                   // 0x320(0x40)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_E90[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxTextField*                         HintText;                                          // 0x378(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxGFxObject*                         HoldToPressBar;                                    // 0x380(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxGFxProgressBar*                    HoldToPressGamepad;                                // 0x388(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxGFxProgressBar*                    HoldToPressKeyboard;                               // 0x390(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxGFxProgressBar*                    HoldToPressKeyboardWide;                           // 0x398(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxGFxProgressBar*                    HoldToPressKeyboardXWide;                          // 0x3A0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxGFxObject*                         HintCaret;                                         // 0x3A8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasInitialHintTextWidth;                          // 0x3B0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_EA2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InitialHintTextWidth;                              // 0x3B4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EHoldToPressGlyphType             HoldToPressType;                                   // 0x3B8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_EA5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ManualPressToHoldProgress;                         // 0x3BC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasBroadcastPressToHoldEvent;                     // 0x3C0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsHintVisible;                                    // 0x3C1(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsAvailable;                                      // 0x3C2(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInputNeedsResetBeforeShowingProgress;             // 0x3C3(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ExternalHintHeldProgress;                          // 0x3C4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_EB0[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxGFxHintWidget* GetDefaultObj();

	void OnThisHintClicked(class UGbxGFxButton* BUTTON, struct FGbxMenuInputEvent& InputInfo);
};

// 0x38 (0x350 - 0x318)
// Class GbxUI.GbxGFxListItemComboBox
class UGbxGFxListItemComboBox : public UGbxGFxListCellWithData
{
public:
	class UGbxGFxDropDownList*                   DropDownListItem;                                  // 0x318(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_EC4[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxGFxListItemComboBox* GetDefaultObj();

	void OnSelectionUpdated(class UGbxGFxListCell* Item);
	void OnOwningListSelectionChanged(class UGbxGFxListCell* Item);
	void OnDropDownButtonClicked();
};

// 0x88 (0x3A0 - 0x318)
// Class GbxUI.GbxGFxListItemControls
class UGbxGFxListItemControls : public UGbxGFxListCellWithData
{
public:
	uint8                                        Pad_ECF[0x48];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxTextField*                         TitleItem;                                         // 0x360(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxGFxObject*                         BadBindingIcon;                                    // 0x368(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxGFxObject*                         RebindButton;                                      // 0x370(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxGFxObject*                         LinkedRebindButton;                                // 0x378(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_ED3[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxGFxListItemControls* GetDefaultObj();

};

// 0x70 (0x98 - 0x28)
// Class GbxUI.GbxGFxMediaPlayer
class UGbxGFxMediaPlayer : public UObject
{
public:
	UMulticastDelegateProperty_                  OnMovieStartedPlaying;                             // 0x28(0x10)(ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMovieStoppedPlaying;                             // 0x38(0x10)(ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic)
	struct FGbxGFxMediaPlayerConfig              PlayerConfig;                                      // 0x48(0x30)(Transient, NativeAccessSpecifierPrivate)
	struct FGbxGFxMaterialRenderer               MaterialRenderer;                                  // 0x78(0x18)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
	class UMediaPlayer*                          MediaPlayer;                                       // 0x90(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGbxGFxMediaPlayer* GetDefaultObj();

	void OnMovieTracksChanged();
	void OnMovieSeekCompleted();
	void OnMoviePlaybackSuspended();
	void OnMoviePlaybackResumed();
	void OnMovieMediaOpenFailed(const class FString& FailedUrl);
	void OnMovieMediaOpened(const class FString& OpenedUrl);
	void OnMovieMediaClosed();
	void OnMovieEndReached();
	void GbxGFxMediaPlayerEvent__DelegateSignature();
};

// 0x28 (0x330 - 0x308)
// Class GbxUI.GbxGFxMenuSwitcherNavCell
class UGbxGFxMenuSwitcherNavCell : public UGbxGFxListCell
{
public:
	uint8                                        Pad_F4E[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bOuterFocusedState;                                // 0x328(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F4F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxGFxMenuSwitcherNavCell* GetDefaultObj();

};

// 0x90 (0x200 - 0x170)
// Class GbxUI.GbxGFxMenuSwitcherNavWidget
class UGbxGFxMenuSwitcherNavWidget : public UGbxGFxObject
{
public:
	UDelegateProperty_                           OnNavTabClickedDelegate;                           // 0x170(0x10)(ZeroConstructor, Transient, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	class UGbxGFxHintWidget*                     PrevTabHintClip;                                   // 0x180(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxGFxHintWidget*                     NextTabHintClip;                                   // 0x188(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGbxGFxGridScrollingList*              NavListClip;                                       // 0x190(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F78[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EGbxGFxMenuSwitchNavWidgetType    NavType;                                           // 0x1C8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F7B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGbxGFxMenuSwitcherSubmenuInfo> NavListSubmenuDatas;                               // 0x1D0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<struct FGbxGFxMenuSwitcherNavWidgetCustomItem> NavListItemDatas;                                  // 0x1E0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F7D[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxGFxMenuSwitcherNavWidget* GetDefaultObj();

	void OnTabClicked(class UGbxGFxButton* BUTTON, struct FGbxMenuInputEvent& InputInfo);
};

// 0x8 (0x178 - 0x170)
// Class GbxUI.GbxGFxSprite
class UGbxGFxSprite : public UGbxGFxObject
{
public:
	class UGbxGFxObject*                         Graphics;                                          // 0x170(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGbxGFxSprite* GetDefaultObj();

};

// 0x8 (0x180 - 0x178)
// Class GbxUI.GbxGFxMouseBlocker
class UGbxGFxMouseBlocker : public UGbxGFxSprite
{
public:
	bool                                         bIsBlocking;                                       // 0x178(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FA1[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxGFxMouseBlocker* GetDefaultObj();

};

// 0xE0 (0x250 - 0x170)
// Class GbxUI.GbxGFxMouseCapturePanel
class UGbxGFxMouseCapturePanel : public UGbxGFxObject
{
public:
	uint8                                        Pad_FAB[0xE0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxGFxMouseCapturePanel* GetDefaultObj();

};

// 0xA0 (0x3C0 - 0x320)
// Class GbxUI.GbxGFxPooledGridList
class UGbxGFxPooledGridList : public UGbxGFxGridScrollingList
{
public:
	UDelegateProperty_                           CellChangedDelegate;                               // 0x320(0x10)(ZeroConstructor, Transient, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           CellFocusedDelegate;                               // 0x330(0x10)(ZeroConstructor, Transient, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           CellClickedDelegate;                               // 0x340(0x10)(ZeroConstructor, Transient, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxGFxPooledGridListConfig           PooledConfig;                                      // 0x350(0x30)(Edit, Protected, NativeAccessSpecifierProtected)
	float                                        HelperDataDirDim;                                  // 0x380(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        HelperDataItemsInDir;                              // 0x384(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        HelperDataItemsPerDir;                             // 0x388(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        HelperDataFirstItemIndex;                          // 0x38C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        HelperDataNumVisibleItems;                         // 0x390(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HelperDataScrollOffset;                            // 0x394(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FGbxGFxPooledGridPoolInfo>     MasterCellPool;                                    // 0x398(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_FD6[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxGFxPooledGridList* GetDefaultObj();

};

// 0x0 (0x320 - 0x320)
// Class GbxUI.GbxGFxRadioButtonList
class UGbxGFxRadioButtonList : public UGbxGFxGridScrollingList
{
public:

	static class UClass* StaticClass();
	static class UGbxGFxRadioButtonList* GetDefaultObj();

};

// 0x28 (0x340 - 0x318)
// Class GbxUI.GbxGFxRechargeableProgressBar
class UGbxGFxRechargeableProgressBar : public UGbxGFxProgressBar
{
public:
	uint8                                        Pad_FF9[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxGFxRechargeableProgressBar* GetDefaultObj();

};

// 0xC8 (0x390 - 0x2C8)
// Class GbxUI.GbxGFxSlider
class UGbxGFxSlider : public UGbxGFxButton
{
public:
	struct FGbxGFxSliderAcceleration             SliderAcceleration;                                // 0x2C8(0x10)(Config, NoDestructor, NativeAccessSpecifierPublic)
	class UGbxGFxButton*                         UpOrLeftButton;                                    // 0x2D8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxGFxButton*                         DownOrRightButton;                                 // 0x2E0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxGFxButton*                         SliderThumb;                                       // 0x2E8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxGFxButton*                         SliderTrack;                                       // 0x2F0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxGFxObject*                         SliderTrackButton;                                 // 0x2F8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxGFxObject*                         MaskFill;                                          // 0x300(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxGFxObject*                         SliderDefaultThumb;                                // 0x308(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1068[0x80];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxGFxSlider* GetDefaultObj();

	void GbxGFxSliderUpdateEvent__DelegateSignature(float SliderPercent);
	void EndSlide(class UGbxGFxButton* BUTTON, struct FGbxMenuInputEvent& InputInfo);
	void BeginRightSlide(class UGbxGFxButton* BUTTON, struct FGbxMenuInputEvent& InputInfo);
	void BeginLeftSlide(class UGbxGFxButton* BUTTON, struct FGbxMenuInputEvent& InputInfo);
};

// 0xA0 (0x1E8 - 0x148)
// Class GbxUI.GbxGridListWidget
class UGbxGridListWidget : public UGridPanel
{
public:
	uint8                                        Pad_1083[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SelectedColumn;                                    // 0x160(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SelectedRow;                                       // 0x164(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SelectedIndexWhenFocusWasLost;                     // 0x168(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UGbxUmgMenu>            MenuThatOwnsFocus;                                 // 0x16C(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GridColumns;                                       // 0x174(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GridRows;                                          // 0x178(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxGridWidgetFill                GridFill;                                          // 0x17C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_108A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           SelectionChangedDelegate;                          // 0x180(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           ItemClickedDelegate;                               // 0x190(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	enum class EGbxListWrapMode                  RowWrapMode;                                       // 0x1A0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxListWrapMode                  ColumnWrapMode;                                    // 0x1A1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxFocusableWidgetMouseBehavior  DefaultItemSelectionBehavior;                      // 0x1A2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1091[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxListItemFactory*                   ListItemFactory;                                   // 0x1A8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxListItem>              DefaultListItemClass;                              // 0x1B0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxListFocusChangedAction        FocusChangeAction;                                 // 0x1B8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRegisterAsFocusableWidget;                        // 0x1B9(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1097[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  FocusableWidgetNavUp;                              // 0x1C0(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FocusableWidgetNavDown;                            // 0x1C8(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FocusableWidgetNavLeft;                            // 0x1D0(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FocusableWidgetNavRight;                           // 0x1D8(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFocusOnMenuCreation;                              // 0x1E0(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10A1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxGridListWidget* GetDefaultObj();

};

// 0x0 (0x128 - 0x128)
// Class GbxUI.GbxGuidePanel
class UGbxGuidePanel : public UCanvasPanel
{
public:

	static class UClass* StaticClass();
	static class UGbxGuidePanel* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxUI.GbxHintBarWidgetContainer
class IGbxHintBarWidgetContainer : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGbxHintBarWidgetContainer* GetDefaultObj();

	void HintBarSetVisible(bool bVisible);
	void HintBarInitOwnerInfo(class UGbxHintBar* HintBarOwner, class AGbxPlayerController* PlayerControllerContext);
	void HintBarClearAllHints();
	void HintBarAppendHint(struct FGbxHintInfo& HintInfo);
};

// 0x80 (0xA8 - 0x28)
// Class GbxUI.GbxHintBar
class UGbxHintBar : public UObject
{
public:
	class UObject*                               Container;                                         // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1111[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGbxHintBarWidgetContainer> ContainerInterface;                                // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TScriptInterface<class IGbxMenu>             MenuOwner;                                         // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FGbxHintInfo>                  HintInfos;                                         // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1118[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGbxHintWidgetMapItem>         StagePlacedHints;                                  // 0x80(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1119[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bAreHintsVisible;                                  // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInputBlocked;                                   // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideOnOwnerMenuDeactivate;                        // 0xA2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSendInputActionEvenIfOwnerIsDeactivated;          // 0xA3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_111D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxHintBar* GetDefaultObj();

	void OnHintClicked(class FName& InputAction, bool bHeld);
};

// 0x0 (0x28 - 0x28)
// Class GbxUI.GbxHintWidget
class IGbxHintWidget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGbxHintWidget* GetDefaultObj();

	void HintWidgetSetVisible(bool bVisible);
	void HintWidgetSetInfo(struct FGbxHintInfo& HintInfo);
	void HintWidgetInitOwnerInfo(class UGbxHintBar* HintBarOwner, class AGbxPlayerController* PlayerControllerContext);
};

// 0xA8 (0xD8 - 0x30)
// Class GbxUI.GbxHUDData
class UGbxHUDData : public UGbxDataAsset
{
public:
	TSubclassOf<class UGbxGFxHUDContainer>       ContainerClass;                                    // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGbxGFxHUDWidgetInfo>          Widgets;                                           // 0x38(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGbxHUDLayoutData                     StandardLayout;                                    // 0x48(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxHUDLayoutData                     TwoPlayerHorizontalLayout;                         // 0x58(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxHUDLayoutData                     TwoPlayerVerticalLayout;                           // 0x68(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxHUDLayoutData                     FourPlayerLayout;                                  // 0x78(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxHUDLayoutData                     StandardLayoutGearUpMode;                          // 0x88(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxHUDLayoutData                     TwoPlayerHorizontalLayoutGearUpMode;               // 0x98(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxHUDLayoutData                     TwoPlayerVerticalLayoutGearUpMode;                 // 0xA8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxHUDLayoutData                     FourPlayerLayoutGearUpMode;                        // 0xB8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UGbxGFxHUDFeedbackData*                FeedbackData;                                      // 0xC8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxHUDStateData*                      StartState;                                        // 0xD0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxHUDData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxUI.HUDDataProviderInterface
class IHUDDataProviderInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IHUDDataProviderInterface* GetDefaultObj();

};

// 0x10 (0x98 - 0x88)
// Class GbxUI.GbxGFxHUDFeedbackData
class UGbxGFxHUDFeedbackData : public UGbxHUDFeedbackData
{
public:
	TArray<TSoftClassPtr<class UGbxGFxHUDWidget>> ValidWidgetTypes;                                  // 0x88(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxGFxHUDFeedbackData* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class GbxUI.GbxHUDStateData
class UGbxHUDStateData : public UGbxDataAsset
{
public:
	class FName                                  StateName;                                         // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxHUDStateListType              ListType;                                          // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11AB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftClassPtr<class UGbxGFxHUDWidget>> ValidWidgetTypes;                                  // 0x40(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         StayOnTopOfStack;                                  // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11AE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxHUDStateData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxUI.GbxList
class IGbxList : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGbxList* GetDefaultObj();

	void TryToAcquireMenuFocus(bool bFromMouse);
	void SetSelectionChangedDelegate(UDelegateProperty_ InSelectionChangedDelegate);
	void SetSelectedItem(class UGbxListItem* Item, bool bScrollIntoView, bool bAnimateScroll);
	void SetSelectedIndex(int32 NewSelection, bool bScrollIntoView, bool bAnimateScroll);
	void SetItemClickedDelegate(UDelegateProperty_ InItemClickedDelegate);
	void RemoveListItem(class UGbxListItem* Item);
	void RemoveAllListItems();
	void OnItemClicked(class UGbxListItem* Item);
	bool MoveSelectionUp();
	bool MoveSelectionRight();
	bool MoveSelectionLeft();
	bool MoveSelectionDown();
	bool IsListFocused();
	bool IsListEnabled();
	void InsertListItem(class UGbxListItem* Item);
	class UGbxListItem* GetSelectedItem();
	int32 GetSelectedIndex();
	int32 GetNumItemsInList();
	class UGbxListItemFactory* GetListItemFactory();
	class UGbxListItem* GetItemAtIndex(int32 Index);
	TSubclassOf<class UGbxListItem> GetDefaultItemClass();
};

// 0x8 (0x2F0 - 0x2E8)
// Class GbxUI.GbxListItemBoolean
class UGbxListItemBoolean : public UGbxListItem
{
public:
	class UCheckBox*                             ValueCheckBox;                                     // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxListItemBoolean* GetDefaultObj();

	void SetChecked(bool bChecked);
	bool IsChecked();
	void HandleFocusableWidgetPressed(struct FGbxMenuInputEvent& InputInfo);
};

// 0x18 (0x300 - 0x2E8)
// Class GbxUI.GbxListItemComboBox
class UGbxListItemComboBox : public UGbxListItem
{
public:
	class UComboBoxString*                       ValueComboBox;                                     // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnComboBoxSelectionChanged;                        // 0x2F0(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxListItemComboBox* GetDefaultObj();

	void SetSelectedOptionIndex(int32 Index);
	void SelectPreviousOption();
	void SelectNextOption();
	void OnValueComboBoxChanged(const class FString& SelectedItem, enum class ESelectInfo SelectionType);
	void ListItemComboBoxSelectionChangedDelegate__DelegateSignature(int32 NewSelectedIndex);
	void InitializeComboBox(TArray<class FText>& Items, int32 InitialValue);
	int32 GetSelectedOptionIndex();
};

// 0x28 (0x58 - 0x30)
// Class GbxUI.GbxListItemFactory
class UGbxListItemFactory : public UDataAsset
{
public:
	TSubclassOf<class UGbxListItem>              DefaultListItem;                                   // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxListItemText>          BasicTextListItem;                                 // 0x38(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxListItemBoolean>       BooleanListItem;                                   // 0x40(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxListItemNumber>        NumberListItem;                                    // 0x48(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxListItemComboBox>      ComboBoxListItem;                                  // 0x50(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxListItemFactory* GetDefaultObj();

	class UGbxListItemText* CreateTextItem(class APlayerController* Owner, TScriptInterface<class IGbxList> Parent, class FText LabelText, UDelegateProperty_ ClickedDelegate, UDelegateProperty_ SelectedDelegate);
	class UGbxListItemNumber* CreateNumberItem(class APlayerController* Owner, TScriptInterface<class IGbxList> Parent, class FText LabelText, float InitialValue, float SliderMin, float SliderMax, float SliderStep, UDelegateProperty_ ChangedDelegate, UDelegateProperty_ SelectedDelegate);
	class UGbxListItem* CreateItemWithDelegates(class APlayerController* Owner, TScriptInterface<class IGbxList> Parent, TSubclassOf<class UGbxListItem> ItemClass, UDelegateProperty_ ClickedDelegate, UDelegateProperty_ SelectedDelegate);
	class UGbxListItem* CreateItem(class APlayerController* Owner, TScriptInterface<class IGbxList> Parent, TSubclassOf<class UGbxListItem> ItemClass);
	class UGbxListItemComboBox* CreateComboBoxItem(class APlayerController* Owner, TScriptInterface<class IGbxList> Parent, class FText LabelText, TArray<class FText>& Items, int32 InitialIndex, UDelegateProperty_ ChangedDelegate, UDelegateProperty_ SelectedDelegate);
	class UGbxListItemBoolean* CreateBooleanItem(class APlayerController* Owner, TScriptInterface<class IGbxList> Parent, class FText LabelText, bool InitialValue, UDelegateProperty_ ChangedDelegate, UDelegateProperty_ SelectedDelegate);
};

// 0x30 (0x318 - 0x2E8)
// Class GbxUI.GbxListItemNumber
class UGbxListItemNumber : public UGbxListItem
{
public:
	class USlider*                               ValueSlider;                                       // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F1[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxListItemNumber* GetDefaultObj();

	void OnSliderValueChanged(float NewPosition);
	void IncrementSlider();
	float GetCurrentValue();
	void DecrementSlider();
};

// 0x0 (0x28 - 0x28)
// Class GbxUI.GbxMenu
class IGbxMenu : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGbxMenu* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class GbxUI.GbxMenuInputSettings
class UGbxMenuInputSettings : public UObject
{
public:
	struct FGbxMenuKeyRepeatInfo                 KeyRepeatConfig;                                   // 0x28(0x18)(Edit, Transient, Config, NoDestructor, NativeAccessSpecifierPublic)
	float                                        AxisAsButtonThreshold;                             // 0x40(0x4)(Edit, ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AxisThreshold;                                     // 0x44(0x4)(Edit, ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGbxMenuInputAction>           ActionMappings;                                    // 0x48(0x10)(Edit, ZeroConstructor, Transient, Config, NativeAccessSpecifierPublic)
	TArray<struct FGbxMenuInputAxisAction>       AxisMappings;                                      // 0x58(0x10)(Edit, ZeroConstructor, Transient, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxMenuInputSettings* GetDefaultObj();

};

// 0xC8 (0xF0 - 0x28)
// Class GbxUI.GbxMenuInput
class UGbxMenuInput : public UObject
{
public:
	UDelegateProperty_                           UnpairedInputHandlerDelegate;                      // 0x28(0x10)(ZeroConstructor, Transient, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_140E[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bShowDebugKeyStates;                               // 0x48(0x1)(ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_140F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FramesToIgnoreMouseMoves;                          // 0x4C(0x4)(ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TScriptInterface<class IGbxMenuInputListener>> InputListeners;                                    // 0x50(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FGbxMenuKeyRepeatInfo                 KeyRepeatConfig;                                   // 0x60(0x18)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1410[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AxisAsButtonThreshold;                             // 0x98(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AxisThreshold;                                     // 0x9C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGbxMenuInputAction>           ActionMappings;                                    // 0xA0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FGbxMenuInputAxisAction>       AxisMappings;                                      // 0xB0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FGbxMenuInputRawMousePos>      MousePoses;                                        // 0xC0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_1415[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxMenuInput* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxUI.GbxMenuInputListener
class IGbxMenuInputListener : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGbxMenuInputListener* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class GbxUI.GbxMenuStackMenuInfo
class UGbxMenuStackMenuInfo : public UBaseMenuStackMenuInfo
{
public:
	TScriptInterface<class IGbxMenu>             MenuObject;                                        // 0x28(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UGbxMenuData*                          MenuData;                                          // 0x38(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxMenuStackMenuInfo* GetDefaultObj();

};

// 0x160 (0x188 - 0x28)
// Class GbxUI.GbxMenuStack
class UGbxMenuStack : public UObject
{
public:
	uint8                                        Pad_14CE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class AGbxPlayerController>   PCOwner;                                           // 0x30(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UGbxMenuInput>          MenuInput;                                         // 0x38(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UGbxMenuStackMenuInfo*>         MenuStack;                                         // 0x40(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<class UGbxMenuStackMenuInfo*>         MenuDeleteList;                                    // 0x50(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FGbxMenuInputEvent>            QueuedInputActions;                                // 0x60(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FGbxMenuInputEvent>            UnpairedInputCache;                                // 0x70(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FGbxMenuAxisInputEvent>        QueuedAxisInputActions;                            // 0x80(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<class UGbxMenuStackMenuInfo*>         PopupMenus;                                        // 0x90(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	int32                                        PriorityBase;                                      // 0xA0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PriorityDelta;                                     // 0xA4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PopupMenuPriorityBase;                             // 0xA8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStackHasChanged;                                  // 0xAC(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTicking;                                        // 0xAD(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDoingMenuInit;                                  // 0xAE(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDoingMenuDeinit;                                // 0xAF(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDoingMenuDeactivate;                            // 0xB0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14E8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AxisAsButtonThreshold;                             // 0xB4(0x4)(ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxMenuInputDevice               CurrentInputDevice;                                // 0xB8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLastInputFromMouse;                               // 0xB9(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14EC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BlockAllRawInput;                                  // 0xBC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsProcessingInput;                                // 0xC0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bProcessingInputCancelled;                         // 0xC1(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStackHidden;                                      // 0xC2(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14EE[0x65];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnPrePushMenuDelegate;                             // 0x128(0x10)(ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMenuActivatedDelegate;                           // 0x138(0x10)(ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnStackEmptied;                                    // 0x148(0x10)(ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic)
	TArray<class UGbxMenuData*>                  PassiveMenuLoadQueue;                              // 0x158(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UGbxMenuStackMenuInfo*                 PassiveLoadingMenu;                                // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14F1[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxGameInstance*                      CachedGameInstance;                                // 0x180(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxMenuStack* GetDefaultObj();

	void Tick(float DeltaTime);
	class UObject* SwitchTo(class UGbxMenuData* MenuData);
	void SetBlockingMode(bool bShouldBlock);
	void SetBlockAllRawInput(bool bShouldBlock);
	class UObject* Push(class UGbxMenuData* MenuData);
	class UObject* PopToSwitchTo(class UObject* Menu, class UGbxMenuData* MenuData);
	void PopTo(class UObject* Menu);
	void Pop();
	int32 Num();
	void HandleRawInput(const struct FKey& Key, enum class EInputEvent EVENTTYPE, int32 ControllerId);
	class UObject* GetTopMenu();
	class UObject* GetMenuAtIndex(int32 Index);
	int32 GetIndexOfMenu(class UObject* Menu);
	enum class EGbxMenuInputDevice GetCurrentInputDevice();
	void Draw();
	void Clear();
};

// 0x28 (0x128 - 0x100)
// Class GbxUI.GbxMeshWidget
class UGbxMeshWidget : public UWidget
{
public:
	class USlateVectorArtData*                   MeshData;                                          // 0x100(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxNumUnits;                                       // 0x108(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_150A[0x1C];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxMeshWidget* GetDefaultObj();

};

// 0x10 (0x138 - 0x128)
// Class GbxUI.GbxNoClipCanvasPanel
class UGbxNoClipCanvasPanel : public UCanvasPanel
{
public:
	struct FVector2D                             ClipZoneAdjustmentMin;                             // 0x128(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ClipZoneAdjustmentMax;                             // 0x130(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxNoClipCanvasPanel* GetDefaultObj();

};

// 0xF0 (0x3A8 - 0x2B8)
// Class GbxUI.GbxProgressBar
class UGbxProgressBar : public UGbxUserWidget
{
public:
	class UTexture2D*                            FillTexture;                                       // 0x2B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowDeltaBar;                                     // 0x2C0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16D0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            DeltaTexture;                                      // 0x2C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            DeltaEffectTexture;                                // 0x2D0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            BackgroundTexture;                                 // 0x2D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxProgressBarFillDirection      FillDirection;                                     // 0x2E0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16D4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Percent;                                           // 0x2E4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Shear;                                             // 0x2E8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxProgressBarInterpolator           DefaultInterpolator;                               // 0x2EC(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_16DD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGbxProgressBarRange>          Ranges;                                            // 0x318(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           OnInterpolationComplete;                           // 0x328(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           OnEnterRange;                                      // 0x338(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	class UImage*                                Fill;                                              // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                DeltaEffect;                                       // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                Background;                                        // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            CurrentValueText;                                  // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            MaxValueText;                                      // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxUserWidget*                        PercentAnimationOwner;                             // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                      PercentAnimation;                                  // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16F3[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxProgressBar* GetDefaultObj();

	void SetShear(float InShear);
	void SetPercent(float InPercent);
	void SetMaxValueText(class FText& Text);
	void SetFillColorAndOpacity(const struct FLinearColor& InColor);
	void SetCurrentValueText(class FText& Text);
	bool PassedPercentThreshold(float Threshold, float OldValue, float CurrentValue, bool bIncreasing, bool bDecreasing);
	bool IsInterpolating();
	void InterpolateToPercentWithInterpolator(float InPercent, struct FGbxProgressBarInterpolator& Interpolator);
	void InterpolateToPercent(float InPercent);
	void HandleShowDeltaEffect(class UWidget* Effect, float OldValue, float CurrentValue);
	void HandlePercentChanged(float OldValue, float CurrentValue, bool bIsInterpolating, struct FGbxProgressBarInterpolator& ActiveInterpolator);
	void HandleEnterPercentRange(class FName& RangeName);
	float GetShear();
	float GetPercent();
	void GbxProgressBarRangeEvent__DelegateSignature(class FName& RangeName);
	void GbxProgressBarEvent__DelegateSignature();
	bool EnteredPercentRange(float RangeMin, float RangeMax, float OldValue, float CurrentValue, bool bIncreasing, bool bDecreasing);
};

// 0x10 (0x158 - 0x148)
// Class GbxUI.GbxRetainerBox
class UGbxRetainerBox : public URetainerBox
{
public:
	UDelegateProperty_                           TransformDelegate;                                 // 0x148(0x10)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxRetainerBox* GetDefaultObj();

};

// 0x20 (0x380 - 0x360)
// Class GbxUI.GbxRichTextBlock
class UGbxRichTextBlock : public URichTextBlock
{
public:
	int16                                        Baseline;                                          // 0x360(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1725[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ShadowOffset;                                      // 0x364(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          ShadowColorAndOpacity;                             // 0x36C(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_172C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxRichTextBlock* GetDefaultObj();

};

// 0x90 (0x8F0 - 0x860)
// Class GbxUI.GbxScrollBoxList
class UGbxScrollBoxList : public UScrollBox
{
public:
	uint8                                        Pad_173D[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SelectedIndex;                                     // 0x878(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SelectedIndexWhenFocusWasLost;                     // 0x87C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UGbxUmgMenu>            MenuThatOwnsFocus;                                 // 0x880(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           SelectionChangedDelegate;                          // 0x888(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           ItemClickedDelegate;                               // 0x898(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	enum class EGbxScrollBoxListWrapMode         WrapMode;                                          // 0x8A8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxFocusableWidgetMouseBehavior  DefaultItemSelectionBehavior;                      // 0x8A9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1744[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxListItemFactory*                   ListItemFactory;                                   // 0x8B0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxListItem>              DefaultListItemClass;                              // 0x8B8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxScrollBoxListFocusChangedAction FocusChangeAction;                                 // 0x8C0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRegisterAsFocusableWidget;                        // 0x8C1(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_174F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  FocusableWidgetNavUp;                              // 0x8C8(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FocusableWidgetNavDown;                            // 0x8D0(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FocusableWidgetNavLeft;                            // 0x8D8(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FocusableWidgetNavRight;                           // 0x8E0(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFocusOnMenuCreation;                              // 0x8E8(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1759[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxScrollBoxList* GetDefaultObj();

};

// 0x58 (0x320 - 0x2C8)
// Class GbxUI.GbxSpinner
class UGbxSpinner : public UGbxGFxButton
{
public:
	uint8                                        Pad_17A2[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxGFxButton*                         LeftButton;                                        // 0x2F0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxGFxButton*                         RightButton;                                       // 0x2F8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxTextField*                         ChoiceText;                                        // 0x300(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A6[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxSpinner* GetDefaultObj();

	void SpinRight(class UGbxGFxButton* PressedButton, struct FGbxMenuInputEvent& InputInfo);
	void SpinnerValueUpdatedEvent__DelegateSignature();
	void SpinLeft(class UGbxGFxButton* PressedButton, struct FGbxMenuInputEvent& InputInfo);
};

// 0x100 (0x270 - 0x170)
// Class GbxUI.GbxTextField
class UGbxTextField : public UGbxGFxObject
{
public:
	uint8                                        Pad_17BF[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxGFxSlider*                         ScrollBar;                                         // 0x180(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17C2[0xE8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxTextField* GetDefaultObj();

	void OnScrollBarPositionUpdated(float SliderPercentage);
};

// 0x178 (0x1A0 - 0x28)
// Class GbxUI.GbxUIAssetBankManager
class UGbxUIAssetBankManager : public UObject
{
public:
	uint8                                        Pad_17D1[0x178];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxUIAssetBankManager* GetDefaultObj();

};

// 0x80 (0xF0 - 0x70)
// Class GbxUI.GbxUIDataCollector_BasicText
class UGbxUIDataCollector_BasicText : public UGbxUIDataCollectorBase
{
public:
	uint8                                        Pad_17DC[0x80];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxUIDataCollector_BasicText* GetDefaultObj();

};

// 0x80 (0xA8 - 0x28)
// Class GbxUI.GbxUIEventDispatcher
class UGbxUIEventDispatcher : public UObject
{
public:
	class UGameInstance*                         GameInst;                                          // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17EB[0x78];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxUIEventDispatcher* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxUI.UIAccessors
class IUIAccessors : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IUIAccessors* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class GbxUI.GbxUIHoldInputTracker
class UGbxUIHoldInputTracker : public UObject
{
public:
	uint8                                        Pad_1801[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UGbxUIInputComponent>   UIInputComp;                                       // 0x40(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1802[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxUIHoldInputTracker* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class GbxUI.GbxUIInputManager
class UGbxUIInputManager : public UObject
{
public:
	class UGameInstance*                         GameInst;                                          // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FGbxUIPlayerInputInfo>         InputInfos;                                        // 0x30(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1813[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftClassPath                        UIInputComponentClassName;                         // 0x48(0x18)(Config, GlobalConfig, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGbxUIInputManager* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class GbxUI.GbxUIKillScaleform
class UGbxUIKillScaleform : public UBlueprintFunctionLibrary
{
public:
	bool                                         bCoreDisabled;                                     // 0x28(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bDisableHUD;                                       // 0x29(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bDisableMenus;                                     // 0x2A(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1831[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxUIKillScaleform* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxUI.GbxUILocalization
class UGbxUILocalization : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGbxUILocalization* GetDefaultObj();

	bool IsInputActionGlyphAvailable(class FName ActionName, class AGbxPlayerController* Pc, enum class EGbxActionToTextType GlyphType);
	class FText InputActionToText(class FName ActionName, class AGbxPlayerController* Pc, enum class EGbxActionToTextType GlyphType);
	class FText InputActionToRichText(class FName ActionName, class AGbxPlayerController* Pc, enum class EGbxActionToTextType GlyphType, const struct FVector2D& GlyphSize);
	struct FSlateBrush InputActionToGlyph(class FName ActionName, class AGbxPlayerController* Pc, enum class EGbxActionToTextType GlyphType);
	class FText InputActionToGFxHTMLText(class FName ActionName, class AGbxPlayerController* Pc, enum class EGbxActionToTextType GlyphType, float GlyphHeight, int32 VSpace);
	class FText FKeyToGFxHTMLText(struct FKey& Key, class AGbxPlayerController* Pc, enum class EGbxActionToTextType GlyphType, float GlyphHeight);
};

// 0x20 (0x50 - 0x30)
// Class GbxUI.GbxInputToGlyphMap
class UGbxInputToGlyphMap : public UGbxDataAsset
{
public:
	TArray<struct FGbxInputToGlyphMapItem>       InputMap;                                          // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FGbxInputToGlyphSpecialActionItem> SpecialInputActionMap;                             // 0x40(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGbxInputToGlyphMap* GetDefaultObj();

};

// 0xA0 (0xC8 - 0x28)
// Class GbxUI.GbxUIPreloader
class UGbxUIPreloader : public UObject
{
public:
	bool                                         bEnabled;                                          // 0x28(0x1)(ZeroConstructor, Config, GlobalConfig, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19E2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPreloadPathDef>               FoldersToPreload;                                  // 0x30(0x10)(ZeroConstructor, Config, GlobalConfig, NoClear, NativeAccessSpecifierPublic)
	TArray<class FString>                        OtherFileTypesToPreload;                           // 0x40(0x10)(ZeroConstructor, Config, GlobalConfig, NoClear, NativeAccessSpecifierPublic)
	uint8                                        Pad_19EA[0x78];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxUIPreloader* GetDefaultObj();

};

// 0x20 (0x2D8 - 0x2B8)
// Class GbxUI.GbxUISpinnerWidget
class UGbxUISpinnerWidget : public UGbxUserWidget
{
public:
	class UCanvasPanel*                          SpinnerDisplayStrip;                               // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        TotalDigitsDisplayed;                              // 0x2C0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A26[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AnimationTime;                                     // 0x2C4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CurrentValue;                                      // 0x2C8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bTransitionUpwards;                                // 0x2C9(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A2D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentDistanceRemaining;                          // 0x2CC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CurrentAnimSpeed;                                  // 0x2D0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        NewValueToGoTo;                                    // 0x2D4(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EGbxSpinnerWidgetGoToMethod       AnimationType;                                     // 0x2D5(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A34[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxUISpinnerWidget* GetDefaultObj();

	float MoveToNumber(uint8 NewNumber, enum class EGbxSpinnerWidgetGoToMethod GoToMethod);
};

// 0x438 (0x460 - 0x28)
// Class GbxUI.GbxUIView
class UGbxUIView : public UObject
{
public:
	uint8                                        Pad_1A54[0x1F8];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxUIViewManager*                     ViewMgr;                                           // 0x220(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameInstance*                         GameInst;                                          // 0x228(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A5A[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxUIViewHandle                      Handle;                                            // 0x248(0x10)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A63[0x1D8];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Context;                                           // 0x430(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     PlayerOwner;                                       // 0x438(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULocalPlayer*                          LocalPlayer;                                       // 0x440(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A65[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxUIView* GetDefaultObj();

};

// 0x298 (0x2C0 - 0x28)
// Class GbxUI.GbxUIViewManager
class UGbxUIViewManager : public UObject
{
public:
	uint8                                        Pad_1A79[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxUIEventDispatcher*                 EventDispatcher;                                   // 0x38(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A80[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UGbxUIView*>                    Views;                                             // 0x58(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A87[0x188];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxUIViewHandle                      Handle;                                            // 0x1F0(0x10)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	class UObject*                               Context;                                           // 0x200(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameInstance*                         GameInst;                                          // 0x208(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A8A[0xB0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxUIViewManager* GetDefaultObj();

};

// 0x28 (0x870 - 0x848)
// Class GbxUI.GbxWidgetComponent
class UGbxWidgetComponent : public UWidgetComponent
{
public:
	class UCurveFloat*                           DistanceScaleCurve;                                // 0x848(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           DistanceAlphaCurve;                                // 0x850(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class Uborder*                               DistanceAlphaBorder;                               // 0x858(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AGbxPlayerController*                  TrackedPlayerController;                           // 0x860(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGbxUserWidget*                        GbxWidget;                                         // 0x868(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGbxWidgetComponent* GetDefaultObj();

	void Setup(TSubclassOf<class UUserWidget>& NewWidgetClass, class AGbxPlayerController* NewTrackedPlayer, class USceneComponent* ParentComponent, enum class EWidgetSpace WidgetSpace, int32 NewLayerZOrder, class FName CollisionProfile);
	void SetDistanceScaleCurve(class UCurveFloat* NewDistanceScaleCurve);
	void SetDistanceAlphaCurve(class UCurveFloat* NewDistanceAlphaCurve);
	void SetDistanceAlphaBorder(class Uborder* NewDistanceAlphaBorder);
};

// 0x68 (0x90 - 0x28)
// Class GbxUI.GbxWidgetFocusManager
class UGbxWidgetFocusManager : public UObject
{
public:
	uint8                                        Pad_1B2B[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               OwnerMenu;                                         // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B2D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               FocusedWidget;                                     // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B2E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGbxFocusableWidgetInfo>       RegisteredWidgets;                                 // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B2F[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxWidgetFocusManager* GetDefaultObj();

};

// 0x48 (0x300 - 0x2B8)
// Class GbxUI.GbxWorldSpaceProxyWidget
class UGbxWorldSpaceProxyWidget : public UGbxUserWidget
{
public:
	float                                        Depth;                                             // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Alignment;                                         // 0x2BC(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B4A[0x3C];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxWorldSpaceProxyWidget* GetDefaultObj();

	struct FVector GetWorldLocation();
};

// 0x30 (0x2E8 - 0x2B8)
// Class GbxUI.InWorldDamageNumber
class UInWorldDamageNumber : public UGbxUserWidget
{
public:
	class UGbxRichTextBlock*                     DisplayField;                                      // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCanvasPanel*                          DisplayPanel;                                      // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDamageAnimationPairing>       DamageAnimationPairings;                           // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class AGbxPlayerController*                  InstigatingPlayer;                                 // 0x2D8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetComponent*                      DamageNumberContainer;                             // 0x2E0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UInWorldDamageNumber* GetDefaultObj();

	void OnWentOffscreen();
	void ImpulseAnimationCompleted(class UUserWidget* AssociatedWidget);
};

// 0x0 (0xB0 - 0xB0)
// Class GbxUI.NexusAssetStoreUIMaterials
class UNexusAssetStoreUIMaterials : public UNexusAssetStore
{
public:

	static class UClass* StaticClass();
	static class UNexusAssetStoreUIMaterials* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class GbxUI.NexusAssetStoreUITextures
class UNexusAssetStoreUITextures : public UNexusAssetStore
{
public:

	static class UClass* StaticClass();
	static class UNexusAssetStoreUITextures* GetDefaultObj();

};

// 0x0 (0x1E8 - 0x1E8)
// Class GbxUI.NexusConfigStoreUIAssetBanks
class UNexusConfigStoreUIAssetBanks : public UNexusConfigStorePath
{
public:

	static class UClass* StaticClass();
	static class UNexusConfigStoreUIAssetBanks* GetDefaultObj();

};

// 0x18 (0x200 - 0x1E8)
// Class GbxUI.NexusConfigStoreUIAudioEvents
class UNexusConfigStoreUIAudioEvents : public UNexusConfigStorePath
{
public:
	TArray<class UWwiseEvent*>                   CollectionAssets;                                  // 0x1E8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B9E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNexusConfigStoreUIAudioEvents* GetDefaultObj();

};

// 0x0 (0x1D8 - 0x1D8)
// Class GbxUI.NexusConfigStoreUIComponents
class UNexusConfigStoreUIComponents : public UNexusConfigStoreFlat
{
public:

	static class UClass* StaticClass();
	static class UNexusConfigStoreUIComponents* GetDefaultObj();

};

// 0x0 (0x1D8 - 0x1D8)
// Class GbxUI.NexusConfigStoreUIGlyphDefs
class UNexusConfigStoreUIGlyphDefs : public UNexusConfigStoreFlat
{
public:

	static class UClass* StaticClass();
	static class UNexusConfigStoreUIGlyphDefs* GetDefaultObj();

};

// 0x0 (0x1D8 - 0x1D8)
// Class GbxUI.NexusConfigStoreUIPages
class UNexusConfigStoreUIPages : public UNexusConfigStoreFlat
{
public:

	static class UClass* StaticClass();
	static class UNexusConfigStoreUIPages* GetDefaultObj();

};

// 0x0 (0x1D8 - 0x1D8)
// Class GbxUI.NexusConfigStoreUIStates
class UNexusConfigStoreUIStates : public UNexusConfigStoreFlat
{
public:

	static class UClass* StaticClass();
	static class UNexusConfigStoreUIStates* GetDefaultObj();

};

// 0x0 (0x1D8 - 0x1D8)
// Class GbxUI.NexusConfigStoreUIViewDefs
class UNexusConfigStoreUIViewDefs : public UNexusConfigStoreFlat
{
public:

	static class UClass* StaticClass();
	static class UNexusConfigStoreUIViewDefs* GetDefaultObj();

};

// 0x50 (0x228 - 0x1D8)
// Class GbxUI.NexusConfigStoreUIWidgetClasses
class UNexusConfigStoreUIWidgetClasses : public UNexusConfigStoreFlat
{
public:
	uint8                                        Pad_1BE9[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNexusConfigStoreUIWidgetClasses* GetDefaultObj();

};

// 0x58 (0x230 - 0x1D8)
// Class GbxUI.NexusConfigStoreUIWidgetDefs
class UNexusConfigStoreUIWidgetDefs : public UNexusConfigStoreFlat
{
public:
	uint8                                        Pad_1BFC[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNexusConfigStoreUIWidgetDefs* GetDefaultObj();

};

}


