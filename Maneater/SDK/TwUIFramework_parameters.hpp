#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function TwUIFramework.TwBaseWidget.UnsubscribeFromEvents_BP
struct UTwBaseWidget_UnsubscribeFromEvents_BP_Params
{
public:
	class AHUD*                                  HUD;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TwUIFramework.TwBaseWidget.SubscribeToEvents_BP
struct UTwBaseWidget_SubscribeToEvents_BP_Params
{
public:
	class AHUD*                                  HUD;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function TwUIFramework.TwBaseWidget.OnMouseLeave_BP
struct UTwBaseWidget_OnMouseLeave_BP_Params
{
public:
	struct FPointerEvent                         InMouseEvent;                                      // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// Function TwUIFramework.TwBaseWidget.OnMouseEnter_BP
struct UTwBaseWidget_OnMouseEnter_BP_Params
{
public:
	struct FGeometry                             InGeometry;                                        // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                         InMouseEvent;                                      // 0x38(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// Function TwUIFramework.TwBaseWidget.OnMouseButtonDown_BP
struct UTwBaseWidget_OnMouseButtonDown_BP_Params
{
public:
	struct FGeometry                             InGeometry;                                        // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                         InMouseEvent;                                      // 0x38(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TwUIFramework.TwBaseWidget.GetHUD
struct UTwBaseWidget_GetHUD_Params
{
public:
	class AHUD*                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TwUIFramework.BaseSlider.SetSliderValue
struct UBaseSlider_SetSliderValue_Params
{
public:
	float                                        Perc;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSurpressEvent;                                    // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_174[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function TwUIFramework.BaseSlider.GetSliderValue
struct UBaseSlider_GetSliderValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function TwUIFramework.TwClickableWidget.ToggleSelectedState
struct UTwClickableWidget_ToggleSelectedState_Params
{
public:
	bool                                         bForceSetState;                                    // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewState;                                         // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function TwUIFramework.TwClickableWidget.SetLabelText
struct UTwClickableWidget_SetLabelText_Params
{
public:
	class FText                                  Label;                                             // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function TwUIFramework.TwClickableWidget.SetIsToggleable
struct UTwClickableWidget_SetIsToggleable_Params
{
public:
	bool                                         bToggle;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TwUIFramework.TwClickableWidget.SetIconTexture
struct UTwClickableWidget_SetIconTexture_Params
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function TwUIFramework.TwClickableWidget.SetIconSoftTexture
struct UTwClickableWidget_SetIconSoftTexture_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             SoftTexture;                                       // 0x0(0x28)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function TwUIFramework.TwAnimatedButton.SetSelected
struct UTwAnimatedButton_SetSelected_Params
{
public:
	bool                                         bSelected;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function TwUIFramework.TwAnimatedButton.IsSelected
struct UTwAnimatedButton_IsSelected_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function TwUIFramework.TwAnimatedButton.AnimateState_BP
struct UTwAnimatedButton_AnimateState_BP_Params
{
public:
	enum class EAnimButtonState                  State;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function TwUIFramework.TwBaseButton.SetForcedHighlight
struct UTwBaseButton_SetForcedHighlight_Params
{
public:
	bool                                         bForced;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function TwUIFramework.TwBaseButton.SetDisabled
struct UTwBaseButton_SetDisabled_Params
{
public:
	bool                                         bDisabled;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TwUIFramework.TwBaseButton.OnTweenStep
struct UTwBaseButton_OnTweenStep_Params
{
public:
	class UTwTweener*                            Tweener;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function TwUIFramework.TwBaseButton.GetSelectedState
struct UTwBaseButton_GetSelectedState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function TwUIFramework.TwBaseButton.GetDisabled
struct UTwBaseButton_GetDisabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function TwUIFramework.TwBaseButton.GetButtonLabelText
struct UTwBaseButton_GetButtonLabelText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TwUIFramework.TwBaseButton.GetButtonFrameImage
struct UTwBaseButton_GetButtonFrameImage_Params
{
public:
	class UImage*                                ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function TwUIFramework.TwBaseMenu.SetDefaultPanel
struct UTwBaseMenu_SetDefaultPanel_Params
{
public:
	uint8                                        Panel;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TwUIFramework.TwBaseMenu.OpenMenuPanelByLookup
struct UTwBaseMenu_OpenMenuPanelByLookup_Params
{
public:
	class FName                                  LookupName;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseMenuPanel*                      ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TwUIFramework.TwBaseMenu.OpenMenuPanel
struct UTwBaseMenu_OpenMenuPanel_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_297[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTwBaseMenuPanel*                      ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TwUIFramework.TwBaseMenu.OnMenuBarItemClicked
struct UTwBaseMenu_OnMenuBarItemClicked_Params
{
public:
	class UTwBaseMenuBarItem*                    MenuBarItem;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function TwUIFramework.TwBaseMenu.OnInputDeviceChanged
struct UTwBaseMenu_OnInputDeviceChanged_Params
{
public:
	enum class EUserInputDevice                  Device;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TwUIFramework.TwBaseMenu.MoveMenus
struct UTwBaseMenu_MoveMenus_Params
{
public:
	struct FVector2D                             MoveVector;                                        // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function TwUIFramework.TwBaseMenu.IsOpenDefault
struct UTwBaseMenu_IsOpenDefault_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function TwUIFramework.TwBaseMenu.HandleInput
struct UTwBaseMenu_HandleInput_Params
{
public:
	class FText                                  InputName;                                         // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TwUIFramework.TwBaseMenu.GetPanelForLookup
struct UTwBaseMenu_GetPanelForLookup_Params
{
public:
	class FName                                  LookUp;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseMenuPanel*                      ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function TwUIFramework.TwBaseMenu.GetLabelForLookup
struct UTwBaseMenu_GetLabelForLookup_Params
{
public:
	class FName                                  LookUp;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TwUIFramework.TwBaseMenu.GetFocusWidgetForNavigation_BP
struct UTwBaseMenu_GetFocusWidgetForNavigation_BP_Params
{
public:
	enum class EUINavigation                     NavigationDir;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TwUIFramework.TwBaseMenu.GetFocusWidgetForNavigation
struct UTwBaseMenu_GetFocusWidgetForNavigation_Params
{
public:
	enum class EUINavigation                     NavigationDir;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TwUIFramework.TwBaseMenu.GetCurrentPanel
struct UTwBaseMenu_GetCurrentPanel_Params
{
public:
	class UTwBaseMenuPanel*                      ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function TwUIFramework.TwBaseMenuBarItem.SetSelected_BP
struct UTwBaseMenuBarItem_SetSelected_BP_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function TwUIFramework.TwBaseMenuBarItem.OnButtonClicked
struct UTwBaseMenuBarItem_OnButtonClicked_Params
{
public:
	struct FKey                                  MouseButtonClicked;                                // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                    ButtonClicked;                                     // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TwUIFramework.TwBaseMenuPanel.OnPanelFinishedClosing
struct UTwBaseMenuPanel_OnPanelFinishedClosing_Params
{
public:
	struct FPanelLifetimeResponder               Responder;                                         // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function TwUIFramework.TwBaseMenuPanel.OnPanelClosing_BP
struct UTwBaseMenuPanel_OnPanelClosing_BP_Params
{
public:
	struct FPanelLifetimeResponder               Responder;                                         // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	class UTwBaseMenuPanel*                      IncomingPanel;                                     // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TwUIFramework.TwBaseMenuPanel.MovePanel
struct UTwBaseMenuPanel_MovePanel_Params
{
public:
	struct FVector2D                             MoveVector;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TwUIFramework.TwBaseMenuPanel.GetFocusWidgetForNavigation_BP
struct UTwBaseMenuPanel_GetFocusWidgetForNavigation_BP_Params
{
public:
	enum class EUINavigation                     NavigationDir;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TwUIFramework.TwBaseMenuPanel.GetFocusWidgetForNavigation
struct UTwBaseMenuPanel_GetFocusWidgetForNavigation_Params
{
public:
	enum class EUINavigation                     NavigationDir;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_377[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TwUIFramework.TwBaseMenuPanel.GetDefaultFocusWidget
struct UTwBaseMenuPanel_GetDefaultFocusWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TwUIFramework.TwBaseView.OnViewLeavingStack_BP
struct UTwBaseView_OnViewLeavingStack_BP_Params
{
public:
	struct FViewPoppingResponder                 Responder;                                         // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TwUIFramework.TwBaseView.OnViewEnteringStack
struct UTwBaseView_OnViewEnteringStack_Params
{
public:
	class UTwViewController*                     Controller;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TwUIFramework.TwBaseView.OnFinishLeavingStack
struct UTwBaseView_OnFinishLeavingStack_Params
{
public:
	struct FViewPoppingResponder                 Responder;                                         // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TwUIFramework.TwBaseView.GetDefaultFocusWidget
struct UTwBaseView_GetDefaultFocusWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function TwUIFramework.TwBaseView.DoesRequireInputUIMode
struct UTwBaseView_DoesRequireInputUIMode_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TwUIFramework.TwBaseMenuView.OnOpenPanelRequest
struct UTwBaseMenuView_OnOpenPanelRequest_Params
{
public:
	class FName                                  LookupName;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TwUIFramework.TwBaseMenuView.GetMenuController
struct UTwBaseMenuView_GetMenuController_Params
{
public:
	class UTwBaseMenu*                           ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TwUIFramework.TwBaseModal.OnModalEnteringStack
struct UTwBaseModal_OnModalEnteringStack_Params
{
public:
	class UTwViewController*                     Controller;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TwUIFramework.TwBaseModal.GetDefaultFocusWidget
struct UTwBaseModal_GetDefaultFocusWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function TwUIFramework.TwBaseSlider.SetLabelText
struct UTwBaseSlider_SetLabelText_Params
{
public:
	class FText                                  LabelText;                                         // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function TwUIFramework.TwTweener.Stop
struct UTwTweener_Stop_Params
{
public:
	bool                                         bSkipToEnd;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TwUIFramework.TwColorTweener.GetCurrentValue
struct UTwColorTweener_GetCurrentValue_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function TwUIFramework.TwColorTweener.CreateColorTween
struct UTwColorTweener_CreateColorTween_Params
{
public:
	struct FLinearColor                          FromValue;                                         // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ToValue;                                           // 0x10(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TweenDuration;                                     // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEasingFunc                       Easing;                                            // 0x24(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TweenPingPong;                                     // 0x25(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4FD[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           OnTweenStep;                                       // 0x28(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         AutoStart;                                         // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4FF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTwColorTweener*                       ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function TwUIFramework.TwFlipbookImageWidget.SetPlayMode
struct UTwFlipbookImageWidget_SetPlayMode_Params
{
public:
	enum class EFlipbookPlayMode                 NewPlayMode;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function TwUIFramework.TwFloatTweener.GetCurrentValue
struct UTwFloatTweener_GetCurrentValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function TwUIFramework.TwFloatTweener.CreateFloatTween
struct UTwFloatTweener_CreateFloatTween_Params
{
public:
	float                                        FromValue;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ToValue;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TweenDuration;                                     // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEasingFunc                       Easing;                                            // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TweenPingPong;                                     // 0xD(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_553[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           OnTweenStep;                                       // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnTweenFinished;                                   // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UTwFloatTweener*                       ReusableTweener;                                   // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoStart;                                         // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_558[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTwFloatTweener*                       ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TwUIFramework.TwHUD.ShowScreenSpaceWidgetForActor
struct ATwHUD_ShowScreenSpaceWidgetForActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TwUIFramework.TwHUD.RemoveScreenSpaceWidgetForActor
struct ATwHUD_RemoveScreenSpaceWidgetForActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function TwUIFramework.TwHUD.OnInputDeviceEvent
struct ATwHUD_OnInputDeviceEvent_Params
{
public:
	enum class EUserInputDevice                  Device;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function TwUIFramework.TwHUD.OnControllerDisconnected
struct ATwHUD_OnControllerDisconnected_Params
{
public:
	bool                                         bShowGenericAlertInstead;                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function TwUIFramework.TwHUD.GetCurrentInputDevice
struct ATwHUD_GetCurrentInputDevice_Params
{
public:
	enum class EUserInputDevice                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function TwUIFramework.TwInputAwareRichTextBlock.SetTextAware
struct UTwInputAwareRichTextBlock_SetTextAware_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function TwUIFramework.TwInputAwareRichTextBlock.OnInputDeviceChanged
struct UTwInputAwareRichTextBlock_OnInputDeviceChanged_Params
{
public:
	enum class EUserInputDevice                  Device;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function TwUIFramework.TwInputAwareRichTextBlockWidget.SetTextAware
struct UTwInputAwareRichTextBlockWidget_SetTextAware_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function TwUIFramework.TwInputAwareRichTextBlockWidget.SetKeybindText
struct UTwInputAwareRichTextBlockWidget_SetKeybindText_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bGamepad;                                          // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5FA[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function TwUIFramework.TwInputAwareRichTextBlockWidget.OnInputDeviceChanged
struct UTwInputAwareRichTextBlockWidget_OnInputDeviceChanged_Params
{
public:
	enum class EUserInputDevice                  Device;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function TwUIFramework.TwLambdaButton.OnWidgetClickedInternal
struct UTwLambdaButton_OnWidgetClickedInternal_Params
{
public:
	struct FKey                                  MouseButtonClicked;                                // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                    WidgetClicked;                                     // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function TwUIFramework.TwMatFloatScalarTweener.GetCurrentValue
struct UTwMatFloatScalarTweener_GetCurrentValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function TwUIFramework.TwMatFloatScalarTweener.CreateMatFloatScalarTween
struct UTwMatFloatScalarTweener_CreateMatFloatScalarTween_Params
{
public:
	class UMaterialInstanceDynamic*              Mat;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Param;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FromValue;                                         // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ToValue;                                           // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TweenDuration;                                     // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEasingFunc                       Easing;                                            // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TweenPingPong;                                     // 0x1D(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6A0[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           OnTweenStep;                                       // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         AutoStart;                                         // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6A4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTwMatFloatScalarTweener*              ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function TwUIFramework.TwMultiOptionModal.CreateModalWithOptions_BP
struct UTwMultiOptionModal_CreateModalWithOptions_BP_Params
{
public:
	class APlayerController*                     OwningPlayer;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FText>                          Options;                                           // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  TitleText;                                         // 0x18(0x18)(Parm, NativeAccessSpecifierPublic)
	class FText                                  BodyText;                                          // 0x30(0x18)(Parm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Callback;                                          // 0x48(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bDismissable;                                      // 0x58(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_700[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DismissAction;                                     // 0x60(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TwUIFramework.TwWidgetQueue.OnWidgetReadyForDestruction
struct UTwWidgetQueue_OnWidgetReadyForDestruction_Params
{
public:
	class UTwBaseWidget*                         Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TwUIFramework.TwMultiWidgetQueue.OnWidgetQueueDestruction
struct UTwMultiWidgetQueue_OnWidgetQueueDestruction_Params
{
public:
	class UTwBaseWidget*                         Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function TwUIFramework.TwRadialProgressIcon.SetRadius
struct UTwRadialProgressIcon_SetRadius_Params
{
public:
	float                                        NewRadius;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function TwUIFramework.TwRadialProgressIcon.SetProgress
struct UTwRadialProgressIcon_SetProgress_Params
{
public:
	float                                        Val;                                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TwUIFramework.TwRadialProgressIcon.SetColor
struct UTwRadialProgressIcon_SetColor_Params
{
public:
	struct FLinearColor                          NewColor;                                          // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function TwUIFramework.TwRadioWidget.OnProcessButtonClick
struct UTwRadioWidget_OnProcessButtonClick_Params
{
public:
	struct FKey                                  MouseButtonClicked;                                // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                    ButtonClicked;                                     // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TwUIFramework.TwScreenSpaceConstrainedWidget.SetTargetActor
struct UTwScreenSpaceConstrainedWidget_SetTargetActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function TwUIFramework.TwToastManagerWidget.AddNewToast
struct UTwToastManagerWidget_AddNewToast_Params
{
public:
	TSubclassOf<class UTwToastWidget>            ToastWidgetClass;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FToastData                            ToastData;                                         // 0x8(0x70)(Parm, NativeAccessSpecifierPublic)
	class UTwToastWidget*                        ReturnValue;                                       // 0x78(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function TwUIFramework.TwToastWidget.CreateToast
struct UTwToastWidget_CreateToast_Params
{
public:
	TSubclassOf<class UTwToastWidget>            ToastWidgetClass;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     Player;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVerticalBox*                          VerticalBoxParent;                                 // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FToastData                            ToastData;                                         // 0x18(0x70)(Parm, NativeAccessSpecifierPublic)
	class UTwToastWidget*                        ReturnValue;                                       // 0x88(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function TwUIFramework.TwTooltipContainer.CreateBasicTooltip
struct UTwTooltipContainer_CreateBasicTooltip_Params
{
public:
	class FText                                  Header;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  Body;                                              // 0x18(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  InputText;                                         // 0x30(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x48(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F6[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForViewPop
struct UTwUIFunctionLibrary_IsKeyValidForViewPop_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_80F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForUITab
struct UTwUIFunctionLibrary_IsKeyValidForUITab_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForRightNavigation
struct UTwUIFunctionLibrary_IsKeyValidForRightNavigation_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_820[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForRightMenu
struct UTwUIFunctionLibrary_IsKeyValidForRightMenu_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_828[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForNavigation
struct UTwUIFunctionLibrary_IsKeyValidForNavigation_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_837[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForLeftNavigation
struct UTwUIFunctionLibrary_IsKeyValidForLeftNavigation_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForLeftMenu
struct UTwUIFunctionLibrary_IsKeyValidForLeftMenu_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_845[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForHNavigation
struct UTwUIFunctionLibrary_IsKeyValidForHNavigation_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_84C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForConfirm
struct UTwUIFunctionLibrary_IsKeyValidForConfirm_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_855[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function TwUIFramework.TwUIFunctionLibrary.IsConsoleActive
struct UTwUIFunctionLibrary_IsConsoleActive_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_85E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function TwUIFramework.TwUMGAngleTweener.GetCurrentValue
struct UTwUMGAngleTweener_GetCurrentValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function TwUIFramework.TwUMGAngleTweener.CreateUMGAngleTween
struct UTwUMGAngleTweener_CreateUMGAngleTween_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FromValue;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ToValue;                                           // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TweenDuration;                                     // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEasingFunc                       Easing;                                            // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TweenPingPong;                                     // 0x15(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C3[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           OnTweenStep;                                       // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnTweenFinished;                                   // 0x28(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         AutoStart;                                         // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTwUMGAngleTweener*                    ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function TwUIFramework.TwUMGOpacityTweener.GetCurrentValue
struct UTwUMGOpacityTweener_GetCurrentValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function TwUIFramework.TwUMGOpacityTweener.CreateUMGOpacityTween
struct UTwUMGOpacityTweener_CreateUMGOpacityTween_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FromValue;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ToValue;                                           // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TweenDuration;                                     // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEasingFunc                       Easing;                                            // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TweenPingPong;                                     // 0x15(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8FC[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           OnTweenStep;                                       // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnTweenFinished;                                   // 0x28(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UTwUMGOpacityTweener*                  ReusableTweener;                                   // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoStart;                                         // 0x40(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_903[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTwUMGOpacityTweener*                  ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TwUIFramework.TwUMGScaleTweener.GetCurrentValue
struct UTwUMGScaleTweener_GetCurrentValue_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function TwUIFramework.TwUMGScaleTweener.CreateUMGScaleTween
struct UTwUMGScaleTweener_CreateUMGScaleTween_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             FromValue;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ToValue;                                           // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TweenDuration;                                     // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEasingFunc                       Easing;                                            // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TweenPingPong;                                     // 0x1D(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_939[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           OnTweenStep;                                       // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnTweenFinished;                                   // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         AutoStart;                                         // 0x40(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_93D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTwUMGScaleTweener*                    ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TwUIFramework.TwVector2DTweener.GetCurrentValue
struct UTwVector2DTweener_GetCurrentValue_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function TwUIFramework.TwVector2DTweener.CreateVector2DTween_BP
struct UTwVector2DTweener_CreateVector2DTween_BP_Params
{
public:
	struct FVector2D                             FromValue;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ToValue;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TweenDuration;                                     // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEasingFunc                       Easing;                                            // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TweenPingPong;                                     // 0x15(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_977[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           OnTweenStep;                                       // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnTweenFinished;                                   // 0x28(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         AutoStart;                                         // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_97A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTwVector2DTweener*                    ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function TwUIFramework.TwVector3DTweener.GetCurrentValue
struct UTwVector3DTweener_GetCurrentValue_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function TwUIFramework.TwVector3DTweener.CreateVector3DTween
struct UTwVector3DTweener_CreateVector3DTween_Params
{
public:
	struct FVector                               FromValue;                                         // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ToValue;                                           // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TweenDuration;                                     // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEasingFunc                       Easing;                                            // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TweenPingPong;                                     // 0x1D(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9A7[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           OnTweenStep;                                       // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         AutoStart;                                         // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9AC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTwVector3DTweener*                    ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TwUIFramework.TwViewController.PushView
struct UTwViewController_PushView_Params
{
public:
	TSubclassOf<class UTwBaseView>               ViewClass;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseView*                           ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TwUIFramework.TwViewController.PushModalInstance
struct UTwViewController_PushModalInstance_Params
{
public:
	class UTwBaseModal*                          NewModal;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseModal*                          ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TwUIFramework.TwViewController.PushModal
struct UTwViewController_PushModal_Params
{
public:
	TSubclassOf<class UTwBaseModal>              ModalClass;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseModal*                          ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TwUIFramework.TwViewController.PopViewInstance
struct UTwViewController_PopViewInstance_Params
{
public:
	class UTwBaseView*                           ViewToPop;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TwUIFramework.TwViewController.PopViewClass
struct UTwViewController_PopViewClass_Params
{
public:
	TSubclassOf<class UTwBaseView>               ModalClass;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TwUIFramework.TwViewController.IsViewClassOnStack
struct UTwViewController_IsViewClassOnStack_Params
{
public:
	TSubclassOf<class UTwBaseView>               View;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9F3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function TwUIFramework.TwViewController.IsModalClassOnStack
struct UTwViewController_IsModalClassOnStack_Params
{
public:
	TSubclassOf<class UTwBaseModal>              Modal;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9F7[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function TwUIFramework.TwViewController.GetActiveView
struct UTwViewController_GetActiveView_Params
{
public:
	class UTwBaseView*                           ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TwUIFramework.TwViewController.GetActiveModal
struct UTwViewController_GetActiveModal_Params
{
public:
	class UTwBaseModal*                          ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function TwUIFramework.TwViewFooter.OnUserInputDeviceChanged
struct UTwViewFooter_OnUserInputDeviceChanged_Params
{
public:
	enum class EUserInputDevice                  Device;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


