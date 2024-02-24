#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x258 - 0x230)
// Class TwUIFramework.TwBaseWidget
class UTwBaseWidget : public UUserWidget
{
public:
	uint8                                        Pad_165[0x12];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bCanEverBeFocused;                                 // 0x242(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_167[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SortPriority;                                      // 0x244(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_168[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UTwBaseView>            ParentView;                                        // 0x24C(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_169[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTwBaseWidget* GetDefaultObj();

	void UnsubscribeFromEvents_BP(class AHUD* HUD);
	void SubscribeToEvents_BP(class AHUD* HUD);
	void OnPostInitProperties();
	void OnMouseLeave_BP(struct FPointerEvent& InMouseEvent);
	void OnMouseEnter_BP(struct FGeometry& InGeometry, struct FPointerEvent& InMouseEvent);
	void OnMouseButtonDown_BP(struct FGeometry& InGeometry, struct FPointerEvent& InMouseEvent);
	class AHUD* GetHUD();
};

// 0x1A0 (0x3F8 - 0x258)
// Class TwUIFramework.BaseSlider
class UBaseSlider : public UTwBaseWidget
{
public:
	FMulticastInlineDelegateProperty_            OnSliderValueChanged;                              // 0x258(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class USlider*                               SliderWidget;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                ThumbImage;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UButton*                               ThumbButton;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSlateBrush                           ThumbImageBrush;                                   // 0x280(0x88)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FLinearColor                          ThumbHoverColor;                                   // 0x308(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          ThumbNormalColor;                                  // 0x318(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ThumbLengthOffset;                                 // 0x328(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ThumbWidth;                                        // 0x32C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DefaultValue;                                      // 0x330(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17B[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bVertical;                                         // 0x34C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CursorMultiplier;                                  // 0x350(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StickDeadZone;                                     // 0x354(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BarThickness;                                      // 0x358(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          SliderBarColor;                                    // 0x35C(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_181[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           SliderBarImageBrush;                               // 0x370(0x88)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UBaseSlider* GetDefaultObj();

	void SetSliderValue(float Perc, bool bSurpressEvent);
	float GetSliderValue();
};

// 0x50 (0x2A8 - 0x258)
// Class TwUIFramework.TwClickableWidget
class UTwClickableWidget : public UTwBaseWidget
{
public:
	FMulticastInlineDelegateProperty_            OnWidgetClicked;                                   // 0x258(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnWidgetFocused;                                   // 0x268(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnWidgetFocusLost;                                 // 0x278(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	class FText                                  FooterText;                                        // 0x288(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	bool                                         bIsToggleable;                                     // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B6[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTwClickableWidget* GetDefaultObj();

	void ToggleSelectedState(bool bForceSetState, bool bNewState);
	void SetLabelText(class FText Label);
	void SetIsToggleable(bool bToggle);
	void SetIconTexture(class UTexture2D* Texture);
	void SetIconSoftTexture(TSoftObjectPtr<class UTexture2D> SoftTexture);
};

// 0x118 (0x3C0 - 0x2A8)
// Class TwUIFramework.TwAnimatedButton
class UTwAnimatedButton : public UTwClickableWidget
{
public:
	FMulticastInlineDelegateProperty_            OnAnimInvIconClicked;                              // 0x2A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	enum class EAnimButtonState                  ButtonState;                                       // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UImage*                                BackImage;                                         // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                MidImage;                                          // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                FrontImage;                                        // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                          TopCanvas;                                         // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                IconImage;                                         // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAnimationOverride;                                // 0x2E8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1DF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class ETweenTarget, struct FAnimTweenGroup> TargetToTweenMap;                                  // 0x2F0(0x50)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	TMap<enum class EAnimButtonState, struct FTweenTargetDataMap> TweenAnimTargetData;                               // 0x340(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	enum class EEasingFunc                       EasingFunc;                                        // 0x390(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            BackImageTexture;                                  // 0x398(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            MidImageTexture;                                   // 0x3A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            FrontImageTexture;                                 // 0x3A8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            IconTexture;                                       // 0x3B0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E6[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTwAnimatedButton* GetDefaultObj();

	void SetSelected(bool bSelected);
	bool IsSelected();
	void AnimateState_BP(enum class EAnimButtonState State);
};

// 0x190 (0x438 - 0x2A8)
// Class TwUIFramework.TwBaseButton
class UTwBaseButton : public UTwClickableWidget
{
public:
	uint8                                        Pad_240[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bSelectedState;                                    // 0x2D8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bForceHighlighted;                                 // 0x2D9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsDisabled;                                       // 0x2DA(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_244[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTwColorTweener*                       BorderTween;                                       // 0x2E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  ButtonLabel;                                       // 0x2E8(0x18)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FLinearColor                          FrameColorDefault;                                 // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          FrameColorHighlight;                               // 0x310(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          BodyColorDefault;                                  // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          BodyColorHighlightAndClicked;                      // 0x330(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          BodyColorClicked;                                  // 0x340(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          BodyColorHighlight;                                // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          DisabledButtonColor;                               // 0x360(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          DefaultButtonColor;                                // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseBodyColorHighlight;                            // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_256[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          TextColorDefault;                                  // 0x384(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          TextColorClicked;                                  // 0x394(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          TextColorHighlight;                                // 0x3A4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseTextColorHighlight;                            // 0x3B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_25A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        ButtonFont;                                        // 0x3B8(0x50)(Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            ButtonTextBlock;                                   // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                          ButtonCanvasPanel;                                 // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                ButtonFrameImage;                                  // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                ButtonBodyImage;                                   // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                         OnHoverAkEvent;                                    // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                         OnClickAkEvent;                                    // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UTwBaseButton* GetDefaultObj();

	void StopBorderPulseTween();
	void StartBorderPulseTween();
	void SetForcedHighlight(bool bForced);
	void SetDisabled(bool bDisabled);
	void OnTweenStep(class UTwTweener* Tweener);
	bool GetSelectedState();
	bool GetDisabled();
	class FText GetButtonLabelText();
	class UImage* GetButtonFrameImage();
};

// 0xB0 (0x308 - 0x258)
// Class TwUIFramework.TwBaseMenu
class UTwBaseMenu : public UTwBaseWidget
{
public:
	uint8                                        Pad_307[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        DefaultPanel;                                      // 0x278(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_30A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTwMenuData>                   MenuData;                                          // 0x280(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UTwBaseMenuPanel*>              MenuPanels;                                        // 0x290(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UTwBaseMenuBarItem*>            MenuBarItems;                                      // 0x2A0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bParalaxEnabled;                                   // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_30E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelWidget*                          MenuBarContainer;                                  // 0x2B8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetSwitcher*                       PanelContainer;                                    // 0x2C0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOpenDefault;                                      // 0x2C8(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_30F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         OnSubBackAkEvent;                                  // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_311[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         OnPanelOpenAkEvent;                                // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseMenuPanel*                      OpenPanel;                                         // 0x2E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTwBaseMenuBarItem*                    OpenPanelBarItem;                                  // 0x2F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_314[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UTwBaseMenuPanel>       PendingPanel;                                      // 0x2FC(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_315[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTwBaseMenu* GetDefaultObj();

	void SetDefaultPanel(uint8 Panel);
	class UTwBaseMenuPanel* OpenMenuPanelByLookup(class FName LookupName);
	class UTwBaseMenuPanel* OpenMenuPanel(int32 Index);
	void OpenMenu();
	void OnMenuBarItemClicked(class UTwBaseMenuBarItem* MenuBarItem);
	void OnInputDeviceChanged(enum class EUserInputDevice Device);
	void MoveMenus(struct FVector2D& MoveVector);
	bool IsOpenDefault();
	void HandleInput(class FText& InputName);
	class UTwBaseMenuPanel* GetPanelForLookup(class FName LookUp);
	class FText GetLabelForLookup(class FName LookUp);
	class UWidget* GetFocusWidgetForNavigation_BP(enum class EUINavigation NavigationDir);
	class UWidget* GetFocusWidgetForNavigation(enum class EUINavigation NavigationDir);
	class UTwBaseMenuPanel* GetCurrentPanel();
	void CloseMenu();
};

// 0x50 (0x180 - 0x130)
// Class TwUIFramework.TwBaseMenuBarHorizontal
class UTwBaseMenuBarHorizontal : public UHorizontalBox
{
public:
	TMap<class UTwBaseMenuBarItem*, class UTwBaseMenuPanel*> MenuItems;                                         // 0x130(0x50)(Edit, ExportObject, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UTwBaseMenuBarHorizontal* GetDefaultObj();

};

// 0x18 (0x270 - 0x258)
// Class TwUIFramework.TwBaseMenuBarItem
class UTwBaseMenuBarItem : public UTwBaseWidget
{
public:
	FMulticastInlineDelegateProperty_            OnMenuBarItemClicked;                              // 0x258(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                    ClickableWidget;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UTwBaseMenuBarItem* GetDefaultObj();

	void SetSelected_BP(bool bIsSelected);
	void OnButtonClicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* ButtonClicked);
};

// 0x40 (0x298 - 0x258)
// Class TwUIFramework.TwBaseMenuPanel
class UTwBaseMenuPanel : public UTwBaseWidget
{
public:
	TArray<class UTwBaseMenuWidgetContainer*>    WidgetContainers;                                  // 0x258(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseMenu*                           ParentMenu;                                        // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  PanelFooterText;                                   // 0x270(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      InAnimation;                                       // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      OutAnimation;                                      // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UTwBaseMenuPanel* GetDefaultObj();

	void OnPanelOpen_BP();
	void OnPanelFinishedClosing(const struct FPanelLifetimeResponder& Responder);
	void OnPanelClosing_BP(const struct FPanelLifetimeResponder& Responder, class UTwBaseMenuPanel* IncomingPanel);
	void MovePanel(const struct FVector2D& MoveVector);
	class UWidget* GetFocusWidgetForNavigation_BP(enum class EUINavigation NavigationDir);
	class UWidget* GetFocusWidgetForNavigation(enum class EUINavigation NavigationDir);
	class UWidget* GetDefaultFocusWidget();
};

// 0x40 (0x298 - 0x258)
// Class TwUIFramework.TwBaseView
class UTwBaseView : public UTwBaseWidget
{
public:
	class UTwViewController*                     ViewController;                                    // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UWidget>                FocusWidget;                                       // 0x260(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  FooterText;                                        // 0x268(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                         bShowFooter;                                       // 0x280(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3EE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         OnViewPoppedAkEvent;                               // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                         OnViewPushedAkEvent;                               // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UTwBaseView* GetDefaultObj();

	void OnViewShowing_BP();
	void OnViewShowing();
	void OnViewLeavingStack_BP(const struct FViewPoppingResponder& Responder);
	void OnViewHiding_BP();
	void OnViewHiding();
	void OnViewEnteringStack_BP();
	void OnViewEnteringStack(class UTwViewController* Controller);
	void OnFinishLeavingStack(const struct FViewPoppingResponder& Responder);
	class UWidget* GetDefaultFocusWidget();
	bool DoesRequireInputUIMode();
};

// 0x10 (0x2A8 - 0x298)
// Class TwUIFramework.TwBaseMenuView
class UTwBaseMenuView : public UTwBaseView
{
public:
	class UTwBaseMenu*                           MenuController;                                    // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                         AudioEventMenuPanelChanged;                        // 0x2A0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UTwBaseMenuView* GetDefaultObj();

	void OnOpenPanelRequest(class FName LookupName);
	void OnMenuPanel_Changed();
	class UTwBaseMenu* GetMenuController();
};

// 0x20 (0x150 - 0x130)
// Class TwUIFramework.TwBaseMenuWidgetContainer
class UTwBaseMenuWidgetContainer : public UCanvasPanel
{
public:
	float                                        ParallaxMoveScale;                                 // 0x130(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             WidgetStartPos;                                    // 0x134(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMargin                               WidgetStartOffsets;                                // 0x13C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_436[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTwBaseMenuWidgetContainer* GetDefaultObj();

};

// 0x8 (0x260 - 0x258)
// Class TwUIFramework.TwBaseModal
class UTwBaseModal : public UTwBaseWidget
{
public:
	class UTwViewController*                     ViewController;                                    // 0x258(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UTwBaseModal* GetDefaultObj();

	void OnModalShowing_BP();
	void OnModalShowing();
	void OnModalLeavingStack_BP();
	void OnModalLeavingStack();
	void OnModalHiding_BP();
	void OnModalHiding();
	void OnModalEnteringStack_BP();
	void OnModalEnteringStack(class UTwViewController* Controller);
	class UWidget* GetDefaultFocusWidget();
};

// 0x68 (0x460 - 0x3F8)
// Class TwUIFramework.TwBaseSlider
class UTwBaseSlider : public UBaseSlider
{
public:
	class UTextBlock*                            Label;                                             // 0x3F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                          FillBar;                                           // 0x400(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                          TextMask;                                          // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            EmptyText;                                         // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            FillText;                                          // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  DefaultLabelText;                                  // 0x420(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	float                                        MinSliderValue;                                    // 0x438(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxSliderValue;                                    // 0x43C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxFractionalDigits;                               // 0x440(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4B7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ValueSuffix;                                       // 0x448(0x18)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UTwBaseSlider* GetDefaultObj();

	void SetLabelText(class FText LabelText);
};

// 0x50 (0x488 - 0x438)
// Class TwUIFramework.TwCheckboxButton
class UTwCheckboxButton : public UTwBaseButton
{
public:
	class FText                                  OptionLabel;                                       // 0x438(0x18)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	class FText                                  ButtonSelectedLabel;                               // 0x450(0x18)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	class FText                                  ButtonUnselectedLabel;                             // 0x468(0x18)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	class UTextBlock*                            OptionLabelTextBlock;                              // 0x480(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UTwCheckboxButton* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class TwUIFramework.TwTweener
class UTwTweener : public UObject
{
public:
	uint8                                        Pad_4DB[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EEasingFunc                       EasingFunc;                                        // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4DC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Duration;                                          // 0x34(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         PingPong;                                          // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4DE[0x2B];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ETweenPlayState                   PlayState;                                         // 0x64(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4DF[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTwTweener* GetDefaultObj();

	void Stop(bool bSkipToEnd);
	void Play();
	void Pause();
};

// 0x30 (0x98 - 0x68)
// Class TwUIFramework.TwColorTweener
class UTwColorTweener : public UTwTweener
{
public:
	struct FLinearColor                          From;                                              // 0x68(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          To;                                                // 0x78(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_50A[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTwColorTweener* GetDefaultObj();

	struct FLinearColor GetCurrentValue();
	class UTwColorTweener* CreateColorTween(const struct FLinearColor& FromValue, const struct FLinearColor& ToValue, float TweenDuration, enum class EEasingFunc Easing, bool TweenPingPong, FDelegateProperty_& OnTweenStep, bool AutoStart);
};

// 0x50 (0x2B0 - 0x260)
// Class TwUIFramework.TwConfirmModal
class UTwConfirmModal : public UTwBaseModal
{
public:
	uint8                                        Pad_512[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnModalSubmitted_BP;                               // 0x270(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UTextBlock*                            TitleLabel;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            Body;                                              // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            DeclineButtonLabel;                                // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            ConfirmButtonLabel;                                // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UButton*                               ConfirmButton;                                     // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UButton*                               DeclineButton;                                     // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UTwConfirmModal* GetDefaultObj();

	void OnModalDecline();
	void OnModalConfirm();
};

// 0x8 (0x268 - 0x260)
// Class TwUIFramework.TwControllerDisconnectedModal
class UTwControllerDisconnectedModal : public UTwBaseModal
{
public:
	class UTwClickableWidget*                    DefaultWidget;                                     // 0x260(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UTwControllerDisconnectedModal* GetDefaultObj();

};

// 0x50 (0x2A8 - 0x258)
// Class TwUIFramework.TwFlipbookImageWidget
class UTwFlipbookImageWidget : public UTwBaseWidget
{
public:
	class UImage*                                ImageWidget;                                       // 0x258(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  FlipbookPlayScalarName;                            // 0x260(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstance*                     MaterialAsset;                                     // 0x268(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              MaterialInstance;                                  // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFlipbookPlayMode                 PlayMode;                                          // 0x278(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_52F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PlaySpeed;                                         // 0x27C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnFlipbookEnded;                                   // 0x280(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnFlipbookReset;                                   // 0x290(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_533[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTwFlipbookImageWidget* GetDefaultObj();

	void SetPlayMode(enum class EFlipbookPlayMode NewPlayMode);
	void Reset();
};

// 0x10 (0x78 - 0x68)
// Class TwUIFramework.TwFloatTweener
class UTwFloatTweener : public UTwTweener
{
public:
	float                                        From;                                              // 0x68(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        To;                                                // 0x6C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_55B[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTwFloatTweener* GetDefaultObj();

	float GetCurrentValue();
	class UTwFloatTweener* CreateFloatTween(float FromValue, float ToValue, float TweenDuration, enum class EEasingFunc Easing, bool TweenPingPong, FDelegateProperty_& OnTweenStep, FDelegateProperty_& OnTweenFinished, class UTwFloatTweener* ReusableTweener, bool AutoStart);
};

// 0x48 (0x358 - 0x310)
// Class TwUIFramework.TwHUD
class ATwHUD : public AHUD
{
public:
	FMulticastInlineDelegateProperty_            OnUserInputDeviceChanged;                          // 0x310(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_59F[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTwViewController*                     ViewController;                                    // 0x330(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UTwViewController>         ViewControllerClass;                               // 0x338(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UTwControllerDisconnectedModal> ControllerDisconnectModalClass;                    // 0x340(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UTwControllerDisconnectedModal> ControllerContinueModalClass;                      // 0x348(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5A4[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ATwHUD* GetDefaultObj();

	void ShowScreenSpaceWidgetForActor(class AActor* Actor);
	void RemoveScreenSpaceWidgetForActor(class AActor* Actor);
	void OnInputDeviceEvent(enum class EUserInputDevice Device);
	void OnControllerDisconnectedAnyPlatform();
	void OnControllerDisconnected(bool bShowGenericAlertInstead);
	enum class EUserInputDevice GetCurrentInputDevice();
};

// 0x28 (0x690 - 0x668)
// Class TwUIFramework.TwInputAwareRichTextBlock
class UTwInputAwareRichTextBlock : public URichTextBlock
{
public:
	uint8                                        Pad_5D8[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ShadowedText;                                      // 0x670(0x18)(Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_5DB[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTwInputAwareRichTextBlock* GetDefaultObj();

	void SetTextAware(class FText& InText);
	void OnInputDeviceChanged(enum class EUserInputDevice Device);
};

// 0x70 (0x2C8 - 0x258)
// Class TwUIFramework.TwInputAwareRichTextBlockWidget
class UTwInputAwareRichTextBlockWidget : public UTwBaseWidget
{
public:
	class FText                                  AssignedText;                                      // 0x258(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  KeybindText;                                       // 0x270(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  GamepadKeybindText;                                // 0x288(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	TArray<class FName>                          ActionStrings;                                     // 0x2A0(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ETextJustify                      Justification;                                     // 0x2B0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_636[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class URichTextBlock*                        RTB;                                               // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_637[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTwInputAwareRichTextBlockWidget* GetDefaultObj();

	void SetTextAware(class FText& InText);
	void SetKeybindText(class FText& InText, bool bGamepad);
	void OnInputDeviceChanged(enum class EUserInputDevice Device);
};

// 0x48 (0x480 - 0x438)
// Class TwUIFramework.TwLambdaButton
class UTwLambdaButton : public UTwBaseButton
{
public:
	uint8                                        Pad_64F[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTwLambdaButton* GetDefaultObj();

	void OnWidgetClickedInternal(const struct FKey& MouseButtonClicked, class UTwClickableWidget* WidgetClicked);
};

// 0x40 (0x270 - 0x230)
// Class TwUIFramework.TwLoadingScreen
class UTwLoadingScreen : public UUserWidget
{
public:
	class UTextBlock*                            MapText;                                           // 0x230(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            TooltipsText;                                      // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                BG;                                                // 0x240(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                Image_3;                                           // 0x248(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                Image_0;                                           // 0x250(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_662[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTwLoadingScreen* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class TwUIFramework.TwLoadingScreenSettings
class UTwLoadingScreenSettings : public UDeveloperSettings
{
public:
	TArray<class FText>                          TooltipEntries;                                    // 0x38(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TooltipCycleTime;                                  // 0x48(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_672[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTwLoadingScreenSettings* GetDefaultObj();

};

// 0x20 (0x88 - 0x68)
// Class TwUIFramework.TwMatFloatScalarTweener
class UTwMatFloatScalarTweener : public UTwTweener
{
public:
	float                                        From;                                              // 0x68(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        To;                                                // 0x6C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6AF[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTwMatFloatScalarTweener* GetDefaultObj();

	float GetCurrentValue();
	class UTwMatFloatScalarTweener* CreateMatFloatScalarTween(class UMaterialInstanceDynamic* Mat, class FName Param, float FromValue, float ToValue, float TweenDuration, enum class EEasingFunc Easing, bool TweenPingPong, FDelegateProperty_& OnTweenStep, bool AutoStart);
};

// 0xC8 (0x360 - 0x298)
// Class TwUIFramework.TwMoviePlayerView
class UTwMoviePlayerView : public UTwBaseView
{
public:
	FMulticastInlineDelegateProperty_            OnMovieFinished;                                   // 0x298(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UMediaPlayer*                          MediaPlayer;                                       // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMediaPlaylist*                        Playlist;                                          // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      FadePrompt;                                        // 0x2B8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                          SkipProgressBar;                                   // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_6D3[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SkipPromptTime;                                    // 0x2F8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_6D4[0x64];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTwMoviePlayerView* GetDefaultObj();

	void OnTracksChanged();
	void OnInteractReleased();
	void OnInteractPressed();
	void OnEndReached();
	void OnAnyButtonPressed();
};

// 0x100 (0x360 - 0x260)
// Class TwUIFramework.TwMultiOptionModal
class UTwMultiOptionModal : public UTwBaseModal
{
public:
	uint8                                        Pad_705[0x40];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextBlock*                            Header;                                            // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            Body;                                              // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        OptionsContainer;                                  // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UTwLambdaButton>           ButtonClass;                                       // 0x2B8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      IntroAnim;                                         // 0x2C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                         DefaultFocusButton;                                // 0x2C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_712[0x90];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTwMultiOptionModal* GetDefaultObj();

	void CreateModalWithOptions_BP(class APlayerController* OwningPlayer, const TArray<class FText>& Options, class FText TitleText, class FText BodyText, FDelegateProperty_ Callback, bool bDismissable, class FText DismissAction);
};

// 0x30 (0x288 - 0x258)
// Class TwUIFramework.TwWidgetQueue
class UTwWidgetQueue : public UTwBaseWidget
{
public:
	TArray<class UTwBaseWidget*>                 WidgetQueue;                                       // 0x258(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                          WidgetContainer;                                   // 0x268(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseWidget*                         CurrentWidget;                                     // 0x270(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSortByPriority;                                   // 0x278(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_731[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PumpQueueDelay;                                    // 0x27C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_733[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTwWidgetQueue* GetDefaultObj();

	void PumpQueue();
	void OnWidgetReadyForDestruction(class UTwBaseWidget* Widget);
};

// 0x88 (0x310 - 0x288)
// Class TwUIFramework.TwMultiWidgetQueue
class UTwMultiWidgetQueue : public UTwWidgetQueue
{
public:
	struct FUserWidgetPool                       CurrentWidgetPool;                                 // 0x288(0x80)(Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                        MaxWidgetCount;                                    // 0x308(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_74A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTwMultiWidgetQueue* GetDefaultObj();

	void OnWidgetQueueDestruction(class UTwBaseWidget* Widget);
};

// 0x50 (0x2A8 - 0x258)
// Class TwUIFramework.TwRadialProgressIcon
class UTwRadialProgressIcon : public UTwBaseWidget
{
public:
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x258(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UImage*                                RadialImage;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    RadMat;                                            // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    RadMatFilled;                                      // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              RadialMatDynamic;                                  // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Progress;                                          // 0x288(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                          DefaultColor;                                      // 0x28C(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DefaultRadius;                                     // 0x29C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bFilled;                                           // 0x2A0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_769[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTwRadialProgressIcon* GetDefaultObj();

	void SetRadius(float NewRadius);
	void SetProgress(float Val);
	void SetColor(const struct FLinearColor& NewColor);
};

// 0x70 (0x2C8 - 0x258)
// Class TwUIFramework.TwRadioWidget
class UTwRadioWidget : public UTwBaseWidget
{
public:
	FMulticastInlineDelegateProperty_            OnRadioOptionChanged;                              // 0x258(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FRadioWidgetData>              Entries;                                           // 0x268(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FRadioWidgetEntry>             Buttons;                                           // 0x278(0x10)(ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class USpacer*>                       Spacers;                                           // 0x288(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            RadioLabelTextBlock;                               // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        ButtonBox;                                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UTwBaseButton>             ButtonClass;                                       // 0x2A8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  RadioLabel;                                        // 0x2B0(0x18)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UTwRadioWidget* GetDefaultObj();

	void OnProcessButtonClick(const struct FKey& MouseButtonClicked, class UTwClickableWidget* ButtonClicked);
};

// 0x8 (0x30 - 0x28)
// Class TwUIFramework.TwRichTextBlockPlatformIconDecorator
class UTwRichTextBlockPlatformIconDecorator : public URichTextBlockDecorator
{
public:
	class UDataTable*                            ImageSet;                                          // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UTwRichTextBlockPlatformIconDecorator* GetDefaultObj();

};

// 0x30 (0x288 - 0x258)
// Class TwUIFramework.TwScreenSpaceConstrainedWidget
class UTwScreenSpaceConstrainedWidget : public UTwBaseWidget
{
public:
	TWeakObjectPtr<class AActor>                 TargetActor;                                       // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        BaseHResolution;                                   // 0x260(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MinHResolution;                                    // 0x264(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               ActorOffset;                                       // 0x268(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7A3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ConstrainRadiusVerticalPerc;                       // 0x278(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7A4[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTwScreenSpaceConstrainedWidget* GetDefaultObj();

	void SetTargetActor(class AActor* Actor);
};

// 0x8 (0x260 - 0x258)
// Class TwUIFramework.TwToastManagerWidget
class UTwToastManagerWidget : public UTwBaseWidget
{
public:
	class UVerticalBox*                          ToastPanel;                                        // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UTwToastManagerWidget* GetDefaultObj();

	class UTwToastWidget* AddNewToast(TSubclassOf<class UTwToastWidget> ToastWidgetClass, const struct FToastData& ToastData);
};

// 0x50 (0x2A8 - 0x258)
// Class TwUIFramework.TwToastWidget
class UTwToastWidget : public UTwBaseWidget
{
public:
	float                                        Duration;                                          // 0x258(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeDuration;                                      // 0x25C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwUMGOpacityTweener*                  OpacityTweener;                                    // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                ToastImage;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                ToastImageBackground;                              // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                BackgroundImage;                                   // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7DB[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextBlock*                            ToastText;                                         // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            ToastSubtext;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bFadingAway;                                       // 0x2A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7DD[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTwToastWidget* GetDefaultObj();

	class UTwToastWidget* CreateToast(TSubclassOf<class UTwToastWidget> ToastWidgetClass, class APlayerController* Player, class UVerticalBox* VerticalBoxParent, const struct FToastData& ToastData);
};

// 0x30 (0x468 - 0x438)
// Class TwUIFramework.TwToggleButton
class UTwToggleButton : public UTwBaseButton
{
public:
	class FText                                  ToggleOffLabel;                                    // 0x438(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  ToggleOnLabel;                                     // 0x450(0x18)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UTwToggleButton* GetDefaultObj();

};

// 0x10 (0x268 - 0x258)
// Class TwUIFramework.TwTooltipContainer
class UTwTooltipContainer : public UTwBaseWidget
{
public:
	class UTwWidgetQueue*                        BasicTooltipQueue;                                 // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UTwTooltipWidget>          TooltipWidgetClass;                                // 0x260(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UTwTooltipContainer* GetDefaultObj();

	void CreateBasicTooltip(class FText& Header, class FText& Body, class FText& InputText, float Duration);
};

// 0x38 (0x290 - 0x258)
// Class TwUIFramework.TwTooltipWidget
class UTwTooltipWidget : public UTwBaseWidget
{
public:
	float                                        LifeTime;                                          // 0x258(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7FD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetAnimation*                      InAnimation;                                       // 0x260(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      OutAnimation;                                      // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_802[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextBlock*                            HeaderText;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URichTextBlock*                        BodyText;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URichTextBlock*                        InputText;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UTwTooltipWidget* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class TwUIFramework.TwUIFunctionLibrary
class UTwUIFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UTwUIFunctionLibrary* GetDefaultObj();

	bool IsKeyValidForViewPop(struct FKey& Key);
	bool IsKeyValidForUITab(struct FKey& Key);
	bool IsKeyValidForRightNavigation(struct FKey& Key);
	bool IsKeyValidForRightMenu(struct FKey& Key);
	bool IsKeyValidForNavigation(struct FKey& Key);
	bool IsKeyValidForLeftNavigation(struct FKey& Key);
	bool IsKeyValidForLeftMenu(struct FKey& Key);
	bool IsKeyValidForHNavigation(struct FKey& Key);
	bool IsKeyValidForConfirm(struct FKey& Key);
	bool IsConsoleActive(class UObject* WorldContextObject);
};

// 0x28 (0x60 - 0x38)
// Class TwUIFramework.TwUISettings
class UTwUISettings : public UDeveloperSettings
{
public:
	TSoftClassPtr<class UTwMultiOptionModal>     MultiOptionModalAssetRef;                          // 0x38(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UTwUISettings* GetDefaultObj();

};

// 0x18 (0x80 - 0x68)
// Class TwUIFramework.TwUMGAngleTweener
class UTwUMGAngleTweener : public UTwTweener
{
public:
	float                                        From;                                              // 0x68(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        To;                                                // 0x6C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8CF[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTwUMGAngleTweener* GetDefaultObj();

	float GetCurrentValue();
	class UTwUMGAngleTweener* CreateUMGAngleTween(class UWidget* Widget, float FromValue, float ToValue, float TweenDuration, enum class EEasingFunc Easing, bool TweenPingPong, FDelegateProperty_& OnTweenStep, FDelegateProperty_& OnTweenFinished, bool AutoStart);
};

// 0x18 (0x80 - 0x68)
// Class TwUIFramework.TwUMGOpacityTweener
class UTwUMGOpacityTweener : public UTwTweener
{
public:
	float                                        From;                                              // 0x68(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        To;                                                // 0x6C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_90E[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTwUMGOpacityTweener* GetDefaultObj();

	float GetCurrentValue();
	class UTwUMGOpacityTweener* CreateUMGOpacityTween(class UWidget* Widget, float FromValue, float ToValue, float TweenDuration, enum class EEasingFunc Easing, bool TweenPingPong, FDelegateProperty_& OnTweenStep, FDelegateProperty_& OnTweenFinished, class UTwUMGOpacityTweener* ReusableTweener, bool AutoStart);
};

// 0x20 (0x88 - 0x68)
// Class TwUIFramework.TwUMGScaleTweener
class UTwUMGScaleTweener : public UTwTweener
{
public:
	struct FVector2D                             From;                                              // 0x68(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             To;                                                // 0x70(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_947[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTwUMGScaleTweener* GetDefaultObj();

	struct FVector2D GetCurrentValue();
	class UTwUMGScaleTweener* CreateUMGScaleTween(class UWidget* Widget, const struct FVector2D& FromValue, const struct FVector2D& ToValue, float TweenDuration, enum class EEasingFunc Easing, bool TweenPingPong, FDelegateProperty_& OnTweenStep, FDelegateProperty_& OnTweenFinished, bool AutoStart);
};

// 0x58 (0xC0 - 0x68)
// Class TwUIFramework.TwVector2DTweener
class UTwVector2DTweener : public UTwTweener
{
public:
	struct FVector2D                             From;                                              // 0x68(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             To;                                                // 0x70(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_983[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTwVector2DTweener* GetDefaultObj();

	struct FVector2D GetCurrentValue();
	class UTwVector2DTweener* CreateVector2DTween_BP(const struct FVector2D& FromValue, const struct FVector2D& ToValue, float TweenDuration, enum class EEasingFunc Easing, bool TweenPingPong, FDelegateProperty_& OnTweenStep, FDelegateProperty_& OnTweenFinished, bool AutoStart);
};

// 0x28 (0x90 - 0x68)
// Class TwUIFramework.TwVector3DTweener
class UTwVector3DTweener : public UTwTweener
{
public:
	struct FVector                               From;                                              // 0x68(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               To;                                                // 0x74(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9B6[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTwVector3DTweener* GetDefaultObj();

	struct FVector GetCurrentValue();
	class UTwVector3DTweener* CreateVector3DTween(const struct FVector& FromValue, const struct FVector& ToValue, float TweenDuration, enum class EEasingFunc Easing, bool TweenPingPong, FDelegateProperty_& OnTweenStep, bool AutoStart);
};

// 0x58 (0x2B0 - 0x258)
// Class TwUIFramework.TwViewController
class UTwViewController : public UTwBaseWidget
{
public:
	class UCanvasPanel*                          ViewOverlay;                                       // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                          ModalOverlay;                                      // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                          FooterOverlay;                                     // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UTwBaseView*>                   ViewStack;                                         // 0x270(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UTwBaseModal*>                  ModalStack;                                        // 0x280(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UTwViewFooter>             ViewFooterClass;                                   // 0x290(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A02[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTwViewController* GetDefaultObj();

	class UTwBaseView* PushView(TSubclassOf<class UTwBaseView> ViewClass);
	class UTwBaseModal* PushModalInstance(class UTwBaseModal* NewModal);
	class UTwBaseModal* PushModal(TSubclassOf<class UTwBaseModal> ModalClass);
	void PopViewInstance(class UTwBaseView* ViewToPop);
	void PopViewClass(TSubclassOf<class UTwBaseView> ModalClass);
	void PopView();
	void PopModal();
	bool IsViewClassOnStack(TSubclassOf<class UTwBaseView> View);
	bool IsModalClassOnStack(TSubclassOf<class UTwBaseModal> Modal);
	class UTwBaseView* GetActiveView();
	class UTwBaseModal* GetActiveModal();
};

// 0x48 (0x2A0 - 0x258)
// Class TwUIFramework.TwViewFooter
class UTwViewFooter : public UTwBaseWidget
{
public:
	class UTwInputAwareRichTextBlock*            WidgetControlsText;                                // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwInputAwareRichTextBlock*            ViewControlsText;                                  // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A08[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ViewText;                                          // 0x270(0x18)(Protected, NativeAccessSpecifierProtected)
	class FText                                  WidgetText;                                        // 0x288(0x18)(Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UTwViewFooter* GetDefaultObj();

	void OnUserInputDeviceChanged(enum class EUserInputDevice Device);
};

}


